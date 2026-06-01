__int64 __fastcall sub_3EE700(__m128i **a1, unsigned __int8 a2, __int64 a3, __m128i *a4)
{
  __m128i *v4; // rax
  __m128i *v6; // r14
  const __m128i *v8; // rdi
  __int64 (*v10)(void); // rax
  const __m128i *v11; // rdi
  __int64 v12; // rbx
  char *v13; // rsi
  __int64 m128i_i64; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // r15
  __int32 v18; // r8d
  __int64 v19; // rax
  __m128i *v20; // rax
  __m128i *v21; // rdi
  __int64 v22; // rax
  void (__fastcall *v23)(__m128i *, const __m128i *); // rax
  __m128i *v24; // rdi
  void (__fastcall *v25)(__m128i *, const __m128i *); // rax
  char *v26; // rdi
  __int64 v27; // r14
  __int64 v29; // rax
  char *v30; // rdx
  char *v31; // rax
  __m128i v32; // xmm0
  __m128i *v33; // rsi
  __int64 v34; // rcx
  __m128i v35; // [rsp+8h] [rbp-90h] BYREF
  __int32 v36; // [rsp+1Ch] [rbp-7Ch]
  __m128i v37; // [rsp+20h] [rbp-78h] BYREF
  __m128i si128; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 i; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v4 = a1[3];
  if ( a4 <= v4 )
    v4 = a4;
  if ( !a2 )
    return 0;
  v6 = v4;
  if ( a3 >= (unsigned __int64)v4 )
    return 0;
  v8 = a1[1];
  v10 = *(__int64 (**)(void))(v8->m128i_i64[0] + 32);
  if ( (char *)v10 == (char *)sub_3D58E0 )
    v11 = v8 + 1;
  else
    v11 = (const __m128i *)v10();
  v12 = (__int64)&v6[-1].m128i_i64[1] + 7;
  ptr = nullptr;
  v37 = _mm_loadu_si128(v11);
  for ( i = 0; a3 <= v12; v20[1].m128i_i32[2] = v18 )
  {
    while ( (unsigned __int8)sub_3EE5B0(a1, v12, a2) )
    {
      if ( a3 > --v12 )
        goto LABEL_14;
    }
    v13 = (char *)ptr;
    m128i_i64 = (__int64)a1[2][2 * v12].m128i_i64;
    v15 = _mm_loadl_epi64((const __m128i *)m128i_i64);
    v16 = _mm_loadl_epi64((const __m128i *)(m128i_i64 + 8));
    v17 = *(_QWORD *)(m128i_i64 + 16);
    v18 = *(_DWORD *)(m128i_i64 + 24);
    v19 = i;
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      v36 = v18;
      v35.m128i_i64[1] = v16.m128i_i64[0];
      v35.m128i_i64[0] = v15.m128i_i64[0];
      ptr = (void *)qvector_reserve(&ptr, ptr, i + 1, 32);
      v13 = (char *)ptr;
      v18 = v36;
      v19 = i;
      v16 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
      v15 = _mm_loadl_epi64(&v35);
    }
    --v12;
    v20 = (__m128i *)&v13[32 * v19];
    *v20 = _mm_unpacklo_epi64(v15, v16);
    v20[1].m128i_i64[0] = v17;
    *(_QWORD *)&i = i + 1;
  }
LABEL_14:
  v21 = *a1;
  v22 = (*a1)->m128i_i64[0];
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  v23 = *(void (__fastcall **)(__m128i *, const __m128i *))(v22 + 24);
  if ( v23 == sub_3D58D0 )
    v21[1] = _mm_load_si128(&si128);
  else
    v23(v21, &si128);
  v24 = a1[1];
  v25 = *(void (__fastcall **)(__m128i *, const __m128i *))(v24->m128i_i64[0] + 24);
  if ( v25 == sub_3D58D0 )
    v24[1] = _mm_load_si128(&v37);
  else
    v25(v24, &v37);
  v26 = (char *)ptr;
  v27 = (__int64)v6->m128i_i64 - a3 - i;
  if ( v27 )
  {
    memmove(&a1[2][2 * a3], &a1[2][2 * a3 + 2 * v27], 32LL * (_QWORD)a1[3] - (32 * a3 + 32 * v27));
    v29 = i;
    a1[3] = (__m128i *)((char *)a1[3] - ((32 * v27) >> 5));
    v26 = (char *)ptr;
    if ( v29 )
    {
      v30 = (char *)ptr + 32 * v29;
      v31 = (char *)ptr + 32 * v29 + 32 * a3;
      do
      {
        v32 = _mm_loadu_si128((const __m128i *)v30 - 2);
        v33 = a1[2];
        v34 = v31 - v30;
        v30 -= 32;
        *(__m128i *)((char *)v33 + v34) = v32;
        *(__m128i *)((char *)v33 + v34 + 12) = _mm_loadu_si128((const __m128i *)(v30 + 12));
      }
      while ( v26 != v30 );
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&i = 0;
    qfree(v26);
  }
  return v27;
}

