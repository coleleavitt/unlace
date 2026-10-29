/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_235B8
// Address: 0x000235B8

//----- (000235B8) --------------------------------------------------------
int __fastcall sub_235B8(int a1)
{
  int v2; // r1
  _DWORD *v3; // r4
  int v4; // r7
  __pid_t v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r5
  char *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r5
  char *v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r2
  int result; // r0
  int v19; // [sp+Ch] [bp-10h]
  int *v20; // [sp+10h] [bp-Ch]
  _DWORD *v21; // [sp+18h] [bp-4h]

  sub_1CD58(a1, 0, 1);
  v2 = a1 + 916;
  v19 = a1;
  v3 = *(_DWORD **)(a1 + 912);
  v21 = (_DWORD *)v2;
  if ( v3 == (_DWORD *)v2 )
  {
LABEL_27:
    v17 = v19;
    *(_BYTE *)(v19 + 976) = 0;
    *(_DWORD *)(v19 + 968) = -1;
    result = 1;
    goto LABEL_29;
  }
  v4 = 1;
  do
  {
    v5 = v3[5];
    if ( v3[10] == 1 )
    {
      v6 = ptrace(PTRACE_KILL, v3[5], 0, 9);
      if ( v6 )
      {
        v7 = *(_DWORD *)_errno(v6);
        if ( v7 != 3 )
        {
          v8 = v3[5];
          v9 = strerror(v7);
          sub_1BC48(v19, "PTRACE_KILL %d: %s\n", v8, v9);
LABEL_19:
          v4 = 0;
          goto LABEL_20;
        }
      }
      goto LABEL_16;
    }
    if ( v5 == -1 )
      goto LABEL_16;
    v20 = (int *)_errno(v5 + 1);
    *v20 = 0;
    if ( byte_DE330 )
      goto LABEL_13;
    v10 = syscall(238, v5, 9);
    if ( v10 && *v20 == 38 )
    {
      *v20 = 0;
      byte_DE330 = 1;
LABEL_13:
      v10 = kill(v5, 9);
      goto LABEL_14;
    }
    if ( byte_DE330 == 1 )
      goto LABEL_13;
LABEL_14:
    if ( v10 && *v20 != 3 )
    {
      v12 = v3[5];
      v13 = strerror(*v20);
      sub_1BC48(v19, "SIGKILL %d: %s\n", v12, v13);
      goto LABEL_19;
    }
LABEL_16:
    v11 = v4 << 31 == 0;
    v4 = 0;
    if ( !v11 )
    {
      v3[6] = 0;
      v3[10] = 0;
      v4 = 1;
    }
LABEL_20:
    v14 = (_DWORD *)v3[1];
    if ( v14 )
    {
      do
      {
        v3 = v14;
        v14 = (_DWORD *)*v14;
      }
      while ( v14 );
    }
    else
    {
      v15 = v3 + 2;
      v11 = *(_DWORD *)v3[2] == (_DWORD)v3;
      v3 = (_DWORD *)v3[2];
      if ( !v11 )
      {
        do
        {
          v16 = *v15;
          v15 = (_DWORD *)(*v15 + 8);
          v3 = *(_DWORD **)(v16 + 8);
        }
        while ( *v3 != v16 );
      }
    }
  }
  while ( v3 != v21 );
  if ( v4 )
    goto LABEL_27;
  v17 = v19;
  result = -1;
LABEL_29:
  *(_BYTE *)(v17 + 977) = 1;
  *(_BYTE *)(v17 + 1020) = 1;
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// DE330: using guessed type char byte_DE330;
