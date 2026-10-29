_QWORD *__fastcall sub_7D49E0(__int64 a1, __int64 *a2, int a3, int a4, int a5, unsigned int a6, __int64 a7)
{
  __int64 (*v11)(void); // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v20; // rax

  v11 = *(__int64 (**)(void))(*(_QWORD *)a1 + 432LL);
  if ( (char *)v11 == (char *)sub_79EFF0 )
    v12 = a1 + 2144;
  else
    v12 = v11();
  v13 = (_QWORD *)sub_180C100(v12, 8LL * a6 + 48);
  v14 = 8LL * a6;
  v15 = v13;
  v13[1] = 0;
  *v13 = off_1C549F8;
  v16 = *a2;
  *((_DWORD *)v15 + 4) = a3;
  v15[1] = v16;
  v17 = &v15[(unsigned __int64)v14 / 8 + 5];
  *((_DWORD *)v15 + 5) = a6;
  *((_DWORD *)v15 + 6) = 2;
  v15[4] = v17;
  if ( a6 )
  {
    if ( a6 - 1 <= 2 || v15 + 5 == (_QWORD *)(a7 + 8) )
    {
      v20 = 0;
      do
      {
        v15[v20 / 8 + 5] = *(_QWORD *)(a7 + v20);
        v20 += 8LL;
      }
      while ( v14 != v20 );
    }
    else
    {
      v18 = 0;
      do
      {
        *(__m128i *)&v15[v18 + 5] = _mm_loadu_si128((const __m128i *)(a7 + v18 * 8));
        v18 += 2;
      }
      while ( 2LL * (a6 >> 1) != v18 );
      if ( (a6 & 1) != 0 )
        v15[(a6 & 0xFFFFFFFE) + 5] = *(_QWORD *)(a7 + 8LL * (a6 & 0xFFFFFFFE));
    }
  }
  *v17 = a4;
  v17[1] = a5;
  return v15;
}

