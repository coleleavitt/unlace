/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003103C
// Address: 0x000000010003103C

//----- (000000010003103C) ----------------------------------------------------
char *__fastcall sub_10003103C(__int64 **a1, __int64 a2, __int64 a3)
{
  char *v5; // x8
  __int64 **v6; // x23
  const char *v7; // x22
  char *v8; // x20
  const char *v9; // x23
  char *v10; // x22
  __int64 *v11; // x8
  __int64 *v12; // x1

  v6 = a1 + 1;
  v5 = (char *)a1[1];
  if ( v5 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      v7 = *(const char **)a2;
    else
      v7 = &byte_10007AE40;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = v5;
        v9 = *((_QWORD *)v5 + 5) ? *((const char **)v5 + 4) : &byte_10007AE40;
        if ( (strcmp(v7, v9) & 0x80000000) == 0 )
          break;
        v5 = *(char **)v8;
        v6 = (__int64 **)v8;
        if ( !*(_QWORD *)v8 )
          goto LABEL_14;
      }
      if ( (strcmp(v9, v7) & 0x80000000) == 0 )
        break;
      v5 = *((char **)v8 + 1);
      if ( !v5 )
      {
        v6 = (__int64 **)(v8 + 8);
        goto LABEL_14;
      }
    }
  }
  else
  {
    v8 = (char *)(a1 + 1);
LABEL_14:
    v10 = v8;
    v8 = (char *)operator new(0x40u);
    *((_QWORD *)v8 + 4) = *(_QWORD *)a3;
    *(_QWORD *)a3 = 0;
    *(_OWORD *)(v8 + 40) = *(_OWORD *)(a3 + 8);
    *(_OWORD *)(a3 + 8) = 0u;
    *((_DWORD *)v8 + 14) = *(_DWORD *)(a3 + 24);
    *(_OWORD *)v8 = 0u;
    *((_QWORD *)v8 + 2) = v10;
    *v6 = (__int64 *)v8;
    v11 = (__int64 *)**a1;
    v12 = (__int64 *)v8;
    if ( v11 )
    {
      *a1 = v11;
      v12 = *v6;
    }
    sub_10000BD00(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v8;
}
// 10007AE40: using guessed type char byte_10007AE40;
