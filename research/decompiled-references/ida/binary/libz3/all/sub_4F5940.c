void __fastcall sub_4F5940(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // r14
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 i; // rax

  v3 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      while ( !(unsigned __int8)sub_553E00(a2, *(_QWORD *)(*(_QWORD *)a1 + 8 * v7), a3) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7++);
        sub_553300(a2, v9);
        if ( v7 == v3 )
          goto LABEL_8;
      }
      if ( v8 != (_DWORD)v7 )
        *(_QWORD *)(*(_QWORD *)a1 + 8LL * v8) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7);
      ++v7;
      ++v8;
    }
    while ( v7 != v3 );
LABEL_8:
    if ( (_DWORD)v3 != v8 )
    {
      v10 = *(_DWORD *)(a1 + 8);
      if ( v10 >= v8 )
      {
        if ( v8 < v10 )
          *(_DWORD *)(a1 + 8) = v8;
      }
      else
      {
        LODWORD(v11) = *(_DWORD *)(a1 + 12);
        v12 = *(_DWORD *)(a1 + 8);
        do
        {
          if ( v10 < (unsigned int)v11 )
          {
            v13 = *(_QWORD *)a1;
          }
          else
          {
            v11 = (unsigned int)(2 * v11);
            v15 = sub_186B270(8 * v11);
            v10 = *(_DWORD *)(a1 + 8);
            v16 = *(_QWORD **)a1;
            v13 = v15;
            if ( v10 )
            {
              if ( v10 - 1 <= 2 || (_QWORD *)v15 == v16 + 1 )
              {
                for ( i = 0; i != v10; ++i )
                  *(_QWORD *)(v13 + i * 8) = v16[i];
              }
              else
              {
                v17 = 0;
                do
                {
                  *(__m128i *)(v13 + v17 * 8) = _mm_loadu_si128((const __m128i *)&v16[v17]);
                  v17 += 2;
                }
                while ( 2LL * (v10 >> 1) != v17 );
                if ( (v10 & 1) != 0 )
                  *(_QWORD *)(v13 + 8LL * (v10 & 0xFFFFFFFE)) = v16[v10 & 0xFFFFFFFE];
              }
            }
            if ( v16 )
            {
              if ( v16 != (_QWORD *)(a1 + 16) )
              {
                sub_186B220(v16);
                v10 = *(_DWORD *)(a1 + 8);
              }
            }
            *(_QWORD *)a1 = v13;
            *(_DWORD *)(a1 + 12) = v11;
          }
          v14 = v10;
          ++v12;
          ++v10;
          *(_QWORD *)(v13 + 8 * v14) = 0;
          *(_DWORD *)(a1 + 8) = v10;
        }
        while ( v12 != v8 );
      }
    }
  }
}

