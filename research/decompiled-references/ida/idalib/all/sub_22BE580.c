__int64 __fastcall sub_22BE580(_DWORD *s2, char *n, __int64 a3, char a4)
{
  char **v5; // rbx
  char **v6; // r15
  char *v7; // rax
  __m128i v8; // xmm0
  unsigned int v9; // ebx
  char **v10; // rbp
  __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  char *v15; // r13
  __int64 v16; // rax
  char *v17; // r15
  __m128i v19; // [rsp+10h] [rbp-78h]
  char *v20; // [rsp+20h] [rbp-68h]
  __m128i v21; // [rsp+30h] [rbp-58h]

  v5 = off_2BF7B80;
  do
  {
    if ( v5[1] == n && (!n || !memcmp(*v5, s2, (size_t)n)) )
      goto LABEL_15;
    v6 = v5 + 7;
    if ( v5[8] == n && (!n || !memcmp(v5[7], s2, (size_t)n))
      || (v6 = v5 + 14, v5[15] == n) && (!n || !memcmp(v5[14], s2, (size_t)n))
      || (v6 = v5 + 21, v5[22] == n) && (!n || !memcmp(v5[21], s2, (size_t)n)) )
    {
      v5 = v6;
      goto LABEL_15;
    }
    v5 += 28;
  }
  while ( v5 != &off_2BF9780 );
  if ( n != byte_9 )
  {
    v5 = (char **)&unk_2BF97F0;
    if ( n != &byte_5 )
      goto LABEL_15;
    if ( *s2 == 1685022055 )
    {
      v5 = (char **)((char *)&unk_2BF97F0 - 56);
      if ( *((_BYTE *)s2 + 4) == 101 )
        goto LABEL_15;
    }
LABEL_36:
    v5 = (char **)&unk_2BF97F0;
    goto LABEL_15;
  }
  if ( *(_QWORD *)s2 != 0x762D34362D363878LL || *((_BYTE *)s2 + 8) != 52 )
    goto LABEL_36;
LABEL_15:
  v7 = v5[5];
  v8 = _mm_loadu_si128((const __m128i *)(v5 + 3));
  v9 = 0;
  v21.m128i_i64[1] = -1;
  v10 = &off_2BF6740;
  v20 = v7;
  v21.m128i_i64[0] = 0xFFFFFDFFFFFFFFFFLL;
  v19 = _mm_and_si128(v8, v21);
  if ( a4 )
  {
    do
    {
      result = v9 >> 6;
      if ( ((1LL << v9) & v19.m128i_i64[result]) != 0 )
      {
        v15 = v10[1];
        if ( v15 )
        {
          v16 = *(unsigned int *)(a3 + 8);
          v17 = *v10;
          if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            sub_2237220(a3, (const void *)(a3 + 16), v16 + 1, 16);
            v16 = *(unsigned int *)(a3 + 8);
          }
          result = *(_QWORD *)a3 + 16 * v16;
          *(_QWORD *)result = v17;
          *(_QWORD *)(result + 8) = v15;
          ++*(_DWORD *)(a3 + 8);
        }
      }
      ++v9;
      v10 += 5;
    }
    while ( v9 != 129 );
  }
  else
  {
    do
    {
      result = v9 >> 6;
      if ( ((1LL << v9) & v19.m128i_i64[result]) != 0 )
      {
        result = (__int64)v10[1];
        if ( result )
        {
          v12 = result - 1;
          if ( result != 1 )
          {
            v13 = *(unsigned int *)(a3 + 8);
            v14 = (__int64)(*v10 + 1);
            if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v13 + 1) )
            {
              sub_2237220(a3, (const void *)(a3 + 16), v13 + 1, 16);
              v13 = *(unsigned int *)(a3 + 8);
            }
            result = *(_QWORD *)a3 + 16 * v13;
            *(_QWORD *)result = v14;
            *(_QWORD *)(result + 8) = v12;
            ++*(_DWORD *)(a3 + 8);
          }
        }
      }
      ++v9;
      v10 += 5;
    }
    while ( v9 != 129 );
  }
  return result;
}
