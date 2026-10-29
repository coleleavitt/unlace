__int64 __fastcall sub_3F4B50(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5

  if ( (unsigned int)Clp_initialPrimalSolve() )
  {
    if ( *(int *)(a1 + 168) < 0 )
      return 0;
    Clp_deleteRows();
    if ( (unsigned int)Clp_initialPrimalSolve() )
      return 0;
    if ( (get_aflags() & 0x2000000) != 0 )
      sub_3311F0(
        *(_QWORD **)(a1 + 184),
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL),
        0x11u,
        v10,
        v11,
        v12,
        a2,
        a3,
        a4,
        a5,
        v13,
        v14,
        a8,
        a9);
  }
  return 1;
}
