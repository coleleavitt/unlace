void __fastcall sub_F3F2B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm3
  __m128i *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __m128i *v18; // rdx
  __m128i v19; // xmm0
  void (__fastcall *v20)(__m128i *, __m128i *, __int64); // rax
  __int64 v21; // rdx
  __m128i *v22; // rdi
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm5
  __m128i v28; // xmm6
  __m128i *v29; // rdx
  __int64 v30; // rdx
  bool v31; // zf
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdi
  void (__fastcall *v39)(__int64, __int64, __int64); // rax
  __int64 v40; // rax
  _BYTE *v41; // rax
  __int64 v42; // rax
  _BYTE *v43; // rdx
  void (__fastcall *v44)(__int64 ***, char *); // [rsp+8h] [rbp-100h] BYREF
  __m128i v45; // [rsp+10h] [rbp-F8h] BYREF
  __m128 v46; // [rsp+20h] [rbp-E8h]
  __int64 v47; // [rsp+30h] [rbp-D8h]
  __m128i v48; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v49; // [rsp+48h] [rbp-C0h] BYREF
  void *v50; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __m128i v52; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  __m128i v54; // [rsp+88h] [rbp-80h] BYREF
  __m128i v55; // [rsp+98h] [rbp-70h] BYREF
  void *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  __m128i v58[5]; // [rsp+B8h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    v31 = *((_QWORD *)&a7 + 1) == 0;
    v32 = a8;
    *(_BYTE *)(a1 + 1056) = 0;
    if ( !v31 )
    {
      v42 = sub_9954E0(*(_QWORD *)(v32 + 1096), (const void *)a7, *((size_t *)&a7 + 1));
      v43 = *(_BYTE **)(v42 + 32);
      if ( (unsigned __int64)v43 >= *(_QWORD *)(v42 + 24) )
      {
        sub_227BA10(v42, 32);
      }
      else
      {
        *(_QWORD *)(v42 + 32) = v43 + 1;
        *v43 = 32;
      }
    }
    sub_F2A6D0(v32, *((__int64 *)&a8 + 1));
    v33 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v33 )
    {
      v34 = *(_QWORD *)(a1 + 16);
      LOBYTE(v53) = 1;
      v35 = v34 + 32 * v33 - 32;
      if ( !*(_QWORD *)(v35 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v35 + 24))(v35, &v53);
        v37 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v37;
        v38 = *(_QWORD *)(a1 + 16) + 32 * v37;
        v39 = *(void (__fastcall **)(__int64, __int64, __int64))(v38 + 16);
        if ( v39 )
          v39(v38, v38, 3);
        v40 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v40 )
          break;
        v36 = *(_QWORD *)(a1 + 16);
        LOBYTE(v53) = 1;
        v35 = v36 + 32 * v40 - 32;
        if ( !*(_QWORD *)(v35 + 16) )
          goto LABEL_37;
      }
    }
    v41 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v41 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v47 = a1;
  v48 = _mm_loadu_si128((const __m128i *)&a7);
  v49 = _mm_loadu_si128((const __m128i *)&a8);
  v50 = &v52;
  sub_F24710(&v50, &byte_22F0C30, (__int64)(&byte_22F0C30 + a3));
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v23 = _mm_loadu_si128(&v48);
    v24 = _mm_loadu_si128(&v49);
    v53 = v47;
    v56 = v58;
    v54 = v23;
    v55 = v24;
    if ( v50 == &v52 )
    {
      v58[0] = _mm_loadu_si128(&v52);
    }
    else
    {
      v56 = v50;
      v58[0].m128i_i64[0] = v52.m128i_i64[0];
    }
    v25 = v51;
    v51 = 0;
    v52.m128i_i8[0] = 0;
    v57 = v25;
    v50 = &v52;
    v46.m128_u64[0] = 0;
    v26 = operator new(0x48u);
    v27 = _mm_loadu_si128(&v54);
    v28 = _mm_loadu_si128(&v55);
    *(_QWORD *)v26 = v53;
    *(_QWORD *)(v26 + 40) = v26 + 56;
    v29 = (__m128i *)v56;
    *(__m128i *)(v26 + 8) = v27;
    *(__m128i *)(v26 + 24) = v28;
    if ( v29 == v58 )
    {
      *(__m128i *)(v26 + 56) = _mm_loadu_si128(v58);
    }
    else
    {
      *(_QWORD *)(v26 + 40) = v29;
      *(_QWORD *)(v26 + 56) = v58[0].m128i_i64[0];
    }
    v30 = v57;
    v45.m128i_i64[0] = v26;
    v57 = 0;
    *(_QWORD *)(v26 + 48) = v30;
    v44 = sub_F32530;
    v56 = v58;
    v58[0].m128i_i8[0] = 0;
    v46 = _mm_loadh_ps((const double *)&v44);
    sub_ACD330(a1 + 16, &v45);
    if ( v46.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128_u64[0])(&v45, &v45, 3);
    goto LABEL_10;
  }
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  v45.m128i_i8[0] = 0;
  v11 = v10 + 32 * v9 - 32;
  if ( !*(_QWORD *)(v11 + 16) )
LABEL_37:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v11 + 24))(v11, &v45);
  v12 = _mm_loadu_si128(&v49);
  v13 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  v54 = _mm_loadu_si128(&v48);
  v55 = v12;
  v53 = v47;
  v56 = v58;
  if ( v50 == &v52 )
  {
    v58[0] = _mm_loadu_si128(&v52);
  }
  else
  {
    v56 = v50;
    v58[0].m128i_i64[0] = v52.m128i_i64[0];
  }
  v14 = v51;
  v51 = 0;
  v52.m128i_i8[0] = 0;
  v57 = v14;
  v50 = &v52;
  v46.m128_u64[0] = 0;
  v15 = operator new(0x48u);
  v16 = _mm_loadu_si128(&v54);
  v17 = _mm_loadu_si128(&v55);
  *(_QWORD *)v15 = v53;
  *(_QWORD *)(v15 + 40) = v15 + 56;
  v18 = (__m128i *)v56;
  *(__m128i *)(v15 + 8) = v16;
  *(__m128i *)(v15 + 24) = v17;
  if ( v18 == v58 )
  {
    *(__m128i *)(v15 + 56) = _mm_loadu_si128(v58);
  }
  else
  {
    *(_QWORD *)(v15 + 40) = v18;
    *(_QWORD *)(v15 + 56) = v58[0].m128i_i64[0];
  }
  v45.m128i_i64[0] = v15;
  v58[0].m128i_i8[0] = 0;
  v19 = _mm_load_si128(&v45);
  *(_QWORD *)(v15 + 48) = v57;
  v56 = v58;
  v57 = 0;
  v45 = _mm_loadu_si128(v13);
  v20 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v13[1].m128i_i64[0];
  v21 = v13[1].m128i_i64[1];
  *v13 = v19;
  v46.m128_u64[0] = (unsigned __int64)v20;
  v13[1].m128i_i64[0] = (__int64)sub_F26110;
  v46.m128_u64[1] = v21;
  v13[1].m128i_i64[1] = (__int64)sub_F32530;
  if ( v20 )
    v20(&v45, &v45, 3);
LABEL_10:
  if ( v56 != v58 )
    operator delete(v56);
  v22 = (__m128i *)v50;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v22 != &v52 )
    operator delete(v22);
}
