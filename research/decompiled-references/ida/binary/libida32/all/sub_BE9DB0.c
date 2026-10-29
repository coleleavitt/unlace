__int64 __fastcall sub_BE9DB0(__int64 a1, _QWORD *a2, unsigned int a3, const __m128i *a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned __int16 v22; // dx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int16 v25; // bp
  __int16 v26; // dx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-30h]

  v5 = a5 - (_QWORD)a4;
  v6 = a3;
  v7 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 3);
  v8 = 24LL * a3;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      result = *(_QWORD *)(a1 + 24);
      *(__m128i *)(result + 24LL * a3) = _mm_loadu_si128(a4);
      *(_QWORD *)(result + v8 + 16) = a4[1].m128i_i64[0];
    }
    else
    {
      v9 = a2[294];
      v12 = 24LL * ((*(_WORD *)(a1 + 20) >> 1) - 1431655765 * (unsigned int)(v5 >> 3) - 1);
      result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a2[304] += v12;
      if ( a2[295] >= (unsigned __int64)(v12 + result) && v9 )
      {
        a2[294] = v12 + result;
      }
      else
      {
        v33 = v5;
        result = sub_962430((__int64)(a2 + 294), v12, v12, 3, v5, v12);
        v5 = v33;
      }
      v14 = *(_QWORD *)(a1 + 24);
      v15 = 0;
      if ( v8 )
      {
        do
        {
          *(__m128i *)(result + v15) = _mm_loadu_si128((const __m128i *)(v14 + v15));
          *(_QWORD *)(result + v15 + 16) = *(_QWORD *)(v14 + v15 + 16);
          v15 += 24;
        }
        while ( v8 != v15 );
      }
      v16 = result + v8;
      if ( v5 > 0 )
      {
        v17 = v7;
        v18 = 0;
        do
        {
          *(__m128i *)(v16 + v18) = _mm_loadu_si128((const __m128i *)((char *)a4 + v18));
          *(_QWORD *)(v16 + v18 + 16) = a4[1].m128i_i64[v18 / 8];
          v18 += 24LL;
          --v17;
        }
        while ( v17 );
      }
      v19 = v8 + 24;
      v20 = v19 + *(_QWORD *)(a1 + 24);
      v21 = result + 24 * ((unsigned int)v7 + v6);
      v22 = *(_WORD *)(a1 + 20) >> 1;
      v23 = 0xAAAAAAAAAAAAAAABLL * ((24LL * v22 - v19) >> 3);
      if ( 24LL * v22 - v19 > 0 )
      {
        v24 = 0;
        do
        {
          *(__m128i *)(v21 + v24) = _mm_loadu_si128((const __m128i *)(v20 + v24));
          *(_QWORD *)(v21 + v24 + 16) = *(_QWORD *)(v20 + v24 + 16);
          v24 += 24;
          --v23;
        }
        while ( v23 );
        v22 = *(_WORD *)(a1 + 20) >> 1;
      }
      v25 = v22 + v7 - 1;
      v26 = *(_WORD *)(a1 + 20);
      *(_QWORD *)(a1 + 24) = result;
      *(_WORD *)(a1 + 20) = v26 & 1 | (2 * v25);
    }
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 24);
    v28 = v27 + v8;
    v29 = 24LL * (*(_WORD *)(a1 + 20) >> 1);
    v30 = v29 + v27;
    v31 = v29 - (v8 + 24);
    v32 = 0xAAAAAAAAAAAAAAABLL * (v31 >> 3);
    result = -24;
    if ( v31 > 0 )
    {
      do
      {
        *(__m128i *)(v28 + result) = _mm_loadu_si128((const __m128i *)(v30 + result));
        *(_QWORD *)(v28 + result + 16) = *(_QWORD *)(v30 + result + 16);
        result -= 24;
        --v32;
      }
      while ( v32 );
    }
  }
  return result;
}

