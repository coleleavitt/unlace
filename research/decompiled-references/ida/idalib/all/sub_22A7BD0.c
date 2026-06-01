__int64 __fastcall sub_22A7BD0(__int64 a1)
{
  const __m128i *v1; // rbx
  unsigned int v2; // edx
  __m128i si128; // xmm0
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 *v10; // rax

  v1 = (const __m128i *)&off_2BF0540;
  v2 = *(_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      v5 = *(unsigned int *)(a1 + 12);
      v6 = v2;
      if ( v2 >= v5 )
        break;
      si128 = _mm_load_si128(v1);
      ++v2;
      result = *(_QWORD *)a1 + 16 * v6;
      ++v1;
      *(__m128i *)result = si128;
      *(_DWORD *)(a1 + 8) = v2;
      if ( v1 == (const __m128i *)&unk_2BF0950 )
        return result;
    }
    v7 = v2 + 1LL;
    v8 = v1->m128i_i64[1];
    v9 = v1->m128i_i64[0];
    if ( v5 < v6 + 1 )
    {
      sub_2237220(a1, (const void *)(a1 + 16), v7, 16);
      v6 = *(unsigned int *)(a1 + 8);
    }
    v10 = (__int64 *)(*(_QWORD *)a1 + 16 * v6);
    ++v1;
    *v10 = v9;
    v10[1] = v8;
    result = *(unsigned int *)(a1 + 8);
    v2 = result + 1;
    *(_DWORD *)(a1 + 8) = result + 1;
  }
  while ( v1 != (const __m128i *)&unk_2BF0950 );
  return result;
}
