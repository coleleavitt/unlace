unsigned __int64 __fastcall sub_6D4D40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  size_t v8; // r15
  void *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  char v12; // al
  __m128i v13; // xmm0
  __int64 v14; // r9
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rax
  void *v18; // rax
  void *v19; // rdx
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  char *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  void *v28; // rax
  void *v29; // rax
  char *v30; // rax
  __m128i v31; // [rsp+8h] [rbp-98h] BYREF
  __m128i v32; // [rsp+18h] [rbp-88h] BYREF
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __m128i v34; // [rsp+30h] [rbp-70h] BYREF
  void *src; // [rsp+48h] [rbp-58h] BYREF
  size_t n; // [rsp+50h] [rbp-50h]
  __int64 v37; // [rsp+58h] [rbp-48h]
  unsigned __int64 v38; // [rsp+60h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v34 = 0;
  ptr = nullptr;
  v37 = 0;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
  {
    v18 = nullptr;
    v9 = nullptr;
    if ( !a2 )
      return v38 - __readfsqword(0x28u);
    goto LABEL_17;
  }
  v5 = nullptr;
  v6 = sub_B8C3D0(a3);
  v7 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
    v5 = *(__int64 **)sub_B8C3D0(a3);
  v8 = 0;
  v9 = nullptr;
  if ( (__int64 *)v7 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *v5;
        if ( *v5 )
        {
          if ( *(_WORD *)(v10 + 36) == 91 )
          {
            v11 = *(_QWORD *)(a1 + 48);
            src = v9;
            n = v8;
            v12 = sub_6D4A70((char **)&src, v10, v11);
            v8 = n;
            v9 = src;
            v13 = _mm_unpacklo_epi64((__m128i)n, (__m128i)n);
            if ( v12 )
              break;
          }
        }
        if ( (__int64 *)v7 == ++v5 )
          goto LABEL_15;
      }
      v14 = 0;
      if ( n )
      {
        v31 = v13;
        v28 = (void *)qalloc_or_throw(n);
        v29 = memcpy(v28, v9, v8);
        v13 = _mm_load_si128(&v31);
        v14 = (__int64)v29;
      }
      v15 = v34.m128i_i64[0];
      v16 = (char *)ptr;
      if ( v34.m128i_i64[1] < (unsigned __int64)(v34.m128i_i64[0] + 1) )
      {
        v31.m128i_i64[0] = v14;
        v32 = v13;
        v30 = (char *)qvector_reserve(&ptr, ptr, v34.m128i_i64[0] + 1, 24);
        v15 = v34.m128i_i64[0];
        v13 = _mm_load_si128(&v32);
        ptr = v30;
        v14 = v31.m128i_i64[0];
        v16 = v30;
      }
      ++v5;
      v17 = &v16[24 * v15];
      *(_QWORD *)v17 = v14;
      *(__m128i *)(v17 + 8) = v13;
      ++v34.m128i_i64[0];
    }
    while ( (__int64 *)v7 != v5 );
LABEL_15:
    if ( !a2 )
      goto LABEL_18;
    v18 = ptr;
LABEL_17:
    v19 = *(void **)a2;
    v20 = _mm_loadu_si128(&v34);
    *(_QWORD *)a2 = v18;
    v21 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    ptr = v19;
    *(__m128i *)(a2 + 8) = v20;
    v34 = v21;
LABEL_18:
    if ( v9 )
      qfree(v9);
    v22 = (char *)ptr;
    goto LABEL_21;
  }
  v22 = (char *)ptr;
  v18 = ptr;
  if ( a2 )
    goto LABEL_17;
LABEL_21:
  if ( v22 )
  {
    v23 = v34.m128i_i64[0];
    if ( v34.m128i_i64[0] )
    {
      v24 = 0;
      do
      {
        v25 = &v22[24 * v24];
        v26 = *(void **)v25;
        if ( *(_QWORD *)v25 )
        {
          *((_QWORD *)v25 + 1) = 0;
          qfree(v26);
          v22 = (char *)ptr;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    v34.m128i_i64[0] = 0;
    qfree(v22);
  }
  return v38 - __readfsqword(0x28u);
}
