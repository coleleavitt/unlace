unsigned __int64 __fastcall sub_4DAD40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  __m128i *v14; // rax
  __m128i *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  char *v19; // rdx
  __int64 v20; // r12
  __int64 i; // rbx
  char *v22; // rax
  void *v23; // rdi
  __m128i v24; // xmm4
  __int64 v25; // r12
  __int64 v26; // rbx
  void *v27; // rdx
  __int64 v28; // rdx
  size_t v29; // r15
  __int64 v30; // rdi
  void *v31; // rax
  const void **v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-A0h]
  __m128i v34; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 *v36; // [rsp+38h] [rbp-70h] BYREF
  __m128i v37; // [rsp+40h] [rbp-68h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v40 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1720);
  ptr = nullptr;
  v37 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v39 = 0;
  v7 = unpack_dq(&v37);
  v35 = v7;
  if ( !a3 )
  {
    sub_4DA630((__int64)(v6 + 12), v7);
    goto LABEL_3;
  }
  sub_4D3DC0((__int64)&v37, (__int64 *)&ptr);
  v14 = (__m128i *)v6[14];
  if ( v14 )
  {
    v15 = (__m128i *)(v6 + 13);
    do
    {
      while ( 1 )
      {
        v16 = v14[1].m128i_i64[0];
        v17 = v14[1].m128i_i64[1];
        if ( v14[2].m128i_i64[0] < v35 )
          break;
        v15 = v14;
        v14 = (__m128i *)v14[1].m128i_i64[0];
        if ( !v16 )
          goto LABEL_16;
      }
      v14 = (__m128i *)v14[1].m128i_i64[1];
    }
    while ( v17 );
LABEL_16:
    if ( v6 + 13 != (_QWORD *)v15 && v35 >= v15[2].m128i_i64[0] )
      goto LABEL_19;
  }
  else
  {
    v15 = (__m128i *)(v6 + 13);
  }
  v36 = &v35;
  v15 = (__m128i *)sub_4D5760(v6 + 12, v15, (__int64)&unk_23ADC14, &v36);
LABEL_19:
  v33 = 0;
  v18 = v39;
  if ( (_QWORD)v39 )
  {
    v33 = qalloc_or_throw(24 * v39);
    v25 = v33;
    v26 = 0;
    do
    {
      v27 = ptr;
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v28 = (__int64)v27 + 24 * v26;
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v28 + 8);
        v34.m128i_i64[0] = v28;
        v31 = (void *)qalloc_or_throw(v30);
        v32 = (const void **)v34.m128i_i64[0];
        *(_QWORD *)v25 = v31;
        *(_QWORD *)(v25 + 16) = v29;
        memcpy(v31, *v32, v29);
        *(_QWORD *)(v25 + 8) = v29;
      }
      ++v26;
      v25 += 24;
    }
    while ( v18 != v26 );
  }
  v19 = (char *)v15[2].m128i_i64[1];
  v34 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
  if ( v19 )
  {
    v20 = v15[3].m128i_i64[0];
    if ( v20 )
    {
      for ( i = 0; i != v20; ++i )
      {
        v22 = &v19[24 * i];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)v15[2].m128i_i64[1];
        }
      }
    }
    v15[3].m128i_i64[0] = 0;
    qfree(v19);
  }
  v24 = _mm_load_si128(&v34);
  v15[2].m128i_i64[1] = v33;
  v15[3] = v24;
LABEL_3:
  v8 = (char *)ptr;
  if ( ptr )
  {
    v9 = v39;
    if ( (_QWORD)v39 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)ptr;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v8);
  }
  return v40 - __readfsqword(0x28u);
}
