bool __fastcall sub_BF6430(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r12d
  __int64 i; // r13
  __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // r14d

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = 0;
    for ( i = v2 + 8LL * *(unsigned int *)(v2 - 4); i != v2; v3 += (unsigned __int8)sub_BB1010(a1) )
      v2 += 8;
  }
  else
  {
    v3 = 0;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5 )
    return 0;
  v6 = v5 + 8LL * *(unsigned int *)(v5 - 4);
  if ( v6 == v5 )
    return 0;
  v7 = 0;
  do
  {
    v5 += 8;
    v7 += (unsigned __int8)sub_BB1010(a1);
  }
  while ( v6 != v5 );
  return v3 && v7 && (unsigned int)(v3 + v7) > 2;
}

