__int64 __fastcall sub_1F35E40(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // r12d
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 *v20; // r10
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  __int64 v23; // rdi

  if ( a1 == a2 )
    return a1;
  v3 = *(__int64 **)a2;
  if ( a2 + 16 != *(_QWORD *)a2 )
  {
    v5 = *(_QWORD **)a1;
    if ( v5 != (_QWORD *)(a1 + 16) )
    {
      free(v5);
      v3 = *(__int64 **)a2;
    }
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = a2 + 16;
    *(_QWORD *)(a2 + 8) = 0;
    return a1;
  }
  v7 = *(unsigned int *)(a2 + 8);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(_DWORD *)(a2 + 8);
  if ( v7 <= v8 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      v16 = *(_QWORD **)a1;
      v17 = 16 * v7;
      v18 = *(_QWORD *)a1 + 16LL;
      if ( *(_QWORD *)a1 < (unsigned __int64)(a2 + 32) && (unsigned __int64)v3 < v18 || v17 == 16 )
      {
        v22 = &v16[(unsigned __int64)v17 / 8];
        while ( 1 )
        {
          v23 = *v3;
          v3 += 2;
          *v16 = v23;
          v16[1] = *(v3 - 1);
          v16 = (_QWORD *)v18;
          if ( (_QWORD *)v18 == v22 )
            break;
          v18 += 16LL;
        }
      }
      else
      {
        v19 = 0;
        do
        {
          *(__m128i *)&v16[v19 / 8] = _mm_loadu_si128((const __m128i *)&v3[v19 / 8]);
          v19 += 16LL;
        }
        while ( v17 != v19 );
      }
    }
  }
  else
  {
    if ( v7 > *(unsigned int *)(a1 + 12) )
    {
      *(_DWORD *)(a1 + 8) = 0;
      sub_2237220(a1, a1 + 16, v7, 16);
      v3 = *(__int64 **)a2;
      v7 = *(unsigned int *)(a2 + 8);
      v12 = 0;
      v10 = *(_QWORD **)a1;
      v8 = 0;
      v14 = *(__int64 **)a2;
    }
    else
    {
      v10 = *(_QWORD **)a1;
      if ( v8 )
      {
        v8 *= 16LL;
        v11 = v10 + 2;
        v12 = v8;
        if ( v3 < v10 + 2 && (unsigned __int64)v10 < a2 + 32 || v8 == 16 )
        {
          v20 = (__int64 *)((char *)v3 + v8);
          while ( 1 )
          {
            v21 = *v3;
            v3 += 2;
            *v10 = v21;
            v10[1] = *(v3 - 1);
            v10 = v11;
            if ( v20 == v3 )
              break;
            v11 += 2;
          }
        }
        else
        {
          v13 = 0;
          do
          {
            *(__m128i *)&v10[v13 / 8] = _mm_loadu_si128((const __m128i *)&v3[v13 / 8]);
            v13 += 16LL;
          }
          while ( v8 != v13 );
        }
        v3 = *(__int64 **)a2;
        v10 = *(_QWORD **)a1;
        v14 = (__int64 *)(*(_QWORD *)a2 + v8);
      }
      else
      {
        v14 = *(__int64 **)a2;
        v12 = 0;
      }
    }
    v15 = 2 * v7;
    if ( v14 != &v3[v15] )
      memcpy((char *)v10 + v8, v14, v15 * 8 - v12);
  }
  *(_DWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a2 + 8) = 0;
  return a1;
}
