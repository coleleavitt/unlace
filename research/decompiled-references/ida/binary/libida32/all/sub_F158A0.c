void __fastcall sub_F158A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        _QWORD *a8)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm5
  _QWORD *v16; // rdx
  __m128i v17; // xmm0
  void (__fastcall *v18)(__m128i *, __m128i *, __int64); // rax
  __int64 v19; // rdx
  __m128i *v20; // rdi
  __m128i v21; // xmm2
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm3
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdi
  void (__fastcall *v34)(__int64, __int64, __int64); // rax
  __int64 v35; // rax
  _BYTE *v36; // rax
  __int64 (__fastcall *v37)(); // [rsp+8h] [rbp-E0h] BYREF
  __m128i v38; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v39; // [rsp+20h] [rbp-C8h]
  __int64 v40; // [rsp+30h] [rbp-B8h]
  __m128i v41; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD *v42; // [rsp+48h] [rbp-A0h]
  void *v43; // [rsp+50h] [rbp-98h] BYREF
  __int64 v44; // [rsp+58h] [rbp-90h]
  __m128i v45; // [rsp+60h] [rbp-88h] BYREF
  __int64 v46; // [rsp+70h] [rbp-78h] BYREF
  __m128i v47; // [rsp+78h] [rbp-70h] BYREF
  _QWORD *v48; // [rsp+88h] [rbp-60h]
  void *v49; // [rsp+90h] [rbp-58h]
  __int64 v50; // [rsp+98h] [rbp-50h]
  __m128i v51[4]; // [rsp+A0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    v27 = *((_QWORD *)&a7 + 1);
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F13F20(a8, a7, *(void **)(v27 + 8));
    v28 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v28 )
    {
      v29 = *(_QWORD *)(a1 + 16);
      LOBYTE(v46) = 1;
      v30 = v29 + 32 * v28 - 32;
      if ( !*(_QWORD *)(v30 + 16) )
        goto LABEL_33;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v30 + 24))(v30, &v46);
        v32 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v32;
        v33 = *(_QWORD *)(a1 + 16) + 32 * v32;
        v34 = *(void (__fastcall **)(__int64, __int64, __int64))(v33 + 16);
        if ( v34 )
          v34(v33, v33, 3);
        v35 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v35 )
          break;
        v31 = *(_QWORD *)(a1 + 16);
        LOBYTE(v46) = 1;
        v30 = v31 + 32 * v35 - 32;
        if ( !*(_QWORD *)(v30 + 16) )
          goto LABEL_33;
      }
    }
    v36 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v36 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v40 = a1;
  v41 = _mm_loadu_si128((const __m128i *)&a7);
  v42 = a8;
  v43 = &v45;
  sub_F009D0(&v43, "value", (__int64)&aInvalidJsonVal_3[a3 + 13]);
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v21 = _mm_loadu_si128(&v41);
    v46 = v40;
    v47 = v21;
    v48 = v42;
    v49 = v51;
    if ( v43 == &v45 )
    {
      v51[0] = _mm_load_si128(&v45);
    }
    else
    {
      v49 = v43;
      v51[0].m128i_i64[0] = v45.m128i_i64[0];
    }
    v22 = v44;
    v44 = 0;
    v45.m128i_i8[0] = 0;
    v50 = v22;
    v43 = &v45;
    v39.m128_u64[0] = 0;
    v23 = operator new(0x40u);
    v24 = _mm_loadu_si128(&v47);
    *(_QWORD *)v23 = v46;
    v25 = v48;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)(v23 + 24) = v25;
    *(_QWORD *)(v23 + 32) = v23 + 48;
    if ( v49 == v51 )
    {
      *(__m128i *)(v23 + 48) = _mm_load_si128(v51);
    }
    else
    {
      *(_QWORD *)(v23 + 32) = v49;
      *(_QWORD *)(v23 + 48) = v51[0].m128i_i64[0];
    }
    v26 = v50;
    v38.m128i_i64[0] = v23;
    v50 = 0;
    *(_QWORD *)(v23 + 40) = v26;
    v37 = sub_F16EA0;
    v49 = v51;
    v51[0].m128i_i8[0] = 0;
    v39 = _mm_loadh_ps((const double *)&v37);
    sub_AA95F0(a1 + 16, &v38);
    if ( v39.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v39.m128_u64[0])(&v38, &v38, 3);
    goto LABEL_10;
  }
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  v38.m128i_i8[0] = 0;
  v11 = v10 + 32 * v9 - 32;
  if ( !*(_QWORD *)(v11 + 16) )
LABEL_33:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v11 + 24))(v11, &v38);
  v12 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  v47 = _mm_loadu_si128(&v41);
  v46 = v40;
  v48 = v42;
  v49 = v51;
  if ( v43 == &v45 )
  {
    v51[0] = _mm_load_si128(&v45);
  }
  else
  {
    v49 = v43;
    v51[0].m128i_i64[0] = v45.m128i_i64[0];
  }
  v13 = v44;
  v44 = 0;
  v45.m128i_i8[0] = 0;
  v50 = v13;
  v43 = &v45;
  v39.m128_u64[0] = 0;
  v14 = operator new(0x40u);
  v15 = _mm_loadu_si128(&v47);
  *(_QWORD *)v14 = v46;
  v16 = v48;
  *(__m128i *)(v14 + 8) = v15;
  *(_QWORD *)(v14 + 24) = v16;
  *(_QWORD *)(v14 + 32) = v14 + 48;
  if ( v49 == v51 )
  {
    *(__m128i *)(v14 + 48) = _mm_load_si128(v51);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = v49;
    *(_QWORD *)(v14 + 48) = v51[0].m128i_i64[0];
  }
  v38.m128i_i64[0] = v14;
  v51[0].m128i_i8[0] = 0;
  v17 = _mm_load_si128(&v38);
  *(_QWORD *)(v14 + 40) = v50;
  v49 = v51;
  v50 = 0;
  v38 = _mm_loadu_si128(v12);
  v18 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v12[1].m128i_i64[0];
  v19 = v12[1].m128i_i64[1];
  *v12 = v17;
  v39.m128_u64[0] = (unsigned __int64)v18;
  v12[1].m128i_i64[0] = (__int64)sub_F019E0;
  v39.m128_u64[1] = v19;
  v12[1].m128i_i64[1] = (__int64)sub_F16EA0;
  if ( v18 )
    v18(&v38, &v38, 3);
LABEL_10:
  if ( v49 != v51 )
    operator delete(v49);
  v20 = (__m128i *)v43;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v20 != &v45 )
    operator delete(v20);
}

