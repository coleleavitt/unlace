__int64 __fastcall sub_553BE0(__int64 a1, __int64 *a2, __int64 a3, __m128 a4)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rax
  __int64 i; // rax

  if ( !(unsigned __int8)sub_182A530(a1, *a2, a3) )
    return 0;
  v8 = *((unsigned int *)a2 + 4);
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)v8 )
  {
    do
    {
      while ( !(unsigned __int8)sub_182A530(a1, *(_QWORD *)(a2[1] + 8 * v9), a3) )
      {
        v11 = *(_QWORD *)(a2[1] + 8 * v9++);
        sub_182A4B0(a1, v11);
        if ( v9 == v8 )
          goto LABEL_10;
      }
      if ( v10 != (_DWORD)v9 )
        *(_QWORD *)(a2[1] + 8LL * v10) = *(_QWORD *)(a2[1] + 8 * v9);
      ++v9;
      ++v10;
    }
    while ( v9 != v8 );
LABEL_10:
    if ( (_DWORD)v8 != v10 )
    {
      v12 = *((_DWORD *)a2 + 4);
      if ( v12 >= v10 )
      {
        if ( v10 < v12 )
          *((_DWORD *)a2 + 4) = v10;
      }
      else
      {
        LODWORD(v13) = *((_DWORD *)a2 + 5);
        v14 = *((_DWORD *)a2 + 4);
        do
        {
          if ( v12 < (unsigned int)v13 )
          {
            v15 = a2[1];
          }
          else
          {
            v13 = (unsigned int)(2 * v13);
            v17 = sub_186B270(8 * v13);
            v12 = *((_DWORD *)a2 + 4);
            v18 = (__int64 *)a2[1];
            v15 = v17;
            if ( v12 )
            {
              if ( v12 - 1 <= 2 || (__int64 *)v17 == v18 + 1 )
              {
                for ( i = 0; i != v12; ++i )
                  *(_QWORD *)(v15 + i * 8) = v18[i];
              }
              else
              {
                v19 = 0;
                do
                {
                  a4 = (__m128)_mm_loadu_si128((const __m128i *)&v18[v19]);
                  *(__m128 *)(v15 + v19 * 8) = a4;
                  v19 += 2;
                }
                while ( 2LL * (v12 >> 1) != v19 );
                if ( (v12 & 1) != 0 )
                  *(_QWORD *)(v15 + 8LL * (v12 & 0xFFFFFFFE)) = v18[v12 & 0xFFFFFFFE];
              }
            }
            if ( v18 )
            {
              if ( v18 != a2 + 3 )
              {
                sub_186B220(v18);
                v12 = *((_DWORD *)a2 + 4);
              }
            }
            a2[1] = v15;
            *((_DWORD *)a2 + 5) = v13;
          }
          v16 = v12;
          ++v14;
          ++v12;
          *(_QWORD *)(v15 + 8 * v16) = 0;
          *((_DWORD *)a2 + 4) = v12;
        }
        while ( v14 != v10 );
      }
    }
  }
  return sub_5537F0(a1, a2, a4);
}

