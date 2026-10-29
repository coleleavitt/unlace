__int64 __fastcall sub_5B0090(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int *v4; // rax
  unsigned int v5; // edi
  __int64 v6; // rax
  char *v7; // r8
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // r9
  __int64 i; // rdx
  unsigned int *v12; // rsi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
  if ( !*(_BYTE *)(v3 + 48) )
    sub_5AF6C0(v3);
  v4 = sub_4EE820(a1 + 1624, a2);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( *((char *)v4 + 9) < 0 )
  {
    v4 = sub_4EE820(a1 + 1624, v4[4]);
    if ( !v4 )
      return 0xFFFFFFFFLL;
  }
  v5 = *v4;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 1424LL);
  v7 = *(char **)(v6 + 16);
  v8 = 8LL * *(_QWORD *)(v6 + 24);
  v9 = v7;
  v10 = &v7[v8];
  for ( i = v8 >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v12 = (unsigned int *)&v9[8 * (i >> 1)];
      if ( *v12 >= v5 )
        break;
      v9 = (char *)(v12 + 2);
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( v10 != v9 && v5 == *(_DWORD *)v9 )
    return (v9 - v7) >> 3;
  else
    return 0xFFFFFFFFLL;
}

