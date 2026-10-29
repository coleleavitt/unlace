__int64 __fastcall sub_E90670(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // esi

  v1 = *a1;
  if ( !*(_QWORD *)(*a1 + 16LL) || ((unsigned int)(*(__int64 *)(v1 + 8) >> 1) & 3) <= 1 )
    return 0;
  if ( ((*(__int64 *)(v1 + 8) >> 1) & 3) != 2 )
    return sub_E90750();
  v3 = *(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v4 = v3;
  if ( v3 )
  {
    LODWORD(v3) = 0;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( !*(_QWORD *)(v4 + 16) )
        break;
      v6 = 8;
      if ( ((unsigned int)(v5 >> 1) & 3) <= 1 )
      {
LABEL_7:
        v3 = (unsigned int)(v6 + v3);
        v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return _mm_loadh_ps((const double *)(a1[1] + v3)).m128_u64[0];
      }
      else
      {
        if ( ((v5 >> 1) & 3) != 2 )
          return sub_E90750();
        v3 = (unsigned int)(v3 + 12);
        v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return _mm_loadh_ps((const double *)(a1[1] + v3)).m128_u64[0];
      }
    }
    v6 = 4;
    goto LABEL_7;
  }
  return _mm_loadh_ps((const double *)(a1[1] + v3)).m128_u64[0];
}
