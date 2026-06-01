/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44488
// Address: 0x0000000000044488

//----- (0000000000044488) ----------------------------------------------------
__int64 __fastcall sub_44488(__int64 a1)
{
  __int64 v2; // x0
  _QWORD *v3; // x27
  _QWORD *v4; // x25
  char v5; // w28
  unsigned int v6; // w22
  unsigned int v7; // w22
  char *v8; // x3
  _DWORD *v9; // x0
  _DWORD *v10; // x23
  _QWORD *v11; // x8
  unsigned int v12; // w22
  char *v13; // x3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x9
  _QWORD *v17; // t1
  __int64 result; // x0

  v2 = sub_3B6B4(a1, 0, 1);
  v3 = *(_QWORD **)(a1 + 1736);
  v4 = (_QWORD *)(a1 + 1744);
  if ( v3 == (_QWORD *)(a1 + 1744) )
  {
LABEL_29:
    result = 1;
    *(_BYTE *)(a1 + 1852) = 0;
    *(_DWORD *)(a1 + 1844) = -1;
    goto LABEL_31;
  }
  v5 = 1;
  do
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v3 + 10);
      if ( *((_DWORD *)v3 + 15) == 1 )
        break;
      if ( v6 == -1 )
        goto LABEL_16;
      v9 = (_DWORD *)__errno(v2);
      *v9 = 0;
      v10 = v9;
      if ( (byte_166A38 & 1) != 0 )
        goto LABEL_13;
      v2 = syscall(130, v6, 9);
      if ( (_DWORD)v2 && *v10 == 38 )
      {
        *v10 = 0;
        byte_166A38 = 1;
LABEL_13:
        v2 = kill(v6, 9);
        goto LABEL_14;
      }
      if ( byte_166A38 == 1 )
        goto LABEL_13;
LABEL_14:
      if ( !(_DWORD)v2 )
        goto LABEL_16;
      v2 = (unsigned int)*v10;
      if ( (_DWORD)v2 == 3 )
        goto LABEL_16;
      v12 = *((_DWORD *)v3 + 10);
      v13 = strerror(v2);
      v2 = sub_3A0D8(a1, "SIGKILL %d: %s\n", v12, v13);
LABEL_20:
      v5 = 0;
      v11 = (_QWORD *)v3[1];
      if ( !v11 )
        goto LABEL_23;
      do
      {
LABEL_21:
        v3 = v11;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
LABEL_25:
      if ( v3 == v4 )
        goto LABEL_28;
    }
    v2 = ptrace(PTRACE_KILL, v6, 0, 9);
    if ( v2 )
    {
      v2 = *(unsigned int *)__errno(v2);
      if ( (_DWORD)v2 != 3 )
      {
        v7 = *((_DWORD *)v3 + 10);
        v8 = strerror(v2);
        v2 = sub_3A0D8(a1, "PTRACE_KILL %d: %s\n", v7, v8);
        goto LABEL_20;
      }
    }
LABEL_16:
    if ( (v5 & 1) == 0 )
      goto LABEL_20;
    v5 = 1;
    *((_DWORD *)v3 + 15) = 0;
    *((_DWORD *)v3 + 11) = 0;
    v11 = (_QWORD *)v3[1];
    if ( v11 )
      goto LABEL_21;
LABEL_23:
    v14 = (__int64)(v3 + 2);
    v15 = (_QWORD *)v3[2];
    if ( (_QWORD *)*v15 != v3 )
    {
      do
      {
        v16 = *(_QWORD *)v14;
        v17 = *(_QWORD **)(*(_QWORD *)v14 + 16LL);
        v14 = *(_QWORD *)v14 + 16LL;
        v3 = v17;
      }
      while ( *v17 != v16 );
      goto LABEL_25;
    }
    v3 = (_QWORD *)v3[2];
  }
  while ( v15 != v4 );
LABEL_28:
  if ( (v5 & 1) != 0 )
    goto LABEL_29;
  result = 0xFFFFFFFFLL;
LABEL_31:
  *(_BYTE *)(a1 + 1932) = 1;
  *(_BYTE *)(a1 + 1853) = 1;
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 166A38: using guessed type char byte_166A38;
