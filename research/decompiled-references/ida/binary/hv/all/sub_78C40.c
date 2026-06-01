__int64 __fastcall sub_78C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __m128 v4; // xmm0

  v2 = operator new(0x38u);
  v3 = *(_QWORD *)(a1 + 648) == 0;
  v4 = _mm_loadh_ps((const double *)(a1 + 648));
  *(_QWORD *)v2 = off_163AC8;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 8) = a2;
  *(_DWORD *)(v2 + 16) = 0;
  *(__m128 *)(v2 + 24) = v4;
  if ( v3 )
  {
    if ( !byte_1671A1 )
      sub_96F80(3320);
    BUG();
  }
  if ( *(_DWORD *)(a1 + 616) > 6u )
    *(_QWORD *)(v2 + 48) = a1 + 628;
  return sub_92300(v2);
}

