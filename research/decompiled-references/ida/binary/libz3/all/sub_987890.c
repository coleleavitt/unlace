__int64 __fastcall sub_987890(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r14
  _QWORD *v10; // r15
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // r13d
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v21; // [rsp+8h] [rbp-40h]

  result = a4 + 16;
  v21 = (_QWORD *)(a4 + 16);
  if ( a2 != a3 )
  {
    v7 = a2;
    do
    {
      v11 = sub_986FD0(a1, v7, *(const __m128i ***)(v7 + 80), *(_QWORD *)(v7 + 88), a5, a6);
      v12 = *(_DWORD *)(a4 + 8);
      v13 = *(_DWORD *)(a4 + 12);
      v14 = v11;
      if ( v12 < v13 )
      {
        v10 = *(_QWORD **)a4;
      }
      else
      {
        v15 = 2 * v13;
        v16 = sub_186B270(8 * v15);
        v12 = *(_DWORD *)(a4 + 8);
        v17 = *(_QWORD **)a4;
        v10 = (_QWORD *)v16;
        if ( v12 )
        {
          if ( v12 - 1 <= 2 || (_QWORD *)v16 == v17 + 1 )
          {
            v19 = 0;
            a6 = 8LL * v12;
            do
            {
              v10[v19 / 8] = v17[v19 / 8];
              v19 += 8LL;
            }
            while ( v19 != a6 );
          }
          else
          {
            v18 = 0;
            do
            {
              *(__m128i *)&v10[v18] = _mm_loadu_si128((const __m128i *)&v17[v18]);
              v18 += 2;
            }
            while ( 2LL * (v12 >> 1) != v18 );
            if ( (v12 & 1) != 0 )
              v10[v12 & 0xFFFFFFFE] = v17[v12 & 0xFFFFFFFE];
          }
        }
        if ( v17 != v21 )
        {
          if ( v17 )
          {
            sub_186B220(v17);
            v12 = *(_DWORD *)(a4 + 8);
          }
        }
        *(_QWORD *)a4 = v10;
        *(_DWORD *)(a4 + 12) = v15;
      }
      v7 = *(_QWORD *)(v7 + 80);
      result = v12;
      v10[v12] = v14;
      *(_DWORD *)(a4 + 8) = v12 + 1;
    }
    while ( a3 != v7 );
  }
  return result;
}

