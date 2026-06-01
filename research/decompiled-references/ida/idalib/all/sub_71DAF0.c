__int64 __fastcall sub_71DAF0(
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
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned int v13; // r12d
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  __int64 *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rdx
  __int64 v25; // r14

  v11 = *(_QWORD *)(a2 + 48);
  v12 = v11 + 8LL * *(_QWORD *)(a2 + 56);
  if ( v11 != v12 )
  {
    while ( (unsigned __int8)sub_710240(a1, a3, *(double *)a4.m128i_i64, a5, a6, a7, a8, a9, a10) )
    {
      v11 += 8;
      if ( v12 == v11 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v17 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v17 = sub_B8D340(a2, 0);
  v13 = sub_70A970(a1, v17, a3, a4, a5, a6, v15, v16, a9, a10);
  if ( !(_BYTE)v13 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v18 = nullptr;
    v19 = sub_B8C3D0(a2);
    v24 = *(unsigned int *)(v19 + 8);
    v25 = *(_QWORD *)v19 + 8 * v24;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v18 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v25 != v18 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v18, a3, a4, a5, a6, v22, v23, a9, a10, v24, v20, v21) )
        return 0;
      ++v18;
    }
  }
  return v13;
}
