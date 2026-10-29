__int64 __fastcall sub_5CADC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // r8
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // r9
  __int64 i; // rdx
  unsigned __int64 *v12; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  if ( !*(_BYTE *)(v3 + 56) )
    sub_5CA3A0(v3);
  v4 = sub_505D70(a1 + 1704, a2);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  if ( *((char *)v4 + 17) < 0 )
  {
    v4 = sub_505D70(a1 + 1704, v4[3]);
    if ( !v4 )
      return 0xFFFFFFFFLL;
  }
  v5 = *v4;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  v7 = *(char **)(v6 + 24);
  v8 = 16LL * *(_QWORD *)(v6 + 32);
  v9 = v7;
  v10 = &v7[v8];
  for ( i = v8 >> 4; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int64 *)&v9[16 * (i >> 1)];
      if ( *v12 >= v5 )
        break;
      v9 = (char *)(v12 + 2);
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_9;
    }
  }
LABEL_9:
  if ( v10 != v9 && v5 == *(_QWORD *)v9 )
    return (v9 - v7) >> 4;
  else
    return 0xFFFFFFFFLL;
}
