__int64 __fastcall sub_71FDC0(
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
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // r12d
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 *v26; // rbp

  if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCLL, 0, a3, a4, a5, a6, a7, a8, a9, a10)
    || !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 48), 0, a3, a4, a5, a6, v11, v12, a9, a10) )
  {
    return 0;
  }
  v17 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v17 = sub_B8D340(a2, 0);
  v13 = sub_70A970(a1, v17, a3, a4, a5, a6, v15, v16, a9, a10);
  if ( !(_BYTE)v13 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v18 = sub_B8C3D0(a2);
    v23 = *(unsigned int *)(v18 + 8);
    v24 = *(_QWORD *)v18 + 8 * v23;
    v25 = nullptr;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v25 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v24 != v25 )
    {
      v26 = v25;
      while ( (unsigned __int8)sub_71D160(a1, *v26, a3, a4, a5, a6, v21, v22, a9, a10, v23, v19, v20) )
      {
        if ( (__int64 *)v24 == ++v26 )
          return v13;
      }
      return 0;
    }
  }
  return v13;
}
