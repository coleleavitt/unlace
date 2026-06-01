__int64 __fastcall sub_20B29B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v4; // zf
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r13
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2;
  v4 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v4 )
  {
    result = *(_QWORD *)(a1 + 8);
    v6 = 24LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = a1 + 8;
    v6 = 96;
  }
  for ( i = result + v6; result != i; result += 24 )
    *(_QWORD *)result = -4096;
  if ( a2 != a3 )
  {
    v8 = a2 + 8 * ((unsigned __int64)(a3 - 24 - a2) >> 3) + 24;
    do
    {
      result = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 != -4096 && result != -8192 )
      {
        sub_20A1250(a1, (__int64 *)v3, v9);
        *(_QWORD *)v9[0] = *(_QWORD *)v3;
        *(__m128i *)(v9[0] + 8LL) = _mm_loadu_si128((const __m128i *)(v3 + 8));
        result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
        *(_DWORD *)a1 = result;
      }
      v3 += 24;
    }
    while ( v3 != v8 );
  }
  return result;
}
