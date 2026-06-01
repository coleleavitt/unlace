__int64 __fastcall sub_162B100(unsigned __int64 *a1, const __m128i *a2)
{
  __int64 v4; // rax
  const __m128i *v5; // rsi
  __m128i *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // r12
  char v9; // r13
  __m128i *v10; // r14
  __int64 v11; // rax
  __m128i *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  const __m128i *v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm0
  unsigned __int64 v22; // rdx
  char *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int32 v28; // esi
  int v29; // [rsp+8h] [rbp-50h]
  __int64 v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = *((unsigned int *)a1 + 2);
  v5 = (const __m128i *)*a1;
  v6 = (__m128i *)(*a1 + 12 * v4);
  if ( v4 + 1 > (unsigned __int64)*((unsigned int *)a1 + 3) )
  {
    v8 = -1;
    v9 = 0;
    if ( v5 <= a2 && v6 > a2 )
    {
      v9 = 1;
      v8 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)v5) >> 2);
    }
    v10 = (__m128i *)(a1 + 2);
    v11 = sub_2237400(a1, a1 + 2, v4 + 1, 12, v30);
    v12 = (__m128i *)*a1;
    v13 = v11;
    v14 = *a1 + 12LL * *((unsigned int *)a1 + 2);
    if ( *a1 != v14 )
    {
      v15 = (const __m128i *)*a1;
      v16 = (0x2AAAAAAAAAAAAAABLL * ((unsigned __int64)(v14 - (_QWORD)v12 - 12) >> 2)) & 0x3FFFFFFFFFFFFFFFLL;
      if ( ((unsigned __int64)v12 >= v13 + 48 || v13 >= (unsigned __int64)&v12[3]) && v16 > 2 )
      {
        v17 = v16 + 1;
        v18 = v13;
        do
        {
          v19 = _mm_loadu_si128(v15 + 1);
          v20 = _mm_loadu_si128(v15);
          v15 += 3;
          v18 += 48LL;
          v21 = _mm_loadu_si128(v15 - 1);
          *(__m128i *)(v18 - 48) = v20;
          *(__m128i *)(v18 - 32) = v19;
          *(__m128i *)(v18 - 16) = v21;
        }
        while ( v15 != &v12[3 * (v17 >> 2)] );
        v22 = 12 * (v17 & 0xFFFFFFFFFFFFFFFCLL);
        v23 = &v12->m128i_i8[v22];
        v24 = (_DWORD *)(v13 + v22);
        if ( v17 != (v17 & 0xFFFFFFFFFFFFFFFCLL) )
        {
          *v24 = *(_DWORD *)v23;
          v24[1] = *((_DWORD *)v23 + 1);
          v24[2] = *((_DWORD *)v23 + 2);
          if ( (char *)v14 != v23 + 12 )
          {
            v24[3] = *((_DWORD *)v23 + 3);
            v24[4] = *((_DWORD *)v23 + 4);
            v24[5] = *((_DWORD *)v23 + 5);
            if ( (char *)v14 != v23 + 24 )
            {
              v24[6] = *((_DWORD *)v23 + 6);
              v24[7] = *((_DWORD *)v23 + 7);
              v24[8] = *((_DWORD *)v23 + 8);
            }
          }
        }
      }
      else
      {
        v27 = v13;
        do
        {
          v28 = v15->m128i_i32[0];
          v15 = (const __m128i *)((char *)v15 + 12);
          v27 += 12LL;
          *(_DWORD *)(v27 - 12) = v28;
          *(_DWORD *)(v27 - 8) = v15[-1].m128i_i32[2];
          *(_DWORD *)(v27 - 4) = v15[-1].m128i_i32[3];
        }
        while ( (const __m128i *)v14 != v15 );
      }
    }
    v25 = v30[0];
    if ( v10 != v12 )
    {
      v29 = v30[0];
      free(v12);
      v25 = v29;
    }
    *((_DWORD *)a1 + 3) = v25;
    v26 = *((unsigned int *)a1 + 2);
    *a1 = v13;
    v6 = (__m128i *)(v13 + 12 * v26);
    if ( v9 )
      a2 = (const __m128i *)(v13 + 12 * v8);
  }
  v6->m128i_i32[0] = a2->m128i_i32[0];
  v6->m128i_i32[1] = a2->m128i_i32[1];
  result = a2->m128i_u32[2];
  v6->m128i_i32[2] = result;
  ++*((_DWORD *)a1 + 2);
  return result;
}
