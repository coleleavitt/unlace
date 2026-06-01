__int64 __fastcall get_nlist_idx(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // r9
  __int64 v3; // rdx
  unsigned int *v4; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rsi

  v1 = *(_QWORD *)(qword_2CA1698 + 1536);
  sub_4C92F0(v1);
  if ( !*(_BYTE *)(v1 + 640) )
    sub_4C7100(v1);
  v2 = *(_QWORD *)(v1 + 616);
  v3 = (*(_QWORD *)(v1 + 624) - v2) >> 2;
  if ( *(_QWORD *)(v1 + 624) - v2 <= 0 )
    return 0;
  v4 = *(unsigned int **)(v1 + 616);
  do
  {
    while ( 1 )
    {
      v5 = v3 >> 1;
      v6 = &v4[v3 >> 1];
      if ( *(_DWORD *)(*(_QWORD *)(v1 + 104) + 4LL * *v6) >= a1 )
        break;
      v4 = v6 + 1;
      v3 = v3 - 1 - v5;
      if ( v3 <= 0 )
        return ((__int64)v4 - v2) >> 2;
    }
    v3 >>= 1;
  }
  while ( v5 > 0 );
  return ((__int64)v4 - v2) >> 2;
}

