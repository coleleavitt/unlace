__int64 __fastcall sub_199D900(
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
  __int64 v12; // rax
  unsigned __int16 *v14; // rsi
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  const __m128i *v25; // rax
  __int32 v26; // edx
  bool v27; // zf
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int16 v30; // dx
  int v31; // esi
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // rbp
  __m128 v34; // xmm0
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  int v41; // edx
  int v42; // esi
  int v43; // r9d
  __int64 v44; // rdi
  __int8 v45; // dl
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-E8h]
  __int64 v48; // [rsp+0h] [rbp-E8h]
  int v49; // [rsp+8h] [rbp-E0h]
  __int64 v50; // [rsp+10h] [rbp-D8h]
  const __m128i *v51; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v52; // [rsp+10h] [rbp-D8h]
  __int64 v53; // [rsp+18h] [rbp-D0h]
  __m128i v54; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+30h] [rbp-B8h]
  __m128i v56; // [rsp+40h] [rbp-A8h]
  __int64 v57; // [rsp+50h] [rbp-98h]
  const __m128i *v58; // [rsp+60h] [rbp-88h] BYREF
  __int32 v59; // [rsp+68h] [rbp-80h]
  __int64 v60; // [rsp+70h] [rbp-78h]
  __int64 v61; // [rsp+78h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+80h] [rbp-68h]
  __int8 v63; // [rsp+84h] [rbp-64h]
  char v64; // [rsp+88h] [rbp-60h]
  __int16 v65; // [rsp+90h] [rbp-58h]
  __m128 v66; // [rsp+98h] [rbp-50h]
  char v67; // [rsp+A8h] [rbp-40h]

  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) )
    sub_1AF3220(*(_QWORD *)(*a1 + 760));
  v10 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 8), 0, a3, a4, a6, a7, a8);
  if ( v10 == 1 )
    return 1;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 232) + 64LL) && v10 )
    sub_1B28470(*(_QWORD *)(*a1 + 760), *(unsigned int *)(a2 + 4), v10 & 0xFFFFFFFFFFFFFFFELL);
  v11 = *(unsigned __int16 **)(a2 + 24);
  v12 = sub_EEE130(a2);
  sub_197B180((__int64)&v54, a1, *(_DWORD *)(a2 + 4), v12, v11, 0, a3, a4);
  if ( (_BYTE)v55 )
    return 1;
  v14 = *(unsigned __int16 **)(a2 + 32);
  v15 = v54.m128i_i64[1];
  v47 = v54.m128i_i64[0];
  v16 = sub_190CCA0(a1, v14, *(double *)a3.m128_u64, a4);
  if ( v16 == 1 )
    return 1;
  v19 = 0;
  v20 = v16 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *a1;
  v22 = v20;
  if ( v20 )
    v19 = (unsigned int)sub_C00A40(v20, (__int64)v14, 0, v17, v18);
  v23 = sub_19B4A30(v21, v22, v19, 1, 0, 0);
  v24 = *(_QWORD *)(a2 + 32);
  v49 = v23 & 0xFFFFFFFE;
  if ( (v23 & 0xFFFFFFFFFFFFFFFELL) == 0 )
  {
    if ( v24 )
      return 1;
  }
  v25 = *(const __m128i **)(*a1 + 744);
  v26 = v25[2].m128i_i32[0];
  v27 = v25[4].m128i_i8[0] == 0;
  v58 = v25;
  v59 = v26;
  v28 = v25[2].m128i_i64[1];
  v64 = 0;
  v60 = v28;
  if ( v27 )
  {
    LODWORD(v29) = (_DWORD)v25;
  }
  else
  {
    v62 = v25[3].m128i_u32[2];
    if ( v62 > 0x40 )
    {
      v51 = v25;
      sub_2205510(&v61);
      v24 = *(_QWORD *)(a2 + 32);
      v25 = v51;
      v29 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      LODWORD(v29) = (_DWORD)v25;
      v61 = v25[3].m128i_i64[0];
    }
    v45 = v25[3].m128i_i8[12];
    v64 = 1;
    v63 = v45;
  }
  v30 = v25[4].m128i_i16[4];
  v31 = *(_DWORD *)(a2 + 4);
  v32 = v15 & 0xFFFFFFFFFFFFFFFELL;
  v33 = v10 & 0xFFFFFFFFFFFFFFFELL;
  v34 = (__m128)_mm_loadu_si128(v25 + 5);
  v67 = 1;
  v65 = v30;
  v35 = *(_QWORD *)(a2 + 24);
  v66 = v34;
  sub_1AAA420(v29, v31, *(_QWORD *)(a2 + 8), v33, v35, v32, v24, v22);
  v39 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 40), 0, v34, a4, v36, v37, v38);
  if ( v39 != 1 )
  {
    v50 = v39;
    sub_1AA5CB0(*(_QWORD *)(*a1 + 744), *(unsigned int *)(a2 + 4), v39);
    v40 = v50 & 0xFFFFFFFFFFFFFFFELL;
    if ( v33 == *(_QWORD *)(a2 + 8)
      && (v52 = v50 & 0xFFFFFFFFFFFFFFFELL, v53 = *(_QWORD *)(a2 + 24), v46 = sub_EEE130(a2), v40 = v52, v46 == v47)
      && v32 == v53
      && v22 == *(_QWORD *)(a2 + 32)
      && *(_QWORD *)(a2 + 40) == v52 )
    {
      v39 = a2;
    }
    else
    {
      v41 = *(_DWORD *)(a2 + 48);
      v42 = *(_DWORD *)(a2 + 4);
      v56 = _mm_load_si128(&v54);
      v43 = *(_DWORD *)(a2 + 52);
      v44 = *a1;
      v57 = v55;
      v39 = sub_1C4D120(v44, v42, v41, v33, v49, v43, v56.m128i_i64[0], v56.m128i_i64[1], v55, v40);
    }
  }
  v48 = v39;
  sub_15354C0((__int64)&v58);
  return v48;
}
