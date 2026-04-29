void __fastcall sub_3A2B0(int **a1, int *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v8; // rax
  int *v9; // rsi
  __m128i si128; // xmm0
  int *v11; // rcx
  _BOOL4 v12; // r13d
  int *v13; // rax
  int *v14; // rsi
  int *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  int *v19; // rcx
  int *v20; // rax
  __m128i *v21; // r12
  int *v22; // rdi
  unsigned __int64 v23; // rsi
  int *v24; // rax
  __int64 v25; // rax
  __m128i v26[3]; // [rsp+0h] [rbp-38h] BYREF

  v8 = *a1;
  if ( !*a1 )
  {
    si128 = _mm_loadu_si128(a3);
    v12 = a1[2] != nullptr && a2 == nullptr;
    goto LABEL_24;
  }
  v9 = a1[2];
  if ( *v8 > 1 )
  {
    si128 = _mm_loadu_si128(a3);
    if ( !v9 || a2 )
    {
      v11 = *a1;
LABEL_9:
      if ( v11 )
        goto LABEL_10;
      v12 = 0;
LABEL_24:
      v26[0] = si128;
      sub_39EC0((__int64)a1, v12, 1, 0, a5, a6);
      v19 = a1[1];
      v15 = a1[2];
      si128 = _mm_load_si128(v26);
      v21 = (__m128i *)&v19[4 * (_QWORD)a2];
      if ( !v12 )
        goto LABEL_25;
LABEL_22:
      --v21;
      a1[1] = v19 - 4;
LABEL_27:
      a1[2] = (int *)((char *)v15 + 1);
      *v21 = si128;
      return;
    }
LABEL_35:
    v12 = 1;
    if ( *v8 <= 1 )
    {
      v24 = *a1;
      if ( *a1 )
      {
        v19 = a1[1];
        v15 = v9;
        if ( (__int64)((__int64)v19 - (((unsigned __int64)v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)) > 0 )
        {
          v21 = (__m128i *)a1[1];
          goto LABEL_22;
        }
        a5 = *((_QWORD *)v24 + 1);
        v16 = (__int64)((__int64)a1[1] - (((unsigned __int64)v24 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 4;
        if ( a5 - (__int64)v9 - v16 > 0 && 3 * (__int64)v9 < a5 )
        {
          v25 = (a5 - (__int64)v9 - 1) / 2;
          if ( v25 < 0 )
            v25 = 0;
          v14 = a1[1];
          v17 = v25 + 1;
LABEL_16:
          v18 = 4 * (v17 - v16);
          v19 = &v14[v18];
          if ( v15 && v19 != v14 && v14 && v19 )
          {
            v26[0] = si128;
            v20 = (int *)memmove(&v14[v18], v14, 16LL * (_QWORD)v15);
            v15 = a1[2];
            si128 = _mm_load_si128(v26);
            v19 = v20;
          }
          a1[1] = v19;
          v21 = (__m128i *)&v19[4 * (_QWORD)a2];
          if ( v12 )
            goto LABEL_22;
LABEL_25:
          if ( (__int64)a2 < (__int64)v15 )
          {
            v26[0] = si128;
            memmove(&v21[1], v21, 16 * ((char *)v15 - (char *)a2));
            v15 = a1[2];
            si128 = _mm_load_si128(v26);
          }
          goto LABEL_27;
        }
      }
    }
    goto LABEL_24;
  }
  v11 = *a1;
  if ( a2 != v9 )
  {
    if ( a2 )
    {
      si128 = _mm_loadu_si128(a3);
      goto LABEL_9;
    }
    v22 = a1[1];
    a5 = ((unsigned __int64)v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v22 != (int *)a5 )
      goto LABEL_32;
    si128 = _mm_loadu_si128(a3);
    if ( v9 )
      goto LABEL_35;
    goto LABEL_10;
  }
  v22 = a1[1];
  v23 = ((unsigned __int64)v8 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  a5 = (__int64)((__int64)v22 - v23) >> 4;
  if ( (int *)(*((_QWORD *)v8 + 1) - a5) == a2 )
  {
    if ( !a2 && v22 != (int *)v23 )
    {
LABEL_32:
      *((__m128i *)v22 - 1) = _mm_loadu_si128(a3);
      a1[1] -= 4;
      a1[2] = (int *)((char *)a1[2] + 1);
      return;
    }
    si128 = _mm_loadu_si128(a3);
LABEL_10:
    v12 = 0;
    if ( *v11 <= 1 )
    {
      v13 = *a1;
      if ( *a1 )
      {
        v14 = a1[1];
        v15 = a1[2];
        a5 = (__int64)v14 - (((unsigned __int64)v13 + 31) & 0xFFFFFFFFFFFFFFF0LL);
        v16 = a5 >> 4;
        if ( *((_QWORD *)v13 + 1) - (_QWORD)v15 - (a5 >> 4) > 0 )
        {
          v21 = (__m128i *)&v14[4 * (_QWORD)a2];
          goto LABEL_25;
        }
        if ( a5 > 0 && 3 * (__int64)v15 < 2LL * *((_QWORD *)v13 + 1) )
        {
          v17 = 0;
          goto LABEL_16;
        }
      }
    }
    goto LABEL_24;
  }
  *(__m128i *)&v22[4 * (_QWORD)a2] = _mm_loadu_si128(a3);
  a1[2] = (int *)((char *)a1[2] + 1);
}
