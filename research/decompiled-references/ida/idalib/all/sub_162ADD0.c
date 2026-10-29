__int64 __fastcall sub_162ADD0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned int *v8; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v9; // [rsp+14h] [rbp-54h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  __m128 v11; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-38h]
  __m128i si128; // [rsp+40h] [rbp-28h] BYREF

  v10 = a2;
  v8 = &v9;
  v9 = a4;
  v12 = a1;
  v11 = _mm_loadh_ps((const double *)&v8);
  switch ( a3 )
  {
    case 0LL:
      v6 = 31;
      goto LABEL_4;
    case 1LL:
      a5 = 16;
      goto LABEL_10;
    case 2LL:
      v6 = 0x800 / (unsigned int)a5 - 1;
      goto LABEL_4;
    case 3LL:
    case 8LL:
      goto LABEL_10;
    case 4LL:
      a5 = (unsigned int)a5 >> 1;
      goto LABEL_10;
    case 5LL:
      v6 = (unsigned int)(a5 - 1);
      goto LABEL_4;
    case 6LL:
      v6 = 7;
      goto LABEL_4;
    case 7LL:
      goto LABEL_3;
    case 9LL:
      LODWORD(a5) = 2 * a5;
      goto LABEL_3;
    case 10LL:
      LODWORD(a5) = 4 * a5;
LABEL_3:
      v6 = a6 / (unsigned int)a5 - 1;
      goto LABEL_4;
    case 11LL:
      return sub_162AC50(
               (__int64 **)&v11,
               &si128,
               2,
               0x1360u,
               *(double *)_mm_load_si128((const __m128i *)&xmmword_23AA870).m128i_i64);
    case 12LL:
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA880);
      return sub_162AC50(
               (__int64 **)&v11,
               &si128,
               4,
               0x1361u,
               *(double *)_mm_load_si128((const __m128i *)&xmmword_23AA890).m128i_i64);
    case 13LL:
      v6 = 13;
      goto LABEL_4;
    case 14LL:
      v6 = 1;
      goto LABEL_4;
    case 15LL:
      v6 = 2;
      goto LABEL_4;
    case 16LL:
      v6 = 3;
      goto LABEL_4;
    case 17LL:
      v6 = 0;
      goto LABEL_4;
    case 18LL:
      v6 = 15;
      goto LABEL_4;
    case 19LL:
      v6 = 255;
      goto LABEL_4;
    case 20LL:
      result = sub_16D5460(*a1, v10, v9, 2, 4, 1);
      if ( !(_BYTE)result )
        return sub_16D5310(*a1, v10, v9, 2);
      return result;
    case 21LL:
      a5 = 1;
      goto LABEL_10;
    case 22LL:
      a5 = 3;
      goto LABEL_10;
    case 23LL:
      a5 = 7;
      goto LABEL_10;
    case 24LL:
      a5 = 32;
      goto LABEL_10;
    case 25LL:
      a5 = 64;
LABEL_10:
      result = sub_16D5460(*a1, v10, v9, 1, a5, 1);
      break;
    case 26LL:
      v6 = 63;
LABEL_4:
      result = sub_16D5460(*a1, v10, v9, 0, v6, 1);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
