__int64 __fastcall sub_6FEA50(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm4_8
  double v24; // xmm5_8
  unsigned __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rsi
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9

  v14 = a2;
  v15 = *(_QWORD *)(a2 + 112);
  if ( v15 )
  {
    v16 = (__int64 *)(v15 + 16);
    a3 = 8LL * *(unsigned int *)(v15 + 8);
    v17 = v15 + a3 + 16;
    if ( a3 )
    {
      do
      {
        a2 = *v16;
        if ( !(unsigned __int8)sub_6FE990(a1, *v16, a7, a8, a9, a10, a11, a12, a13, a14) )
          return 0;
        ++v16;
      }
      while ( (__int64 *)v17 != v16 );
    }
  }
  if ( sub_6E5000(v14, a2, a3, a4, a5, a6) )
  {
    v25 = *(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
    {
      sub_B84BC0(v14);
      v25 = *(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v26 = *(__int64 **)(v25 + 8);
    if ( v26 )
    {
      a2 = *v26;
      if ( !(unsigned __int8)sub_6F74E0(a1, a2, (__int64)(v26 + 1), a2, v21, a7, a8, a9, a10, v23, v24, a13, a14) )
        return 0;
    }
  }
  if ( sub_6E5000(v14, a2, v19, v20, v21, v22) )
  {
    if ( v14 != *(_QWORD *)(*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) )
      goto LABEL_14;
    goto LABEL_27;
  }
  if ( !v14 )
  {
LABEL_27:
    if ( sub_6E5000(v14, a2, v27, v28, v29, v30)
      && (*(_BYTE *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_B84BC0(v14);
    }
    if ( sub_6E5000(v14, a2, v42, v43, v44, v45)
      && (*(_BYTE *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_B84BC0(v14);
    }
    if ( sub_6E5000(v14, a2, v46, v47, v48, v49)
      && (*(_BYTE *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_B84BC0(v14);
    }
    if ( sub_6E5000(v14, a2, v50, v51, v52, v53)
      && (*(_BYTE *)((*(_QWORD *)(v14 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_B84BC0(v14);
    }
LABEL_14:
    v33 = 0;
    if ( !v14 )
      goto LABEL_16;
  }
  v33 = v14 + 48;
LABEL_16:
  if ( !(unsigned __int8)sub_6EA390(a1, v33, a7, a8, a9, a10, v31, v32, a13, a14) )
    return 0;
  if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
  {
    v36 = nullptr;
    v37 = sub_B68690(v14);
    v40 = *(unsigned int *)(v37 + 8);
    v41 = *(_QWORD *)v37 + 8 * v40;
    if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
      v36 = *(__int64 **)sub_B68690(v14);
    if ( v36 != (__int64 *)v41 )
    {
      while ( (unsigned __int8)sub_6FCB80(a1, *v36, a7, a8, a9, a10, v34, v35, a13, a14, v40, v38, v39) )
      {
        if ( (__int64 *)v41 == ++v36 )
          return sub_6CD5A0((_QWORD *)*a1, nullptr, v14, a7, *(double *)a8.m128i_i64, a9, a10, v34, v35, a13, a14);
      }
      return 0;
    }
  }
  return sub_6CD5A0((_QWORD *)*a1, nullptr, v14, a7, *(double *)a8.m128i_i64, a9, a10, v34, v35, a13, a14);
}

