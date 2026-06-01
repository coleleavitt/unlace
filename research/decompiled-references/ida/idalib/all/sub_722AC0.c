__int64 __fastcall sub_722AC0(
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
  unsigned int *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 *v14; // rbx
  unsigned int v15; // r12d
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

  v11 = *(unsigned int **)(a2 + 40);
  v12 = 2LL * *v11;
  v13 = (__int64)&v11[v12 + 4];
  v14 = (__int64 *)(v11 + 4);
  if ( v12 * 4 )
  {
    while ( (unsigned __int8)sub_722170(a1, *v14, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( (__int64 *)v13 == ++v14 )
        goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  v19 = 0;
  if ( (unsigned __int8)sub_B8E0B0(a2) )
    v19 = sub_B8D340(a2, 0);
  v15 = sub_70A970(a1, v19, a3, a4, a5, a6, v17, v18, a9, a10);
  if ( !(_BYTE)v15 )
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
  return v15;
}
