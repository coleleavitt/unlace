__int64 __fastcall sub_531C60(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  int v4; // edx
  __int64 result; // rax

  v2 = *a2;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  v4 = *((_DWORD *)a1 + 6);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v3;
  result = *((unsigned int *)a2 + 6);
  *((_DWORD *)a2 + 6) = v4;
  *((_DWORD *)a1 + 6) = result;
  return result;
}
