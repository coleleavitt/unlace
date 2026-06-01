__int64 __fastcall sub_648780(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __m128 si128; // xmm2
  __m128 v9; // xmm5
  char *v10; // rbx
  void **v11; // rbp
  void **v12; // r15
  void **v13; // rdi
  __m128 v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // xmm3_8
  __int64 v17; // rbp
  __int64 v18; // rcx
  void *v19; // rbp
  void **v20; // rbx
  void **i; // r15
  void **v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *j; // r14
  __int64 v25; // rbx
  __int64 v26; // rax
  void *v27; // rdx
  const char *v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int *v30; // rcx
  void **v31; // rbx
  void **v32; // r15
  void **v33; // rdi
  void **v34; // rbp
  void **v35; // rbx
  void **v36; // rdi
  __m128i v38; // xmm4
  __int64 v39; // [rsp+10h] [rbp-D0h]
  __m128 v40; // [rsp+18h] [rbp-C8h] BYREF
  __m128 v41; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-A8h]
  void *v43[2]; // [rsp+48h] [rbp-98h] BYREF
  __int64 v44; // [rsp+58h] [rbp-88h]
  void *v45[2]; // [rsp+68h] [rbp-78h] BYREF
  __int64 v46; // [rsp+78h] [rbp-68h]
  void *v47[2]; // [rsp+88h] [rbp-58h] BYREF
  __int64 v48; // [rsp+98h] [rbp-48h]

  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)v43 = 0;
  v44 = 0;
  v7 = sub_798D40(a2);
  sub_FCFA30(v45, *(_QWORD *)(a2 + 80), v7, v43);
  si128 = (__m128)_mm_load_si128((const __m128i *)v45);
  *(_OWORD *)v47 = 0;
  v40 = si128;
  v39 = v46;
  v10 = (char *)_mm_movehl_ps(v9, si128).m128_u64[0];
  v42 = v46;
  v48 = 0;
  v46 = 0;
  v41 = si128;
  *(_OWORD *)v45 = 0;
  sub_6441A0((__int64 *)v47);
  v11 = (void **)v45[1];
  v12 = (void **)v45[0];
  if ( v45[1] != v45[0] )
  {
    do
    {
      v13 = (void **)v12[5];
      if ( v13 != v12 + 7 )
        operator delete(v13, (unsigned __int64)v12[7] + 1);
      if ( *v12 != v12 + 2 )
        operator delete(*v12, (unsigned __int64)v12[2] + 1);
      v12 += 10;
    }
    while ( v11 != v12 );
    v12 = (void **)v45[0];
  }
  if ( v12 )
    operator delete(v12, v46 - (_QWORD)v12);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 5
    && sub_780E20(a2)
    && *(_QWORD *)(si128.m128_u64[0] + 8) > 0xDu
    && **(_QWORD **)si128.m128_u64[0] == 0x7261702D65707974LL
    && *(_QWORD *)(*(_QWORD *)si128.m128_u64[0] + 6LL) == 0x726574656D617261LL )
  {
    v45[0] = *(void **)(a2 + 80);
    sub_B2ACF0(v47, v45);
    std::string::swap();
    std::string::_M_dispose();
  }
  v14 = (__m128)_mm_load_si128((const __m128i *)v43);
  v15 = v44;
  v44 = 0;
  *(_OWORD *)v43 = 0;
  v16 = _mm_movehl_ps(a6, v14).m128_u64[0];
  v17 = v14.m128_u64[0];
  *(__m128 *)v45 = v14;
  v18 = v16;
  v46 = v15;
  if ( v16 != v14.m128_u64[0] )
  {
    if ( v10 == (char *)si128.m128_u64[0] )
    {
      v42 = v15;
      v38 = _mm_load_si128((const __m128i *)&v40);
      v41 = v14;
      v46 = 0;
      v48 = v39;
      *(__m128i *)v47 = v38;
      *(_OWORD *)v45 = 0;
      sub_6441A0((__int64 *)v47);
    }
    else
    {
      if ( *((_DWORD *)v10 - 12) == 10 && *(_DWORD *)(v14.m128_u64[0] + 32) == 10 )
      {
        std::string::reserve();
        if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - *((_QWORD *)v10 - 9)) < *(_QWORD *)(v14.m128_u64[0] + 8) )
          std::__throw_length_error("basic_string::append");
        v17 = v14.m128_u64[0] + 80;
        std::string::_M_append();
        v18 = v16;
      }
      sub_641BC0((__int64 *)&v41, v10, v17, v18);
    }
  }
  sub_6441A0((__int64 *)v45);
  sub_644390((__int64)v47, (__int64 *)&v41);
  sub_63EBC0((__int64 *)(a1 + 24), (__int64 *)v47);
  v19 = v47[0];
  v20 = (void **)v47[1];
  for ( i = (void **)v47[0]; v20 != i; i += 10 )
  {
    v22 = (void **)i[5];
    if ( v22 != i + 7 )
      operator delete(v22, (unsigned __int64)i[7] + 1);
    if ( *i != i + 2 )
      operator delete(*i, (unsigned __int64)i[2] + 1);
  }
  if ( v19 )
    operator delete(v19, v48 - (_QWORD)v19);
  v23 = *(_QWORD **)(a2 + 96);
  for ( j = &v23[*(unsigned int *)(a2 + 104)]; j != v23; ++v23 )
  {
    while ( 1 )
    {
      v25 = *v23;
      sub_FD0DD0(v47, *v23);
      v26 = *(_QWORD *)(v25 + 40);
      v27 = nullptr;
      v28 = &byte_3B9466E;
      if ( (v26 & 7) == 0 )
      {
        v29 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = (void *)v29;
        if ( v29 )
        {
          v30 = *(unsigned int **)(v29 + 16);
          v27 = (void *)*v30;
          v28 = (const char *)(v30 + 4);
        }
      }
      v45[1] = v27;
      v45[0] = (void *)v28;
      sub_6485F0(a1, v45, (__int64 *)v47);
      v31 = (void **)v47[1];
      v32 = (void **)v47[0];
      if ( v47[1] != v47[0] )
      {
        do
        {
          v33 = (void **)v32[5];
          if ( v33 != v32 + 7 )
            operator delete(v33, (unsigned __int64)v32[7] + 1);
          if ( *v32 != v32 + 2 )
            operator delete(*v32, (unsigned __int64)v32[2] + 1);
          v32 += 10;
        }
        while ( v31 != v32 );
        v32 = (void **)v47[0];
      }
      if ( !v32 )
        break;
      ++v23;
      operator delete(v32, v48 - (_QWORD)v32);
      if ( j == v23 )
        goto LABEL_36;
    }
  }
LABEL_36:
  v34 = (void **)v43[1];
  v35 = (void **)v43[0];
  if ( v43[1] != v43[0] )
  {
    do
    {
      v36 = (void **)v35[5];
      if ( v36 != v35 + 7 )
        operator delete(v36, (unsigned __int64)v35[7] + 1);
      if ( *v35 != v35 + 2 )
        operator delete(*v35, (unsigned __int64)v35[2] + 1);
      v35 += 10;
    }
    while ( v34 != v35 );
    v35 = (void **)v43[0];
  }
  if ( v35 )
    operator delete(v35, v44 - (_QWORD)v35);
  sub_6441A0((__int64 *)&v41);
  return a1;
}

