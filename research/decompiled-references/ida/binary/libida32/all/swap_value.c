void __fastcall swap_value(__m128i *a1, const __m128i *a2, __int64 a3)
{
  switch ( a3 )
  {
    case 1LL:
      a1->m128i_i8[0] = a2->m128i_i8[0];
      break;
    case 2LL:
      a1->m128i_i16[0] = __ROL2__(a2->m128i_i16[0], 8);
      break;
    case 4LL:
      a1->m128i_i32[0] = _byteswap_ulong(a2->m128i_i32[0]);
      break;
    case 8LL:
      a1->m128i_i64[0] = swap64(a2->m128i_i64[0]);
      break;
    case 16LL:
      if ( a1 != a2 )
        *a1 = _mm_load_si128(a2);
      swap128(a1);
      break;
    default:
      return;
  }
}

