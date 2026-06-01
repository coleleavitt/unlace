__int64 __fastcall sub_720620(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  double v12; // xmm4_8
  double v13; // xmm5_8
  __int64 v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rsi
  double v27; // xmm4_8
  double v28; // xmm5_8

  if ( !(unsigned __int8)sub_71BB60(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  if ( (unsigned __int8)sub_B74820(a2) )
  {
    if ( (*(_BYTE *)(a2 + 97) & 6) == 4 )
    {
      v26 = sub_B74810(a2);
      if ( !(unsigned __int8)sub_70DBE0(a1, v26, 0, a3, a4, a5, a6, v27, v28, a9, a10) )
        return 0;
    }
  }
  if ( (unsigned __int8)sub_B74820(a2) )
  {
    if ( (((*(_BYTE *)(a2 + 97) & 6) - 2) & 0xFC) != 0 )
    {
      v23 = sub_B74740(a2);
      if ( !(unsigned __int8)sub_70DBE0(a1, v23, 0, a3, a4, a5, a6, v24, v25, a9, a10) )
        return 0;
    }
  }
  v14 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v14 = sub_B8D340(a2, 0);
  if ( !(unsigned __int8)sub_70A970(a1, v14, a3, a4, a5, a6, v12, v13, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v17 = nullptr;
    v18 = sub_B8C3D0(a2);
    v21 = *(unsigned int *)(v18 + 8);
    v22 = *(_QWORD *)v18 + 8 * v21;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v17 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v22 != v17 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v17, a3, a4, a5, a6, v15, v16, a9, a10, v21, v19, v20) )
      {
        if ( (__int64 *)v22 == ++v17 )
          return sub_6EC5A0(*a1, nullptr, a2, a3, a4, a5, a6, v15, v16, a9, a10);
      }
      return 0;
    }
  }
  return sub_6EC5A0(*a1, nullptr, a2, a3, a4, a5, a6, v15, v16, a9, a10);
}
