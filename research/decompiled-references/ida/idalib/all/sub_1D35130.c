__int64 __fastcall sub_1D35130(
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
  unsigned __int16 *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int16 *v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rcx
  const __m128i *v34; // rax
  __int32 v35; // edx
  bool v36; // zf
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int16 v39; // dx
  unsigned int v40; // esi
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // rbp
  __m128 v43; // xmm0
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  double v48; // xmm4_8
  double v49; // xmm5_8
  unsigned __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  int v53; // edx
  __int64 v54; // rsi
  int v55; // r9d
  __int8 v56; // dl
  __int64 v57; // rax
  __int64 v58; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v59; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v60; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v61; // [rsp+10h] [rbp-D8h]
  const __m128i *v62; // [rsp+10h] [rbp-D8h]
  __int64 v63; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v64; // [rsp+18h] [rbp-D0h]
  __m128i v65; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+30h] [rbp-B8h]
  __m128i v67; // [rsp+40h] [rbp-A8h]
  __int64 v68; // [rsp+50h] [rbp-98h]
  const __m128i *v69; // [rsp+60h] [rbp-88h] BYREF
  __int32 v70; // [rsp+68h] [rbp-80h]
  __int64 v71; // [rsp+70h] [rbp-78h]
  __int64 v72; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v73; // [rsp+80h] [rbp-68h]
  __int8 v74; // [rsp+84h] [rbp-64h]
  char v75; // [rsp+88h] [rbp-60h]
  __int16 v76; // [rsp+90h] [rbp-58h]
  __m128 v77; // [rsp+98h] [rbp-50h]
  char v78; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v16 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 8), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v16 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v16 )
    sub_1B28470(
      *(__int64 **)(*a1 + 760),
      *(_DWORD *)(a2 + 4),
      (__int64 (__fastcall ***)())(v16 & 0xFFFFFFFFFFFFFFFELL),
      *(double *)a3.m128_u64,
      a4);
  v17 = *(unsigned __int16 **)(a2 + 24);
  v18 = sub_EEE130(a2);
  sub_1D1BD70((__int64)&v65, a1, *(unsigned int *)(a2 + 4), v18, v17, 0, a3, a4);
  if ( (_BYTE)v66 )
    return 1;
  v23 = *(unsigned __int16 **)(a2 + 32);
  v24 = v65.m128i_i64[1];
  v58 = v65.m128i_i64[0];
  v25 = sub_1D11200(a1, v23, a3, a4, v19, v20, v21);
  if ( v25 == 1 )
    return 1;
  v28 = 0;
  v29 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v30 = *a1;
  v31 = v29;
  if ( v29 )
    v28 = (unsigned int)sub_C00A40(v29, (__int64)v23, 0, v26, v27);
  v32 = sub_19B4A30(v30, v31, v28, 1, 0, 0, a3, a4);
  v33 = *(_QWORD *)(a2 + 32);
  v60 = v32 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v32 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
    if ( v33 )
      return 1;
  }
  v34 = *(const __m128i **)(*a1 + 744);
  v35 = v34[2].m128i_i32[0];
  v36 = v34[4].m128i_i8[0] == 0;
  v69 = v34;
  v70 = v35;
  v37 = v34[2].m128i_i64[1];
  v75 = 0;
  v71 = v37;
  if ( v36 )
  {
    v38 = (__int64)v34;
  }
  else
  {
    v73 = v34[3].m128i_u32[2];
    if ( v73 > 0x40 )
    {
      v62 = v34;
      sub_2205510(&v72);
      v33 = *(_QWORD *)(a2 + 32);
      v34 = v62;
      v38 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v38 = (__int64)v34;
      v72 = v34[3].m128i_i64[0];
    }
    v56 = v34[3].m128i_i8[12];
    v75 = 1;
    v74 = v56;
  }
  v39 = v34[4].m128i_i16[4];
  v40 = *(_DWORD *)(a2 + 4);
  v41 = v24 & 0xFFFFFFFFFFFFFFFELL;
  v42 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v43 = (__m128)_mm_loadu_si128(v34 + 5);
  v78 = 1;
  v76 = v39;
  v44 = *(_QWORD *)(a2 + 24);
  v77 = v43;
  sub_1AAA420(v38, v40, *(_QWORD *)(a2 + 8), v42, v44, v41, v33, v31);
  v50 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 40), nullptr, v43, a4, a5, a6, v48, v49, a9, a10, v45, v46, v47);
  if ( v50 != 1 )
  {
    v61 = v50;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v50, *(double *)v43.m128_u64);
    v51 = *a1;
    v52 = v61 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && v42 == *(_QWORD *)(a2 + 8) )
    {
      v64 = v61 & 0xFFFFFFFFFFFFFFFELL;
      v63 = *(_QWORD *)(a2 + 24);
      v57 = sub_EEE130(a2);
      v52 = v64;
      if ( v41 == v63 && v57 == v58 && v31 == *(_QWORD *)(a2 + 32) && *(_QWORD *)(a2 + 40) == v64 )
      {
        v50 = a2;
        goto LABEL_20;
      }
      v51 = *a1;
    }
    v53 = *(_DWORD *)(a2 + 48);
    v54 = *(unsigned int *)(a2 + 4);
    v67 = _mm_load_si128(&v65);
    v55 = *(_DWORD *)(a2 + 52);
    v68 = v66;
    v50 = sub_1C4D120(
            v51,
            v54,
            v53,
            v42,
            v60,
            v55,
            *(double *)v43.m128_u64,
            v67.m128i_i64[0],
            v67.m128i_i64[1],
            v66,
            v52);
  }
LABEL_20:
  v59 = v50;
  sub_15354C0((__int64)&v69);
  return v59;
}
