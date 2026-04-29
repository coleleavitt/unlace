unsigned __int64 __fastcall sub_3C1E20(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *exception; // rdi
  __int64 v7; // rdi
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  size_t v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 *i; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  _BYTE *v25; // rdi
  _BYTE *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  const void *v32; // r9
  void *v33; // rdi
  char v34; // cl
  unsigned __int64 v35; // rdx
  _BYTE *v36; // rdx
  char v37; // dl
  __int64 v38; // rdi
  __int64 v39; // rax
  const void *v40; // [rsp+10h] [rbp-78h]
  unsigned __int64 v41; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 *v42; // [rsp+28h] [rbp-60h] BYREF
  __m128i v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 112);
  v41 = a3;
  v44 = __readfsqword(0x28u);
  v43 = 0u;
  sub_2B4160(v7, (__int64)&v43, a2);
  if ( *(_QWORD *)(a4 + 8) <= 1u )
  {
    if ( !v43.m128i_i64[0] )
      goto LABEL_11;
    i = (__int64 *)(*(_QWORD *)v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
    if ( i )
    {
      if ( (*(_BYTE *)i & 2) != 0 )
        goto LABEL_11;
      v22 = i[3];
      if ( v41 >= v22 )
        goto LABEL_25;
LABEL_22:
      for ( i = (__int64 *)i[1]; ; i = (__int64 *)i[2] )
      {
        if ( (*(_BYTE *)i & 2) != 0 )
          goto LABEL_11;
        v22 = i[3];
        if ( v41 < v22 )
          goto LABEL_22;
LABEL_25:
        if ( v22 >= v41 )
          break;
      }
      if ( (__int64 *)v43.m128i_i64[0] == i )
        goto LABEL_11;
    }
    sub_342D00((unsigned __int64 **)&v43, i);
    goto LABEL_11;
  }
  v9 = (unsigned __int64 *)v43.m128i_i64[0];
  v42 = &v41;
  if ( !v43.m128i_i64[0] )
  {
    v27 = qalloc(64);
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
    *(_OWORD *)(v27 + 48) = 0;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v43.m128i_i64[0] = v27;
    v29 = *(_QWORD *)v27;
    *(__m128i *)(v27 + 8) = v28;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | v29 & 3;
    v30 = v43.m128i_i64[0];
    v31 = (__m128i)v43.m128i_u64[0];
    *(_QWORD *)v43.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64(v31, v31);
    *(_QWORD *)v43.m128i_i64[0] |= 2uLL;
    v9 = (unsigned __int64 *)v43.m128i_i64[0];
    goto LABEL_4;
  }
  if ( !v43.m128i_i64[1] )
  {
LABEL_4:
    v10 = sub_307D60(&v43, v9, 1, (__int64 **)&v42);
LABEL_5:
    v11 = (_QWORD *)(v10 + 24);
    goto LABEL_6;
  }
  v10 = *(_QWORD *)v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v37 = 1;
LABEL_50:
    v10 = sub_307D60(&v43, v9, v37, (__int64 **)&v42);
    goto LABEL_5;
  }
  v34 = 1;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v10 + 24);
    v11 = (_QWORD *)(v10 + 24);
    if ( v41 < v35 )
    {
      v36 = *(_BYTE **)(v10 + 8);
      v34 = 1;
      goto LABEL_47;
    }
    if ( v35 >= v41 )
      break;
    v36 = *(_BYTE **)(v10 + 16);
    v34 = 0;
LABEL_47:
    if ( (*v36 & 2) != 0 )
      goto LABEL_48;
    v10 = (unsigned __int64)v36;
  }
  if ( !v10 )
  {
LABEL_48:
    v37 = v34;
    v9 = (unsigned __int64 *)v10;
    goto LABEL_50;
  }
LABEL_6:
  v12 = v10 + 32;
  if ( a4 != v12 )
  {
    v13 = *(_QWORD *)(a4 + 8);
    if ( v13 && (v14 = v13 - 1, v13 != 1) )
    {
      v32 = *(const void **)a4;
      v33 = (void *)v11[1];
      if ( v11[3] < v13 )
      {
        v40 = *(const void **)a4;
        v39 = qvector_reserve(v12, v11[1], *(_QWORD *)(a4 + 8), 1);
        v11[1] = v39;
        v32 = v40;
        v33 = (void *)v39;
        v14 = v13 - 1;
      }
      v11[2] = v13;
      memmove(v33, v32, v14);
      *(_BYTE *)(v11[1] + v13 - 1) = 0;
    }
    else
    {
      v11[2] = 0;
    }
  }
  copy_tinfo_t(v11 + 4, a4 + 24);
LABEL_11:
  sub_2B40E0(*(_QWORD *)(a1 + 112), a2, (__int64)&v43);
  v15 = v43.m128i_i64[0];
  if ( !v43.m128i_i64[0] )
    return v44 - __readfsqword(0x28u);
  v16 = *(_QWORD *)v43.m128i_i64[0];
  if ( !v43.m128i_i64[1] )
  {
    *(_QWORD *)v43.m128i_i64[0] = *(_QWORD *)v43.m128i_i64[0] & 3LL | v43.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v23 = v43.m128i_i64[0];
    v24 = (__m128i)v43.m128i_u64[0];
    *(_QWORD *)v43.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v24, v24);
    *(_QWORD *)v43.m128i_i64[0] |= 2uLL;
    goto LABEL_15;
  }
  v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_14;
  v25 = (_BYTE *)v17[1];
  if ( (*v25 & 2) == 0 )
  {
    sub_3C1190((__int64)v25);
    v26 = (_BYTE *)v17[2];
    if ( (*v26 & 2) != 0 )
      goto LABEL_32;
    goto LABEL_42;
  }
  v26 = (_BYTE *)v17[2];
  if ( (*v26 & 2) != 0 )
  {
LABEL_56:
    clear_tinfo_t(v17 + 7);
    v38 = v17[4];
    if ( v38 )
    {
      v17[5] = 0;
      qfree(v38);
    }
    *v17 |= 2uLL;
    goto LABEL_33;
  }
LABEL_42:
  sub_3C1190((__int64)v26);
LABEL_32:
  if ( (*(_BYTE *)v17 & 2) == 0 )
    goto LABEL_56;
LABEL_33:
  if ( v16 > 3 )
    qfree(v16 & 0xFFFFFFFFFFFFFFFCLL);
  v15 = v43.m128i_i64[0];
  v16 = *(_QWORD *)v43.m128i_i64[0];
LABEL_14:
  *(_QWORD *)v15 = v16 & 3 | v15 & 0xFFFFFFFFFFFFFFFCLL;
  v18 = v43.m128i_i64[0];
  v19 = (__m128i)v43.m128i_u64[0];
  *(_QWORD *)v43.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64(v19, v19);
  *(_QWORD *)v43.m128i_i64[0] |= 2uLL;
  v43.m128i_i64[1] = 0;
LABEL_15:
  if ( v43.m128i_i64[0] )
    qfree(v43.m128i_i64[0]);
  return v44 - __readfsqword(0x28u);
}
