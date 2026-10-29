void __fastcall sub_F3FF70(__int64 a1, _QWORD *a2)
{
  _WORD *v3; // rbp
  size_t v4; // rax
  __m128i si128; // xmm0
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm4
  __m128i *v18; // rdx
  __m128i v19; // xmm0
  void (__fastcall *v20)(__m128i *, __m128i *, __int64); // rax
  __int64 v21; // rdx
  __m128i *v22; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // xmm2
  __m128i *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r12
  __int64 v30; // r13
  const char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rdi
  void (__fastcall *v38)(__int64, __int64, __int64); // rax
  __int64 v39; // rax
  _BYTE *v40; // rax
  const char *v41; // rax
  __m128 v42; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v43; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v44; // [rsp+20h] [rbp-C8h]
  __int64 v45; // [rsp+30h] [rbp-B8h]
  __m128i v46; // [rsp+38h] [rbp-B0h] BYREF
  void *v47; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-98h]
  __m128i v49; // [rsp+58h] [rbp-90h] BYREF
  __m256i v50; // [rsp+70h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-58h]
  __m128i v52[5]; // [rsp+98h] [rbp-50h] BYREF

  v3 = (_WORD *)(*a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*a2 & 4) == 0 )
  {
    v42.m128_u64[0] = *a2 & 0xFFFFFFFFFFFFFFF8LL;
    v42 = _mm_loadh_ps((const double *)v42.m128_u64);
    v4 = j__strlen("cleanup");
    si128 = _mm_load_si128((const __m128i *)&v42);
    v50.m256i_i64[0] = (__int64)"cleanup";
    *(__m128i *)&v50.m256i_u64[2] = si128;
    v50.m256i_i64[1] = v4;
    v6 = j__strlen(&byte_22F0C30);
    sub_F3F2B0(a1, (__int64)&byte_22F0C30, v6, v7, v8, v9, *(__int128 *)v50.m256i_i8, *(__int128 *)&v50.m256i_u64[2]);
    return;
  }
  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_995540(*(_QWORD *)(a1 + 1096), "cleanup ");
    v29 = *(_QWORD *)(a1 + 1096);
    if ( *(_BYTE *)(a1 + 1104) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v29 + 24LL))(
        *(_QWORD *)(a1 + 1096),
        5,
        1,
        0);
      v30 = *(_QWORD *)(a1 + 1096);
      v31 = (const char *)sub_EE9730(v3);
      sub_995540(v30, v31);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL))(v29);
    }
    else
    {
      v41 = (const char *)sub_EE9730(v3);
      sub_995540(v29, v41);
    }
    sub_F29AE0(a1, (__int64)v3);
    v32 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v32 )
    {
      v33 = *(_QWORD *)(a1 + 16);
      v50.m256i_i8[0] = 1;
      v34 = v33 + 32 * v32 - 32;
      if ( !*(_QWORD *)(v34 + 16) )
        goto LABEL_38;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m256i *))(v34 + 24))(v34, &v50);
        v36 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v36;
        v37 = *(_QWORD *)(a1 + 16) + 32 * v36;
        v38 = *(void (__fastcall **)(__int64, __int64, __int64))(v37 + 16);
        if ( v38 )
          v38(v37, v37, 3);
        v39 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v39 )
          break;
        v35 = *(_QWORD *)(a1 + 16);
        v50.m256i_i8[0] = 1;
        v34 = v35 + 32 * v39 - 32;
        if ( !*(_QWORD *)(v34 + 16) )
          goto LABEL_38;
      }
    }
    v40 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v40 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v10 = j__strlen(&byte_22F0C30);
  v45 = a1;
  v46.m128i_i64[0] = a1;
  v46.m128i_i64[1] = (__int64)v3;
  v47 = &v49;
  sub_F24710(&v47, &byte_22F0C30, (__int64)(&byte_22F0C30 + v10));
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v23 = _mm_loadu_si128(&v46);
    v50.m256i_i64[0] = v45;
    v50.m256i_i64[3] = (__int64)v52;
    *(__m128i *)&v50.m256i_u64[1] = v23;
    if ( v47 == &v49 )
    {
      v52[0] = _mm_loadu_si128(&v49);
    }
    else
    {
      v50.m256i_i64[3] = (__int64)v47;
      v52[0].m128i_i64[0] = v49.m128i_i64[0];
    }
    v24 = v48;
    v48 = 0;
    v49.m128i_i8[0] = 0;
    v51 = v24;
    v47 = &v49;
    v44.m128_u64[0] = 0;
    v25 = operator new(0x38u);
    v26 = _mm_loadu_si128((const __m128i *)&v50.m256i_u64[1]);
    *(_QWORD *)v25 = v50.m256i_i64[0];
    *(_QWORD *)(v25 + 24) = v25 + 40;
    v27 = (__m128i *)v50.m256i_i64[3];
    *(__m128i *)(v25 + 8) = v26;
    if ( v27 == v52 )
    {
      *(__m128i *)(v25 + 40) = _mm_loadu_si128(v52);
    }
    else
    {
      *(_QWORD *)(v25 + 24) = v27;
      *(_QWORD *)(v25 + 40) = v52[0].m128i_i64[0];
    }
    v28 = v51;
    v43.m128i_i64[0] = v25;
    v51 = 0;
    *(_QWORD *)(v25 + 32) = v28;
    v42.m128_u64[0] = (unsigned __int64)sub_F328E0;
    v50.m256i_i64[3] = (__int64)v52;
    v52[0].m128i_i8[0] = 0;
    v44 = _mm_loadh_ps((const double *)v42.m128_u64);
    sub_ACD330(a1 + 16, &v43);
    if ( v44.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44.m128_u64[0])(&v43, &v43, 3);
    goto LABEL_13;
  }
  v11 = *(unsigned int *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 16);
  v43.m128i_i8[0] = 0;
  v13 = v12 + 32 * v11 - 32;
  if ( !*(_QWORD *)(v13 + 16) )
