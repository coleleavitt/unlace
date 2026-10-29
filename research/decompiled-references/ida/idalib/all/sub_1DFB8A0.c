__int64 __fastcall sub_1DFB8A0(
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
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int16 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // r13
  const __m128i *v37; // rax
  __int32 v38; // edx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int16 v42; // dx
  unsigned int v43; // esi
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rbp
  __m128 v46; // xmm0
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  double v51; // xmm4_8
  double v52; // xmm5_8
  unsigned __int64 v53; // rax
  __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  int v56; // edx
  __int64 v57; // rsi
  int v58; // r9d
  const __m128i *v59; // rbx
  __int8 v60; // r12
  __int8 v61; // r13
  bool v62; // bp
  const __m128i *v63; // rdi
  unsigned int v64; // edx
  void *v65; // rdi
  const __m128i *v66; // rdx
  __int16 v67; // cx
  __int8 v68; // bp
  __int8 v69; // dl
  unsigned int v70; // edx
  __int8 v71; // cl
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v75; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v76; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v77; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v78; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v79; // [rsp+10h] [rbp-D8h]
  const __m128i *v80; // [rsp+10h] [rbp-D8h]
  __int64 v81; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v82; // [rsp+18h] [rbp-D0h]
  __m128i v83; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v84; // [rsp+30h] [rbp-B8h]
  __m128i v85; // [rsp+40h] [rbp-A8h]
  __int64 v86; // [rsp+50h] [rbp-98h]
  const __m128i *v87; // [rsp+60h] [rbp-88h]
  __int32 v88; // [rsp+68h] [rbp-80h]
  __int64 v89; // [rsp+70h] [rbp-78h]
  __int64 v90; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v91; // [rsp+80h] [rbp-68h]
  __int8 v92; // [rsp+84h] [rbp-64h]
  char v93; // [rsp+88h] [rbp-60h]
  __int16 v94; // [rsp+90h] [rbp-58h]
  __m128 v95; // [rsp+98h] [rbp-50h]
  char v96; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v16 = sub_1DF6720(a1, *(_WORD **)(a2 + 8), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
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
  sub_1DC82F0((__int64)&v83, a1, *(unsigned int *)(a2 + 4), v18, v17, 0, a3, a4);
  if ( (_BYTE)v84 )
    return 1;
  v24 = *(_QWORD *)(a2 + 32);
  v25 = v83.m128i_i64[1];
  v74 = v83.m128i_i64[0];
  v26 = sub_1DC71F0(a1, v24, v19, v20, v21, v22, a3, a4);
  if ( v26 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v29 = 0;
  v30 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFELL;
  v31 = *a1;
  v32 = v30;
  if ( v30 )
    v29 = (unsigned int)sub_C00A40(v30, v24, 0, v27, v28);
  v33 = sub_19B4A30(v31, v32, v29, 1, 0, 0, a3, a4);
  v34 = *(_QWORD *)(a2 + 32);
  v35 = v33 & 0xFFFFFFFFFFFFFFFELL;
  v36 = v35;
  if ( v34 )
  {
    if ( !v35 )
      return 1;
  }
  v37 = *(const __m128i **)(*a1 + 744);
  v38 = v37[2].m128i_i32[0];
  v39 = v37[4].m128i_i8[0] == 0;
  v87 = v37;
  v88 = v38;
  v40 = v37[2].m128i_i64[1];
  v93 = 0;
  v89 = v40;
  if ( v39 )
  {
    v41 = (__int64)v37;
  }
  else
  {
    v91 = v37[3].m128i_u32[2];
    if ( v91 > 0x40 )
    {
      v80 = v37;
      sub_2205510(&v90);
      v34 = *(_QWORD *)(a2 + 32);
      v37 = v80;
      v41 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v41 = (__int64)v37;
      v90 = v37[3].m128i_i64[0];
    }
    v69 = v37[3].m128i_i8[12];
    v93 = 1;
    v92 = v69;
  }
  v42 = v37[4].m128i_i16[4];
  v43 = *(_DWORD *)(a2 + 4);
  v44 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v45 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v46 = (__m128)_mm_loadu_si128(v37 + 5);
  v96 = 1;
  v94 = v42;
  v47 = *(_QWORD *)(a2 + 24);
  v95 = v46;
  sub_1AAA420(v41, v43, *(_QWORD *)(a2 + 8), v45, v47, v44, v34, v32);
  v53 = sub_1DF6720(a1, *(_WORD **)(a2 + 40), nullptr, v46, a4, a5, a6, v51, v52, a9, a10, v48, v49, v50);
  if ( v53 != 1 )
  {
    v79 = v53;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v53, *(double *)v46.m128_u64);
    v54 = *a1;
    v55 = v79 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || v45 != *(_QWORD *)(a2 + 8) )
      goto LABEL_19;
    v82 = v79 & 0xFFFFFFFFFFFFFFFELL;
    v81 = *(_QWORD *)(a2 + 24);
    v72 = sub_EEE130(a2);
    v55 = v82;
    if ( v44 != v81 || v72 != v74 || v32 != *(_QWORD *)(a2 + 32) || *(_QWORD *)(a2 + 40) != v82 )
    {
      v54 = *a1;
LABEL_19:
      v56 = *(_DWORD *)(a2 + 48);
      v57 = *(unsigned int *)(a2 + 4);
      v85 = _mm_load_si128(&v83);
      v58 = *(_DWORD *)(a2 + 52);
      v86 = v84;
      v53 = sub_1C4D120(
              v54,
              v57,
              v56,
              v45,
              v36,
              v58,
              *(double *)v46.m128_u64,
              v85.m128i_i64[0],
              v85.m128i_i64[1],
              v84,
              v55);
      goto LABEL_20;
    }
    v53 = a2;
  }
LABEL_20:
  v59 = v87;
  if ( v96 )
  {
    v60 = v87[4].m128i_i8[8];
    v61 = v87[5].m128i_i8[12];
    v62 = (v87[2].m128i_i8[0] & 2) != 0;
  }
  else
  {
    v60 = v94;
    v61 = v95.m128_i8[12];
    v62 = (v88 & 2) != 0;
  }
  v39 = v87[4].m128i_i8[0] == 0;
  v63 = v87 + 3;
  v87[2].m128i_i32[0] = v88;
  v59[2].m128i_i64[1] = v89;
  if ( v39 )
  {
    if ( v93 )
    {
      v70 = v91;
      v59[3].m128i_i32[2] = v91;
      if ( v70 > 0x40 )
      {
        v78 = v53;
        sub_2205510(v63);
        v66 = v87;
        v53 = v78;
      }
      else
      {
        v59[3].m128i_i64[0] = v90;
        v66 = v59;
      }
      v71 = v92;
      v59[4].m128i_i8[0] = 1;
      v59[3].m128i_i8[12] = v71;
      goto LABEL_27;
    }
  }
  else
  {
    v64 = v59[3].m128i_u32[2];
    if ( v93 )
    {
      if ( v64 <= 0x40 && v91 <= 0x40 )
      {
        v73 = v90;
        v59[3].m128i_i32[2] = v91;
        v66 = v59;
        v59[3].m128i_i64[0] = v73;
      }
      else
      {
        v77 = v53;
        sub_22056A0(v63, &v90);
        v66 = v87;
        v53 = v77;
      }
      v59[3].m128i_i8[12] = v92;
      goto LABEL_27;
    }
    v59[4].m128i_i8[0] = 0;
    if ( v64 > 0x40 )
    {
      v65 = (void *)v59[3].m128i_i64[0];
      v66 = v59;
      if ( v65 )
      {
        v75 = v53;
        operator delete[](v65);
        v66 = v87;
        v53 = v75;
      }
      goto LABEL_27;
    }
  }
  v66 = v59;
LABEL_27:
  v76 = v53;
  v59[4].m128i_i16[4] = v94;
  v66[5].m128i_i64[0] = v95.m128_u64[0];
  v66[5].m128i_i32[2] = v95.m128_i32[2];
  v67 = v95.m128_i16[6];
  v66[4].m128i_i8[8] = v60;
  v66[5].m128i_i16[6] = v67;
  LOBYTE(v67) = 2 * v62;
  v68 = v66[2].m128i_i8[0];
  v66[5].m128i_i8[12] = v61;
  v66[2].m128i_i8[0] = v67 | v68 & 0xFD;
  sub_98E4B0((__int64)&v90);
  return v76;
}
