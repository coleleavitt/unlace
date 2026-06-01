void __fastcall sub_20FEB30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // r14
  const __m128i *v13; // rax
  __int64 v14; // rdx
  const __m128i *v15; // rcx
  _QWORD *v16; // r15
  _QWORD *v17; // rdi
  int v18; // r15d
  __m128i *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-60h] BYREF
  void *v21; // [rsp+10h] [rbp-58h] BYREF
  __int64 v22; // [rsp+18h] [rbp-50h]
  __m128i v23[4]; // [rsp+20h] [rbp-48h] BYREF

  sub_2253560(&v21, a3);
  if ( *(_DWORD *)(a1 + 84) <= *(_DWORD *)(a1 + 80) )
  {
    v5 = sub_2237400(a1 + 72, a1 + 88, 0, 40, &v20);
    v6 = v5 + 40LL * *(unsigned int *)(a1 + 80);
    *(_QWORD *)v6 = a2;
    *(_QWORD *)(v6 + 8) = v6 + 24;
    if ( v21 == v23 )
    {
      *(__m128i *)(v6 + 24) = _mm_load_si128(v23);
    }
    else
    {
      *(_QWORD *)(v6 + 8) = v21;
      *(_QWORD *)(v6 + 24) = v23[0].m128i_i64[0];
    }
    v7 = v22;
    v22 = 0;
    *(_QWORD *)(v6 + 16) = v7;
    v8 = *(_QWORD *)(a1 + 72);
    v21 = v23;
    v9 = *(unsigned int *)(a1 + 80);
    v23[0].m128i_i8[0] = 0;
    v10 = 5 * v9;
    v11 = (_QWORD *)(v8 + 8 * v10);
    if ( (_QWORD *)v8 != v11 )
    {
      v12 = 8 * v10;
      v13 = (const __m128i *)(v8 + 24);
      v14 = v5;
      do
      {
        *(_QWORD *)v14 = v13[-2].m128i_i64[1];
        *(_QWORD *)(v14 + 8) = v14 + 24;
        v15 = (const __m128i *)v13[-1].m128i_i64[0];
        if ( v15 == v13 )
        {
          *(__m128i *)(v14 + 24) = _mm_loadu_si128(v13);
        }
        else
        {
          *(_QWORD *)(v14 + 8) = v15;
          *(_QWORD *)(v14 + 24) = v13->m128i_i64[0];
        }
        v14 += 40;
        *(_QWORD *)(v14 - 24) = v13[-1].m128i_i64[1];
        v13[-1].m128i_i64[0] = (__int64)v13;
        v13 = (const __m128i *)((char *)v13 + 40);
        v13[-3].m128i_i64[0] = 0;
        v13[-3].m128i_i8[8] = 0;
      }
      while ( v5 + 8 * ((unsigned __int64)(v12 - 40) >> 3) + 40 != v14 );
      v16 = *(_QWORD **)(a1 + 72);
      v11 = &v16[5 * *(unsigned int *)(a1 + 80)];
      if ( v16 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v11 -= 5;
            v17 = (_QWORD *)v11[1];
            if ( v17 == v11 + 3 )
              break;
            operator delete(v17);
            if ( v11 == v16 )
              goto LABEL_18;
          }
        }
        while ( v11 != v16 );
LABEL_18:
        v11 = *(_QWORD **)(a1 + 72);
      }
    }
    v18 = v20;
    if ( (_QWORD *)(a1 + 88) != v11 )
      free(v11);
    v19 = (__m128i *)v21;
    *(_QWORD *)(a1 + 72) = v5;
    *(_DWORD *)(a1 + 84) = v18;
    ++*(_DWORD *)(a1 + 80);
    if ( v19 != v23 )
      operator delete(v19);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 72) + 40LL * *(unsigned int *)(a1 + 80);
    *(_QWORD *)v4 = a2;
    *(_QWORD *)(v4 + 8) = v4 + 24;
    if ( v21 == v23 )
    {
      *(__m128i *)(v4 + 24) = _mm_load_si128(v23);
    }
    else
    {
      *(_QWORD *)(v4 + 8) = v21;
      *(_QWORD *)(v4 + 24) = v23[0].m128i_i64[0];
    }
    *(_QWORD *)(v4 + 16) = v22;
    ++*(_DWORD *)(a1 + 80);
  }
}
