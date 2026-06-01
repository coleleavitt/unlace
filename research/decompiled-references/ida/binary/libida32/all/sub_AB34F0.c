void __fastcall sub_AB34F0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __m128i *v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm4
  __m128i *v23; // rdx
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i *, __m128i *, __int64); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdi
  void (__fastcall *v37)(__int64, __int64, __int64); // rax
  __int64 v38; // rax
  _BYTE *v39; // rax
  __m128i v40; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v41; // [rsp+10h] [rbp-B8h]
  __int64 v42; // [rsp+20h] [rbp-A8h]
  __m128i v43; // [rsp+28h] [rbp-A0h] BYREF
  void *v44; // [rsp+38h] [rbp-90h] BYREF
  __int64 v45; // [rsp+40h] [rbp-88h]
  __m128i v46; // [rsp+48h] [rbp-80h] BYREF
  __int64 v47; // [rsp+60h] [rbp-68h] BYREF
  __m128i v48; // [rsp+68h] [rbp-60h] BYREF
  void *v49; // [rsp+78h] [rbp-50h]
  __int64 v50; // [rsp+80h] [rbp-48h]
  __m128i v51[4]; // [rsp+88h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F2D5B0(a4 + 8, a5);
    if ( a5 )
    {
      sub_AB32B0(a4, a5, v26, v27, v28, v29);
      v30 = sub_F473B0(a5);
      if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != v30 )
        sub_AB4A40(a4, v30);
    }
    v31 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v31 )
    {
      v32 = *(_QWORD *)(a1 + 16);
      v40.m128i_i8[0] = 1;
      v33 = v32 + 32 * v31 - 32;
      if ( !*(_QWORD *)(v33 + 16) )
        goto LABEL_38;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v33 + 24))(v33, &v40);
        v35 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v35;
        v36 = *(_QWORD *)(a1 + 16) + 32 * v35;
        v37 = *(void (__fastcall **)(__int64, __int64, __int64))(v36 + 16);
        if ( v37 )
          v37(v36, v36, 3);
        v38 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v38 )
          break;
        v34 = *(_QWORD *)(a1 + 16);
        v40.m128i_i8[0] = 1;
        v33 = v34 + 32 * v38 - 32;
        if ( !*(_QWORD *)(v33 + 16) )
          goto LABEL_38;
      }
    }
    v39 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v39 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v42 = a1;
  v43.m128i_i64[0] = a4;
  v43.m128i_i64[1] = a5;
  v44 = &v46;
  if ( a2 )
  {
    sub_AA6CE0(&v44, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v15 = *(_BYTE *)(a1 + 1057) == 0;
  v46.m128i_i8[0] = 0;
  v45 = 0;
  if ( v15 )
  {
LABEL_16:
    v16 = *(unsigned int *)(a1 + 24);
    v17 = *(_QWORD *)(a1 + 16);
    LOBYTE(v47) = 0;
    v18 = v17 + 32 * v16 - 32;
    if ( *(_QWORD *)(v18 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v18 + 24))(v18, &v47);
      v19 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v48 = _mm_loadu_si128(&v43);
      v47 = v42;
      v49 = v51;
      if ( v44 == &v46 )
      {
        v51[0] = _mm_loadu_si128(&v46);
      }
      else
      {
        v49 = v44;
        v51[0].m128i_i64[0] = v46.m128i_i64[0];
      }
      v20 = v45;
      v45 = 0;
      v46.m128i_i8[0] = 0;
      v50 = v20;
      v44 = &v46;
      v41.m128_u64[0] = 0;
      v21 = operator new(0x38u);
      v22 = _mm_loadu_si128(&v48);
      *(_QWORD *)v21 = v47;
      *(_QWORD *)(v21 + 24) = v21 + 40;
      v23 = (__m128i *)v49;
      *(__m128i *)(v21 + 8) = v22;
      if ( v23 == v51 )
      {
        *(__m128i *)(v21 + 40) = _mm_loadu_si128(v51);
      }
      else
      {
        *(_QWORD *)(v21 + 24) = v23;
        *(_QWORD *)(v21 + 40) = v51[0].m128i_i64[0];
      }
      v40.m128i_i64[0] = v21;
      v51[0].m128i_i8[0] = 0;
      v24 = _mm_load_si128(&v40);
      *(_QWORD *)(v21 + 32) = v50;
      v49 = v51;
      v50 = 0;
      v40 = _mm_loadu_si128(v19);
      v25 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v19[1].m128i_i64[0];
      *v19 = v24;
      v41.m128_u64[0] = (unsigned __int64)v25;
      v19[1].m128i_i64[0] = (__int64)sub_AA7A80;
      v41.m128_u64[1] = v19[1].m128i_u64[1];
      v19[1].m128i_i64[1] = (__int64)sub_AB62A0;
      if ( v25 )
        v25(&v40, &v40, 3);
      goto LABEL_10;
    }
LABEL_38:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v8 = _mm_loadu_si128(&v43);
  v47 = v42;
  v49 = v51;
  v48 = v8;
  if ( v44 == &v46 )
  {
    v51[0] = _mm_loadu_si128(&v46);
  }
  else
  {
    v49 = v44;
    v51[0].m128i_i64[0] = v46.m128i_i64[0];
  }
  v9 = v45;
  v45 = 0;
  v46.m128i_i8[0] = 0;
  v50 = v9;
  v44 = &v46;
  v41.m128_u64[0] = 0;
  v10 = operator new(0x38u);
  v11 = _mm_loadu_si128(&v48);
  *(_QWORD *)v10 = v47;
  *(_QWORD *)(v10 + 24) = v10 + 40;
  v12 = (__m128i *)v49;
  *(__m128i *)(v10 + 8) = v11;
  if ( v12 == v51 )
  {
    *(__m128i *)(v10 + 40) = _mm_loadu_si128(v51);
  }
  else
  {
    *(_QWORD *)(v10 + 24) = v12;
    *(_QWORD *)(v10 + 40) = v51[0].m128i_i64[0];
  }
  v13 = v50;
  v40.m128i_i64[0] = v10;
  v50 = 0;
  *(_QWORD *)(v10 + 32) = v13;
  v49 = v51;
  v51[0].m128i_i8[0] = 0;
  v41 = _mm_loadh_ps((const double *)off_2C4DC50);
  sub_AA95F0(a1 + 16, &v40);
  if ( v41.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v41.m128_u64[0])(&v40, &v40, 3);
LABEL_10:
  if ( v49 != v51 )
    operator delete(v49);
  v14 = (__m128i *)v44;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v14 != &v46 )
    operator delete(v14);
}

