void __fastcall sub_12DEF20(unsigned int *a1, __int64 a2)
{
  __int64 v2; // r8
  const __m128i *i; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  const __m128i *v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // rbp
  _QWORD *v16; // rdi
  _QWORD *v17; // r12
  _QWORD *v18; // rbx
  char *v19; // rdi
  void *v20; // rdi
  _QWORD *v21; // rdi

  v2 = *(_QWORD *)a1 + 104LL * a1[2];
  if ( *(_QWORD *)a1 != v2 )
  {
    for ( i = (const __m128i *)(*(_QWORD *)a1 + 40LL); ; i = (const __m128i *)((char *)i + 104) )
    {
      *(_DWORD *)a2 = i[-3].m128i_i32[2];
      v12 = _mm_loadu_si128(i - 2);
      *(_DWORD *)(a2 + 4) = i[-3].m128i_i32[3];
      *(__m128i *)(a2 + 8) = v12;
      *(_QWORD *)(a2 + 24) = a2 + 40;
      v13 = (const __m128i *)i[-1].m128i_i64[0];
      if ( i == v13 )
      {
        *(__m128i *)(a2 + 40) = _mm_loadu_si128(i);
      }
      else
      {
        *(_QWORD *)(a2 + 24) = v13;
        *(_QWORD *)(a2 + 40) = i->m128i_i64[0];
      }
      a2 += 104;
      *(_QWORD *)(a2 - 72) = i[-1].m128i_i64[1];
      i->m128i_i8[0] = 0;
      i[-1].m128i_i64[0] = (__int64)i;
      i[-1].m128i_i64[1] = 0;
      *(_QWORD *)(a2 - 40) = 0;
      *(_QWORD *)(a2 - 32) = 0;
      *(_QWORD *)(a2 - 48) = 0;
      *(_QWORD *)(a2 - 48) = i[1].m128i_i64[0];
      v4 = i[1].m128i_i64[1];
      i[1].m128i_i64[0] = 0;
      v5 = *(_QWORD *)(a2 - 40);
      *(_QWORD *)(a2 - 40) = v4;
      v6 = i[2].m128i_i64[0];
      i[1].m128i_i64[1] = v5;
      v7 = *(_QWORD *)(a2 - 32);
      *(_QWORD *)(a2 - 32) = v6;
      i[2].m128i_i64[0] = v7;
      *(_QWORD *)(a2 - 16) = 0;
      *(_QWORD *)(a2 - 8) = 0;
      *(_QWORD *)(a2 - 24) = 0;
      *(_QWORD *)(a2 - 24) = i[2].m128i_i64[1];
      v8 = i[3].m128i_i64[0];
      i[2].m128i_i64[1] = 0;
      v9 = *(_QWORD *)(a2 - 16);
      *(_QWORD *)(a2 - 16) = v8;
      v10 = i[3].m128i_i64[1];
      i[3].m128i_i64[0] = v9;
      v11 = *(_QWORD *)(a2 - 8);
      *(_QWORD *)(a2 - 8) = v10;
      i[3].m128i_i64[1] = v11;
      if ( (const __m128i *)v2 == &i[4] )
        break;
    }
    v14 = *(_QWORD **)a1;
    v15 = (_QWORD *)(*(_QWORD *)a1 + 104LL * a1[2]);
    while ( v14 != v15 )
    {
      while ( 1 )
      {
        v15 -= 13;
        v16 = (_QWORD *)v15[10];
        v17 = (_QWORD *)v15[11];
        v18 = v16;
        if ( v17 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v19 = (char *)v18[3];
              if ( v19 == (char *)(v18 + 5) )
                break;
              operator delete(v19);
              v18 += 8;
              if ( v18 == v17 )
                goto LABEL_13;
            }
            v18 += 8;
          }
          while ( v17 != v18 );
LABEL_13:
          v16 = (_QWORD *)v15[10];
        }
        if ( v16 )
          operator delete(v16);
        v20 = (void *)v15[7];
        if ( v20 )
          operator delete(v20);
        v21 = (_QWORD *)v15[3];
        if ( v21 == v15 + 5 )
          break;
        operator delete(v21);
        if ( v14 == v15 )
          return;
      }
    }
  }
}
