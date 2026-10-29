void *__fastcall sub_4E6750(
        __int64 *dest,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int128 a7,
        __int128 a8)
{
  __int64 *v8; // r13
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // r12
  size_t v12; // r15
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  signed __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 *v18; // rdi
  size_t v20; // r14
  __int64 *v21; // r15
  __int64 *v22; // rbx
  __int64 *v23; // r15
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // [rsp+0h] [rbp-68h] BYREF
  __m128i v27; // [rsp+10h] [rbp-58h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v8 = dest;
  v9 = a3;
  v10 = a2;
  v28 = __readfsqword(0x28u);
  v11 = a6;
  if ( a4 <= a5 )
  {
    v12 = (char *)a2 - (char *)dest;
    if ( (char *)a2 - (char *)dest <= 8 )
    {
      if ( (char *)a2 - (char *)dest == 8 )
        *a6 = *dest;
    }
    else
    {
      memmove(a6, dest, v12);
    }
    v13 = (__int64 *)((char *)v11 + v12);
    v26 = _mm_loadu_si128((const __m128i *)&a7);
    v27 = _mm_loadu_si128((const __m128i *)&a8);
    if ( a2 != v9 && v11 != v13 )
    {
      do
      {
        if ( sub_4DE4A0(&v26, *v10, *v11) )
        {
          v14 = *v10;
          ++v8;
          ++v10;
          *(v8 - 1) = v14;
          if ( v11 == v13 )
            break;
        }
        else
        {
          v15 = *v11++;
          *v8++ = v15;
          if ( v11 == v13 )
            break;
        }
      }
      while ( v9 != v10 );
    }
    if ( v13 != v11 )
    {
      v16 = (char *)v13 - (char *)v11;
      if ( (char *)v13 - (char *)v11 > 8 )
      {
        v17 = v11;
        v18 = v8;
        return memmove(v18, v17, v16);
      }
      if ( (char *)v13 - (char *)v11 == 8 )
        *v8 = *v11;
    }
    return (void *)(v28 - __readfsqword(0x28u));
  }
  v20 = (char *)a3 - (char *)a2;
  if ( (char *)a3 - (char *)a2 <= 8 )
  {
    if ( (char *)a3 - (char *)a2 == 8 )
    {
      v24 = *a2;
      v21 = a6 + 1;
      v26 = _mm_loadu_si128((const __m128i *)&a7);
      v25 = _mm_loadu_si128((const __m128i *)&a8);
      *a6 = v24;
      v27 = v25;
      if ( a2 == dest )
      {
        *(a3 - 1) = v24;
        return (void *)(v28 - __readfsqword(0x28u));
      }
    }
    else
    {
      v21 = (__int64 *)((char *)a6 + v20);
      v26 = _mm_loadu_si128((const __m128i *)&a7);
      v27 = _mm_loadu_si128((const __m128i *)&a8);
      if ( a2 == dest )
        return (void *)(v28 - __readfsqword(0x28u));
    }
  }
  else
  {
    v21 = (__int64 *)((char *)a6 + v20);
    memmove(a6, a2, (char *)a3 - (char *)a2);
    v26 = _mm_loadu_si128((const __m128i *)&a7);
    v27 = _mm_loadu_si128((const __m128i *)&a8);
    if ( a2 == dest )
      return memmove(a2, v11, v20);
  }
  if ( v11 == v21 )
    return (void *)(v28 - __readfsqword(0x28u));
  v22 = a2 - 1;
  v23 = v21 - 1;
  while ( !sub_4DE4A0(&v26, *v23, *v22) )
  {
    *(v9 - 1) = *v23;
    if ( v11 == v23 )
      return (void *)(v28 - __readfsqword(0x28u));
    --v23;
LABEL_22:
    --v9;
  }
  *(v9 - 1) = *v22;
  if ( dest != v22 )
  {
    --v22;
    goto LABEL_22;
  }
  v16 = (char *)(v23 + 1) - (char *)v11;
  if ( v16 <= 8 )
  {
    if ( v16 == 8 )
      *(v9 - 2) = *v11;
    return (void *)(v28 - __readfsqword(0x28u));
  }
  v18 = (__int64 *)((char *)v9 - v16 - 8);
  v17 = v11;
  return memmove(v18, v17, v16);
}
