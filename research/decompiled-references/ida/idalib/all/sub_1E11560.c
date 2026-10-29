__int64 __fastcall sub_1E11560(
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
      result = sub_1E1F450();
      break;
    case 1LL:
      result = sub_1E30780();
      break;
    case 2LL:
      result = sub_1E26470();
      break;
    case 3LL:
      result = sub_1E2CA60();
      break;
    case 4LL:
      result = sub_1DFE400((__int64)a2);
      break;
    case 5LL:
      result = sub_1DFE410((__int64)a2);
      break;
    case 6LL:
      result = sub_1DFE420((__int64)a2);
      break;
    case 7LL:
      result = sub_1E318C0();
      break;
    case 8LL:
      result = sub_1DFE020(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1E24CD0();
      break;
    case 10LL:
      result = sub_1E122A0();
      break;
    case 11LL:
      result = sub_1E217C0();
      break;
    case 12LL:
      result = sub_1E300F0();
      break;
    case 13LL:
      result = sub_1E19B10();
      break;
    case 14LL:
      result = sub_1E19C70();
      break;
    case 15LL:
      result = sub_1DFE090(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1E128B0();
      break;
    case 17LL:
      result = sub_1E19CE0();
      break;
    case 18LL:
      result = sub_1E19D40();
      break;
    case 19LL:
      result = sub_1E19F50();
      break;
    case 20LL:
      result = sub_1E27170();
      break;
    case 21LL:
      result = sub_1E27100();
      break;
    case 22LL:
      result = sub_1DFE0C0((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1DFE430((__int64)a2);
      break;
    case 24LL:
      result = sub_1E21830();
      break;
    case 25LL:
      result = sub_1E19FB0();
      break;
    case 26LL:
      result = (__int64)sub_1DFE270(*a1, a2, (unsigned __int16)v8, a6, a7, a3, a4);
      break;
    case 27LL:
      result = sub_1DFE440((__int64)a2);
      break;
    case 28LL:
      result = sub_1DFE450((__int64)a2);
      break;
    case 29LL:
      result = sub_1E1A040();
      break;
    case 30LL:
      result = sub_1E21AC0();
      break;
    case 31LL:
      result = sub_1E1A220();
      break;
    case 32LL:
      result = sub_1E1A320();
      break;
    case 33LL:
      result = sub_1E1A600();
      break;
    case 34LL:
      result = sub_1E21F70();
      break;
    case 35LL:
      result = sub_1E1A610();
      break;
    case 36LL:
      result = sub_1E1AAA0();
      break;
    case 37LL:
      result = sub_1DFE460((__int64)a2);
      break;
    case 38LL:
      result = sub_1DFE470((__int64)a2);
      break;
    case 39LL:
      result = sub_1E12950();
      break;
    case 40LL:
      result = sub_1E21FE0();
      break;
    case 41LL:
      result = sub_1E1AB00();
      break;
    case 42LL:
      JUMPOUT(0x2EAE03);
    case 43LL:
      result = sub_1E27680();
      break;
    case 44LL:
      result = sub_1E1AC90();
      break;
    case 45LL:
      result = sub_1E1AD50();
      break;
    case 46LL:
      result = sub_1E1AD70();
      break;
    case 47LL:
      result = sub_1E27F70();
      break;
    case 48LL:
      result = (__int64)sub_1E0FF80(a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 49LL:
      result = sub_1DFE480((__int64)a2);
      break;
    case 50LL:
      result = sub_1E12A10();
      break;
    case 51LL:
      result = sub_1E1F990();
      break;
    case 52LL:
      result = sub_1DFE490((__int64)a2);
      break;
    case 53LL:
      result = sub_1E1AE10();
      break;
    case 54LL:
      result = sub_1E224C0();
      break;
    case 55LL:
      result = sub_1DFE4A0((__int64)a2);
      break;
    case 56LL:
      result = sub_1DFE4B0((__int64)a2);
      break;
    case 57LL:
      result = sub_1E1AE20();
      break;
    case 58LL:
      result = sub_1E1AE30();
      break;
    case 59LL:
      result = sub_1DFE4C0((__int64)a2);
      break;
    case 60LL:
      result = sub_1DFE4D0((__int64)a2);
      break;
    case 61LL:
      result = sub_1E1AE40();
      break;
    case 62LL:
      result = sub_1E1AF60();
      break;
    case 63LL:
      result = sub_1DFE4E0((__int64)a2);
      break;
    case 64LL:
      JUMPOUT(0x2EAE08);
    case 65LL:
      result = sub_1E1B000();
      break;
    case 66LL:
      result = sub_1E26460();
      break;
    case 67LL:
      result = sub_1E27110();
      break;
    case 68LL:
      result = sub_1E281F0();
      break;
    case 69LL:
      result = sub_1E121B0();
      break;
    case 70LL:
      result = sub_1E12200();
      break;
    case 71LL:
      result = sub_1E227F0();
      break;
    case 72LL:
      result = sub_1E26090();
      break;
    case 73LL:
      result = sub_1E22870();
      break;
    case 74LL:
      result = sub_1E1B800();
      break;
    case 75LL:
      result = sub_1DFE4F0((__int64)a2);
      break;
    case 76LL:
      result = sub_1E1B8C0();
      break;
    case 77LL:
      result = sub_1E22920();
      break;
    case 78LL:
      result = sub_1E22B00();
      break;
    case 79LL:
      result = sub_1E22B10();
      break;
    case 80LL:
      result = sub_1E22B20();
      break;
    case 81LL:
      result = sub_1E22B30();
      break;
    case 82LL:
      result = sub_1E22B40();
      break;
    case 83LL:
      result = sub_1E28FB0();
      break;
    case 84LL:
      result = sub_1E22B50();
      break;
    case 85LL:
      result = sub_1E22BE0();
      break;
    case 86LL:
      result = sub_1E1B8E0();
      break;
    case 87LL:
      result = sub_1E1BAA0();
      break;
    case 88LL:
      result = sub_1E26C00();
      break;
    case 89LL:
      result = sub_1E1BAB0();
      break;
    case 90LL:
      result = sub_1E1BAC0();
      break;
    case 91LL:
      result = sub_1E22C40();
      break;
    case 92LL:
      result = sub_1E290C0();
      break;
    case 93LL:
      result = sub_1E22D40();
      break;
    case 94LL:
      result = sub_1E1BC00();
      break;
    case 95LL:
      result = sub_1E1FA50();
      break;
    case 96LL:
      result = sub_1E1BC70();
      break;
    case 97LL:
      result = sub_1E22F40();
      break;
    case 98LL:
      result = sub_1E1BC80();
      break;
    case 99LL:
      result = sub_1E2C2E0();
      break;
    case 100LL:
      result = sub_1E1FB20();
      break;
    case 101LL:
      result = sub_1DFE500((__int64)a2);
      break;
    case 102LL:
      result = sub_1E1BFA0();
      break;
    case 103LL:
      result = sub_1E289B0();
      break;
    case 104LL:
      result = sub_1E1FC00();
      break;
    case 105LL:
      result = sub_1E1C030();
      break;
    case 106LL:
      result = sub_1E29560();
      break;
    case 107LL:
      result = sub_1E1C250();
      break;
    case 108LL:
      result = sub_1E0B850((__int64)a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_1E1C370();
      break;
    case 110LL:
      result = sub_1E1FD30();
      break;
    case 111LL:
      result = sub_1E29270();
      break;
    case 112LL:
      result = sub_1DFE510((__int64)a2);
      break;
    case 113LL:
      result = sub_1E1C540();
      break;
    case 114LL:
      result = sub_1E37890();
      break;
    case 115LL:
      result = sub_1E1C5A0();
      break;
    case 116LL:
      result = sub_1E1C760();
      break;
    case 117LL:
      result = sub_1E12B00();
      break;
    case 118LL:
      result = sub_1E200B0();
      break;
    case 119LL:
      result = sub_1E22FD0();
      break;
    case 120LL:
      result = sub_1E1C900();
      break;
    case 121LL:
      result = sub_1E1C9C0();
      break;
    case 122LL:
      JUMPOUT(0x2EAE0D);
    case 123LL:
      JUMPOUT(0x2EADFE);
    case 124LL:
      result = sub_1E0B720((__int64)a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_1E1CC10();
      break;
    case 126LL:
      result = sub_1E1CCD0();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
