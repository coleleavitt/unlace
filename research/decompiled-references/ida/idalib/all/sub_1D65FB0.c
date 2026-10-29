__int64 __fastcall sub_1D65FB0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbp
  unsigned __int16 *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 *v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  const __m128i *v28; // rax
  __int32 v29; // edx
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int16 v33; // dx
  unsigned int v34; // esi
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rbp
  __m128 v37; // xmm0
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rsi
  int v47; // r9d
  __int8 v48; // dl
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v51; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v52; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v53; // [rsp+10h] [rbp-D8h]
  const __m128i *v54; // [rsp+10h] [rbp-D8h]
  __int64 v55; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v56; // [rsp+18h] [rbp-D0h]
  __m128i v57; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+30h] [rbp-B8h]
  __m128i v59; // [rsp+40h] [rbp-A8h]
  __int64 v60; // [rsp+50h] [rbp-98h]
  const __m128i *v61; // [rsp+60h] [rbp-88h] BYREF
  __int32 v62; // [rsp+68h] [rbp-80h]
  __int64 v63; // [rsp+70h] [rbp-78h]
  __int64 v64; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v65; // [rsp+80h] [rbp-68h]
  __int8 v66; // [rsp+84h] [rbp-64h]
  char v67; // [rsp+88h] [rbp-60h]
  __int16 v68; // [rsp+90h] [rbp-58h]
  __m128 v69; // [rsp+98h] [rbp-50h]
  char v70; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v10 = sub_1D42130(a1, *(_WORD **)(a2 + 8), 0, a3, a4, a6, a7, a8);
  if ( v10 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v10 )
    sub_1B28470(
      *(__int64 **)(*a1 + 760),
      *(_DWORD *)(a2 + 4),
      (__int64 (__fastcall ***)())(v10 & 0xFFFFFFFFFFFFFFFELL),
      *(double *)a3.m128_u64,
      a4);
  v11 = *(unsigned __int16 **)(a2 + 24);
  v12 = sub_EEE130(a2);
  sub_1D43BE0((__int64)&v57, a1, *(unsigned int *)(a2 + 4), v12, v11, 0, a3, a4);
  if ( (_BYTE)v58 )
    return 1;
  v17 = *(unsigned __int16 **)(a2 + 32);
  v18 = v57.m128i_i64[1];
  v50 = v57.m128i_i64[0];
  v19 = sub_1D434A0(a1, v17, a3, a4, v13, v14, v15);
  if ( v19 == 1 )
    return 1;
  v22 = 0;
  v23 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v24 = *a1;
  v25 = v23;
  if ( v23 )
    v22 = (unsigned int)sub_C00A40(v23, (__int64)v17, 0, v20, v21);
  v26 = sub_19B4A30(v24, v25, v22, 1, 0, 0, a3, a4);
  v27 = *(_QWORD *)(a2 + 32);
  v52 = v26 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v26 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
    if ( v27 )
      return 1;
  }
  v28 = *(const __m128i **)(*a1 + 744);
  v29 = v28[2].m128i_i32[0];
  v30 = v28[4].m128i_i8[0] == 0;
  v61 = v28;
  v62 = v29;
  v31 = v28[2].m128i_i64[1];
  v67 = 0;
  v63 = v31;
  if ( v30 )
  {
    v32 = (__int64)v28;
  }
  else
  {
    v65 = v28[3].m128i_u32[2];
    if ( v65 > 0x40 )
    {
      v54 = v28;
      sub_2205510(&v64);
      v27 = *(_QWORD *)(a2 + 32);
      v28 = v54;
      v32 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v32 = (__int64)v28;
      v64 = v28[3].m128i_i64[0];
    }
    v48 = v28[3].m128i_i8[12];
    v67 = 1;
    v66 = v48;
  }
  v33 = v28[4].m128i_i16[4];
  v34 = *(_DWORD *)(a2 + 4);
  v35 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v36 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v37 = (__m128)_mm_loadu_si128(v28 + 5);
  v70 = 1;
  v68 = v33;
  v38 = *(_QWORD *)(a2 + 24);
  v69 = v37;
  sub_1AAA420(v32, v34, *(_QWORD *)(a2 + 8), v36, v38, v35, v27, v25);
  v42 = sub_1D42130(a1, *(_WORD **)(a2 + 40), 0, v37, a4, v39, v40, v41);
  if ( v42 != 1 )
  {
    v53 = v42;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v42, *(double *)v37.m128_u64);
    v43 = *a1;
    v44 = v53 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && v36 == *(_QWORD *)(a2 + 8) )
    {
      v56 = v53 & 0xFFFFFFFFFFFFFFFELL;
      v55 = *(_QWORD *)(a2 + 24);
      v49 = sub_EEE130(a2);
      v44 = v56;
      if ( v35 == v55 && v49 == v50 && v25 == *(_QWORD *)(a2 + 32) && *(_QWORD *)(a2 + 40) == v56 )
      {
        v42 = a2;
        goto LABEL_20;
      }
      v43 = *a1;
    }
    v45 = *(_DWORD *)(a2 + 48);
    v46 = *(unsigned int *)(a2 + 4);
    v59 = _mm_load_si128(&v57);
    v47 = *(_DWORD *)(a2 + 52);
    v60 = v58;
    v42 = sub_1C4D120(
            v43,
            v46,
            v45,
            v36,
            v52,
            v47,
            *(double *)v37.m128_u64,
            v59.m128i_i64[0],
            v59.m128i_i64[1],
            v58,
            v44);
  }
LABEL_20:
  v51 = v42;
  sub_15354C0((__int64)&v61);
  return v51;
}
