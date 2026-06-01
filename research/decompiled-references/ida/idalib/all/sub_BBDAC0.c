__int64 __fastcall sub_BBDAC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __m128i si128; // xmm0
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  result = sub_BBD810(*(_QWORD *)(a1 + 56), a2);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    result = (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34;
    if ( (unsigned int)result <= 5 )
    {
      result = *(_QWORD *)(v3 + 56);
      if ( (result & 4) != 0 )
      {
        result &= 0xFFFFFFFFFFFFFFF8LL;
        v4 = result;
        if ( *(_QWORD *)(result + 40) )
        {
          v5 = *(unsigned int *)(a2 + 8);
          v6 = *(unsigned int *)(a2 + 12);
          if ( v5 >= v6 )
          {
            si128 = _mm_loadu_si128((const __m128i *)(v4 + 40));
            if ( v6 < v5 + 1 )
            {
              v8[0] = si128;
              sub_2237220(a2, a2 + 16, v5 + 1, 16);
              v5 = *(unsigned int *)(a2 + 8);
              si128 = _mm_load_si128(v8);
            }
            result = *(_QWORD *)a2 + 16 * v5;
            *(__m128i *)result = si128;
            ++*(_DWORD *)(a2 + 8);
          }
          else
          {
            result = *(_QWORD *)a2 + 16 * v5;
            *(__m128i *)result = _mm_loadu_si128((const __m128i *)(v4 + 40));
            ++*(_DWORD *)(a2 + 8);
          }
        }
      }
    }
  }
  return result;
}
