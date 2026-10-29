__int64 __fastcall sub_1CE88F0(
        __int64 *a1,
        unsigned __int16 *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax

  if ( !a2 )
    return 0;
  v7 = *a2;
  v8 = (unsigned int)(v7 + 509);
  LOWORD(v8) = (v7 + 509) & 0x1FF;
  switch ( v8 )
  {
    case 0LL:
      result = sub_1CF67B0();
      break;
    case 1LL:
      result = sub_1D0CF10();
      break;
    case 2LL:
      result = sub_1D00C50();
      break;
    case 3LL:
      result = sub_1D099F0();
      break;
    case 4LL:
      result = sub_1CAFD00((__int64)a2);
      break;
    case 5LL:
      result = sub_1CAFD10((__int64)a2);
      break;
    case 6LL:
      result = sub_1CAFD20((__int64)a2);
      break;
    case 7LL:
      result = (__int64)sub_1CE7E50(a1, (__int64)a2, a3, a4);
      break;
    case 8LL:
      result = sub_1CAF410(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1CFF7B0();
      break;
    case 10LL:
      result = sub_1CE99A0();
      break;
    case 11LL:
      result = sub_1CF8BD0();
      break;
    case 12LL:
      result = sub_1D0C880();
      break;
    case 13LL:
      result = sub_1CF08F0();
      break;
    case 14LL:
      result = sub_1CF0A50();
      break;
    case 15LL:
      result = sub_1CAF5A0(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1CE9A70();
      break;
    case 17LL:
      result = sub_1CF0AC0();
      break;
    case 18LL:
      result = sub_1CF0B20();
      break;
    case 19LL:
      result = sub_1CF0D30();
      break;
    case 20LL:
      result = sub_1D01BF0();
      break;
    case 21LL:
      result = sub_1D018E0();
      break;
    case 22LL:
      result = sub_1CAF600((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1CAFD30((__int64)a2);
      break;
    case 24LL:
      result = sub_1CF8C40();
      break;
    case 25LL:
      result = sub_1CF0D90();
      break;
    case 26LL:
      result = (__int64)sub_1CAFA50(*a1, a2, (unsigned __int16)v8, a6, a7, a3, a4);
      break;
    case 27LL:
      result = sub_1CAFD40((__int64)a2);
      break;
    case 28LL:
      result = sub_1CAFD50((__int64)a2);
      break;
    case 29LL:
      result = sub_1CF0E20();
      break;
    case 30LL:
      result = sub_1CF8ED0();
      break;
    case 31LL:
      result = sub_1CF1000();
      break;
    case 32LL:
      result = sub_1CF1100();
      break;
    case 33LL:
      result = sub_1CF13E0();
      break;
    case 34LL:
      result = sub_1CF9380();
      break;
    case 35LL:
      result = sub_1CF13F0();
      break;
    case 36LL:
      result = sub_1CF1880();
      break;
    case 37LL:
      result = sub_1CAFD60((__int64)a2);
      break;
    case 38LL:
      result = sub_1CAFD70((__int64)a2);
      break;
    case 39LL:
      result = sub_1CE9B10();
      break;
    case 40LL:
      result = sub_1CF93F0();
      break;
    case 41LL:
      result = sub_1CF18E0();
      break;
    case 42LL:
      JUMPOUT(0x2EAB36);
    case 43LL:
      result = sub_1D02050();
      break;
    case 44LL:
      result = sub_1CF1A70();
      break;
    case 45LL:
      result = sub_1CF1B30();
      break;
    case 46LL:
      result = sub_1CF1B50();
      break;
    case 47LL:
      result = sub_1D02910();
      break;
    case 48LL:
      result = (__int64)a2;
      break;
    case 49LL:
      result = sub_1CAFD80((__int64)a2);
      break;
    case 50LL:
      result = sub_1CE9BD0();
      break;
    case 51LL:
      result = sub_1CF6D00();
      break;
    case 52LL:
      result = sub_1CAFD90((__int64)a2);
      break;
    case 53LL:
      result = sub_1CF1BF0();
      break;
    case 54LL:
      result = sub_1CF98D0();
      break;
    case 55LL:
      result = sub_1CAFDA0((__int64)a2);
      break;
    case 56LL:
      result = sub_1CAFDB0((__int64)a2);
      break;
    case 57LL:
      result = sub_1CF1C00();
      break;
    case 58LL:
      result = sub_1CF1C10();
      break;
    case 59LL:
      result = sub_1CAFDC0((__int64)a2);
      break;
    case 60LL:
      result = sub_1CAFDD0((__int64)a2);
      break;
    case 61LL:
      result = sub_1CF1C20();
      break;
    case 62LL:
      result = sub_1CF1D40();
      break;
    case 63LL:
      result = sub_1CAFDE0((__int64)a2);
      break;
    case 64LL:
      JUMPOUT(0x2EAB2C);
    case 65LL:
      result = sub_1CF1DE0();
      break;
    case 66LL:
      result = sub_1D00C40();
      break;
    case 67LL:
      result = sub_1D018F0();
      break;
    case 68LL:
      result = sub_1D02A70();
      break;
    case 69LL:
      result = sub_1CE98B0();
      break;
    case 70LL:
      result = sub_1CE9900();
      break;
    case 71LL:
      result = sub_1CF9C00();
      break;
    case 72LL:
      result = sub_1D00870();
      break;
    case 73LL:
      result = sub_1CF9C80();
      break;
    case 74LL:
      result = sub_1CF2590();
      break;
    case 75LL:
      result = sub_1CAFDF0((__int64)a2);
      break;
    case 76LL:
      result = sub_1CF2650();
      break;
    case 77LL:
      result = sub_1CF9D30();
      break;
    case 78LL:
      result = sub_1CF9F10();
      break;
    case 79LL:
      result = sub_1CF9F20();
      break;
    case 80LL:
      result = sub_1CF9F30();
      break;
    case 81LL:
      result = sub_1CF9F40();
      break;
    case 82LL:
      result = sub_1CF9F50();
      break;
    case 83LL:
      result = sub_1D03810();
      break;
    case 84LL:
      result = sub_1CF9F60();
      break;
    case 85LL:
      result = sub_1CF9FF0();
      break;
    case 86LL:
      result = sub_1CF2670();
      break;
    case 87LL:
      result = sub_1CF2830();
      break;
    case 88LL:
      result = sub_1D013E0();
      break;
    case 89LL:
      result = sub_1CF2840();
      break;
    case 90LL:
      result = sub_1CF2850();
      break;
    case 91LL:
      result = sub_1CFA050();
      break;
    case 92LL:
      result = sub_1D03920();
      break;
    case 93LL:
      result = sub_1CFA150();
      break;
    case 94LL:
      result = sub_1CF2990();
      break;
    case 95LL:
      result = sub_1CF6DE0();
      break;
    case 96LL:
      result = sub_1CF2A00();
      break;
    case 97LL:
      result = sub_1CFA2E0();
      break;
    case 98LL:
      result = sub_1CF2A10();
      break;
    case 99LL:
      result = sub_1D092C0();
      break;
    case 100LL:
      result = sub_1CF6EB0();
      break;
    case 101LL:
      result = sub_1CAFE00((__int64)a2);
      break;
    case 102LL:
      result = sub_1CF2CF0();
      break;
    case 103LL:
      result = sub_1D032D0();
      break;
    case 104LL:
      result = sub_1CF6F90();
      break;
    case 105LL:
      result = sub_1CF2D80();
      break;
    case 106LL:
      result = sub_1D03DC0();
      break;
    case 107LL:
      result = sub_1CF2FA0();
      break;
    case 108LL:
      result = sub_1CB9810((__int64)a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_1CF30C0();
      break;
    case 110LL:
      result = sub_1CF70C0();
      break;
    case 111LL:
      result = sub_1D03AD0();
      break;
    case 112LL:
      result = sub_1CAFE10((__int64)a2);
      break;
    case 113LL:
      result = sub_1CF3290();
      break;
    case 114LL:
      result = sub_1CE8430((__int64)a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 115LL:
      result = sub_1CF32F0();
      break;
    case 116LL:
      result = sub_1CF34B0();
      break;
    case 117LL:
      result = sub_1CE9CC0();
      break;
    case 118LL:
      result = sub_1CF7480();
      break;
    case 119LL:
      result = sub_1CFA370();
      break;
    case 120LL:
      result = sub_1CF3650();
      break;
    case 121LL:
      result = sub_1CF3710();
      break;
    case 122LL:
      JUMPOUT(0x2EAB3B);
    case 123LL:
      JUMPOUT(0x2EAB31);
    case 124LL:
      result = sub_1CB96E0((__int64)a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_1CF3960();
      break;
    case 126LL:
      result = sub_1CF3A20();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
