__int64 __fastcall sub_1D11200(
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
      result = sub_1D1ABE0();
      break;
    case 1LL:
      result = sub_1D2F1E0();
      break;
    case 2LL:
      result = sub_1D27EE0();
      break;
    case 3LL:
      result = sub_1D2C2D0();
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
      result = sub_1D30AE0();
      break;
    case 8LL:
      result = sub_1CAF3A0(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1D24EF0();
      break;
    case 10LL:
      result = sub_1D11E80();
      break;
    case 11LL:
      result = sub_1D21700();
      break;
    case 12LL:
      result = sub_1D2D1A0();
      break;
    case 13LL:
      result = sub_1D15E20();
      break;
    case 14LL:
      result = sub_1D15F80();
      break;
    case 15LL:
      result = sub_1CAF570(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1D11F50();
      break;
    case 17LL:
      result = sub_1D15FF0();
      break;
    case 18LL:
      result = sub_1D16050();
      break;
    case 19LL:
      result = sub_1D16260();
      break;
    case 20LL:
      result = sub_1D29010();
      break;
    case 21LL:
      result = sub_1D28670();
      break;
    case 22LL:
      result = sub_1CAF5D0((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1CAFD30((__int64)a2);
      break;
    case 24LL:
      result = sub_1D21870();
      break;
    case 25LL:
      result = sub_1D162C0();
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
      result = sub_1D16350();
      break;
    case 30LL:
      result = sub_1D21B00();
      break;
    case 31LL:
      result = sub_1D16530();
      break;
    case 32LL:
      result = sub_1D16630();
      break;
    case 33LL:
      result = sub_1D16740();
      break;
    case 34LL:
      result = sub_1D21770();
      break;
    case 35LL:
      result = sub_1D16750();
      break;
    case 36LL:
      result = sub_1D16BE0();
      break;
    case 37LL:
      result = sub_1CAFD60((__int64)a2);
      break;
    case 38LL:
      result = sub_1CAFD70((__int64)a2);
      break;
    case 39LL:
      result = sub_1D11FF0();
      break;
    case 40LL:
      result = sub_1D21FB0();
      break;
    case 41LL:
      result = sub_1D16C40();
      break;
    case 42LL:
      sub_2EAAE2();
    case 43LL:
      result = sub_1D29470();
      break;
    case 44LL:
      result = sub_1D16DD0();
      break;
    case 45LL:
      result = sub_1D16E90();
      break;
    case 46LL:
      result = sub_1D16EB0();
      break;
    case 47LL:
      result = sub_1D29D30();
      break;
    case 48LL:
      result = (__int64)sub_1D0FC40(a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 49LL:
      result = sub_1CAFD80((__int64)a2);
      break;
    case 50LL:
      result = sub_1D120B0();
      break;
    case 51LL:
      result = sub_1D1FD20();
      break;
    case 52LL:
      result = sub_1CAFD90((__int64)a2);
      break;
    case 53LL:
      result = sub_1D16F50();
      break;
    case 54LL:
      result = sub_1D22490();
      break;
    case 55LL:
      result = sub_1CAFDA0((__int64)a2);
      break;
    case 56LL:
      result = sub_1CAFDB0((__int64)a2);
      break;
    case 57LL:
      result = sub_1D16F60();
      break;
    case 58LL:
      result = sub_1D16F70();
      break;
    case 59LL:
      result = sub_1CAFDC0((__int64)a2);
      break;
    case 60LL:
      result = sub_1CAFDD0((__int64)a2);
      break;
    case 61LL:
      result = sub_1D16F80();
      break;
    case 62LL:
      result = sub_1D170A0();
      break;
    case 63LL:
      result = sub_1CAFDE0((__int64)a2);
      break;
    case 64LL:
      sub_2EAAE2();
    case 65LL:
      result = sub_1D1F0C0();
      break;
    case 66LL:
      result = sub_1D27ED0();
      break;
    case 67LL:
      result = sub_1D28680();
      break;
    case 68LL:
      result = sub_1D28BE0();
      break;
    case 69LL:
      result = sub_1D11D90();
      break;
    case 70LL:
      result = sub_1D11DE0();
      break;
    case 71LL:
      result = sub_1D227C0();
      break;
    case 72LL:
      result = sub_1D25F70();
      break;
    case 73LL:
      result = sub_1D22840();
      break;
    case 74LL:
      result = sub_1D17140();
      break;
    case 75LL:
      result = sub_1CAFDF0((__int64)a2);
      break;
    case 76LL:
      result = sub_1D17200();
      break;
    case 77LL:
      result = sub_1D228F0();
      break;
    case 78LL:
      result = sub_1D22AD0();
      break;
    case 79LL:
      result = sub_1D22AE0();
      break;
    case 80LL:
      result = sub_1D22AF0();
      break;
    case 81LL:
      result = sub_1D22B00();
      break;
    case 82LL:
      result = sub_1D22B10();
      break;
    case 83LL:
      result = sub_1D27160();
      break;
    case 84LL:
      result = sub_1D22B20();
      break;
    case 85LL:
      result = sub_1D22BB0();
      break;
    case 86LL:
      result = sub_1D17220();
      break;
    case 87LL:
      result = sub_1D173E0();
      break;
    case 88LL:
      result = sub_1D286E0();
      break;
    case 89LL:
      result = sub_1D173F0();
      break;
    case 90LL:
      result = sub_1D17400();
      break;
    case 91LL:
      result = sub_1D22C10();
      break;
    case 92LL:
      result = sub_1D27270();
      break;
    case 93LL:
      result = sub_1D22D10();
      break;
    case 94LL:
      result = sub_1D17540();
      break;
    case 95LL:
      result = sub_1D1FDE0();
      break;
    case 96LL:
      result = sub_1D175B0();
      break;
    case 97LL:
      result = sub_1D217E0();
      break;
    case 98LL:
      result = sub_1D1F870();
      break;
    case 99LL:
      result = sub_1D2A3B0();
      break;
    case 100LL:
      result = sub_1D1FFE0();
      break;
    case 101LL:
      result = sub_1CAFE00((__int64)a2);
      break;
    case 102LL:
      result = sub_1D175C0();
      break;
    case 103LL:
      result = sub_1D26C20();
      break;
    case 104LL:
      result = sub_1D1FEB0();
      break;
    case 105LL:
      result = sub_1D17650();
      break;
    case 106LL:
      result = sub_1D29E90();
      break;
    case 107LL:
      result = sub_1D1FB50();
      break;
    case 108LL:
      result = sub_1D1BCA0();
      break;
    case 109LL:
      result = sub_1D1FC70();
      break;
    case 110LL:
      result = sub_1D200C0();
      break;
    case 111LL:
      result = sub_1D27420();
      break;
    case 112LL:
      result = sub_1CAFE10((__int64)a2);
      break;
    case 113LL:
      result = sub_1D17870();
      break;
    case 114LL:
      result = sub_1D360A0();
      break;
    case 115LL:
      result = sub_1D178D0();
      break;
    case 116LL:
      result = sub_1D17A90();
      break;
    case 117LL:
      result = sub_1D121A0();
      break;
    case 118LL:
      result = sub_1D20440();
      break;
    case 119LL:
      result = sub_1D22EA0();
      break;
    case 120LL:
      result = sub_1D17C30();
      break;
    case 121LL:
      result = sub_1D17CF0();
      break;
    case 122LL:
      sub_2EAAE2();
    case 123LL:
      sub_2EAAE2();
    case 124LL:
      result = sub_1D1BD20();
      break;
    case 125LL:
      result = sub_1D17F40();
      break;
    case 126LL:
      result = sub_1D18000();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
