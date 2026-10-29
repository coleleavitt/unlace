__int64 __fastcall sub_162B340(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __m128i *v4; // r8
  _DWORD *v5; // rax
  __int64 v6; // rax
  __m128i *v8; // r14
  __int64 v12; // rax
  __m128i *v13; // rdi
  unsigned __int64 v14; // r15
  _DWORD *v15; // rax
  const __m128i *v16; // rax
  const __m128i *v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm0
  unsigned __int64 v24; // rdx
  __int32 *v25; // rcx
  __int32 *v26; // rdx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int32 v31; // esi
  __int64 v32[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v8 = (__m128i *)(a1 + 16);
    v12 = sub_2237400(a1, a1 + 16, 0, 12, v32);
    v13 = *(__m128i **)a1;
    v14 = v12;
    v15 = (_DWORD *)(v12 + 12LL * *(unsigned int *)(a1 + 8));
    *v15 = *a4;
    v15[1] = *a3;
    v15[2] = *a2;
    v16 = (__m128i *)((char *)v13 + 12 * *(unsigned int *)(a1 + 8));
    if ( v13 != v16 )
    {
      v17 = v13;
      v18 = (0x2AAAAAAAAAAAAAABLL * ((12 * (unsigned __int64)*(unsigned int *)(a1 + 8) - 12) >> 2))
          & 0x3FFFFFFFFFFFFFFFLL;
      if ( ((unsigned __int64)v13 >= v14 + 48 || v14 >= (unsigned __int64)&v13[3]) && v18 > 2 )
      {
        v19 = v18 + 1;
        v20 = v14;
        do
        {
          v21 = _mm_loadu_si128(v17 + 1);
          v22 = _mm_loadu_si128(v17);
          v17 += 3;
          v20 += 48LL;
          v23 = _mm_loadu_si128(v17 - 1);
          *(__m128i *)(v20 - 48) = v22;
          *(__m128i *)(v20 - 32) = v21;
          *(__m128i *)(v20 - 16) = v23;
        }
        while ( v17 != &v13[3 * (v19 >> 2)] );
        v24 = 3 * (v19 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = &v13->m128i_i32[v24];
        v26 = (__int32 *)(v14 + v24 * 4);
        if ( v19 != (v19 & 0xFFFFFFFFFFFFFFFCLL) )
        {
          *v26 = *v25;
          v26[1] = v25[1];
          v26[2] = v25[2];
          if ( v16 != (const __m128i *)(v25 + 3) )
          {
            v26[3] = v25[3];
            v26[4] = v25[4];
            v26[5] = v25[5];
            if ( v16 != (const __m128i *)(v25 + 6) )
            {
              v26[6] = v25[6];
              v26[7] = v25[7];
              v26[8] = v25[8];
            }
          }
        }
      }
      else
      {
        v30 = v14;
        do
        {
          v31 = v17->m128i_i32[0];
          v17 = (const __m128i *)((char *)v17 + 12);
          v30 += 12LL;
          *(_DWORD *)(v30 - 12) = v31;
          *(_DWORD *)(v30 - 8) = v17[-1].m128i_i32[2];
          *(_DWORD *)(v30 - 4) = v17[-1].m128i_i32[3];
        }
        while ( v16 != v17 );
      }
    }
    v27 = v32[0];
    if ( v8 != v13 )
      free(v13);
    v28 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v27;
    v29 = (unsigned int)(v28 + 1);
    *(_DWORD *)(a1 + 8) = v29;
    return v14 + 12 * v29 - 12;
  }
  else
  {
    v4 = *(__m128i **)a1;
    v5 = (_DWORD *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 8));
    *v5 = *a4;
    v5[1] = *a3;
    v5[2] = *a2;
    v6 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v6;
    return (__int64)v4 + 12 * v6 - 12;
  }
}
