unsigned __int64 __fastcall sub_2D18A0(__int64 a1)
{
  __int64 v1; // rax
  const __m128i *v2; // r15
  const __m128i *v3; // r12
  const __m128i *v4; // rax
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdi
  _BYTE *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _BYTE *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // r8
  int v32; // eax
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *exception; // rdi
  __int32 v36; // [rsp+Ch] [rbp-9Ch]
  __int64 v37; // [rsp+10h] [rbp-98h]
  char v38; // [rsp+10h] [rbp-98h]
  _BYTE *v39; // [rsp+18h] [rbp-90h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  _BYTE *v41; // [rsp+28h] [rbp-80h]
  _BYTE *v42; // [rsp+28h] [rbp-80h]
  __m128i v43; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-68h] BYREF
  char v45; // [rsp+50h] [rbp-58h]
  __m128i *v46; // [rsp+58h] [rbp-50h]
  unsigned __int64 v47; // [rsp+68h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v43 = 0u;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const __m128i *)(v1 + 8);
  v3 = (const __m128i *)(v1 + 56LL * *(_QWORD *)(a1 + 48));
  if ( v3 == (const __m128i *)v1 )
    goto LABEL_16;
  while ( 1 )
  {
    v5 = *(bool (__fastcall **)(__int64))v2[-1].m128i_i64[1];
    if ( v5 == sub_2A8DC0 )
    {
      if ( !(unsigned int)sub_2533C0((__int64)v2, (__int64)&v2[1].m128i_i64[1]) )
        goto LABEL_3;
    }
    else if ( !v5((__int64)&v2[-1].m128i_i64[1]) )
    {
LABEL_3:
      v4 = (const __m128i *)((char *)v2 + 56);
      if ( v3 == &v2[3] )
        break;
      goto LABEL_4;
    }
    v6 = v43.m128i_i64[0];
    v36 = v2[1].m128i_i32[0];
    if ( !v43.m128i_i64[0] )
    {
      v27 = qalloc(48);
      v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
      if ( !v27 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 32) = 0;
      *(__m128i *)(v27 + 8) = v28;
      *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v43.m128i_i64[0] = v27;
      *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
      v29 = v43.m128i_i64[0];
      v30 = (__m128i)v43.m128i_u64[0];
      *(_QWORD *)v43.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64(v30, v30);
      *(_QWORD *)v43.m128i_i64[0] |= 2uLL;
      v6 = v43.m128i_i64[0];
LABEL_9:
      v7 = qalloc(48);
      v10 = v7;
      if ( !v7 )
      {
        v33 = __cxa_allocate_exception(8u);
        *v33 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v33,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)v7 = 0;
      *(_OWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 16) = 0;
      v11 = _mm_loadu_si128(v2);
      *(_DWORD *)(v7 + 40) = 0;
      *(__m128i *)(v7 + 24) = v11;
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v12 = _mm_loadl_epi64(&v43);
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v13 = v43.m128i_i64[0];
      *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v12, v12);
      if ( v13 != v6 )
      {
        *(_QWORD *)(v6 + 8) = v10;
        if ( *(_QWORD *)(v13 + 8) == v6 )
          *(_QWORD *)(v13 + 8) = v10;
        goto LABEL_13;
      }
LABEL_24:
      *(_QWORD *)v6 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
      *(__m128i *)(v43.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                             (__m128i)(unsigned __int64)v10,
                                             (__m128i)(unsigned __int64)v10);
      v22 = *(_QWORD *)v10 & 2LL;
      *(_QWORD *)v10 &= ~1uLL;
      *(_QWORD *)v10 = v22 | v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_14;
    }
    if ( !v43.m128i_i64[1] )
      goto LABEL_9;
    v38 = 1;
    v18 = (_BYTE *)(*(_QWORD *)v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v18 & 2) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v39 = v18;
      v41 = v18 + 24;
      v19 = sub_2533C0((__int64)v2, (__int64)(v18 + 24));
      v20 = (__int64)v39;
      if ( v19 < 0 )
      {
        v38 = 1;
        v21 = *((_BYTE **)v39 + 1);
        goto LABEL_22;
      }
      v31 = (__int64)v41;
      v42 = v39;
      v40 = v31;
      v32 = sub_2533C0(v31, (__int64)v2);
      v14 = v40;
      v20 = (__int64)v42;
      if ( v32 >= 0 )
        break;
      v38 = 0;
      v21 = *((_BYTE **)v42 + 2);
LABEL_22:
      if ( (*v21 & 2) != 0 )
      {
        v6 = v20;
        goto LABEL_26;
      }
      v18 = v21;
    }
    if ( v42 )
      goto LABEL_15;
    v6 = 0;
LABEL_26:
    v23 = qalloc(48);
    v10 = v23;
    if ( !v23 )
    {
      v34 = __cxa_allocate_exception(8u);
      *v34 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v34, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v23 = 0;
    *(_OWORD *)(v23 + 32) = 0;
    *(_OWORD *)(v23 + 16) = 0;
    v24 = _mm_loadu_si128(v2);
    *(_DWORD *)(v23 + 40) = 0;
    *(__m128i *)(v23 + 24) = v24;
    *(_QWORD *)v23 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    v25 = _mm_loadl_epi64(&v43);
    *(_QWORD *)v23 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
    v26 = v43.m128i_i64[0];
    *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v25, v25);
    if ( v26 == v6 )
      goto LABEL_24;
    if ( v38 )
    {
      *(_QWORD *)(v6 + 8) = v10;
      if ( *(_QWORD *)(v26 + 8) == v6 )
        *(_QWORD *)(v26 + 8) = v10;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v10;
      if ( *(_QWORD *)(v26 + 16) == v6 )
        *(_QWORD *)(v26 + 16) = v10;
    }
LABEL_13:
    v37 = v10;
    sub_13D5E0(&v43, (__int64 *)v10, v8, v10, v9);
    v10 = v37;
LABEL_14:
    ++v43.m128i_i64[1];
    v14 = v10 + 24;
LABEL_15:
    *(_DWORD *)(v14 + 16) = v36;
    v4 = (const __m128i *)((char *)v2 + 56);
    if ( v3 == &v2[3] )
      break;
LABEL_4:
    v2 = v4;
  }
LABEL_16:
  v15 = *(_QWORD *)(a1 + 80);
  v16 = *(_QWORD *)(a1 + 64);
  v45 = 109;
  v44[1] = v15;
  v44[0] = &off_4C1880;
  v46 = &v43;
  sub_2B1980(v16, (__int64)v44, 0);
  sub_7EDA0(v43.m128i_i64);
  return v47 - __readfsqword(0x28u);
}
