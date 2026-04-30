__int64 __fastcall sub_36F240(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rdx
  unsigned __int64 v13; // r14
  __m128i v14; // xmm1
  const __m128i *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  const __m128i *v19; // rdi
  __m128i si128; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __m128i v25[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( !(unsigned __int8)get_fixups(0, a1, 1) )
  {
    if ( *((_BYTE *)a5 + 32) )
    {
      *a5 = a1;
      *((_BYTE *)a5 + 32) = 0;
    }
    else
    {
      v8 = a5[3] + 1;
      if ( a1 != v8 )
      {
        v9 = a5[2];
        v10 = v8 - *a5;
        v11 = (__m128i)*a5;
        a5[1] = v10;
        v12 = *(_QWORD *)(v9 + 8);
        v13 = *(_QWORD *)(v9 + 16);
        v14 = _mm_unpacklo_epi64(v11, (__m128i)v10);
        if ( v13 < v12 + 1 )
        {
          v25[0] = v14;
          v16 = qvector_reserve(v9, 0, v12 + 1, 16);
          v17 = *(_QWORD *)(v9 + 8);
          v18 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 16) = v13;
          v19 = *(const __m128i **)v9;
          si128 = _mm_load_si128(v25);
          v15 = (const __m128i *)v16;
          v21 = v17 - 1;
          if ( v21 >= 0 )
          {
            v22 = v16;
            do
            {
              v23 = _mm_loadu_si128(v19);
              v22 += 16;
              ++v19;
              *(__m128i *)(v22 - 16) = v23;
            }
            while ( v21-- != 0 );
            v19 = *(const __m128i **)v9;
          }
          v25[0] = si128;
          qfree(v19, nullptr);
          *(_QWORD *)v9 = v15;
          v12 = *(_QWORD *)(v9 + 8);
          *(_QWORD *)(v9 + 16) = v18;
          v14 = _mm_load_si128(v25);
        }
        else
        {
          v15 = *(const __m128i **)v9;
        }
        v15[v12] = v14;
        ++*(_QWORD *)(v9 + 8);
        *a5 = a1;
      }
    }
    a5[3] = a1;
  }
  return 0;
}
