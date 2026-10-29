void __fastcall sub_F41560(__int64 a1, __int64 (__fastcall *a2)(), __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  __m128i si128; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm5
  __m128i *v19; // rdx
  __m128i v20; // xmm0
  void (__fastcall *v21)(__m128i *, __m128i *, __int64); // rax
  __int64 v22; // rdx
  __m128i *v23; // rdi
  __m128i v24; // xmm2
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm3
  __m128i *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rdi
  void (__fastcall *v36)(__int64, __int64, __int64); // rax
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v39; // rbp
  size_t v40; // rax
  __int64 (__fastcall *v41)(); // [rsp+0h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+8h] [rbp-F0h]
  __m128 v43; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v44; // [rsp+20h] [rbp-D8h] BYREF
  __m128 v45; // [rsp+30h] [rbp-C8h]
  __int64 v46; // [rsp+40h] [rbp-B8h]
  __m128i v47; // [rsp+48h] [rbp-B0h] BYREF
  void *v48; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-98h]
  __m128i v50; // [rsp+68h] [rbp-90h] BYREF
  __int64 v51; // [rsp+80h] [rbp-78h] BYREF
  __m128i v52; // [rsp+88h] [rbp-70h] BYREF
  void *v53; // [rsp+98h] [rbp-60h]
  __int64 v54; // [rsp+A0h] [rbp-58h]
  __m128i v55[5]; // [rsp+A8h] [rbp-50h] BYREF

  v7 = *(_BYTE *)(a1 + 1056) == 0;
  v41 = a2;
  v42 = a1;
  v43 = _mm_loadh_ps((const double *)&v41);
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    ((void (__fastcall *)(__m128 *, unsigned __int16 *, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(), __int64))sub_F41D90)(
      &v43,
      &v43.m128_u16[4],
      a3,
      a4,
      a5,
      a6,
      v41,
      v42);
    v30 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v30 )
    {
      v31 = *(_QWORD *)(a1 + 16);
      LOBYTE(v51) = 1;
      v32 = v31 + 32 * v30 - 32;
      if ( !*(_QWORD *)(v32 + 16) )
        goto LABEL_33;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v32 + 24))(v32, &v51);
        v34 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v34;
        v35 = *(_QWORD *)(a1 + 16) + 32 * v34;
        v36 = *(void (__fastcall **)(__int64, __int64, __int64))(v35 + 16);
        if ( v36 )
          v36(v35, v35, 3);
        v37 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v37 )
          break;
        v33 = *(_QWORD *)(a1 + 16);
        LOBYTE(v51) = 1;
        v32 = v33 + 32 * v37 - 32;
        if ( !*(_QWORD *)(v32 + 16) )
          goto LABEL_33;
      }
    }
    v38 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v38 = 0;
    v39 = *(_QWORD *)a1;
    v40 = j__strlen("\n");
    sub_9954E0(v39, "\n", v40);
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  si128 = _mm_load_si128((const __m128i *)&v43);
  v46 = a1;
  v47 = si128;
  v48 = &v50;
  sub_F24710(&v48, &byte_22F0C30, (__int64)&byte_22F0C30);
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v24 = _mm_loadu_si128(&v47);
    v51 = v46;
    v53 = v55;
    v52 = v24;
    if ( v48 == &v50 )
    {
      v55[0] = _mm_loadu_si128(&v50);
    }
    else
    {
      v53 = v48;
      v55[0].m128i_i64[0] = v50.m128i_i64[0];
    }
    v25 = v49;
    v49 = 0;
    v50.m128i_i8[0] = 0;
    v54 = v25;
    v48 = &v50;
    v45.m128_u64[0] = 0;
    v26 = operator new(0x38u);
    v27 = _mm_loadu_si128(&v52);
    *(_QWORD *)v26 = v51;
    *(_QWORD *)(v26 + 24) = v26 + 40;
    v28 = (__m128i *)v53;
    *(__m128i *)(v26 + 8) = v27;
    if ( v28 == v55 )
    {
      *(__m128i *)(v26 + 40) = _mm_loadu_si128(v55);
    }
    else
    {
      *(_QWORD *)(v26 + 24) = v28;
      *(_QWORD *)(v26 + 40) = v55[0].m128i_i64[0];
    }
    v29 = v54;
    v44.m128i_i64[0] = v26;
    v54 = 0;
    *(_QWORD *)(v26 + 32) = v29;
    v41 = sub_F41F50;
    v53 = v55;
    v55[0].m128i_i8[0] = 0;
    v45 = _mm_loadh_ps((const double *)&v41);
    sub_ACD330(a1 + 16, &v44);
    v21 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v45.m128_u64[0];
    if ( v45.m128_u64[0] )
      goto LABEL_9;
    goto LABEL_10;
  }
  v12 = *(unsigned int *)(a1 + 24);
  v13 = *(_QWORD *)(a1 + 16);
  v44.m128i_i8[0] = 0;
  v14 = v13 + 32 * v12 - 32;
  if ( !*(_QWORD *)(v14 + 16) )
LABEL_33:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(), __int64, unsigned __int64, __int64))(v14 + 24))(
    v14,
    &v44,
    v13,
    v9,
    v10,
    v11,
    v41,
    v42,
    v43.m128_u64[0],
    v43.m128_i64[1]);
  v15 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  v52 = _mm_loadu_si128(&v47);
  v51 = v46;
  v53 = v55;
  if ( v48 == &v50 )
  {
    v55[0] = _mm_loadu_si128(&v50);
  }
  else
  {
    v53 = v48;
    v55[0].m128i_i64[0] = v50.m128i_i64[0];
  }
  v16 = v49;
  v49 = 0;
  v50.m128i_i8[0] = 0;
  v54 = v16;
  v48 = &v50;
  v45.m128_u64[0] = 0;
  v17 = operator new(0x38u);
  v18 = _mm_loadu_si128(&v52);
  *(_QWORD *)v17 = v51;
  *(_QWORD *)(v17 + 24) = v17 + 40;
  v19 = (__m128i *)v53;
  *(__m128i *)(v17 + 8) = v18;
  if ( v19 == v55 )
  {
    *(__m128i *)(v17 + 40) = _mm_loadu_si128(v55);
  }
  else
  {
    *(_QWORD *)(v17 + 24) = v19;
    *(_QWORD *)(v17 + 40) = v55[0].m128i_i64[0];
  }
  v44.m128i_i64[0] = v17;
  v55[0].m128i_i8[0] = 0;
  v20 = _mm_load_si128(&v44);
  *(_QWORD *)(v17 + 32) = v54;
  v53 = v55;
  v54 = 0;
  v44 = _mm_loadu_si128(v15);
  v21 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v15[1].m128i_i64[0];
  v22 = v15[1].m128i_i64[1];
  *v15 = v20;
  v45.m128_u64[0] = (unsigned __int64)v21;
  v15[1].m128i_i64[0] = (__int64)sub_F261E0;
  v45.m128_u64[1] = v22;
  v15[1].m128i_i64[1] = (__int64)sub_F41F50;
  if ( v21 )
LABEL_9:
    v21(&v44, &v44, 3);
LABEL_10:
  if ( v53 != v55 )
    operator delete(v53);
  v23 = (__m128i *)v48;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v23 != &v50 )
    operator delete(v23);
}
