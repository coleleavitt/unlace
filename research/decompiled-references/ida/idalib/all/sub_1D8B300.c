__int64 __fastcall sub_1D8B300(
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
      result = sub_1D9B680();
      break;
    case 1LL:
      result = sub_1DACA60();
      break;
    case 2LL:
      result = sub_1DA22C0();
      break;
    case 3LL:
      result = sub_1DA70D0();
      break;
    case 4LL:
      result = sub_1D81C90((__int64)a2);
      break;
    case 5LL:
      result = sub_1D81CA0((__int64)a2);
      break;
    case 6LL:
      result = sub_1D81CB0((__int64)a2);
      break;
    case 7LL:
      result = sub_1DADBA0();
      break;
    case 8LL:
      result = sub_1D81610(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1DA0B20();
      break;
    case 10LL:
      result = sub_1D8C040();
      break;
    case 11LL:
      result = sub_1D9CDC0();
      break;
    case 12LL:
      result = sub_1DAA980();
      break;
    case 13LL:
      result = sub_1D939A0();
      break;
    case 14LL:
      result = sub_1D93B00();
      break;
    case 15LL:
      result = sub_1D81680(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1D8C6E0();
      break;
    case 17LL:
      result = sub_1D93B70();
      break;
    case 18LL:
      result = sub_1D93BD0();
      break;
    case 19LL:
      result = sub_1D93DE0();
      break;
    case 20LL:
      result = sub_1DA30C0();
      break;
    case 21LL:
      result = sub_1DA3050();
      break;
    case 22LL:
      result = sub_1D816B0((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1D81CC0((__int64)a2);
      break;
    case 24LL:
      result = sub_1D9CE30();
      break;
    case 25LL:
      result = sub_1D93E40();
      break;
    case 26LL:
      result = (__int64)sub_1D81B30(*a1, a2, (unsigned __int16)v8, a6, a7, a3, a4);
      break;
    case 27LL:
      result = sub_1D81CD0((__int64)a2);
      break;
    case 28LL:
      result = sub_1D81CE0((__int64)a2);
      break;
    case 29LL:
      result = sub_1D93ED0();
      break;
    case 30LL:
      result = sub_1D9D0C0();
      break;
    case 31LL:
      result = sub_1D940B0();
      break;
    case 32LL:
      result = sub_1D941B0();
      break;
    case 33LL:
      result = sub_1D94490();
      break;
    case 34LL:
      result = sub_1D9D570();
      break;
    case 35LL:
      result = sub_1D944A0();
      break;
    case 36LL:
      result = sub_1D94930();
      break;
    case 37LL:
      result = sub_1D81CF0((__int64)a2);
      break;
    case 38LL:
      result = sub_1D81D00((__int64)a2);
      break;
    case 39LL:
      result = sub_1D8C780();
      break;
    case 40LL:
      result = sub_1D9D5E0();
      break;
    case 41LL:
      result = sub_1D94990();
      break;
    case 42LL:
      JUMPOUT(0x2EAC9F);
    case 43LL:
      result = sub_1DA35D0();
      break;
    case 44LL:
      result = sub_1D94B20();
      break;
    case 45LL:
      result = sub_1D94BE0();
      break;
    case 46LL:
      result = sub_1D94C00();
      break;
    case 47LL:
      result = sub_1DA3F10();
      break;
    case 48LL:
      result = (__int64)sub_1D89D20(a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 49LL:
      result = sub_1D81D10((__int64)a2);
      break;
    case 50LL:
      result = sub_1D8C840();
      break;
    case 51LL:
      result = sub_1D9AF00();
      break;
    case 52LL:
      result = sub_1D81D20((__int64)a2);
      break;
    case 53LL:
      result = sub_1D94CA0();
      break;
    case 54LL:
      result = sub_1D9DAC0();
      break;
    case 55LL:
      result = sub_1D81D30((__int64)a2);
      break;
    case 56LL:
      result = sub_1D81D40((__int64)a2);
      break;
    case 57LL:
      result = sub_1D94CB0();
      break;
    case 58LL:
      result = sub_1D94CC0();
      break;
    case 59LL:
      result = sub_1D81D50((__int64)a2);
      break;
    case 60LL:
      result = sub_1D81D60((__int64)a2);
      break;
    case 61LL:
      result = sub_1D94CD0();
      break;
    case 62LL:
      result = sub_1D94DF0();
      break;
    case 63LL:
      result = sub_1D81D70((__int64)a2);
      break;
    case 64LL:
      JUMPOUT(0x2EACA4);
    case 65LL:
      result = sub_1D94E90();
      break;
    case 66LL:
      result = sub_1DA22B0();
      break;
    case 67LL:
      result = sub_1DA3060();
      break;
    case 68LL:
      result = sub_1DA4190();
      break;
    case 69LL:
      result = sub_1D8BF50();
      break;
    case 70LL:
      result = sub_1D8BFA0();
      break;
    case 71LL:
      result = sub_1D9DDF0();
      break;
    case 72LL:
      result = sub_1DA1430();
      break;
    case 73LL:
      result = sub_1D9DE70();
      break;
    case 74LL:
      result = sub_1D95690();
      break;
    case 75LL:
      result = sub_1D81D80((__int64)a2);
      break;
    case 76LL:
      result = sub_1D95750();
      break;
    case 77LL:
      result = sub_1D9DF20();
      break;
    case 78LL:
      result = sub_1D9E100();
      break;
    case 79LL:
      result = sub_1D9E110();
      break;
    case 80LL:
      result = sub_1D9E120();
      break;
    case 81LL:
      result = sub_1D9E130();
      break;
    case 82LL:
      result = sub_1D9E140();
      break;
    case 83LL:
      result = sub_1DA4F50();
      break;
    case 84LL:
      result = sub_1D9E150();
      break;
    case 85LL:
      result = sub_1D9E1E0();
      break;
    case 86LL:
      result = sub_1D95770();
      break;
    case 87LL:
      result = sub_1D95930();
      break;
    case 88LL:
      result = sub_1DA2A50();
      break;
    case 89LL:
      result = sub_1D95940();
      break;
    case 90LL:
      result = sub_1D95950();
      break;
    case 91LL:
      result = sub_1D9E240();
      break;
    case 92LL:
      result = sub_1DA5060();
      break;
    case 93LL:
      result = sub_1D9E340();
      break;
    case 94LL:
      result = sub_1D95A90();
      break;
    case 95LL:
      result = sub_1D9AFC0();
      break;
    case 96LL:
      result = sub_1D95B00();
      break;
    case 97LL:
      result = sub_1D9E5D0();
      break;
    case 98LL:
      result = sub_1D95B10();
      break;
    case 99LL:
      result = sub_1DA68E0();
      break;
    case 100LL:
      result = sub_1D9B090();
      break;
    case 101LL:
      result = sub_1D81D90((__int64)a2);
      break;
    case 102LL:
      result = sub_1D95E30();
      break;
    case 103LL:
      result = sub_1DA4950();
      break;
    case 104LL:
      result = sub_1D9B170();
      break;
    case 105LL:
      result = sub_1D95EC0();
      break;
    case 106LL:
      result = sub_1DA5500();
      break;
    case 107LL:
      result = sub_1D960E0();
      break;
    case 108LL:
      result = sub_1D86EA0((__int64)a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_1D96200();
      break;
    case 110LL:
      result = sub_1D9B2A0();
      break;
    case 111LL:
      result = sub_1DA5210();
      break;
    case 112LL:
      result = sub_1D81DA0((__int64)a2);
      break;
    case 113LL:
      result = sub_1D963D0();
      break;
    case 114LL:
      result = sub_1DB3C90();
      break;
    case 115LL:
      result = sub_1D96430();
      break;
    case 116LL:
      result = sub_1D965F0();
      break;
    case 117LL:
      result = sub_1D8C930();
      break;
    case 118LL:
      result = sub_1D9B620();
      break;
    case 119LL:
      result = sub_1D9E660();
      break;
    case 120LL:
      result = sub_1D96790();
      break;
    case 121LL:
      result = sub_1D96850();
      break;
    case 122LL:
      JUMPOUT(0x2EACA9);
    case 123LL:
      JUMPOUT(0x2EAC9A);
    case 124LL:
      result = sub_1D86C40((__int64)a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_1D96AA0();
      break;
    case 126LL:
      result = sub_1D96B60();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
