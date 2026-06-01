__int64 __fastcall sub_1B7CAD0(
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
      result = sub_1B90F70();
      break;
    case 1LL:
      result = sub_1BA23F0();
      break;
    case 2LL:
      result = sub_1B9B670();
      break;
    case 3LL:
      result = sub_1B9F3D0();
      break;
    case 4LL:
      result = sub_1AE7E80((__int64)a2);
      break;
    case 5LL:
      result = sub_1AE7E90((__int64)a2);
      break;
    case 6LL:
      result = sub_1AE7EA0((__int64)a2);
      break;
    case 7LL:
      result = sub_1B7B2F0(a1, (__int64)a2, a3, a4);
      break;
    case 8LL:
      result = sub_1AE71F0(a1, (__int64)a2);
      break;
    case 9LL:
      result = sub_1B98A50();
      break;
    case 10LL:
      result = sub_1B7DBA0();
      break;
    case 11LL:
      result = sub_1B95830();
      break;
    case 12LL:
      result = sub_1BA0230();
      break;
    case 13LL:
      result = sub_1B850B0();
      break;
    case 14LL:
      result = sub_1B851D0();
      break;
    case 15LL:
      result = sub_1AE7290(a1, (__int64)a2);
      break;
    case 16LL:
      result = sub_1B7DC60();
      break;
    case 17LL:
      result = sub_1B85240();
      break;
    case 18LL:
      result = sub_1B85290();
      break;
    case 19LL:
      result = sub_1B854A0();
      break;
    case 20LL:
      result = sub_1B9C7D0();
      break;
    case 21LL:
      result = sub_1B9BC80();
      break;
    case 22LL:
      result = sub_1AE72F0((__int64)a1, (__int64)a2);
      break;
    case 23LL:
      result = sub_1AE7EB0((__int64)a2);
      break;
    case 24LL:
      result = sub_1B95960();
      break;
    case 25LL:
      result = sub_1B854F0();
      break;
    case 26LL:
      result = (__int64)sub_1AE79F0(*a1, a2, (unsigned __int16)v8, a6, a7, a3, a4);
      break;
    case 27LL:
      result = sub_1AE7EC0((__int64)a2);
      break;
    case 28LL:
      result = sub_1AE7ED0((__int64)a2);
      break;
    case 29LL:
      result = sub_1B85560();
      break;
    case 30LL:
      result = sub_1B95B80();
      break;
    case 31LL:
      result = sub_1B85710();
      break;
    case 32LL:
      result = sub_1B85810();
      break;
    case 33LL:
      result = sub_1B85910();
      break;
    case 34LL:
      result = sub_1B95890();
      break;
    case 35LL:
      result = sub_1B85920();
      break;
    case 36LL:
      result = sub_1B85D20();
      break;
    case 37LL:
      result = sub_1AE7EE0((__int64)a2);
      break;
    case 38LL:
      result = sub_1AE7EF0((__int64)a2);
      break;
    case 39LL:
      result = sub_1B7DD00();
      break;
    case 40LL:
      result = sub_1B95FA0();
      break;
    case 41LL:
      result = sub_1B85D70();
      break;
    case 42LL:
      JUMPOUT(0x2EA731);
    case 43LL:
      result = sub_1B9CBF0();
      break;
    case 44LL:
      result = sub_1B85F00();
      break;
    case 45LL:
      result = sub_1B85F90();
      break;
    case 46LL:
      result = sub_1B85FB0();
      break;
    case 47LL:
      result = sub_1B9D3C0();
      break;
    case 48LL:
      result = (__int64)sub_1B7B860(a1, (__int64)a2, *(double *)a3.m128_u64, a4);
      break;
    case 49LL:
      result = sub_1AE7F00((__int64)a2);
      break;
    case 50LL:
      result = sub_1B7DDA0();
      break;
    case 51LL:
      result = sub_1B91420();
      break;
    case 52LL:
      result = sub_1AE7F10((__int64)a2);
      break;
    case 53LL:
      result = sub_1B86030();
      break;
    case 54LL:
      result = sub_1B96360();
      break;
    case 55LL:
      result = sub_1AE7F20((__int64)a2);
      break;
    case 56LL:
      result = sub_1AE7F30((__int64)a2);
      break;
    case 57LL:
      result = sub_1B86040();
      break;
    case 58LL:
      result = sub_1B86050();
      break;
    case 59LL:
      result = sub_1AE7F40((__int64)a2);
      break;
    case 60LL:
      result = sub_1AE7F50((__int64)a2);
      break;
    case 61LL:
      result = sub_1B86060();
      break;
    case 62LL:
      result = sub_1B86170();
      break;
    case 63LL:
      result = sub_1AE7F60((__int64)a2);
      break;
    case 64LL:
      JUMPOUT(0x2EA736);
    case 65LL:
      result = sub_1B86200();
      break;
    case 66LL:
      result = sub_1B9B660();
      break;
    case 67LL:
      result = sub_1B9BC90();
      break;
    case 68LL:
      result = sub_1B9C450();
      break;
    case 69LL:
      result = sub_1B7DAB0();
      break;
    case 70LL:
      result = sub_1B7DB00();
      break;
    case 71LL:
      result = sub_1B96690();
      break;
    case 72LL:
      result = sub_1B99AE0();
      break;
    case 73LL:
      result = sub_1B966F0();
      break;
    case 74LL:
      result = sub_1B86950();
      break;
    case 75LL:
      result = sub_1AE7F70((__int64)a2);
      break;
    case 76LL:
      result = sub_1B869E0();
      break;
    case 77LL:
      result = sub_1B96770();
      break;
    case 78LL:
      result = sub_1B96910();
      break;
    case 79LL:
      result = sub_1B96920();
      break;
    case 80LL:
      result = sub_1B96930();
      break;
    case 81LL:
      result = sub_1B96940();
      break;
    case 82LL:
      result = sub_1B96950();
      break;
    case 83LL:
      result = sub_1B9AAE0();
      break;
    case 84LL:
      result = sub_1B96960();
      break;
    case 85LL:
      result = sub_1B969C0();
      break;
    case 86LL:
      result = sub_1B86A00();
      break;
    case 87LL:
      result = sub_1B86B80();
      break;
    case 88LL:
      result = sub_1B9BCF0();
      break;
    case 89LL:
      result = sub_1B86B90();
      break;
    case 90LL:
      result = sub_1B86BA0();
      break;
    case 91LL:
      result = sub_1B96A20();
      break;
    case 92LL:
      result = sub_1B9ABD0();
      break;
    case 93LL:
      result = sub_1B96AE0();
      break;
    case 94LL:
      result = sub_1B86CB0();
      break;
    case 95LL:
      result = sub_1B914E0();
      break;
    case 96LL:
      result = sub_1B86D10();
      break;
    case 97LL:
      result = sub_1B958E0();
      break;
    case 98LL:
      result = sub_1B86D20();
      break;
    case 99LL:
      result = sub_1B9D9C0();
      break;
    case 100LL:
      result = sub_1B91680();
      break;
    case 101LL:
      result = sub_1AE7F80((__int64)a2);
      break;
    case 102LL:
      result = sub_1B86F00();
      break;
    case 103LL:
      result = sub_1B9A760();
      break;
    case 104LL:
      result = sub_1B91590();
      break;
    case 105LL:
      result = sub_1B86F80();
      break;
    case 106LL:
      result = sub_1B9D520();
      break;
    case 107LL:
      result = sub_1B87180();
      break;
    case 108LL:
      result = sub_1B043B0(a1, (unsigned __int64)a2);
      break;
    case 109LL:
      result = sub_1B871F0();
      break;
    case 110LL:
      result = sub_1B91740();
      break;
    case 111LL:
      result = sub_1B9AD40();
      break;
    case 112LL:
      result = sub_1AE7F90((__int64)a2);
      break;
    case 113LL:
      result = sub_1B87270();
      break;
    case 114LL:
      result = sub_1BA08D0();
      break;
    case 115LL:
      result = sub_1B872D0();
      break;
    case 116LL:
      result = sub_1B87460();
      break;
    case 117LL:
      result = sub_1B7DE90();
      break;
    case 118LL:
      result = sub_1B91A60();
      break;
    case 119LL:
      result = sub_1B96C20();
      break;
    case 120LL:
      result = sub_1B87520();
      break;
    case 121LL:
      result = sub_1B875C0();
      break;
    case 122LL:
      JUMPOUT(0x2EA73B);
    case 123LL:
      JUMPOUT(0x2EA72C);
    case 124LL:
      result = sub_1B04400(a1, (__int64)a2);
      break;
    case 125LL:
      result = sub_1B87750();
      break;
    case 126LL:
      result = sub_1B877E0();
      break;
    default:
      result = (__int64)a2;
      break;
  }
  return result;
}
