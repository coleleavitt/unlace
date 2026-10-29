unsigned __int64 __fastcall sub_4DAA80(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  __m128i *v8; // rax
  __m128i *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  char *v14; // rdx
  __int64 v15; // r12
  __int64 i; // rbx
  char *v17; // rax
  void *v18; // rdi
  __m128i v19; // xmm4
  char *v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rbx
  char *v23; // rdx
  void *v24; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  void *v28; // rdx
  __int64 v29; // rdx
  size_t v30; // r15
  __int64 v31; // rdi
  void *v32; // rax
  const void **v33; // rdx
  __m128i v34; // [rsp+0h] [rbp-A8h] BYREF
  void *p_ptr; // [rsp+18h] [rbp-90h]
  unsigned __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 *v37; // [rsp+38h] [rbp-70h] BYREF
  __m128i v38; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v40; // [rsp+58h] [rbp-50h]
  unsigned __int64 v41; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v41 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1720);
  v38 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v38);
  v36 = v7;
  if ( a3 )
  {
    sub_4DA630((__int64)(v6 + 12), v7);
    return v41 - __readfsqword(0x28u);
  }
  ptr = nullptr;
  p_ptr = &ptr;
  v40 = 0;
  sub_4D3DC0((__int64)&v38, (__int64 *)&ptr);
  v8 = (__m128i *)v6[14];
  if ( v8 )
  {
    v9 = (__m128i *)(v6 + 13);
    do
    {
      while ( 1 )
      {
        v10 = v8[1].m128i_i64[0];
        v11 = v8[1].m128i_i64[1];
        if ( v8[2].m128i_i64[0] < v36 )
          break;
        v9 = v8;
        v8 = (__m128i *)v8[1].m128i_i64[0];
        if ( !v10 )
          goto LABEL_7;
      }
      v8 = (__m128i *)v8[1].m128i_i64[1];
    }
    while ( v11 );
LABEL_7:
    if ( v6 + 13 != (_QWORD *)v9 && v36 >= v9[2].m128i_i64[0] )
      goto LABEL_10;
  }
  else
  {
    v9 = (__m128i *)(v6 + 13);
  }
  v37 = &v36;
  v9 = (__m128i *)sub_4D5760(v6 + 12, v9, (__int64)&unk_23ADC14, &v37);
LABEL_10:
  v12 = v40;
  v13 = 0;
  if ( (_QWORD)v40 )
  {
    v13 = qalloc_or_throw(24 * v40);
    v26 = v13;
    v27 = 0;
    do
    {
      v28 = ptr;
      *(_QWORD *)v26 = 0;
      *(_OWORD *)(v26 + 8) = 0;
      v29 = (__int64)v28 + 24 * v27;
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v29 + 8);
        v34.m128i_i64[0] = v29;
        v32 = (void *)qalloc_or_throw(v31);
        v33 = (const void **)v34.m128i_i64[0];
        *(_QWORD *)v26 = v32;
        *(_QWORD *)(v26 + 16) = v30;
        memcpy(v32, *v33, v30);
        *(_QWORD *)(v26 + 8) = v30;
      }
      ++v27;
      v26 += 24;
    }
    while ( v12 != v27 );
  }
  v14 = (char *)v9[2].m128i_i64[1];
  v34 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  if ( v14 )
  {
    v15 = v9[3].m128i_i64[0];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = &v14[24 * i];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)v9[2].m128i_i64[1];
        }
      }
    }
    v9[3].m128i_i64[0] = 0;
    qfree(v14);
  }
  v19 = _mm_load_si128(&v34);
  v20 = (char *)ptr;
  v9[2].m128i_i64[1] = v13;
  v9[3] = v19;
  if ( v20 )
  {
    v21 = v40;
    if ( (_QWORD)v40 )
    {
      v22 = 0;
      do
      {
        v23 = &v20[24 * v22];
        v24 = *(void **)v23;
        if ( *(_QWORD *)v23 )
        {
          *((_QWORD *)v23 + 1) = 0;
          qfree(v24);
          v20 = (char *)ptr;
        }
        ++v22;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v20);
  }
  return v41 - __readfsqword(0x28u);
}
