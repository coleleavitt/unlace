char *__fastcall sub_9C6980(char **a1, __int64 *a2, __m128 a3, double a4)
{
  char *v4; // rbx
  __int64 v5; // rax
  char *v7; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char *v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  char *v24; // r15
  char *v25; // r14
  __int64 v26; // rdi
  __m128 *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // [rsp+8h] [rbp-50h] BYREF
  __m128 *v30; // [rsp+10h] [rbp-48h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v5 = *a2;
    *a2 = 0;
    *(_QWORD *)v4 = v5;
    a1[1] = v4 + 8;
    return v4;
  }
  v7 = *a1;
  v30 = (__m128 *)a1;
  v9 = (v4 - v7) >> 3;
  if ( v9 )
  {
    v10 = 2 * v9;
    v11 = -8;
    if ( v9 <= 2 * v9 && v10 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( !v10 )
      {
        v29 = 8;
        v13 = 0;
        v12 = 0;
        goto LABEL_7;
      }
      v11 = 16 * v9;
    }
  }
  else
  {
    v11 = 8;
  }
  v12 = operator new(v11);
  v13 = v12 + v11;
  v29 = v12 + 8;
LABEL_7:
  v14 = *a2;
  *a2 = 0;
  *(_QWORD *)(v12 + v4 - v7) = v14;
  if ( v4 == v7 )
  {
    v24 = (char *)v12;
  }
  else
  {
    v15 = v7;
    v16 = v4 - 8 - v7;
    v17 = v16 >> 3;
    if ( ((unsigned __int64)v7 >= v12 + 16 || v12 >= (unsigned __int64)(v7 + 16)) && v16 > 0x10 )
    {
      v18 = v17 + 1;
      v19 = 0;
      a4 = 0.0;
      do
      {
        a3 = (__m128)_mm_loadu_si128((const __m128i *)&v7[v19]);
        *(_OWORD *)&v7[v19] = 0;
        *(__m128 *)(v12 + v19) = a3;
        v19 += 16;
      }
      while ( v19 != 16 * (v18 >> 1) );
      v20 = 8 * (v18 & 0xFFFFFFFFFFFFFFFELL);
      v21 = &v7[v20];
      v22 = (_QWORD *)(v12 + v20);
      if ( v18 != (v18 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v23 = *(_QWORD *)v21;
        *(_QWORD *)v21 = 0;
        *v22 = v23;
      }
    }
    else
    {
      v28 = v12;
      do
      {
        v22 = *(_QWORD **)v15;
        *(_QWORD *)v15 = 0;
        v15 += 8;
        v28 += 8LL;
        *(_QWORD *)(v28 - 8) = v22;
      }
      while ( v4 != v15 );
      v18 = v17 + 1;
    }
    v24 = (char *)(v12 + 8 * v18);
    v25 = v7;
    v29 = v12 + v16 + 16;
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        if ( !*(_QWORD *)v25 )
          break;
        v25 += 8;
        (*(void (__fastcall **)(__int64, _QWORD *, double, double))(*(_QWORD *)v26 + 32LL))(
          v26,
          v22,
          *(double *)a3.m128_u64,
          a4);
        if ( v4 == v25 )
          goto LABEL_17;
      }
      v25 += 8;
    }
    while ( v4 != v25 );
  }
LABEL_17:
  if ( v7 )
    operator delete(v7);
  v31 = v12;
  v4 = v24;
  v27 = v30;
  *v30 = _mm_loadh_ps((const double *)&v29);
  v27[1].m128_u64[0] = v13;
  return v4;
}

