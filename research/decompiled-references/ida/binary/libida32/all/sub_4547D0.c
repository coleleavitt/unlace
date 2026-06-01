unsigned __int64 __fastcall sub_4547D0(char **a1, __int64 *a2)
{
  __int64 v2; // rax
  const char *v3; // rsi
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  const char **v8; // r14
  const char **v9; // rbx
  __int64 v10; // rbp
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
  void *v30; // rax
  char *v31; // [rsp+0h] [rbp-80h]
  __int64 v32; // [rsp+8h] [rbp-78h]
  __int64 v33; // [rsp+10h] [rbp-70h]
  __int64 v34; // [rsp+18h] [rbp-68h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __m128i v37; // [rsp+30h] [rbp-50h]
  unsigned __int64 v38; // [rsp+40h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v2 = *a2;
  v37 = 0;
  ptr = nullptr;
  v3 = (const char *)*(unsigned int *)(v2 + 28);
  v34 = v2;
  if ( (int)v3 <= 0 )
  {
    v23 = 0;
    v15 = 0;
    v16 = nullptr;
    goto LABEL_28;
  }
  v33 = 0;
  do
  {
    v4 = switch_dbctx(*(int *)(v34 + 4 * v33 + 16));
    v5 = (__int64 *)sub_3ABE00(*(_QWORD *)(v4 + 1480));
    v6 = *v5;
    v32 = *v5 + 24 * v5[1];
    if ( v32 == *v5 )
      goto LABEL_20;
    do
    {
      v7 = v37.m128i_i64[0];
      v8 = (const char **)ptr;
      v31 = (char *)ptr;
      v9 = (const char **)((char *)ptr + 24 * v37.m128i_i64[0]);
      if ( ptr == v9 )
      {
LABEL_14:
        v12 = *(_QWORD *)(v6 + 8);
        v13 = nullptr;
        if ( v12 )
        {
          v30 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8), v3);
          v3 = *(const char **)v6;
          v13 = v30;
          memcpy(v30, *(const void **)v6, v12);
          v7 = v37.m128i_i64[0];
          v31 = (char *)ptr;
        }
        goto LABEL_16;
      }
      v10 = *(_QWORD *)(v6 + 8);
      while ( 1 )
      {
        if ( v8[1] )
        {
          v3 = *v8;
          v11 = haystack;
          if ( !v10 )
            goto LABEL_7;
          goto LABEL_12;
        }
        if ( !v10 )
          break;
        v3 = haystack;
LABEL_12:
        v11 = *(const char **)v6;
LABEL_7:
        if ( !strcmp(v11, v3) )
        {
          if ( v9 != v8 )
            goto LABEL_19;
          goto LABEL_14;
        }
        v8 += 3;
        if ( v9 == v8 )
          goto LABEL_14;
      }
      if ( v9 != v8 )
        goto LABEL_19;
      v12 = *(_QWORD *)(v6 + 8);
      v13 = nullptr;
LABEL_16:
      if ( v37.m128i_i64[1] < (unsigned __int64)(v7 + 1) )
      {
        v3 = v31;
        v31 = (char *)qvector_reserve(&ptr, v31, v7 + 1, 24);
        v7 = v37.m128i_i64[0];
        ptr = v31;
      }
      v14 = &v31[24 * v7];
      *(_QWORD *)v14 = v13;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      ++v37.m128i_i64[0];
LABEL_19:
      v6 += 24;
    }
    while ( v32 != v6 );
LABEL_20:
    ++v33;
  }
  while ( *(_DWORD *)(v34 + 28) > (int)v33 );
  v15 = v37.m128i_i64[0];
  v16 = (char *)ptr;
  v17 = 24 * v37.m128i_i64[0];
  v18 = (char *)ptr + 24 * v37.m128i_i64[0];
  if ( ptr == v18 )
    goto LABEL_27;
  v19 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 3);
  if ( !v19 )
  {
    sub_454100((__int64)ptr, (unsigned __int64)ptr + 24 * v37.m128i_i64[0], -2);
    goto LABEL_39;
  }
  _BitScanReverse64(&v20, v19);
  sub_454100((__int64)ptr, (unsigned __int64)ptr + 24 * v37.m128i_i64[0], 2LL * (int)v20);
  if ( v17 <= 384 )
  {
LABEL_39:
    sub_44ECE0((__int64)v16, (__int64)v18);
    v16 = (char *)ptr;
    v15 = v37.m128i_i64[0];
    goto LABEL_27;
  }
  v21 = v16 + 384;
  sub_44ECE0((__int64)v16, (__int64)(v16 + 384));
  do
  {
    v22 = (__int64)v21;
    v21 += 24;
    sub_44E790(v22);
  }
  while ( v18 != v21 );
  v16 = (char *)ptr;
  v15 = v37.m128i_i64[0];
LABEL_27:
  v23 = v37.m128i_i64[1];
LABEL_28:
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  v25 = *a1;
  a1[1] = (char *)v15;
  *a1 = v16;
  a1[2] = (char *)v23;
  ptr = v25;
  v37 = v24;
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
    v37.m128i_i64[0] = 0;
    qfree(v25);
  }
  return v38 - __readfsqword(0x28u);
}

