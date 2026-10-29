__int64 __fastcall sub_1D434A0(
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
      result = sub_1D515A0();
      break;
    case 1LL:
      result = sub_1D641D0();
      break;
    case 2LL:
      result = sub_1D580C0();
      break;
    case 3LL:
      result = sub_1D605F0();
      break;
    case 4LL:
      result = sub_1D370F0((__int64)a2);
      break;
    case 5LL:
      result = sub_1D37100((__int64)a2);
      break;
    case 6LL:
      result = sub_1D37110((__int64)a2);
      break;
    case 7LL:
      result = (__int64)sub_1D429F0(a1, (__int64)a2, a3, a4);
      break;
    case 8LL:
      result = sub_1D36CC0(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1D56AF0();
      break;
    case 10LL:
      result = sub_1D44550();
      break;
    case 11LL:
      result = sub_1D539C0();
      break;
    case 12LL:
      result = sub_1D63A30();
      break;
    case 13LL:
      result = sub_1D4B990();
      break;
    case 14LL:
      result = sub_1D4BAF0();
      break;
    case 15LL:
      result = sub_1D36D30(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1D449B0();
      break;
    case 17LL:
      result = sub_1D4BB60();
      break;
    case 18LL:
      result = sub_1D4BBC0();
      break;
    case 19LL:
      result = sub_1D4BDD0();
      break;
    case 20LL:
      result = sub_1D59060();
      break;
    case 21LL:
      result = sub_1D58D50();
      break;
    case 22LL:
      result = sub_1D36D60((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1D37120((__int64)a2);
      break;
    case 24LL:
      result = sub_1D53A30();
      break;
    case 25LL:
      result = sub_1D4BE30();
      break;
    case 26LL:
      result = (__int64)sub_1D36F90(*a1, a2, (unsigned __int16)v8, a6, a7, a3, a4);
      break;
    case 27LL:
      result = sub_1D37130((__int64)a2);
      break;
    case 28LL:
      result = sub_1D37140((__int64)a2);
      break;
    case 29LL:
      result = sub_1D4BEC0();
      break;
    case 30LL:
      result = sub_1D53CC0();
      break;
    case 31LL:
      result = sub_1D4C0A0();
      break;
    case 32LL:
      result = sub_1D4C1A0();
      break;
    case 33LL:
      result = sub_1D4C480();
      break;
    case 34LL:
      result = sub_1D54170();
      break;
    case 35LL:
      result = sub_1D4C490();
      break;
    case 36LL:
      result = sub_1D4C920();
      break;
    case 37LL:
      result = sub_1D37150((__int64)a2);
      break;
    case 38LL:
      result = sub_1D37160((__int64)a2);
      break;
    case 39LL:
      result = sub_1D44A50();
      break;
    case 40LL:
      result = sub_1D541E0();
      break;
    case 41LL:
      result = sub_1D4C980();
      break;
    case 42LL:
      JUMPOUT(0x2EAC0C);
    case 43LL:
      result = sub_1D59570();
      break;
    case 44LL:
      result = sub_1D4CB10();
      break;
    case 45LL:
      result = sub_1D4CBD0();
      break;
    case 46LL:
      result = sub_1D4CBF0();
      break;
    case 47LL:
      result = sub_1D59E60();
      break;
    case 48LL:
      result = (__int64)a2;
      break;
    case 49LL:
      result = sub_1D37170((__int64)a2);
      break;
    case 50LL:
      result = sub_1D44B10();
      break;
    case 51LL:
      result = sub_1D51A60();
      break;
    case 52LL:
      result = sub_1D37180((__int64)a2);
      break;
    case 53LL:
      result = sub_1D4CC90();
      break;
    case 54LL:
      result = sub_1D54810();
      break;
    case 55LL:
      result = sub_1D37190((__int64)a2);
      break;
    case 56LL:
      result = sub_1D371A0((__int64)a2);
      break;
    case 57LL:
      result = sub_1D4CCA0();
      break;
    case 58LL:
      result = sub_1D4CCB0();
      break;
    case 59LL:
      result = sub_1D371B0((__int64)a2);
      break;
    case 60LL:
      result = sub_1D371C0((__int64)a2);
      break;
    case 61LL:
      result = sub_1D4CCC0();
      break;
    case 62LL:
      result = sub_1D4CDE0();
      break;
    case 63LL:
      result = sub_1D371D0((__int64)a2);
      break;
    case 64LL:
      JUMPOUT(0x2EAC02);
    case 65LL:
      result = sub_1D4CE80();
      break;
    case 66LL:
      result = sub_1D580B0();
      break;
    case 67LL:
      result = sub_1D58D60();
      break;
    case 68LL:
      result = sub_1D59FC0();
      break;
    case 69LL:
      result = sub_1D44460();
      break;
    case 70LL:
      result = sub_1D444B0();
      break;
    case 71LL:
      result = sub_1D54B40();
      break;
    case 72LL:
      result = sub_1D57CE0();
      break;
    case 73LL:
      result = sub_1D54BC0();
      break;
    case 74LL:
      result = sub_1D4D630();
      break;
    case 75LL:
      result = sub_1D371E0((__int64)a2);
      break;
    case 76LL:
      result = sub_1D4D6F0();
      break;
    case 77LL:
      result = sub_1D54C70();
      break;
    case 78LL:
      result = sub_1D54E50();
      break;
    case 79LL:
      result = sub_1D54E60();
      break;
    case 80LL:
      result = sub_1D54E70();
      break;
    case 81LL:
      result = sub_1D54E80();
      break;
    case 82LL:
      result = sub_1D54E90();
      break;
    case 83LL:
      result = sub_1D5AF80();
      break;
    case 84LL:
      result = sub_1D54EA0();
      break;
    case 85LL:
      result = sub_1D54F30();
      break;
    case 86LL:
      result = sub_1D4D710();
      break;
    case 87LL:
      result = sub_1D4D8D0();
      break;
    case 88LL:
      result = sub_1D58850();
      break;
    case 89LL:
      result = sub_1D4D8E0();
      break;
    case 90LL:
      result = sub_1D4D8F0();
      break;
    case 91LL:
      result = sub_1D54F90();
      break;
    case 92LL:
      result = sub_1D5B090();
      break;
    case 93LL:
      result = sub_1D55090();
      break;
    case 94LL:
      result = sub_1D4DA30();
      break;
    case 95LL:
      result = sub_1D51B20();
      break;
    case 96LL:
      result = sub_1D4DAA0();
      break;
    case 97LL:
      result = sub_1D55320();
      break;
    case 98LL:
      result = sub_1D4DAB0();
      break;
    case 99LL:
      result = sub_1D5FE80();
      break;
    case 100LL:
      result = sub_1D51BF0();
      break;
    case 101LL:
      result = sub_1D371F0((__int64)a2);
      break;
    case 102LL:
      result = sub_1D4DDD0();
      break;
    case 103LL:
      result = sub_1D5A7A0();
      break;
    case 104LL:
      result = sub_1D51CD0();
      break;
    case 105LL:
      result = sub_1D4DE60();
      break;
    case 106LL:
      result = sub_1D5B240();
      break;
    case 107LL:
      result = sub_1D4E080();
      break;
    case 108LL:
      result = sub_1D414E0((__int64)a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_1D4E1A0();
      break;
    case 110LL:
      result = sub_1D51E00();
      break;
    case 111LL:
      result = sub_1D5ACB0();
      break;
    case 112LL:
      result = sub_1D37200((__int64)a2);
      break;
    case 113LL:
      result = sub_1D4E250();
      break;
    case 114LL:
      result = sub_1D42FD0(a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 115LL:
      result = sub_1D4E2B0();
      break;
    case 116LL:
      result = sub_1D4E470();
      break;
    case 117LL:
      result = sub_1D44C00();
      break;
    case 118LL:
      result = sub_1D52180();
      break;
    case 119LL:
      result = sub_1D553B0();
      break;
    case 120LL:
      result = sub_1D4E530();
      break;
    case 121LL:
      result = sub_1D4E5F0();
      break;
    case 122LL:
      JUMPOUT(0x2EAC11);
    case 123LL:
      JUMPOUT(0x2EAC07);
    case 124LL:
      result = sub_1D41560(a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_1D4E840();
      break;
    case 126LL:
      result = sub_1D4E900();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
