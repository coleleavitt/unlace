__int64 __fastcall sub_720480(
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
  char v12; // al
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rsi
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r13

  if ( !(unsigned __int8)sub_71BB60(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v12 = sub_B8E0B0(a2);
  v15 = 0;
  if ( v12 )
    v15 = sub_B8D340(a2, 0);
  if ( !(unsigned __int8)sub_70A970(a1, v15, a3, a4, a5, a6, v13, v14, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v18 = nullptr;
    v19 = sub_B8C3D0(a2);
    v22 = *(unsigned int *)(v19 + 8);
    v23 = *(_QWORD *)v19 + 8 * v22;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v18 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v23 != v18 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v18, a3, a4, a5, a6, v16, v17, a9, a10, v22, v20, v21) )
      {
        if ( (__int64 *)v23 == ++v18 )
          return sub_6EC5A0(*a1, nullptr, a2, a3, a4, a5, a6, v16, v17, a9, a10);
      }
      return 0;
    }
  }
  return sub_6EC5A0(*a1, nullptr, a2, a3, a4, a5, a6, v16, v17, a9, a10);
}
