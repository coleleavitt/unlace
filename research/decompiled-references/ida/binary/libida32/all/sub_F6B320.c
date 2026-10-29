__int64 *__fastcall sub_F6B320(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v4; // rdx
  char v5; // r8
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 *v8; // rdx
  const __m128i *v9; // r12
  unsigned __int64 v10; // r14
  const __m128i *v11; // r13
  __int64 v12; // r15
  const __m128i *v13; // rax
  __m128i *v14; // rsi
  const __m128i *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int32 v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r15
  const void *v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v26; // [rsp+10h] [rbp-98h]
  unsigned __int64 v27; // [rsp+10h] [rbp-98h]
  __int64 v28; // [rsp+10h] [rbp-98h]
  const void *v29; // [rsp+18h] [rbp-90h]
  __m128 ptr; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v31[120]; // [rsp+30h] [rbp-78h] BYREF

  v2 = a2 + 760;
  v4 = (__int64 *)(*(_QWORD *)(a2 + 760) + ((unsigned __int64)*(unsigned int *)(a2 + 776) << 6));
  sub_F5B950(&ptr, v4, v4, a2 + 760, 1);
  v26 = ptr.m128_u64[0];
  if ( *(_DWORD *)(a2 + 768) )
  {
    v7 = *(__int64 **)(a2 + 760);
    v5 = 0;
    v6 = v2;
    v8 = &v7[8 * (unsigned __int64)*(unsigned int *)(a2 + 776)];
  }
  else
  {
    v5 = 1;
    v6 = a2 + 760;
    v7 = (__int64 *)(*(_QWORD *)(a2 + 760) + ((unsigned __int64)*(unsigned int *)(a2 + 776) << 6));
    v8 = (__int64 *)(*(_QWORD *)(a2 + 760) + ((unsigned __int64)*(unsigned int *)(a2 + 776) << 6));
  }
  sub_F5B950(&ptr, v7, v8, v6, v5);
  v10 = ptr.m128_u64[1];
  v9 = (const __m128i *)ptr.m128_u64[0];
  ptr.m128_u64[0] = (unsigned __int64)v31;
  ptr.m128_u64[1] = 0x100000000LL;
  if ( (const __m128i *)v26 == v9 )
  {
    v19 = 0;
    v18 = 0;
    v17 = (__int64 *)v31;
    goto LABEL_21;
  }
  v11 = v9;
  v12 = 0;
  do
  {
    if ( &v11[4] == (const __m128i *)v10 )
      goto LABEL_10;
    if ( v11[4].m128i_i64[0] >= 0xFFFFFFFFFFFFFFFELL )
    {
      v13 = v11 + 8;
      while ( 1 )
      {
        v11 = v13;
        if ( v13 == (const __m128i *)v10 )
          break;
        v13 += 4;
        if ( v11->m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_11;
      }
LABEL_10:
      v11 = (const __m128i *)v10;
      goto LABEL_11;
    }
    v11 += 4;
LABEL_11:
    ++v12;
  }
  while ( (const __m128i *)v26 != v11 );
  v14 = (__m128i *)v31;
  if ( v12 != 1 )
  {
    sub_22134E0(&ptr, v31, v12, 64);
    v14 = (__m128i *)(ptr.m128_u64[0] + ((unsigned __int64)ptr.m128_u32[2] << 6));
  }
  do
  {
    while ( 1 )
    {
      v15 = v9 + 4;
      *v14 = _mm_loadu_si128(v9);
      v14[1] = _mm_loadu_si128(v9 + 1);
      v14[2] = _mm_loadu_si128(v9 + 2);
      v14[3] = _mm_loadu_si128(v9 + 3);
      if ( (const __m128i *)v10 != &v9[4] )
        break;
      v9 = (const __m128i *)v10;
      v14 += 4;
      if ( (const __m128i *)v10 == v11 )
        goto LABEL_20;
    }
    v16 = v9[4].m128i_i64[0];
    v9 += 4;
    if ( v16 == -2 || v16 == -1 )
    {
      do
      {
        v9 = v15 + 4;
        if ( (const __m128i *)v10 == &v15[4] )
          break;
        v15 += 4;
      }
      while ( v9->m128i_i64[0] >= 0xFFFFFFFFFFFFFFFELL );
    }
    v14 += 4;
  }
  while ( v9 != v11 );
LABEL_20:
  v17 = (__int64 *)ptr.m128_u64[0];
  v18 = v12 + ptr.m128_i32[2];
  v19 = (unsigned int)(v12 + ptr.m128_i32[2]);
LABEL_21:
  ptr.m128_i32[2] = v18;
  v20 = v19;
  v21 = *(unsigned int *)(a2 + 168);
  v27 = *(unsigned int *)(a2 + 872);
  v22 = *(const void **)(a2 + 864);
  v29 = *(const void **)(a2 + 160);
  v23 = operator new(0x68u);
  v24 = v27;
  v28 = v23;
  sub_F6AE00(v23, v22, v24, v29, v21, a2 + 688, v17, v20);
  *a1 = v28;
  if ( (_BYTE *)ptr.m128_u64[0] != v31 )
    free((void *)ptr.m128_u64[0]);
  return a1;
}

