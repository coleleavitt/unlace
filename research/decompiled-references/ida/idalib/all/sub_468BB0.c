unsigned __int64 __fastcall sub_468BB0(char **a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  const char **v7; // r14
  const char **v8; // rbx
  __int64 v9; // rbp
  const char *v10; // rsi
  const char *v11; // rdi
  size_t v12; // rbp
  void *v13; // rbx
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // r12
  __int64 v17; // rbx
  char *v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __m128i v24; // xmm0
  char *v25; // rdi
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  char *v30; // [rsp+0h] [rbp-80h]
  __int64 v31; // [rsp+8h] [rbp-78h]
  __int64 v32; // [rsp+10h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-68h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __m128i v36; // [rsp+30h] [rbp-50h]
  unsigned __int64 v37; // [rsp+40h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = *a2;
  v36 = 0;
  ptr = nullptr;
  v33 = v2;
  if ( *(int *)(v2 + 28) <= 0 )
  {
    v23 = 0;
    v15 = 0;
    v16 = nullptr;
    goto LABEL_28;
  }
  v32 = 0;
  do
  {
    v3 = switch_dbctx(*(int *)(v33 + 4 * v32 + 16));
    v4 = (__int64 *)sub_3B0530(*(_QWORD *)(v3 + 1672));
    v5 = *v4;
    v31 = *v4 + 24 * v4[1];
    if ( v31 == *v4 )
      goto LABEL_20;
    do
    {
      v6 = v36.m128i_i64[0];
      v7 = (const char **)ptr;
      v30 = (char *)ptr;
      v8 = (const char **)((char *)ptr + 24 * v36.m128i_i64[0]);
      if ( ptr == v8 )
      {
LABEL_14:
        v12 = *(_QWORD *)(v5 + 8);
        v13 = nullptr;
        if ( v12 )
        {
          v13 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8));
          memcpy(v13, *(const void **)v5, v12);
          v6 = v36.m128i_i64[0];
          v30 = (char *)ptr;
        }
        goto LABEL_16;
      }
      v9 = *(_QWORD *)(v5 + 8);
      while ( 1 )
      {
        if ( v7[1] )
        {
          v10 = *v7;
          v11 = haystack;
          if ( !v9 )
            goto LABEL_7;
          goto LABEL_12;
        }
        if ( !v9 )
          break;
        v10 = haystack;
LABEL_12:
        v11 = *(const char **)v5;
LABEL_7:
        if ( !strcmp(v11, v10) )
        {
          if ( v8 != v7 )
            goto LABEL_19;
          goto LABEL_14;
        }
        v7 += 3;
        if ( v8 == v7 )
          goto LABEL_14;
      }
      if ( v8 != v7 )
        goto LABEL_19;
      v12 = *(_QWORD *)(v5 + 8);
      v13 = nullptr;
LABEL_16:
      if ( v36.m128i_i64[1] < (unsigned __int64)(v6 + 1) )
      {
        v30 = (char *)qvector_reserve(&ptr, v30, v6 + 1, 24);
        v6 = v36.m128i_i64[0];
        ptr = v30;
      }
      v14 = &v30[24 * v6];
      *(_QWORD *)v14 = v13;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      ++v36.m128i_i64[0];
LABEL_19:
      v5 += 24;
    }
    while ( v31 != v5 );
LABEL_20:
    ++v32;
  }
  while ( *(_DWORD *)(v33 + 28) > (int)v32 );
  v15 = v36.m128i_i64[0];
  v16 = (char *)ptr;
  v17 = 24 * v36.m128i_i64[0];
  v18 = (char *)ptr + 24 * v36.m128i_i64[0];
  if ( ptr == v18 )
    goto LABEL_27;
  v19 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 3);
  if ( !v19 )
  {
    sub_4684E0((__int64)ptr, (unsigned __int64)ptr + 24 * v36.m128i_i64[0], -2);
    goto LABEL_39;
  }
  _BitScanReverse64(&v20, v19);
  sub_4684E0((__int64)ptr, (unsigned __int64)ptr + 24 * v36.m128i_i64[0], 2LL * (int)v20);
  if ( v17 <= 384 )
  {
LABEL_39:
    sub_463060((__int64)v16, (__int64)v18);
    v16 = (char *)ptr;
    v15 = v36.m128i_i64[0];
    goto LABEL_27;
  }
  v21 = v16 + 384;
  sub_463060((__int64)v16, (__int64)(v16 + 384));
  do
  {
    v22 = (__int64)v21;
    v21 += 24;
    sub_462B10(v22);
  }
  while ( v18 != v21 );
  v16 = (char *)ptr;
  v15 = v36.m128i_i64[0];
LABEL_27:
  v23 = v36.m128i_i64[1];
LABEL_28:
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v25 = *a1;
  a1[1] = (char *)v15;
  *a1 = v16;
  a1[2] = (char *)v23;
  ptr = v25;
  v36 = v24;
  if ( v25 )
  {
    if ( v24.m128i_i64[0] )
    {
      v26 = 0;
      do
      {
        v27 = &v25[24 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
        }
        ++v26;
        v25 = (char *)ptr;
      }
      while ( v24.m128i_i64[0] != v26 );
    }
    v36.m128i_i64[0] = 0;
    qfree(v25);
  }
  return v37 - __readfsqword(0x28u);
}
