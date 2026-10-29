/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3200
// Address: 0x080D3200

//----- (080D3200) --------------------------------------------------------
__int16 __cdecl sub_80D3200(unsigned __int64 *a1, const __m128i *a2, int a3)
{
  unsigned __int64 v3; // rax

  LOWORD(v3) = a3;
  switch ( a3 )
  {
    case 1:
      LOWORD(v3) = a2->m128i_u8[0];
      *(_BYTE *)a1 = v3;
      break;
    case 2:
      LOWORD(v3) = __ROL2__(a2->m128i_i16[0], 8);
      *(_WORD *)a1 = v3;
      break;
    case 4:
      LODWORD(v3) = _byteswap_ulong(a2->m128i_i32[0]);
      *(_DWORD *)a1 = v3;
      break;
    case 8:
      v3 = sub_80CD930(a2->m128i_i64[0]);
      *a1 = v3;
      break;
    case 16:
      if ( a1 != (unsigned __int64 *)a2 )
        *(__m128i *)a1 = _mm_loadu_si128(a2);
      LOWORD(v3) = sub_80D3E00(a1);
      break;
    default:
      return v3;
  }
  return v3;
}
