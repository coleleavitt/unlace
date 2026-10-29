int *__fastcall sub_B26A0(_QWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  int *result; // rax
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rbp
  __m128i v12; // xmm0
  void *v13; // rax
  void *v14; // rax
  int *v15; // [rsp+0h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  result = sub_AF5F0(xmmword_251F20, 5u, a2, a3);
  v15 = result;
  if ( result )
  {
    v4 = qalloc_or_throw();
    *(_QWORD *)v4 = 0;
    v5 = (__int64 *)v4;
    *(_OWORD *)(v4 + 8) = 0;
    v6 = a1[1];
    if ( v6 )
    {
      v7 = qalloc_or_throw();
      *v5 = v7;
      v8 = v7;
      v9 = 0;
      v5[2] = v6;
      while ( 1 )
      {
        v10 = 80 * v9 + v8;
        v11 = *a1 + 80 * v9;
        v12 = _mm_loadu_si128((const __m128i *)v11);
        *(_QWORD *)(v10 + 16) = 0;
        *(_OWORD *)(v10 + 24) = 0;
        *(__m128i *)v10 = v12;
        if ( *(_QWORD *)(v11 + 24) )
        {
          na = *(_QWORD *)(v11 + 24);
          v13 = (void *)qalloc_or_throw();
          *(_QWORD *)(v10 + 16) = v13;
          *(_QWORD *)(v10 + 32) = na;
          memcpy(v13, *(const void **)(v11 + 16), na);
          *(_QWORD *)(v10 + 24) = na;
        }
        *(_QWORD *)(v10 + 40) = 0;
        *(_OWORD *)(v10 + 48) = 0;
        if ( *(_QWORD *)(v11 + 48) )
        {
          n = *(_QWORD *)(v11 + 48);
          v14 = (void *)qalloc_or_throw();
          *(_QWORD *)(v10 + 40) = v14;
          *(_QWORD *)(v10 + 56) = n;
          memcpy(v14, *(const void **)(v11 + 40), n);
          *(_QWORD *)(v10 + 48) = n;
        }
        ++v9;
        *(_QWORD *)(v10 + 64) = *(_QWORD *)(v11 + 64);
        *(_WORD *)(v10 + 72) = *(_WORD *)(v11 + 72);
        if ( v6 == v9 )
          break;
        v8 = *v5;
      }
      v5[1] = v6;
    }
    result = v15;
    *((_QWORD *)v15 + 3) = v5;
  }
  return result;
}