LABEL_38:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v13 + 24))(v13, &v43);
  v14 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  *(__m128i *)&v50.m256i_u64[1] = _mm_loadu_si128(&v46);
  v50.m256i_i64[0] = v45;
  v50.m256i_i64[3] = (__int64)v52;
  if ( v47 == &v49 )
  {
    v52[0] = _mm_loadu_si128(&v49);
  }
  else
  {
    v50.m256i_i64[3] = (__int64)v47;
    v52[0].m128i_i64[0] = v49.m128i_i64[0];
  }
  v15 = v48;
  v48 = 0;
  v49.m128i_i8[0] = 0;
  v51 = v15;
  v47 = &v49;
  v44.m128_u64[0] = 0;
  v16 = operator new(0x38u);
  v17 = _mm_loadu_si128((const __m128i *)&v50.m256i_u64[1]);
  *(_QWORD *)v16 = v50.m256i_i64[0];
  *(_QWORD *)(v16 + 24) = v16 + 40;
  v18 = (__m128i *)v50.m256i_i64[3];
  *(__m128i *)(v16 + 8) = v17;
  if ( v18 == v52 )
  {
    *(__m128i *)(v16 + 40) = _mm_loadu_si128(v52);
  }
  else
  {
    *(_QWORD *)(v16 + 24) = v18;
    *(_QWORD *)(v16 + 40) = v52[0].m128i_i64[0];
  }
  v43.m128i_i64[0] = v16;
  v52[0].m128i_i8[0] = 0;
  v19 = _mm_load_si128(&v43);
  *(_QWORD *)(v16 + 32) = v51;
  v50.m256i_i64[3] = (__int64)v52;
  v51 = 0;
  v43 = _mm_loadu_si128(v14);
  v20 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v14[1].m128i_i64[0];
  v21 = v14[1].m128i_i64[1];
  *v14 = v19;
  v44.m128_u64[0] = (unsigned __int64)v20;
  v14[1].m128i_i64[0] = (__int64)sub_F26290;
  v44.m128_u64[1] = v21;
  v14[1].m128i_i64[1] = (__int64)sub_F328E0;
  if ( v20 )
    v20(&v43, &v43, 3);
LABEL_13:
  if ( (__m128i *)v50.m256i_i64[3] != v52 )
    operator delete((void *)v50.m256i_i64[3]);
  v22 = (__m128i *)v47;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v22 != &v49 )
    operator delete(v22);
}
