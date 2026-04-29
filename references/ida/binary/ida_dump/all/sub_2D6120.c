unsigned __int64 __fastcall sub_2D6120(_QWORD *a1)
{
  __int64 v1; // rax
  const __m128i *v2; // r15
  const __m128i *v3; // r12
  const __m128i *v4; // rax
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdi
  _BYTE *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _BYTE *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // r8
  int v30; // eax
  _QWORD *v31; // rdi
  _QWORD *v32; // rdi
  _QWORD *exception; // rdi
  __int32 v34; // [rsp+Ch] [rbp-9Ch]
  __int64 v35; // [rsp+10h] [rbp-98h]
  char v36; // [rsp+10h] [rbp-98h]
  _BYTE *v37; // [rsp+18h] [rbp-90h]
  __int64 v38; // [rsp+18h] [rbp-90h]
  _BYTE *v39; // [rsp+28h] [rbp-80h]
  _BYTE *v40; // [rsp+28h] [rbp-80h]
  __m128i v41; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v42[2]; // [rsp+40h] [rbp-68h] BYREF
  char v43; // [rsp+50h] [rbp-58h]
  __m128i *v44; // [rsp+58h] [rbp-50h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  switch_dbctx();
  v41 = 0u;
  v1 = a1[5];
  v2 = (const __m128i *)(v1 + 8);
  v3 = (const __m128i *)(v1 + 56LL * a1[6]);
  if ( v3 == (const __m128i *)v1 )
    goto LABEL_16;
  while ( 1 )
  {
    v5 = *(bool (__fastcall **)(__int64))v2[-1].m128i_i64[1];
    if ( v5 == sub_2AD640 )
    {
      if ( !(unsigned int)sub_257C40((__int64)v2, (__int64)&v2[1].m128i_i64[1]) )
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
    v6 = v41.m128i_i64[0];
    v34 = v2[1].m128i_i32[0];
    if ( !v41.m128i_i64[0] )
    {
      v25 = qalloc();
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
      if ( !v25 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v25 + 16) = 0;
      *(_OWORD *)(v25 + 32) = 0;
      *(__m128i *)(v25 + 8) = v26;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v41.m128i_i64[0] = v25;
      *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
      v27 = v41.m128i_i64[0];
      v28 = (__m128i)v41.m128i_u64[0];
      *(_QWORD *)v41.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v28, v28);
      *(_QWORD *)v41.m128i_i64[0] |= 2uLL;
      v6 = v41.m128i_i64[0];
LABEL_9:
      v7 = qalloc();
      v8 = v7;
      if ( !v7 )
      {
        v31 = __cxa_allocate_exception(8u);
        *v31 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v31,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)v7 = 0;
      *(_OWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 16) = 0;
      v9 = _mm_loadu_si128(v2);
      *(_DWORD *)(v7 + 40) = 0;
      *(__m128i *)(v7 + 24) = v9;
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = _mm_loadl_epi64(&v41);
      *(_QWORD *)v7 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      v11 = v41.m128i_i64[0];
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( v11 != v6 )
      {
        *(_QWORD *)(v6 + 8) = v8;
        if ( *(_QWORD *)(v11 + 8) == v6 )
          *(_QWORD *)(v11 + 8) = v8;
        goto LABEL_13;
      }
LABEL_24:
      *(_QWORD *)v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
      *(__m128i *)(v41.m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                             (__m128i)(unsigned __int64)v8,
                                             (__m128i)(unsigned __int64)v8);
      v20 = *(_QWORD *)v8 & 2LL;
      *(_QWORD *)v8 &= ~1uLL;
      *(_QWORD *)v8 = v20 | v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_14;
    }
    if ( !v41.m128i_i64[1] )
      goto LABEL_9;
    v36 = 1;
    v16 = (_BYTE *)(*(_QWORD *)v41.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*v16 & 2) != 0 )
      goto LABEL_26;
    while ( 1 )
    {
      v37 = v16;
      v39 = v16 + 24;
      v17 = sub_257C40((__int64)v2, (__int64)(v16 + 24));
      v18 = (__int64)v37;
      if ( v17 < 0 )
      {
        v36 = 1;
        v19 = *((_BYTE **)v37 + 1);
        goto LABEL_22;
      }
      v29 = (__int64)v39;
      v40 = v37;
      v38 = v29;
      v30 = sub_257C40(v29, (__int64)v2);
      v12 = v38;
      v18 = (__int64)v40;
      if ( v30 >= 0 )
        break;
      v36 = 0;
      v19 = *((_BYTE **)v40 + 2);
LABEL_22:
      if ( (*v19 & 2) != 0 )
      {
        v6 = v18;
        goto LABEL_26;
      }
      v16 = v19;
    }
    if ( v40 )
      goto LABEL_15;
    v6 = 0;
LABEL_26:
    v21 = qalloc();
    v8 = v21;
    if ( !v21 )
    {
      v32 = __cxa_allocate_exception(8u);
      *v32 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v32, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v21 = 0;
    *(_OWORD *)(v21 + 32) = 0;
    *(_OWORD *)(v21 + 16) = 0;
    v22 = _mm_loadu_si128(v2);
    *(_DWORD *)(v21 + 40) = 0;
    *(__m128i *)(v21 + 24) = v22;
    *(_QWORD *)v21 = v6 & 0xFFFFFFFFFFFFFFFCLL;
    v23 = _mm_loadl_epi64(&v41);
    *(_QWORD *)v21 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
    v24 = v41.m128i_i64[0];
    *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v23, v23);
    if ( v24 == v6 )
      goto LABEL_24;
    if ( v36 )
    {
      *(_QWORD *)(v6 + 8) = v8;
      if ( *(_QWORD *)(v24 + 8) == v6 )
        *(_QWORD *)(v24 + 8) = v8;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v8;
      if ( *(_QWORD *)(v24 + 16) == v6 )
        *(_QWORD *)(v24 + 16) = v8;
    }
LABEL_13:
    v35 = v8;
    sub_1417E0(&v41, (__int64 *)v8);
    v8 = v35;
LABEL_14:
    ++v41.m128i_i64[1];
    v12 = v8 + 24;
LABEL_15:
    *(_DWORD *)(v12 + 16) = v34;
    v4 = (const __m128i *)((char *)v2 + 56);
    if ( v3 == &v2[3] )
      break;
LABEL_4:
    v2 = v4;
  }
LABEL_16:
  v13 = a1[10];
  v14 = a1[8];
  v43 = 109;
  v42[1] = v13;
  v42[0] = &off_4E1140;
  v44 = &v41;
  sub_2B6200(v14, (__int64)v42);
  sub_82FA0(v41.m128i_i64);
  return v45 - __readfsqword(0x28u);
}
