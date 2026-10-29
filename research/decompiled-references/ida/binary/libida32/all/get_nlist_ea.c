__int64 __fastcall get_nlist_ea(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // edx

  v1 = *(_QWORD *)(qword_2CA1698 + 1536);
  sub_4C92F0(v1);
  if ( !*(_BYTE *)(v1 + 640) )
    sub_4C7100(v1);
  v2 = *(_QWORD *)(v1 + 616);
  v3 = -1;
  if ( a1 < (*(_QWORD *)(v1 + 624) - v2) >> 2 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 104) + 4LL * *(unsigned int *)(v2 + 4 * a1));
  return v3;
}

