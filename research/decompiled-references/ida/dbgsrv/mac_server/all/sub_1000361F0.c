/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000361F0
// Address: 0x00000001000361F0

//----- (00000001000361F0) ----------------------------------------------------
char *__fastcall sub_1000361F0(__int64 **a1, __int64 a2, __int64 a3)
{
  char *v4; // rax
  const char *v5; // r12
  __int64 **v6; // r13
  char *v7; // r14
  const char *v8; // r13
  char *v9; // rbx
  __int128 v10; // xmm1
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v4 = (char *)a1[1];
  if ( v4 )
  {
    v5 = _s1;
    if ( *(_QWORD *)(a2 + 8) )
      v5 = *(const char **)a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v4;
        v8 = _s1;
        if ( *((_QWORD *)v4 + 5) )
          v8 = *((const char **)v4 + 4);
        if ( strcmp(v5, v8) >= 0 )
          break;
        v4 = *(char **)v7;
        v6 = (__int64 **)v7;
        if ( !*(_QWORD *)v7 )
          goto LABEL_12;
      }
      if ( strcmp(v8, v5) >= 0 )
        break;
      v4 = *((char **)v7 + 1);
      if ( !v4 )
      {
        v6 = (__int64 **)(v7 + 8);
        goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = a1 + 1;
    v7 = (char *)(a1 + 1);
LABEL_12:
    v9 = v7;
    v7 = (char *)operator new(0x40u);
    *((_QWORD *)v7 + 4) = *(_QWORD *)a3;
    v10 = *(_OWORD *)(a3 + 8);
    *(_OWORD *)a3 = 0;
    *(_OWORD *)(v7 + 40) = v10;
    *(_QWORD *)(a3 + 16) = 0;
    *((_DWORD *)v7 + 14) = *(_DWORD *)(a3 + 24);
    *(_OWORD *)v7 = 0;
    *((_QWORD *)v7 + 2) = v9;
    *v6 = (__int64 *)v7;
    v11 = (__int64 *)**a1;
    v12 = (__int64 *)v7;
    if ( v11 )
    {
      *a1 = v11;
      v12 = *v6;
    }
    sub_10000C830(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v7;
}
