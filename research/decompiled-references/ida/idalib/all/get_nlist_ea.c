__int64 __fastcall get_nlist_ea(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx

  v1 = *(_QWORD *)(qword_2CCB598 + 1728);
  sub_4E07C0(v1);
  if ( !*(_BYTE *)(v1 + 640) )
    sub_4DE240(v1);
  v2 = *(_QWORD *)(v1 + 616);
  v3 = -1;
  if ( a1 < (*(_QWORD *)(v1 + 624) - v2) >> 2 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 104) + 8LL * *(unsigned int *)(v2 + 4 * a1));
  return v3;
}
