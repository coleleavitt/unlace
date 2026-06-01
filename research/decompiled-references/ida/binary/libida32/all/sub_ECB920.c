unsigned __int64 __fastcall sub_ECB920(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // r14
  __int64 v12; // r12
  unsigned int v13; // ebp
  __int64 v14; // r10
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]

  v10 = 16 * a5;
  v12 = a3;
  v13 = a5;
  v14 = a7;
  v15 = (unsigned int)(16 * a5 + 8 * a5 + 40);
  if ( !a5 )
    v15 = 40;
  v16 = a1[294];
  a1[304] += v15;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v15 + v17 && v16 )
  {
    a1[294] = v15 + v17;
  }
  else
  {
    v26 = sub_962430((__int64)(a1 + 294), v15, v15, 3, a5, a6);
    v14 = a7;
    v17 = v26;
  }
  v28 = v14;
  sub_EC5910((_WORD *)v17, 250);
  *(_DWORD *)(v17 + 8) = v13;
  v18 = (_QWORD *)(v17 + 32);
  *(_QWORD *)(v17 + 16) = (2 * v12) | a6 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(v17 + 24) = a9;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v21 = (_QWORD *)(v17 + 32);
      v20 = 0;
    }
    else
    {
      v19 = 0;
      do
      {
        *(__m128i *)(v17 + v19 + 32) = _mm_loadu_si128((const __m128i *)(v28 + v19));
        v19 += 16;
      }
      while ( v19 != 16LL * (v13 >> 1) );
      v20 = v13 & 0xFFFFFFFE;
      v21 = &v18[v20];
      if ( (v13 & 0xFFFFFFFE) == v13 )
        goto LABEL_12;
    }
    *v21 = *(_QWORD *)(v28 + 8 * v20);
LABEL_12:
    v18 += v13;
  }
  *v18 = a2;
  v22 = v10 >> 4;
  v23 = 0;
  v24 = v17 + (unsigned int)(8 * *(_DWORD *)(v17 + 8) + 40);
  if ( v10 > 0 )
  {
    do
    {
      *(_QWORD *)(v24 + v23) = *(_QWORD *)(a4 + v23);
      *(_DWORD *)(v24 + v23 + 8) = *(_DWORD *)(a4 + v23 + 8);
      v23 += 16;
      --v22;
    }
    while ( v22 );
  }
  return v17;
}

