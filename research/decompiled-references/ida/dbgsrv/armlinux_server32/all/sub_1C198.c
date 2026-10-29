/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C198
// Address: 0x0001C198

//----- (0001C198) --------------------------------------------------------
int __fastcall sub_1C198(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r0
  int v6; // r6
  char *v7; // r0
  int v8; // r2
  __pid_t v9; // r0
  int v11; // r0
  int v12; // r6
  char *v13; // r0

  v2 = (_DWORD *)(a1 + 1004);
  sub_1BF74(a1, 0, 1);
  v3 = *(_DWORD **)(a1 + 1012);
  if ( v2 == v3 )
    goto LABEL_16;
  v4 = 1;
  do
  {
    while ( 1 )
    {
      v9 = v3[5];
      if ( v3[10] == 1 )
        break;
      if ( v9 == -1 )
        goto LABEL_9;
      if ( !sub_15E08(v9, 9) )
        goto LABEL_9;
      v5 = *_errno_location();
      if ( v5 == 3 )
        goto LABEL_9;
      v6 = v3[5];
      v7 = strerror(v5);
      v8 = v6;
      v4 = 0;
      sub_17480(a1, "SIGKILL %d: %s\n", v8, v7);
LABEL_6:
      v3 = (_DWORD *)sub_81440((int)v3);
      if ( v2 == v3 )
        goto LABEL_11;
    }
    if ( ptrace(PTRACE_KILL, v3[5], 0, 9) )
    {
      v11 = *_errno_location();
      if ( v11 != 3 )
      {
        v12 = v3[5];
        v13 = strerror(v11);
        sub_17480(a1, "PTRACE_KILL %d: %s\n", v12, v13);
        v4 = 0;
        goto LABEL_6;
      }
    }
LABEL_9:
    if ( !v4 )
      goto LABEL_6;
    v3[10] = 0;
    v3[6] = 0;
    v3 = (_DWORD *)sub_81440((int)v3);
  }
  while ( v2 != v3 );
LABEL_11:
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 1112) = 1;
    *(_BYTE *)(a1 + 1077) = 1;
    return -1;
  }
LABEL_16:
  *(_DWORD *)(a1 + 1068) = -1;
  *(_BYTE *)(a1 + 1076) = 0;
  *(_BYTE *)(a1 + 1112) = 1;
  *(_BYTE *)(a1 + 1077) = 1;
  return 1;
}
