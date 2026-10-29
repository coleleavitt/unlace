__int64 __fastcall sub_64BE60(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __m128 si128; // xmm2
  void **v12; // rbx
  void **v13; // rbp
  void **v14; // rdi
  __m128 v15; // xmm0
  __int64 *v16; // rax
  __int64 *v17; // xmm3_8
  __int64 v18; // rbx
  __int64 *v19; // rcx
  void *v20; // r14
  void **v21; // rbx
  void **i; // rbp
  void **v23; // rdi
  _QWORD *v24; // rbp
  _QWORD *j; // r15
  __int64 v26; // rbx
  __int64 v27; // rax
  void *v28; // rdx
  const char *v29; // rcx
  unsigned __int64 v30; // rax
  unsigned int *v31; // rcx
  void **v32; // rbx
  void **v33; // r14
  void **v34; // rdi
  __int64 v36; // rdi
  __m128i v37; // xmm4
  char *v38; // r14
  char *v39; // [rsp+8h] [rbp-E0h] BYREF
  __m128 *v40; // [rsp+10h] [rbp-D8h]
  __m128i *v41; // [rsp+18h] [rbp-D0h]
  __m128 v42; // [rsp+20h] [rbp-C8h] BYREF
  __m128 v43; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v44; // [rsp+40h] [rbp-A8h]
  __m128i v45; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v46; // [rsp+60h] [rbp-88h]
  void *v47[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v48; // [rsp+80h] [rbp-68h]
  void *v49[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 *v50; // [rsp+A0h] [rbp-48h] BYREF

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v46 = nullptr;
  v45 = 0;
  v8 = sub_798D40(a2);
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25 > 1 )
    v9 = sub_B0D320(v9);
  v10 = *(_QWORD *)(v9 + 24);
  v41 = &v45;
  sub_FCFA30(v47, v10, v8, &v45);
  si128 = (__m128)_mm_load_si128((const __m128i *)v47);
  *(_OWORD *)v49 = 0;
  v42 = si128;
  v40 = (__m128 *)v48;
  v44 = v48;
  v50 = nullptr;
  v48 = nullptr;
  _mm_storeh_ps((double *)&v39, si128);
  v43 = si128;
  *(_OWORD *)v47 = 0;
  sub_6441A0((__int64 *)v49);
  v12 = (void **)v47[1];
  v13 = (void **)v47[0];
  if ( v47[1] != v47[0] )
  {
    do
    {
      v14 = (void **)v13[5];
      if ( v14 != v13 + 7 )
        operator delete(v14, (unsigned __int64)v13[7] + 1);
      if ( *v13 != v13 + 2 )
        operator delete(*v13, (unsigned __int64)v13[2] + 1);
      v13 += 10;
    }
    while ( v12 != v13 );
    v13 = (void **)v47[0];
  }
  if ( v13 )
    operator delete(v13, (char *)v48 - (char *)v13);
  if ( sub_780E20(a2)
    && *(_QWORD *)(si128.m128_u64[0] + 8) > 0xDu
    && **(_QWORD **)si128.m128_u64[0] == 0x7261702D65707974LL
    && *(_QWORD *)(*(_QWORD *)si128.m128_u64[0] + 6LL) == 0x726574656D617261LL )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v36 + 16) - 25 > 1 )
      v36 = sub_B0D320(v36);
    v47[0] = *(void **)(v36 + 24);
    sub_B2ACF0(v49, v47);
    std::string::swap();
    if ( v49[0] != &v50 )
      operator delete(v49[0], (unsigned __int64)v50 + 1);
  }
  v15 = (__m128)_mm_load_si128(&v45);
  v16 = v46;
  v46 = nullptr;
  v45 = 0;
  v17 = (__int64 *)_mm_movehl_ps(a6, v15).m128_u64[0];
  v18 = v15.m128_u64[0];
  *(__m128 *)v47 = v15;
  v19 = v17;
  v48 = v16;
  if ( v17 == (__int64 *)v15.m128_u64[0] )
    goto LABEL_49;
  if ( v39 == (char *)si128.m128_u64[0] )
  {
    v44 = v16;
    v37 = _mm_load_si128((const __m128i *)&v42);
    v43 = v15;
    v48 = nullptr;
    v50 = (__int64 *)v40;
    *(__m128i *)v49 = v37;
    *(_OWORD *)v47 = 0;
    sub_6441A0((__int64 *)v49);
LABEL_49:
    v40 = &v43;
    goto LABEL_18;
  }
  if ( *((_DWORD *)v39 - 12) == 10 && *(_DWORD *)(v15.m128_u64[0] + 32) == 10 )
  {
    v38 = v39;
    v40 = (__m128 *)v17;
    std::string::reserve();
    if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *((_QWORD *)v38 - 9)) < *(_QWORD *)(v15.m128_u64[0] + 8) )
      std::__throw_length_error("basic_string::append");
    v18 = v15.m128_u64[0] + 80;
    std::string::_M_append();
    v19 = (__int64 *)v40;
  }
  v40 = &v43;
  sub_641BC0((__int64 *)&v43, v39, v18, (__int64)v19);
LABEL_18:
  sub_6441A0((__int64 *)v47);
  sub_644390((__int64)v49, (__int64 *)v40);
  sub_63EBC0((__int64 *)(a1 + 24), (__int64 *)v49);
  v20 = v49[0];
  v21 = (void **)v49[1];
  for ( i = (void **)v49[0]; v21 != i; i += 10 )
  {
    v23 = (void **)i[5];
    if ( v23 != i + 7 )
      operator delete(v23, (unsigned __int64)i[7] + 1);
    if ( *i != i + 2 )
      operator delete(*i, (unsigned __int64)i[2] + 1);
  }
  if ( v20 )
    operator delete(v20, (char *)v50 - (_BYTE *)v20);
  v24 = *(_QWORD **)(a2 + 120);
  for ( j = &v24[(unsigned int)sub_77F620(a2)]; j != v24; ++v24 )
  {
    while ( 1 )
    {
      v26 = *v24;
      sub_FD0DD0(v49, *v24);
      v27 = *(_QWORD *)(v26 + 40);
      v28 = nullptr;
      v29 = &byte_3B9466E;
      if ( (v27 & 7) == 0 )
      {
        v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = (void *)v30;
        if ( v30 )
        {
          v31 = *(unsigned int **)(v30 + 16);
          v28 = (void *)*v31;
          v29 = (const char *)(v31 + 4);
        }
      }
      v47[1] = v28;
      v47[0] = (void *)v29;
      sub_6485F0(a1, v47, (__int64 *)v49);
      v32 = (void **)v49[1];
      v33 = (void **)v49[0];
      if ( v49[1] != v49[0] )
      {
        do
        {
          v34 = (void **)v33[5];
          if ( v34 != v33 + 7 )
            operator delete(v34, (unsigned __int64)v33[7] + 1);
          if ( *v33 != v33 + 2 )
            operator delete(*v33, (unsigned __int64)v33[2] + 1);
          v33 += 10;
        }
        while ( v32 != v33 );
        v33 = (void **)v49[0];
      }
      if ( !v33 )
        break;
      ++v24;
      operator delete(v33, (char *)v50 - (char *)v33);
      if ( j == v24 )
        goto LABEL_39;
    }
  }
LABEL_39:
  sub_6441A0(v41->m128i_i64);
  sub_6441A0((__int64 *)v40);
  return a1;
}

