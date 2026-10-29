__int64 __fastcall sub_1BA4520(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // r12
  unsigned __int16 *v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int16 *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  int v29; // r14d
  const __m128i *v30; // rax
  __int32 v31; // edx
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int16 v35; // dx
  unsigned int v36; // esi
  unsigned __int64 v37; // r12
  __m128 v38; // xmm0
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  int v45; // edx
  __m128i v46; // xmm1
  int v47; // esi
  int v48; // r9d
  __int64 v49; // rdi
  __int64 v50; // r12
  __int8 v51; // dl
  __int64 v52; // [rsp+0h] [rbp-D8h]
  const __m128i *v53; // [rsp+0h] [rbp-D8h]
  __m128i v54; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+20h] [rbp-B8h]
  __m128i v56; // [rsp+30h] [rbp-A8h]
  __int64 v57; // [rsp+40h] [rbp-98h]
  const __m128i *v58; // [rsp+50h] [rbp-88h] BYREF
  __int32 v59; // [rsp+58h] [rbp-80h]
  __int64 v60; // [rsp+60h] [rbp-78h]
  __int64 v61; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+70h] [rbp-68h]
  __int8 v63; // [rsp+74h] [rbp-64h]
  char v64; // [rsp+78h] [rbp-60h]
  __int16 v65; // [rsp+80h] [rbp-58h]
  __m128 v66; // [rsp+88h] [rbp-50h]
  char v67; // [rsp+98h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
  {
    v50 = *(_QWORD *)(*a1 + 760);
    sub_1AE5FF0(*(_QWORD *)(v50 + 8));
    if ( def_FFDDA1() )
      *(_BYTE *)(sub_1AE5FF0(*(_QWORD *)(v50 + 8)) + 1107) = 1;
  }
  v10 = sub_1B7AA40(a1, *(_WORD **)(a2 + 8), 0, a3, a4, a6, a7, a8);
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
  sub_1B7D0C0((__int64)&v54, a1, *(unsigned int *)(a2 + 4), v12, v11, 0, a3, a4);
  if ( (_BYTE)v55 )
    return 1;
  v17 = *(unsigned __int16 **)(a2 + 32);
  v18 = v54.m128i_i64[1];
  v19 = sub_1B7CAD0(a1, v17, a3, a4, v13, v14, v15);
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
  v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
  v29 = v28;
  if ( v27 )
  {
    if ( !v28 )
      return 1;
  }
  v30 = *(const __m128i **)(*a1 + 744);
  v31 = v30[2].m128i_i32[0];
  v32 = v30[4].m128i_i8[0] == 0;
  v58 = v30;
  v59 = v31;
  v33 = v30[2].m128i_i64[1];
  v64 = 0;
  v60 = v33;
  if ( v32 )
  {
    v34 = (__int64)v30;
  }
  else
  {
    v62 = v30[3].m128i_u32[2];
    if ( v62 > 0x40 )
    {
      v53 = v30;
      sub_2205510(&v61);
      v27 = *(_QWORD *)(a2 + 32);
      v30 = v53;
      v34 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v34 = (__int64)v30;
      v61 = v30[3].m128i_i64[0];
    }
    v51 = v30[3].m128i_i8[12];
    v64 = 1;
    v63 = v51;
  }
  v35 = v30[4].m128i_i16[4];
  v36 = *(_DWORD *)(a2 + 4);
  v37 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v38 = (__m128)_mm_loadu_si128(v30 + 5);
  v67 = 1;
  v65 = v35;
  v39 = *(_QWORD *)(a2 + 24);
  v66 = v38;
  sub_1AAA420(v34, v36, *(_QWORD *)(a2 + 8), v37, v39, v18 & 0xFFFFFFFFFFFFFFFELL, v27, v25);
  v43 = sub_1B7AA40(a1, *(_WORD **)(a2 + 40), 0, v38, a4, v40, v41, v42);
  v44 = 1;
  if ( v43 != 1 )
  {
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), (void **)*(unsigned int *)(a2 + 4), v43, *(double *)v38.m128_u64);
    v45 = *(_DWORD *)(a2 + 48);
    v46 = _mm_load_si128(&v54);
    v47 = *(_DWORD *)(a2 + 4);
    v48 = *(_DWORD *)(a2 + 52);
    v49 = *a1;
    v57 = v55;
    v56 = v46;
    v44 = sub_1C4D120(v49, v47, v45, v37, v29, v48, v46.m128i_i64[0], v46.m128i_i64[1], v55, v43 & 0xFFFFFFFFFFFFFFFELL);
  }
  v52 = v44;
  sub_15354C0((__int64)&v58);
  return v52;
}
