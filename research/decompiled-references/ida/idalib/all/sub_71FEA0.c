__int64 __fastcall sub_71FEA0(
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
  unsigned int v13; // r13d
  __int64 v15; // rbx
  __int64 v16; // r13
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rdx
  __int64 v27; // r14

  if ( !(unsigned __int8)sub_70DBE0(a1, *(_QWORD *)(a2 + 64), 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v15 = *(_QWORD *)(a2 + 48);
  v16 = v15 + 8LL * *(_QWORD *)(a2 + 56);
  if ( v15 != v16 )
  {
    while ( (unsigned __int8)sub_710240(a1, a3, *(double *)a4.m128i_i64, a5, a6, v11, v12, a9, a10) )
    {
      v15 += 8;
      if ( v16 == v15 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v19 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v19 = sub_B8D340(a2, 0);
  v13 = sub_70A970(a1, v19, a3, a4, a5, a6, v17, v18, a9, a10);
  if ( !(_BYTE)v13 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = nullptr;
    v21 = sub_B8C3D0(a2);
    v26 = *(unsigned int *)(v21 + 8);
    v27 = *(_QWORD *)v21 + 8 * v26;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v20 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v27 != v20 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v20, a3, a4, a5, a6, v24, v25, a9, a10, v26, v22, v23) )
        return 0;
      ++v20;
    }
  }
  return v13;
}
