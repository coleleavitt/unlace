__int64 __fastcall sub_7008B0(
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
  __int64 *v13; // rbx
  __int64 v14; // r12
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rsi
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r12

  if ( !(unsigned __int8)sub_6FB580(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v13 = (__int64 *)(a2 + 104);
  v14 = a2 + 104 + 8LL * *(unsigned int *)(a2 + 100);
  if ( a2 + 104 != v14 )
  {
    while ( !*v13 || (unsigned __int8)sub_6E9260(a1, *v13, a3, a4, a5, a6, v11, v12, a9, a10) )
    {
      if ( (__int64 *)v14 == ++v13 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v17 = 0;
  if ( (unsigned __int8)sub_B6A370(a2) )
    v17 = sub_B69600(a2, 0);
  if ( !(unsigned __int8)sub_6EA390(a1, v17, a3, a4, a5, a6, v15, v16, a9, a10) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v21 = nullptr;
    v22 = sub_B68690(a2);
    v25 = *(unsigned int *)(v22 + 8);
    v26 = *(_QWORD *)v22 + 8 * v25;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v21 = *(__int64 **)sub_B68690(a2);
    if ( (__int64 *)v26 != v21 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v21, a3, a4, a5, a6, v18, v19, a9, a10, v25, v23, v24) )
      {
        if ( (__int64 *)v26 == ++v21 )
          return sub_6CBF10(*a1, nullptr, a2, a3, a4, a5, a6, v18, v19, a9, a10);
      }
      return 0;
    }
  }
  return sub_6CBF10(*a1, nullptr, a2, a3, a4, a5, a6, v18, v19, a9, a10);
}

