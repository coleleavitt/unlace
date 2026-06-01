unsigned __int64 __fastcall sub_1DFC070(
        unsigned __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rax
  __int64 v32; // rdi
  char v33; // al
  __int64 v34; // r8
  __int64 v35; // r9
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rsi
  unsigned __int16 *v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  double v52; // xmm4_8
  double v53; // xmm5_8
  _DWORD *v54; // rdi
  __int64 v55; // rcx
  __m128i *v56; // rsi
  _DWORD *v57; // rsi
  char *v58; // rdi
  __int64 i; // rcx
  _WORD *v60; // rsi
  __int64 v61; // rax
  _WORD *v62; // rsi
  __int64 v63; // rax
  _WORD *v64; // rsi
  __int64 v65; // rax
  unsigned __int16 *v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // rsi
  unsigned __int16 *v72; // rax
  __int64 v73; // rcx
  double v74; // xmm4_8
  double v75; // xmm5_8
  _WORD *v76; // rsi
  __int64 v77; // rax
  _WORD *v78; // rsi
  __int64 v79; // rax
  char v80; // [rsp-70h] [rbp-1F8h] BYREF
  __int64 v81; // [rsp+0h] [rbp-188h]
  unsigned __int64 v82; // [rsp+8h] [rbp-180h]
  _BYTE v83[112]; // [rsp+10h] [rbp-178h] BYREF
  __m128i v84[2]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v85; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v86; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v92; // [rsp+D8h] [rbp-B0h]
  char v93; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v95; // [rsp+120h] [rbp-68h] BYREF

  v10 = 0;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 40);
  if ( (_DWORD)v12 )
    v10 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12 - 8);
  v13 = *(_QWORD *)(v11 + 544);
  if ( !v13 )
    JUMPOUT(0x2EADBE);
  *(_BYTE *)(v10 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0(*a1, *(unsigned int *)(v13 - 48), (__m128i)a3) )
    return 1;
  v19 = sub_1786260((__int64 *)*a1, *(unsigned int *)(v13 - 48), *(double *)a3.m128_u64, v16, v17);
  v20 = v19;
  if ( !v19 )
    return 1;
  v84[0].m128i_i64[0] = v19;
  sub_1DC2D70(a1, a1 + 4, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL), v84[0].m128i_i64, 1);
  *(_QWORD *)(v10 + 184) = v20;
  v81 = sub_1DF6720((__int64 *)a1, *(_WORD **)(a2 + 32), nullptr, a3, a4, a5, a6, v24, v25, a9, a10, v21, v22, v23);
  if ( v81 == 1 )
    return 1;
  v31 = sub_1DF6720((__int64 *)a1, *(_WORD **)(a2 + 40), nullptr, a3, a4, a5, a6, v29, v30, a9, a10, v26, v27, v28);
  if ( v31 == 1 )
    return 1;
  v32 = *a1;
  v82 = v31 & 0xFFFFFFFFFFFFFFFELL;
  v33 = sub_1783690(v32, v31 & 0xFFFFFFFFFFFFFFFELL);
  v38 = v81;
  if ( !v33 )
    return 1;
  *(_BYTE *)(v10 + 10) &= ~2u;
  v39 = v82;
  v40 = v38 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v10 + 344) = v40;
  *(_QWORD *)(v10 + 352) = v39;
  v41 = sub_1DF6720((__int64 *)a1, *(_WORD **)(a2 + 16), nullptr, a3, a4, a5, a6, v36, v37, a9, a10, v40, v34, v35);
  if ( v41 == 1 )
    return 1;
  sub_1783C30((__int64)v84, (_QWORD *)*a1, v13 - 72, v10, (unsigned __int16 *)(v41 & 0xFFFFFFFFFFFFFFFELL), v42);
  if ( !v93 )
    goto LABEL_13;
  v46 = *(_QWORD *)(a2 + 88);
  v47 = sub_1DDC230((__int64 *)a1, v46, 0, a3, a4, v43, v44, v45);
  if ( v47 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_13;
  v90 = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
      & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(v84, v46) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v54 = v83;
    v55 = 28;
    v56 = v84;
    while ( v55 )
    {
      *v54 = v56->m128i_i32[0];
      v56 = (__m128i *)((char *)v56 + 4);
      ++v54;
      --v55;
    }
    v57 = v83;
    v58 = &v80;
    for ( i = 28; i; --i )
    {
      *(_DWORD *)v58 = *v57++;
      v58 += 4;
    }
    result = sub_1783EC0(*a1, (__int64)v57, v48, 0, v50, v51, v80);
    goto LABEL_14;
  }
  v60 = *(_WORD **)(a2 + 56);
  if ( v60 )
  {
    v61 = sub_1DF6720((__int64 *)a1, v60, nullptr, a3, a4, a5, a6, v52, v53, a9, a10, v49, v50, v51);
    if ( v61 == 1 )
      goto LABEL_13;
    v86 = v61 & 0xFFFFFFFFFFFFFFFELL;
  }
  v62 = *(_WORD **)(a2 + 48);
  if ( v62 )
  {
    v63 = sub_1DF6720((__int64 *)a1, v62, nullptr, a3, a4, a5, a6, v52, v53, a9, a10, v49, v50, v51);
    if ( v63 == 1 )
      goto LABEL_13;
    v85 = v63 & 0xFFFFFFFFFFFFFFFELL;
  }
  v64 = *(_WORD **)(a2 + 104);
  if ( v64 )
  {
    v65 = sub_1DF6720((__int64 *)a1, v64, nullptr, a3, a4, a5, a6, v52, v53, a9, a10, v49, v50, v51);
    if ( v65 == 1 )
      goto LABEL_13;
    v92 = v65 & 0xFFFFFFFFFFFFFFFELL;
  }
  v66 = sub_1DC71F0((__int64 *)a1, *(_QWORD *)(a2 + 64), v48, v49, v50, v51, a3, a4);
  if ( v66 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_13;
  v71 = *(_QWORD *)(a2 + 72);
  v87 = (unsigned __int64)v66 & 0xFFFFFFFFFFFFFFFELL;
  v72 = sub_1DC71F0((__int64 *)a1, v71, v67, v68, v69, v70, a3, a4);
  if ( v72 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    goto LABEL_13;
  v76 = *(_WORD **)(a2 + 80);
  v88 = (unsigned __int64)v72 & 0xFFFFFFFFFFFFFFFELL;
  if ( v76 )
  {
    v77 = sub_1DF6720((__int64 *)a1, v76, nullptr, a3, a4, a5, a6, v74, v75, a9, a10, v73, v50, v51);
    if ( v77 == 1 )
      goto LABEL_13;
    v89 = v77 & 0xFFFFFFFFFFFFFFFELL;
  }
  v78 = *(_WORD **)(a2 + 96);
  if ( !v78 )
    goto LABEL_19;
  v79 = sub_1DF6720((__int64 *)a1, v78, nullptr, a3, a4, a5, a6, v74, v75, a9, a10, v73, v50, v51);
  if ( v79 != 1 )
  {
    v91 = v79 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_19;
  }
LABEL_13:
  result = 1;
LABEL_14:
  if ( ptr != &v95 )
  {
    v81 = result;
    free(ptr);
    return v81;
  }
  return result;
}
