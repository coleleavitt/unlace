_QWORD *__fastcall sub_B571D0(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  int *v7; // r13
  __int64 v8; // r12
  _QWORD *v10; // rbp
  int *v11; // r9
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  _DWORD *v17; // rbx
  _DWORD *v18; // rax
  int v20; // edx

  v7 = (int *)a5;
  v8 = 4 * a6;
  v10 = (_QWORD *)sub_B6C590(56, a1, a2, 4 * a6);
  sub_B4E870((__int64)v10, 0x53u, a2, a3);
  v11 = (int *)(a5 + v8);
  v10[5] = a4;
  v10[6] = 4;
  *v10 = &off_2B212A8;
  if ( a5 != a5 + v8 )
  {
    v12 = v10 + 7;
    v13 = (unsigned __int64)(v8 - 4) >> 2;
    if ( ((unsigned __int64)(v10 + 7) >= a5 + 16 || a5 >= (unsigned __int64)(v10 + 9))
      && (v13 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
    {
      v14 = v13 + 1;
      v15 = 0;
      do
      {
        *(__m128i *)&v10[v15 + 7] = _mm_loadu_si128((const __m128i *)(a5 + v15 * 8));
        v15 += 2;
      }
      while ( v15 != 2 * (v14 >> 2) );
      v16 = 4 * (v14 & 0xFFFFFFFFFFFFFFFCLL);
      v17 = (_DWORD *)(v16 + a5);
      v18 = (_DWORD *)((char *)v12 + v16);
      if ( v14 != (v14 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        *v18 = *v17;
        if ( v11 != v17 + 1 )
        {
          v18[1] = v17[1];
          if ( v11 != v17 + 2 )
            v18[2] = v17[2];
        }
      }
    }
    else
    {
      do
      {
        v20 = *v7++;
        v12 = (_QWORD *)((char *)v12 + 4);
        *((_DWORD *)v12 - 1) = v20;
      }
      while ( v11 != v7 );
    }
  }
  return v10;
}

