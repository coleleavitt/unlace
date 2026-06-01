__int64 __fastcall sub_71FF90(
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
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // r12
  __int64 v15; // rax
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 *v18; // rbx
  unsigned int v19; // r12d
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rsi
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rdx
  __int64 v31; // r14

  v12 = sub_EF5320(*(_QWORD *)(a2 + 40));
  v13 = *(_QWORD *)(a2 + 40);
  v14 = (__int64 *)(v12 + 8LL * *(unsigned int *)(v13 + 4));
  v15 = sub_EF5320(v13);
  if ( (__int64 *)v15 != v14 )
  {
    v18 = (__int64 *)v15;
    while ( (unsigned __int8)sub_70DBE0(a1, *v18, 0, a3, a4, a5, a6, v16, v17, a9, a10) )
    {
      if ( v14 == ++v18 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v23 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v23 = sub_B8D340(a2, 0);
  v19 = sub_70A970(a1, v23, a3, a4, a5, a6, v21, v22, a9, a10);
  if ( !(_BYTE)v19 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v24 = nullptr;
    v25 = sub_B8C3D0(a2);
    v30 = *(unsigned int *)(v25 + 8);
    v31 = *(_QWORD *)v25 + 8 * v30;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v24 = *(__int64 **)sub_B8C3D0(a2);
    while ( (__int64 *)v31 != v24 )
    {
      if ( !(unsigned __int8)sub_71D160(a1, *v24, a3, a4, a5, a6, v28, v29, a9, a10, v30, v26, v27) )
        return 0;
      ++v24;
    }
  }
  return v19;
}
