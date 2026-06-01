__int64 __fastcall sub_3B94D0(__int64 *a1, int a2)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  __int64 v5; // rdi

  sub_4EDEE0(a1 + 334);
  sub_4EDEE0(a1 + 301);
  sub_4EDEE0(a1 + 161);
  sub_4EDEE0(a1 + 170);
  sub_4EDEE0(a1 + 203);
  result = sub_4EDEE0(a1 + 194);
  if ( (unsigned int)(a2 - 4) <= 1 )
  {
    sub_3E9390(a1, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    invalidate_dbgmem_config();
    *((_BYTE *)a1 + 1192) = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2383860);
    v5 = *a1;
    *((_DWORD *)a1 + 299) = -1;
    *(__int64 *)((char *)a1 + 1204) = 0xFFFFFFFFLL;
    *(__m128i *)((char *)a1 + 1532) = si128;
    return sub_4F8940(v5);
  }
  return result;
}

