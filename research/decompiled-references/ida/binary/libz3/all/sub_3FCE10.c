void __fastcall sub_3FCE10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbp
  __int64 v5; // r14
  __int64 *v6; // r15
  unsigned int v7; // edx
  _QWORD *v8; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 i; // rax

  if ( a1 != a2 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(__int64 **)a2;
    if ( (_DWORD)v3 )
    {
      LODWORD(v5) = *(_DWORD *)(a1 + 12);
      v6 = &v4[v3];
      v7 = 0;
      v8 = (_QWORD *)(a1 + 16);
      do
      {
        if ( v7 < (unsigned int)v5 )
        {
          v9 = *(_QWORD **)a1;
        }
        else
        {
          v5 = (unsigned int)(2 * v5);
          v12 = sub_186B270(8 * v5);
          v7 = *(_DWORD *)(a1 + 8);
          v13 = *(_QWORD **)a1;
          v9 = (_QWORD *)v12;
          if ( v7 )
          {
            if ( v7 - 1 <= 2 || (_QWORD *)v12 == v13 + 1 )
            {
              for ( i = 0; i != v7; ++i )
                v9[i] = v13[i];
            }
            else
            {
              v14 = 0;
              do
              {
                *(__m128i *)&v9[v14] = _mm_loadu_si128((const __m128i *)&v13[v14]);
                v14 += 2;
              }
              while ( 2LL * (v7 >> 1) != v14 );
              if ( (v7 & 1) != 0 )
                v9[v7 & 0xFFFFFFFE] = v13[v7 & 0xFFFFFFFE];
            }
          }
          if ( v13 )
          {
            if ( v13 != v8 )
            {
              sub_186B220(v13);
              v7 = *(_DWORD *)(a1 + 8);
            }
          }
          *(_QWORD *)a1 = v9;
          *(_DWORD *)(a1 + 12) = v5;
        }
        v10 = *v4;
        v11 = v7;
        ++v4;
        ++v7;
        v9[v11] = v10;
        *(_DWORD *)(a1 + 8) = v7;
      }
      while ( v4 != v6 );
    }
  }
}

