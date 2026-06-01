__int64 __fastcall sub_9D6B20(__int64 a1, __m128i *a2, __m128i *a3)
{
  __m128i *v3; // rbx
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r13
  __m128i *v9; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  v4 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v4 )
  {
    result = *(_QWORD *)(a1 + 8);
    v6 = 16LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = a1 + 8;
    v6 = 64;
  }
  for ( i = result + v6; result != i; result += 16 )
    *(_QWORD *)result = -4096;
  if ( a2 != a3 )
  {
    v8 = (unsigned __int64)a2[1].m128i_u64 + (((char *)&a3[-1] - (char *)a2) & 0xFFFFFFFFFFFFFFF0LL);
    do
    {
      result = v3->m128i_i64[0];
      if ( v3->m128i_i64[0] != -4096 && result != -8192 )
      {
        sub_9CAB90(a1, v3->m128i_i64, &v9);
        *v9 = _mm_loadu_si128(v3);
        result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
        *(_DWORD *)a1 = result;
      }
      ++v3;
    }
    while ( v3 != (__m128i *)v8 );
  }
  return result;
}
