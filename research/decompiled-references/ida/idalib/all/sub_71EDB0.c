__int64 __fastcall sub_71EDB0(
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
  __int64 *v11; // rax
  __int64 v12; // r8
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rsi
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r13

  v11 = (__int64 *)sub_6F3640(a2);
  if ( !(unsigned __int8)sub_717AC0(a1, *v11, (__int64)(v11 + 1), *v11, v12, a3, a4, a5, a6, v13, v14, a9, a10) )
    return 0;
  v18 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v18 = sub_B8D340(a2, 0);
  if ( !(unsigned __int8)sub_70A970(a1, v18, a3, a4, a5, a6, v16, v17, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v21 = nullptr;
    v22 = sub_B8C3D0(a2);
    v25 = *(unsigned int *)(v22 + 8);
    v26 = *(_QWORD *)v22 + 8 * v25;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v21 = *(__int64 **)sub_B8C3D0(a2);
    if ( (__int64 *)v26 != v21 )
    {
      while ( (unsigned __int8)sub_71D160(a1, *v21, a3, a4, a5, a6, v19, v20, a9, a10, v25, v23, v24) )
      {
        if ( (__int64 *)v26 == ++v21 )
          return sub_6EC250(*a1, nullptr, a2, 0, a3, a4, a5, a6, v19, v20, a9, a10);
      }
      return 0;
    }
  }
  return sub_6EC250(*a1, nullptr, a2, 0, a3, a4, a5, a6, v19, v20, a9, a10);
}
