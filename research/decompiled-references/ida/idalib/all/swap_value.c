void __fastcall swap_value(__int64 *a1, const __m128i *a2, __int64 a3)
{
  switch ( a3 )
  {
    case 1LL:
      *(_BYTE *)a1 = a2->m128i_i8[0];
      break;
    case 2LL:
      *(_WORD *)a1 = __ROL2__(a2->m128i_i16[0], 8);
      break;
    case 4LL:
      *(_DWORD *)a1 = _byteswap_ulong(a2->m128i_i32[0]);
      break;
    case 8LL:
      *a1 = swap64(a2->m128i_i64[0]);
      break;
    case 16LL:
      if ( a1 != (__int64 *)a2 )
        *(__m128i *)a1 = _mm_load_si128(a2);
      swap128(a1);
      break;
    default:
      return;
  }
}
