size_t __fastcall sub_1CCE70(void **a1, unsigned __int8 **a2)
{
  size_t v2; // r12
  unsigned __int8 *v3; // r14
  unsigned __int8 v6; // al
  unsigned int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int64 v10; // r12
  unsigned int v11; // r12d
  char *v12; // r13
  unsigned int v13; // eax
  const char *v14; // rsi
  void *v15; // rdi
  unsigned int v16; // r15d
  char *v17; // rax
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i v21; // xmm0
  void *v23; // rax
  unsigned __int8 *v24; // rsi
  void *v25; // rbp
  void *v26; // rdi
  int v27; // [rsp+4h] [rbp-74h]
  int v28; // [rsp+4h] [rbp-74h]
  int v29; // [rsp+8h] [rbp-70h]
  int v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+Ch] [rbp-6Ch]
  void *src; // [rsp+18h] [rbp-60h] BYREF
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __m128i v34; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v2 = (size_t)a2[1];
  if ( !v2 )
    return 0;
  v3 = *a2;
  v6 = **a2;
  if ( v6 > 0x14u )
  {
    if ( v6 == 60 )
    {
      v23 = (void *)qalloc_or_throw(a2[1]);
      v24 = *a2;
      v25 = v23;
      memcpy(v23, v24, v2);
      v26 = *a1;
      if ( *a1 )
      {
        a1[1] = nullptr;
        qfree(v26, (const char *)v24);
      }
      *a1 = v25;
      *(__m128i *)(a1 + 1) = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
      return v2;
    }
    return 0;
  }
  if ( (int)v2 <= 19 )
    return 0;
  dest = *a2;
  v27 = unpack_dd(&dest, &v3[(int)v2]);
  unpack_dd(&dest, &v3[(int)v2]);
  v29 = unpack_dd(&dest, &v3[(int)v2]);
  unpack_dd(&dest, &v3[(int)v2]);
  v7 = unpack_dd(&dest, &v3[(int)v2]);
  v8 = (_DWORD)dest - (_DWORD)v3;
  if ( v27 != 20 )
    return 0;
  if ( v7 > 0xFFFFF )
    return 0;
  if ( (int)v2 - v8 < (int)v7 )
    return 0;
  v9 = v8 + v7;
  if ( v9 < 0 )
    return 0;
  v10 = (unsigned __int64)a2[1];
  if ( v9 >= v10 )
    return 0;
  if ( v29 != 1 )
    return 0;
  v11 = v10 - v9;
  v12 = (char *)&(*a2)[v9];
  dest = nullptr;
  v34 = 0;
  if ( (int)v11 <= 19 )
    return 0;
  src = v12;
  v28 = unpack_dd(&src, &v12[v11]);
  v31 = unpack_dd(&src, &v12[v11]);
  v30 = unpack_dd(&src, &v12[v11]);
  unpack_dd(&src, &v12[v11]);
  v13 = unpack_dd(&src, &v12[v11]);
  v14 = (const char *)src;
  v15 = dest;
  v16 = v13;
  v17 = (char *)dest;
  v18 = (_DWORD)src - (_DWORD)v12;
  if ( v28 != 20 || v16 > 0xFFFFF || (int)(v11 - v18) < (int)v16 )
  {
LABEL_36:
    if ( v15 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v15, v14);
    }
    return 0;
  }
  v19 = v34.m128i_i64[0];
  if ( v34.m128i_i64[0] < (unsigned __int64)v16 )
  {
    if ( v34.m128i_i64[1] < (unsigned __int64)v16 )
    {
      v17 = (char *)qvector_reserve(&dest, dest, v16, 1);
      dest = v17;
      v19 = v34.m128i_i64[0];
    }
    memset(&v17[v19], 0, v16 - v19);
    v34.m128i_i64[0] = v16;
    memcpy(dest, src, v16);
  }
  else
  {
    if ( v16 != v34.m128i_i64[0] )
      v34.m128i_i64[0] = v16;
    memcpy(dest, src, v16);
    if ( !v16 )
      goto LABEL_18;
  }
  v14 = (const char *)dest;
  if ( v31 != (unsigned int)calc_crc32(0, dest, v34.m128i_i64[0]) )
    goto LABEL_35;
LABEL_18:
  if ( (int)(v18 + v16) < 0 )
  {
LABEL_35:
    v15 = dest;
    goto LABEL_36;
  }
  v15 = dest;
  if ( v30 != 1 )
    goto LABEL_36;
  if ( a1 )
  {
    v15 = *a1;
    v20 = (__int64)a1[2];
    *a1 = dest;
    v21 = _mm_loadu_si128(&v34);
    dest = v15;
    v34.m128i_i64[1] = v20;
    *(__m128i *)(a1 + 1) = v21;
  }
  if ( v15 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v15, v14);
  }
  return (size_t)a1[1];
}
