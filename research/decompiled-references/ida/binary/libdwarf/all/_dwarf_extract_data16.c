__int64 __fastcall dwarf_extract_data16(
        __int64 a1,
        const __m128i *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __m128i *a5,
        __int64 a6)
{
  if ( (unsigned __int64)&a2[1] > a4 || (unsigned __int64)a2 < a3 )
  {
    _dwarf_error(a1, a6, 399);
    return 1;
  }
  else
  {
    *a5 = _mm_loadu_si128(a2);
    return 0;
  }
}

