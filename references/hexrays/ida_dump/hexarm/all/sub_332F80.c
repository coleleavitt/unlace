_QWORD *__fastcall sub_332F80(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v5; // rax
  __int64 *v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  _BYTE *v13; // rbp
  _QWORD *v14; // rax
  char v15; // dl
  _BYTE *j; // rdi
  _BYTE *v17; // rax
  _BYTE *v18; // r15
  size_t v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // rsi
  __m128i v23; // xmm0
  _QWORD *v24; // rax
  int v25; // ecx
  _BYTE *v26; // r15
  void *v28; // rdi
  size_t v29; // r14
  size_t v30; // r14
  __int64 v31; // rsi
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 *v34; // r14
  __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  bool v42; // [rsp+Fh] [rbp-99h]
  __m128i n; // [rsp+10h] [rbp-98h] BYREF
  void *v44; // [rsp+20h] [rbp-88h]
  int v45; // [rsp+28h] [rbp-80h]
  int v46; // [rsp+2Ch] [rbp-7Ch]
  int v47; // [rsp+30h] [rbp-78h]
  int v48; // [rsp+34h] [rbp-74h]
  __int64 v49; // [rsp+38h] [rbp-70h]
  _QWORD *v50; // [rsp+40h] [rbp-68h]
  _DWORD *v51; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v53; // [rsp+58h] [rbp-50h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v5 = *(_DWORD **)(a1 + 216);
  v47 = a3;
  v6 = (__int64 *)*a4;
  v54 = __readfsqword(0x28u);
  v7 = a4;
  v51 = v5;
  if ( v6 )
  {
    v8 = a4[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = &v6[4 * i];
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v6 = (__int64 *)*v7;
        }
      }
    }
    v7[1] = 0;
    qfree(v6);
    *v7 = 0;
    v7[2] = 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a2 + 8) )
    return sub_1CE420(v12);
  v13 = *(_BYTE **)a2;
  v48 = v51[145];
  v14 = sub_1CE420(v12);
  v42 = 0;
  v15 = *v13;
  if ( v14 && *((_DWORD *)v14 + 16) == v51[147] )
  {
    v48 = v51[147];
    v42 = 1;
    v47 = -1;
  }
  if ( v15 )
  {
    v45 = 0;
    do
    {
      for ( j = v13; ; j = v17 + 1 )
      {
        v17 = (_BYTE *)tag_skipcodes(j);
        if ( *v17 == 10 || !*v17 )
          break;
      }
      ++v45;
      v18 = v17;
      src = nullptr;
      v53 = 0;
      v19 = v17 - v13;
      if ( v17 == v13 )
        goto LABEL_19;
      v28 = nullptr;
      if ( v19 != -1 )
      {
        src = (void *)qvector_reserve(&src, 0, v19 + 1, 1);
        v28 = src;
      }
      *(_QWORD *)&v53 = v19 + 1;
      memmove(v28, v13, v19);
      *((_BYTE *)src + v19) = 0;
      n.m128i_i64[0] = v53;
      if ( (_QWORD)v53 )
      {
        v29 = n.m128i_i64[0];
        n.m128i_i64[1] = qalloc_or_throw(n.m128i_i64[0]);
        memcpy((void *)n.m128i_i64[1], src, v29);
        if ( src )
        {
          *(_QWORD *)&v53 = 0;
          qfree(src);
        }
        if ( v42 )
          v46 = v48;
        else
          v46 = -1;
        v30 = n.m128i_i64[0];
        v44 = (void *)qalloc_or_throw(n.m128i_i64[0]);
        memcpy(v44, (const void *)n.m128i_i64[1], v30);
        goto LABEL_21;
      }
      if ( !src )
      {
LABEL_19:
        if ( v42 )
          goto LABEL_42;
      }
      else
      {
        qfree(src);
        if ( v42 )
        {
LABEL_42:
          n = 0u;
          v46 = v48;
          v44 = nullptr;
          goto LABEL_21;
        }
      }
      v46 = -1;
      n = 0u;
      v44 = nullptr;
LABEL_21:
      v20 = v7[1];
      v21 = v7[2];
      if ( v21 < v20 + 1 )
      {
        v31 = qvector_reserve(v7, 0, v20 + 1, 32);
        v32 = v7[1];
        v33 = v7[2];
        v7[2] = v21;
        v34 = (__int64 *)*v7;
        v49 = v33;
        v35 = v32 - 1;
        if ( v35 >= 0 )
        {
          v50 = v7;
          v36 = v31;
          v37 = v35;
          do
          {
            v38 = *v34;
            v39 = _mm_loadu_si128((const __m128i *)(v34 + 1));
            *v34 = 0;
            v34[2] = 0;
            *(_QWORD *)v36 = v38;
            *(__m128i *)(v36 + 8) = v39;
            *(_BYTE *)(v36 + 24) = *((_BYTE *)v34 + 24);
            *(_DWORD *)(v36 + 28) = *((_DWORD *)v34 + 7);
            v40 = *v34;
            if ( *v34 )
            {
              v34[1] = 0;
              qfree(v40);
            }
            v34 += 4;
            v36 += 32;
          }
          while ( v37-- != 0 );
          v7 = v50;
          v34 = (__int64 *)*v50;
        }
        v50 = (_QWORD *)v31;
        qfree(v34);
        v22 = v50;
        v7[2] = v49;
        v20 = v7[1];
        *v7 = v22;
      }
      else
      {
        v22 = (_QWORD *)*v7;
      }
      v23 = _mm_loadl_epi64(&n);
      v24 = &v22[4 * v20];
      *v24 = v44;
      v25 = v46;
      *((_BYTE *)v24 + 24) = 1;
      *((_DWORD *)v24 + 7) = v25;
      *(__m128i *)(v24 + 1) = _mm_unpacklo_epi64(v23, v23);
      ++v7[1];
      if ( !v42 )
        v42 = *(_BYTE *)tag_skipcodes(v13) == 123;
      v26 = &v18[-(*v18 == 0) + 1];
      v13 = v26;
      if ( v47 == v45 )
        v48 = v51[146];
      if ( n.m128i_i64[1] )
        qfree(n.m128i_i64[1]);
    }
    while ( *v26 );
  }
  return (_QWORD *)(v54 - __readfsqword(0x28u));
}
