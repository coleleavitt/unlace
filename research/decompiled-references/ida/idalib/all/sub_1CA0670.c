__int64 __fastcall sub_1CA0670(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v23; // rsi
  __int64 v24; // r14
  unsigned __int16 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  const __m128i *v36; // rax
  __int32 v37; // edx
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int16 v41; // dx
  unsigned int v42; // esi
  unsigned __int64 v43; // rbp
  __m128 v44; // xmm0
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  double v49; // xmm4_8
  double v50; // xmm5_8
  unsigned __int64 v51; // r12
  __int64 v52; // rax
  int v53; // edx
  __int64 v54; // rsi
  int v55; // r9d
  __int64 v56; // rdi
  __int8 v57; // dl
  __int64 v58; // [rsp+0h] [rbp-D8h]
  const __m128i *v59; // [rsp+0h] [rbp-D8h]
  __m128i v60; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+20h] [rbp-B8h]
  __m128i v62; // [rsp+30h] [rbp-A8h]
  __int64 v63; // [rsp+40h] [rbp-98h]
  const __m128i *v64; // [rsp+50h] [rbp-88h] BYREF
  __int32 v65; // [rsp+58h] [rbp-80h]
  __int64 v66; // [rsp+60h] [rbp-78h]
  __int64 v67; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-68h]
  __int8 v69; // [rsp+74h] [rbp-64h]
  char v70; // [rsp+78h] [rbp-60h]
  __int16 v71; // [rsp+80h] [rbp-58h]
  __m128 v72; // [rsp+88h] [rbp-50h]
  char v73; // [rsp+98h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v16 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 8), 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v16 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v16 )
    sub_1B28470(
      *(__int64 **)(*a1 + 760),
      *(_DWORD *)(a2 + 4),
      (__int64 (__fastcall ***)())(v16 & 0xFFFFFFFFFFFFFFFELL),
      *(double *)a3.m128_u64,
      a4);
  v17 = *(_QWORD *)(a2 + 24);
  v18 = sub_EEE130(a2);
  sub_1C7D6B0((__int64)&v60, a1, *(unsigned int *)(a2 + 4), v18, v17, 0, a3, a4);
  if ( (_BYTE)v61 )
    return 1;
  v23 = *(_QWORD *)(a2 + 32);
  v24 = v60.m128i_i64[1];
  v25 = sub_1C7CFE0(a1, v23, a3, a4, v19, v20, v21);
  if ( v25 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v28 = 0;
  v29 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFELL;
  v30 = *a1;
  v31 = v29;
  if ( v29 )
    v28 = (unsigned int)sub_C00A40(v29, v23, 0, v26, v27);
  v32 = sub_19B4A30(v30, v31, v28, 1, 0, 0, a3, a4);
  v33 = *(_QWORD *)(a2 + 32);
  v34 = v32 & 0xFFFFFFFFFFFFFFFELL;
  v35 = v34;
  if ( v33 )
  {
    if ( !v34 )
      return 1;
  }
  v36 = *(const __m128i **)(*a1 + 744);
  v37 = v36[2].m128i_i32[0];
  v38 = v36[4].m128i_i8[0] == 0;
  v64 = v36;
  v65 = v37;
  v39 = v36[2].m128i_i64[1];
  v70 = 0;
  v66 = v39;
  if ( v38 )
  {
    v40 = (__int64)v36;
  }
  else
  {
    v68 = v36[3].m128i_u32[2];
    if ( v68 > 0x40 )
    {
      v59 = v36;
      sub_2205510(&v67);
      v33 = *(_QWORD *)(a2 + 32);
      v36 = v59;
      v40 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v40 = (__int64)v36;
      v67 = v36[3].m128i_i64[0];
    }
    v57 = v36[3].m128i_i8[12];
    v70 = 1;
    v69 = v57;
  }
  v41 = v36[4].m128i_i16[4];
  v42 = *(_DWORD *)(a2 + 4);
  v43 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v44 = (__m128)_mm_loadu_si128(v36 + 5);
  v73 = 1;
  v71 = v41;
  v45 = *(_QWORD *)(a2 + 24);
  v72 = v44;
  sub_1AAA420(v40, v42, *(_QWORD *)(a2 + 8), v43, v45, v24 & 0xFFFFFFFFFFFFFFFELL, v33, v31);
  v51 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 40), 0, v44, a4, a5, a6, v49, v50, a9, a10, v46, v47, v48);
  v52 = 1;
  if ( v51 != 1 )
  {
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v51, *(double *)v44.m128_u64);
    v53 = *(_DWORD *)(a2 + 48);
    v54 = *(unsigned int *)(a2 + 4);
    v55 = *(_DWORD *)(a2 + 52);
    v56 = *a1;
    v62 = _mm_load_si128(&v60);
    v63 = v61;
    v52 = sub_1C4D120(
            v56,
            v54,
            v53,
            v43,
            v35,
            v55,
            *(double *)v44.m128_u64,
            v62.m128i_i64[0],
            v62.m128i_i64[1],
            v61,
            v51 & 0xFFFFFFFFFFFFFFFELL);
  }
  v58 = v52;
  sub_15354C0((__int64)&v64);
  return v58;
}
