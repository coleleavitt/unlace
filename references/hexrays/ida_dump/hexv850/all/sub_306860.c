unsigned __int64 __fastcall sub_306860(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  bool (__fastcall *v3)(__int64); // rax
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v13; // rsi
  char v14; // cl
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rdx
  char v17; // dl
  unsigned __int64 v18; // rbp
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm0
  _QWORD *exception; // rdi
  unsigned __int64 v29; // [rsp+8h] [rbp-90h]
  __int64 *v30; // [rsp+18h] [rbp-80h] BYREF
  __m128i v31; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-68h] BYREF
  char v33; // [rsp+40h] [rbp-58h]
  __m128i *v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v31 = 0u;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = v1 + (*(_QWORD *)(a1 + 48) << 6);
  if ( v2 == v1 )
    goto LABEL_11;
  do
  {
    while ( 1 )
    {
      v3 = **(bool (__fastcall ***)(__int64))v1;
      if ( v3 == sub_2A7E00 )
        break;
      if ( v3(v1) )
        goto LABEL_6;
LABEL_3:
      v1 += 64;
      if ( v2 == v1 )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(v1 + 8) == *(_QWORD *)(v1 + 48) )
      goto LABEL_3;
LABEL_6:
    v4 = (unsigned __int64 *)v31.m128i_i64[0];
    v30 = (__int64 *)(v1 + 8);
    if ( !v31.m128i_i64[0] )
    {
      v23 = qalloc(64);
      v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
      if ( !v23 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_OWORD *)(v23 + 16) = 0;
      *(_OWORD *)(v23 + 32) = 0;
      *(_OWORD *)(v23 + 48) = 0;
      *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
      v31.m128i_i64[0] = v23;
      v25 = *(_QWORD *)v23;
      *(__m128i *)(v23 + 8) = v24;
      *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | v25 & 3;
      v26 = v31.m128i_i64[0];
      v27 = (__m128i)v31.m128i_u64[0];
      *(_QWORD *)v31.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v27, v27);
      *(_QWORD *)v31.m128i_i64[0] |= 2uLL;
      v4 = (unsigned __int64 *)v31.m128i_i64[0];
LABEL_8:
      v5 = sub_306620(&v31, v4, 1, &v30);
LABEL_9:
      v29 = v5 + 24;
      goto LABEL_10;
    }
    if ( !v31.m128i_i64[1] )
      goto LABEL_8;
    v5 = *(_QWORD *)v31.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v17 = 1;
LABEL_25:
      v5 = sub_306620(&v31, v4, v17, &v30);
      goto LABEL_9;
    }
    v13 = *(_QWORD *)(v1 + 8);
    v14 = 1;
    while ( 1 )
    {
      v29 = v5 + 24;
      v15 = *(_QWORD *)(v5 + 24);
      if ( v13 < v15 )
      {
        v16 = *(_BYTE **)(v5 + 8);
        v14 = 1;
        if ( (*v16 & 2) != 0 )
          goto LABEL_23;
        goto LABEL_37;
      }
      if ( v15 >= v13 )
        break;
      v16 = *(_BYTE **)(v5 + 16);
      v14 = 0;
      if ( (*v16 & 2) != 0 )
        goto LABEL_23;
LABEL_37:
      v5 = (unsigned __int64)v16;
    }
    if ( !v5 )
    {
LABEL_23:
      v17 = v14;
      v4 = (unsigned __int64 *)v5;
      goto LABEL_25;
    }
LABEL_10:
    sub_2AB770(v5 + 32, v1 + 16);
    copy_tinfo_t(v29 + 32, v1 + 40);
    v1 += 64;
  }
  while ( v2 != v1 );
LABEL_11:
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 64);
  v33 = 100;
  v32[1] = v6;
  v32[0] = &off_4B4AB8;
  v34 = &v31;
  sub_2B0E40(v7, (__int64)v32, 0);
  v8 = v31.m128i_i64[0];
  if ( !v31.m128i_i64[0] )
    return v35 - __readfsqword(0x28u);
  v9 = *(_QWORD *)v31.m128i_i64[0];
  if ( v31.m128i_i64[1] )
  {
    v18 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_34:
      *(_QWORD *)v8 = v9 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = v31.m128i_i64[0];
      v22 = (__m128i)v31.m128i_u64[0];
      *(_QWORD *)v31.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v22, v22);
      *(_QWORD *)v31.m128i_i64[0] |= 2uLL;
      v31.m128i_i64[1] = 0;
      goto LABEL_14;
    }
    v19 = *(_QWORD **)(v18 + 8);
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
      v20 = *(_QWORD **)(v18 + 16);
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_43;
    }
    else
    {
      sub_2B0700(v19);
      v20 = *(_QWORD **)(v18 + 16);
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_30;
    }
    sub_2B0700(v20);
LABEL_30:
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
LABEL_31:
      if ( v9 > 3 )
        qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
      v8 = v31.m128i_i64[0];
      v9 = *(_QWORD *)v31.m128i_i64[0];
      goto LABEL_34;
    }
LABEL_43:
    sub_2AFDA0((__int64 *)(v18 + 32));
    *(_QWORD *)v18 |= 2uLL;
    goto LABEL_31;
  }
  *(_QWORD *)v31.m128i_i64[0] = *(_QWORD *)v31.m128i_i64[0] & 3LL | v31.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  v10 = v31.m128i_i64[0];
  v11 = (__m128i)v31.m128i_u64[0];
  *(_QWORD *)v31.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v11, v11);
  *(_QWORD *)v31.m128i_i64[0] |= 2uLL;
LABEL_14:
  if ( v31.m128i_i64[0] )
    qfree(v31.m128i_i64[0]);
  return v35 - __readfsqword(0x28u);
}
