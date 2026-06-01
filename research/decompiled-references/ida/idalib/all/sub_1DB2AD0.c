unsigned __int64 __fastcall sub_1DB2AD0(
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
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // r9
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rax
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // r8
  __int64 v38; // r9
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  double v55; // xmm4_8
  double v56; // xmm5_8
  _DWORD *v57; // rdi
  __int64 v58; // rcx
  __m128i *v59; // rsi
  _DWORD *v60; // rsi
  char *v61; // rdi
  __int64 i; // rcx
  unsigned __int16 *v63; // rsi
  __int64 v64; // rax
  unsigned __int16 *v65; // rsi
  __int64 v66; // rax
  unsigned __int16 *v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int16 *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rcx
  double v76; // xmm4_8
  double v77; // xmm5_8
  unsigned __int16 *v78; // rsi
  __int64 v79; // rax
  unsigned __int16 *v80; // rsi
  __int64 v81; // rax
  char v82; // [rsp-70h] [rbp-1F8h] BYREF
  __int64 v83; // [rsp+0h] [rbp-188h]
  unsigned __int64 v84; // [rsp+8h] [rbp-180h]
  _BYTE v85[112]; // [rsp+10h] [rbp-178h] BYREF
  __m128i v86[2]; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v87; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v89; // [rsp+B0h] [rbp-D8h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v92; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v93; // [rsp+D0h] [rbp-B8h]
  unsigned __int64 v94; // [rsp+D8h] [rbp-B0h]
  char v95; // [rsp+108h] [rbp-80h]
  void *ptr; // [rsp+110h] [rbp-78h]
  __int64 v97; // [rsp+120h] [rbp-68h] BYREF

  v10 = 0;
  v11 = *a1;
  v12 = *(unsigned int *)(*a1 + 40);
  if ( (_DWORD)v12 )
    v10 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 8 * v12 - 8);
  v13 = *(_QWORD *)(v11 + 544);
  if ( !v13 )
    JUMPOUT(0x2EACEC);
  *(_BYTE *)(v10 + 10) &= ~2u;
  if ( !(unsigned __int8)sub_178ACC0(*a1, *(unsigned int *)(v13 - 48), (__m128i)a3) )
    return 1;
  v23 = sub_1786260((__int64 *)*a1, *(unsigned int *)(v13 - 48), *(double *)a3.m128_u64, v16, v17);
  if ( !v23 )
    return 1;
  v86[0].m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  *sub_1742A40((__int64)(a1 + 1), v86[0].m128i_i64, v19, v20, v21, v22) = v23;
  *(_QWORD *)(v10 + 184) = v23;
  v83 = sub_1DAD2E0(
          (__int64 *)a1,
          *(unsigned __int16 **)(a2 + 32),
          nullptr,
          a3,
          a4,
          a5,
          a6,
          v27,
          v28,
          a9,
          a10,
          v24,
          v25,
          v26);
  if ( v83 == 1 )
    return 1;
  v34 = sub_1DAD2E0(
          (__int64 *)a1,
          *(unsigned __int16 **)(a2 + 40),
          nullptr,
          a3,
          a4,
          a5,
          a6,
          v32,
          v33,
          a9,
          a10,
          v29,
          v30,
          v31);
  if ( v34 == 1 )
    return 1;
  v35 = *a1;
  v84 = v34 & 0xFFFFFFFFFFFFFFFELL;
  v36 = sub_1783690(v35, v34 & 0xFFFFFFFFFFFFFFFELL);
  v41 = v83;
  if ( !v36 )
    return 1;
  *(_BYTE *)(v10 + 10) &= ~2u;
  v42 = v84;
  v43 = v41 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v10 + 344) = v43;
  *(_QWORD *)(v10 + 352) = v42;
  v44 = sub_1DAD2E0(
          (__int64 *)a1,
          *(unsigned __int16 **)(a2 + 16),
          nullptr,
          a3,
          a4,
          a5,
          a6,
          v39,
          v40,
          a9,
          a10,
          v43,
          v37,
          v38);
  if ( v44 == 1 )
    return 1;
  sub_1783C30((__int64)v86, (_QWORD *)*a1, v13 - 72, v10, (unsigned __int16 *)(v44 & 0xFFFFFFFFFFFFFFFELL), v45);
  if ( !v95 )
    goto LABEL_13;
  v49 = *(_QWORD *)(a2 + 88);
  v50 = sub_1D8BB90((__int64 *)a1, v49, 0, a3, a4, v46, v47, v48);
  if ( v50 == 1 )
    goto LABEL_13;
  v92 = v50 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL)
      & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0
      && !(unsigned __int8)sub_178BFE0(v86, v49) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v57 = v85;
    v58 = 28;
    v59 = v86;
    while ( v58 )
    {
      *v57 = v59->m128i_i32[0];
      v59 = (__m128i *)((char *)v59 + 4);
      ++v57;
      --v58;
    }
    v60 = v85;
    v61 = &v82;
    for ( i = 28; i; --i )
    {
      *(_DWORD *)v61 = *v60++;
      v61 += 4;
    }
    result = sub_1783EC0(*a1, (__int64)v60, v51, 0, v53, v54, v82);
    goto LABEL_14;
  }
  v63 = *(unsigned __int16 **)(a2 + 56);
  if ( v63 )
  {
    v64 = sub_1DAD2E0((__int64 *)a1, v63, nullptr, a3, a4, a5, a6, v55, v56, a9, a10, v52, v53, v54);
    if ( v64 == 1 )
      goto LABEL_13;
    v88 = v64 & 0xFFFFFFFFFFFFFFFELL;
  }
  v65 = *(unsigned __int16 **)(a2 + 48);
  if ( v65 )
  {
    v66 = sub_1DAD2E0((__int64 *)a1, v65, nullptr, a3, a4, a5, a6, v55, v56, a9, a10, v52, v53, v54);
    if ( v66 == 1 )
      goto LABEL_13;
    v87 = v66 & 0xFFFFFFFFFFFFFFFELL;
  }
  v67 = *(unsigned __int16 **)(a2 + 104);
  if ( v67 )
  {
    v68 = sub_1DAD2E0((__int64 *)a1, v67, nullptr, a3, a4, a5, a6, v55, v56, a9, a10, v52, v53, v54);
    if ( v68 == 1 )
      goto LABEL_13;
    v94 = v68 & 0xFFFFFFFFFFFFFFFELL;
  }
  v69 = sub_1D8B300((__int64 *)a1, *(unsigned __int16 **)(a2 + 64), a3, a4, v51, v52, v53);
  if ( v69 == 1 )
    goto LABEL_13;
  v73 = *(unsigned __int16 **)(a2 + 72);
  v89 = v69 & 0xFFFFFFFFFFFFFFFELL;
  v74 = sub_1D8B300((__int64 *)a1, v73, a3, a4, v70, v71, v72);
  if ( v74 == 1 )
    goto LABEL_13;
  v78 = *(unsigned __int16 **)(a2 + 80);
  v90 = v74 & 0xFFFFFFFFFFFFFFFELL;
  if ( v78 )
  {
    v79 = sub_1DAD2E0((__int64 *)a1, v78, nullptr, a3, a4, a5, a6, v76, v77, a9, a10, v75, v53, v54);
    if ( v79 == 1 )
      goto LABEL_13;
    v91 = v79 & 0xFFFFFFFFFFFFFFFELL;
  }
  v80 = *(unsigned __int16 **)(a2 + 96);
  if ( !v80 )
    goto LABEL_19;
  v81 = sub_1DAD2E0((__int64 *)a1, v80, nullptr, a3, a4, a5, a6, v76, v77, a9, a10, v75, v53, v54);
  if ( v81 != 1 )
  {
    v93 = v81 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_19;
  }
LABEL_13:
  result = 1;
LABEL_14:
  if ( ptr != &v97 )
  {
    v83 = result;
    free(ptr);
    return v83;
  }
  return result;
}
