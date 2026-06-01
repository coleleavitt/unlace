/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411E28
// Address: 0x0000000000411E28

//----- (0000000000411E28) ----------------------------------------------------
__int64 __fastcall sub_411E28(__int64 a1)
{
  _DWORD *v2; // x21
  _DWORD *v3; // x19
  int v4; // w22
  int v5; // w0
  int v6; // w20
  char *v7; // x0
  int *v8; // x20
  unsigned int v9; // w0
  int v11; // w0
  int v12; // w20
  char *v13; // x0

  v2 = (_DWORD *)(a1 + 1920);
  sub_411A98(a1, 0, 1u);
  v3 = *(_DWORD **)(a1 + 1936);
  if ( v2 == v3 )
    goto LABEL_16;
  v4 = 1;
  do
  {
    while ( 1 )
    {
      v8 = v3 + 10;
      v9 = v3[10];
      if ( v3[15] == 1 )
        break;
      if ( v9 == -1 )
        goto LABEL_9;
      if ( !(unsigned int)sub_408610(v9, 9u) )
        goto LABEL_9;
      v5 = *__errno_location();
      if ( v5 == 3 )
        goto LABEL_9;
      v6 = *v8;
      v7 = strerror(v5);
      v4 = 0;
      sub_40AAF0(a1, (__int64)"SIGKILL %d: %s\n", v6, v7);
LABEL_6:
      v3 = (_DWORD *)sub_49F6E8((__int64)v3);
      if ( v2 == v3 )
        goto LABEL_11;
    }
    if ( ptrace(PTRACE_KILL, v9, 0, 9) )
    {
      v11 = *__errno_location();
      if ( v11 != 3 )
      {
        v12 = *v8;
        v13 = strerror(v11);
        v4 = 0;
        sub_40AAF0(a1, (__int64)"PTRACE_KILL %d: %s\n", v12, v13);
        goto LABEL_6;
      }
    }
LABEL_9:
    if ( !v4 )
      goto LABEL_6;
    v3[15] = 0;
    v3[11] = 0;
    v3 = (_DWORD *)sub_49F6E8((__int64)v3);
  }
  while ( v2 != v3 );
LABEL_11:
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 2053) = 1;
    *(_BYTE *)(a1 + 2116) = 1;
    return 0xFFFFFFFFLL;
  }
LABEL_16:
  *(_BYTE *)(a1 + 2052) = 0;
  *(_DWORD *)(a1 + 2044) = -1;
  *(_BYTE *)(a1 + 2053) = 1;
  *(_BYTE *)(a1 + 2116) = 1;
  return 1;
}
