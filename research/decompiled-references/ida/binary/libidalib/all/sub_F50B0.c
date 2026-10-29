__int64 __fastcall sub_F50B0(__int64 a1)
{
  void (*v1)(void); // rax
  __int64 v2; // r13
  const __m128i *i; // rbx
  __int64 v4; // rdx
  __m128i si128; // xmm0
  __int64 v6; // rsi
  __int64 v7; // rax
  float v8; // xmm0_4
  __int64 result; // rax
  float v10; // xmm0_4
  __m128i v11[3]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 720LL);
  if ( v1 != nullsub_43 )
    v1();
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(_QWORD *)(a1 + 1176) = 0;
    qfree();
    *(_QWORD *)(a1 + 1168) = 0;
    *(_QWORD *)(a1 + 1184) = 0;
  }
  v2 = 0;
  for ( i = (const __m128i *)get_first_seg(); i; i = (const __m128i *)get_next_seg() )
  {
    v4 = *(_QWORD *)(a1 + 1176);
    si128 = _mm_loadu_si128(i);
    v6 = *(_QWORD *)(a1 + 1168);
    if ( *(_QWORD *)(a1 + 1184) < (unsigned __int64)(v4 + 1) )
    {
      v11[0] = si128;
      v7 = qvector_reserve();
      v4 = *(_QWORD *)(a1 + 1176);
      si128 = _mm_load_si128(v11);
      *(_QWORD *)(a1 + 1168) = v7;
      v6 = v7;
    }
    *(__m128i *)(v6 + 16 * v4) = si128;
    ++*(_QWORD *)(a1 + 1176);
    v2 = i->m128i_i64[1] + v2 - i->m128i_i64[0];
  }
  v8 = 1.0;
  result = *(unsigned int *)(*(_QWORD *)(a1 + 976) + 100LL);
  if ( (_DWORD)result )
  {
    if ( v2 < 0 )
      v10 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
          + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
    else
      v10 = (float)(int)v2;
    v8 = v10 / (float)(int)result;
  }
  *(float *)(a1 + 1192) = v8;
  return result;
}

