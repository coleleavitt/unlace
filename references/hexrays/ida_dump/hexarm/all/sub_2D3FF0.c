unsigned __int64 __fastcall sub_2D3FF0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  bool (__fastcall *v4)(__int64); // rax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rcx
  void *v9; // r14
  __int64 v10; // rdi
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char v21; // cl
  unsigned __int64 v22; // rdx
  _BYTE *v23; // rdx
  char v24; // dl
  unsigned __int64 v25; // rbp
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdi
  _QWORD *exception; // rdi
  size_t n[2]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v37; // [rsp+10h] [rbp-98h]
  unsigned __int64 v38; // [rsp+18h] [rbp-90h]
  __int64 *v39; // [rsp+28h] [rbp-80h] BYREF
  __m128i v40; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-68h] BYREF
  char v42; // [rsp+50h] [rbp-58h]
  __m128i *v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v40 = 0u;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = v2 + 56LL * *(_QWORD *)(a1 + 48);
  v37 = &v40;
  if ( v3 == v2 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v4 = **(bool (__fastcall ***)(__int64))v2;
      if ( v4 == sub_2AD530 )
        break;
      if ( v4(v2) )
        goto LABEL_6;
LABEL_3:
      v2 += 56;
      if ( v3 == v2 )
        goto LABEL_15;
    }
    if ( *(_QWORD *)(v2 + 8) == *(_QWORD *)(v2 + 40) )
      goto LABEL_3;
LABEL_6:
    v5 = (unsigned __int64 *)v40.m128i_i64[0];
    v39 = (__int64 *)(v2 + 8);
    if ( !v40.m128i_i64[0] )
    {
      v30 = qalloc(56);
      v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
      if ( !v30 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v30 + 48) = 0;
      *(_OWORD *)(v30 + 16) = 0;
      *(_OWORD *)(v30 + 32) = 0;
      *(__m128i *)(v30 + 8) = v31;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v40.m128i_i64[0] = v30;
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
      v32 = v40.m128i_i64[0];
      v33 = (__m128i)v40.m128i_u64[0];
      *(_QWORD *)v40.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v33, v33);
      *(_QWORD *)v40.m128i_i64[0] |= 2uLL;
      v5 = (unsigned __int64 *)v40.m128i_i64[0];
LABEL_8:
      v6 = sub_25EBC0(v37, v5, 1, &v39);
LABEL_9:
      v7 = v6 + 24;
      goto LABEL_10;
    }
    if ( !v40.m128i_i64[1] )
      goto LABEL_8;
    v19 = *(_QWORD *)v40.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v24 = 1;
LABEL_29:
      v6 = sub_25EBC0(&v40, v5, v24, &v39);
      goto LABEL_9;
    }
    v20 = *(_QWORD *)(v2 + 8);
    v21 = 1;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v19 + 24);
      v7 = v19 + 24;
      if ( v20 < v22 )
      {
        v23 = *(_BYTE **)(v19 + 8);
        v21 = 1;
        if ( (*v23 & 2) != 0 )
          goto LABEL_27;
        goto LABEL_41;
      }
      if ( v22 >= v20 )
        break;
      v23 = *(_BYTE **)(v19 + 16);
      v21 = 0;
      if ( (*v23 & 2) != 0 )
        goto LABEL_27;
LABEL_41:
      v19 = (unsigned __int64)v23;
    }
    if ( !v19 )
    {
LABEL_27:
      v24 = v21;
      v5 = (unsigned __int64 *)v19;
      goto LABEL_29;
    }
LABEL_10:
    v8 = *(_QWORD *)(v2 + 24);
    v9 = nullptr;
    if ( v8 )
    {
      v38 = *(_QWORD *)(v2 + 24);
      n[0] = 4 * v8;
      v9 = (void *)qalloc_or_throw(4 * v8);
      memcpy(v9, *(const void **)(v2 + 16), n[0]);
      v8 = v38;
    }
    v10 = *(_QWORD *)(v7 + 8);
    si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v10 )
    {
      *(_QWORD *)(v7 + 16) = 0;
      *(__m128i *)n = si128;
      qfree(v10);
      si128 = _mm_load_si128((const __m128i *)n);
    }
    v2 += 56;
    *(_QWORD *)(v7 + 8) = v9;
    *(__m128i *)(v7 + 16) = si128;
  }
  while ( v3 != v2 );
LABEL_15:
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(_QWORD *)(a1 + 64);
  v42 = 117;
  v41[1] = v12;
  v41[0] = &off_4DB7B0;
  v43 = &v40;
  sub_2B65C0(v13, (__int64)v41, 0);
  v14 = v40.m128i_i64[0];
  if ( !v40.m128i_i64[0] )
    return v44 - __readfsqword(0x28u);
  v15 = *(_QWORD *)v40.m128i_i64[0];
  if ( v40.m128i_i64[1] )
  {
    v25 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_38:
      *(_QWORD *)v14 = v15 & 3 | v14 & 0xFFFFFFFFFFFFFFFCLL;
      v28 = v40.m128i_i64[0];
      v29 = (__m128i)v40.m128i_u64[0];
      *(_QWORD *)v40.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v29, v29);
      *(_QWORD *)v40.m128i_i64[0] |= 2uLL;
      v40.m128i_i64[1] = 0;
      goto LABEL_18;
    }
    v26 = *(__int64 **)(v25 + 8);
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = *(__int64 **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_47;
    }
    else
    {
      sub_2B0F90(v26);
      v27 = *(__int64 **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_34;
    }
    sub_2B0F90(v27);
LABEL_34:
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
LABEL_35:
      if ( v15 > 3 )
        qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v40.m128i_i64[0];
      v15 = *(_QWORD *)v40.m128i_i64[0];
      goto LABEL_38;
    }
LABEL_47:
    v34 = *(_QWORD *)(v25 + 32);
    if ( v34 )
    {
      *(_QWORD *)(v25 + 40) = 0;
      qfree(v34);
    }
    *(_QWORD *)v25 |= 2uLL;
    goto LABEL_35;
  }
  *(_QWORD *)v40.m128i_i64[0] = *(_QWORD *)v40.m128i_i64[0] & 3LL | v40.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v16 = v40.m128i_i64[0];
  v17 = (__m128i)v40.m128i_u64[0];
  *(_QWORD *)v40.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
  *(_QWORD *)v40.m128i_i64[0] |= 2uLL;
LABEL_18:
  if ( v40.m128i_i64[0] )
    qfree(v40.m128i_i64[0]);
  return v44 - __readfsqword(0x28u);
}
