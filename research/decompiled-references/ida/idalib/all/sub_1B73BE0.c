__int64 __fastcall sub_1B73BE0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __m128 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // cx
  __int64 result; // rax

  if ( !a2 )
    return 0;
  v7 = (*(_WORD *)a2 + 509) & 0x1FF;
  switch ( v7 )
  {
    case 0u:
      result = sub_1BB2BA0();
      break;
    case 1u:
      result = sub_1BC3050();
      break;
    case 2u:
      result = sub_1BBB620();
      break;
    case 3u:
      result = sub_1BBFC40();
      break;
    case 4u:
      result = sub_1AE7E80(a2);
      break;
    case 5u:
      result = sub_1AE7E90(a2);
      break;
    case 6u:
      result = sub_1AE7EA0(a2);
      break;
    case 7u:
      result = (__int64)sub_1B72390(a1, a2, a4, a5);
      break;
    case 8u:
      result = sub_1AE7220(a1, a2);
      break;
    case 9u:
      result = sub_1BB8680();
      break;
    case 0xAu:
      result = sub_1BA5C00();
      break;
    case 0xBu:
      result = sub_1BB4EB0();
      break;
    case 0xCu:
      result = sub_1BC0AD0();
      break;
    case 0xDu:
      result = sub_1BAD240();
      break;
    case 0xEu:
      result = sub_1BAD3A0();
      break;
    case 0xFu:
      result = sub_1AE72C0(a1, a2);
      break;
    case 0x10u:
      result = sub_1BA5CD0();
      break;
    case 0x11u:
      result = sub_1BAD410();
      break;
    case 0x12u:
      result = sub_1BAD470();
      break;
    case 0x13u:
      result = sub_1BAD680();
      break;
    case 0x14u:
      result = sub_1BBC8E0();
      break;
    case 0x15u:
      result = sub_1BBBC80();
      break;
    case 0x16u:
      result = sub_1AE7310((__int64)a1, a2);
      break;
    case 0x17u:
      result = sub_1AE7EB0(a2);
      break;
    case 0x18u:
      result = sub_1BB5020();
      break;
    case 0x19u:
      result = sub_1BAD6E0();
      break;
    case 0x1Au:
      result = (__int64)sub_1AE79F0(*a1, (unsigned __int16 *)a2, a3, v7, a7, a4, a5);
      break;
    case 0x1Bu:
      result = sub_1AE7EC0(a2);
      break;
    case 0x1Cu:
      result = sub_1AE7ED0(a2);
      break;
    case 0x1Du:
      result = sub_1BAD770();
      break;
    case 0x1Eu:
      result = sub_1BB52B0();
      break;
    case 0x1Fu:
      result = sub_1BAD950();
      break;
    case 0x20u:
      result = sub_1BADA50();
      break;
    case 0x21u:
      result = sub_1BADB60();
      break;
    case 0x22u:
      result = sub_1BB4F20();
      break;
    case 0x23u:
      result = sub_1BADB70();
      break;
    case 0x24u:
      result = sub_1BAE000();
      break;
    case 0x25u:
      result = sub_1AE7EE0(a2);
      break;
    case 0x26u:
      result = sub_1AE7EF0(a2);
      break;
    case 0x27u:
      result = sub_1BA5D70();
      break;
    case 0x28u:
      result = sub_1BB5760();
      break;
    case 0x29u:
      result = sub_1BAE060();
      break;
    case 0x2Au:
      JUMPOUT(0x2EA6F4);
    case 0x2Bu:
      if ( (*(_WORD *)sub_BFBAE0(*(_QWORD *)(a2 + 16)) & 0x1FF) == 0x62 && *(_QWORD *)(a2 + 24) == a1[4] )
      {
        result = sub_1B22DF0(*a1, a1[4], a2, 0, a4, a5);
        a1[5] = result;
      }
      else
      {
        result = sub_1BBCD00(a1, a2);
      }
      break;
    case 0x2Cu:
      result = sub_1BAE1F0();
      break;
    case 0x2Du:
      result = sub_1BAE2B0();
      break;
    case 0x2Eu:
      result = sub_1BAE2D0();
      break;
    case 0x2Fu:
      result = sub_1BBD670();
      break;
    case 0x30u:
      result = (__int64)sub_1B72970(a1, a2, *(double *)a4.m128_u64, a5);
      break;
    case 0x31u:
      result = sub_1AE7F00(a2);
      break;
    case 0x32u:
      result = sub_1BA5E30();
      break;
    case 0x33u:
      result = sub_1BB3080();
      break;
    case 0x34u:
      result = sub_1AE7F10(a2);
      break;
    case 0x35u:
      result = sub_1BAE370();
      break;
    case 0x36u:
      result = sub_1BB5C40();
      break;
    case 0x37u:
      result = sub_1AE7F20(a2);
      break;
    case 0x38u:
      result = sub_1AE7F30(a2);
      break;
    case 0x39u:
      result = sub_1BAE380();
      break;
    case 0x3Au:
      result = sub_1BAE390();
      break;
    case 0x3Bu:
      result = sub_1AE7F40(a2);
      break;
    case 0x3Cu:
      result = sub_1AE7F50(a2);
      break;
    case 0x3Du:
      result = sub_1BAE3A0();
      break;
    case 0x3Eu:
      result = sub_1BAE4C0();
      break;
    case 0x3Fu:
      result = sub_1AE7F60(a2);
      break;
    case 0x40u:
      JUMPOUT(0x2EA6FE);
    case 0x41u:
      result = sub_1BAE560();
      break;
    case 0x42u:
      result = sub_1BBB610();
      break;
    case 0x43u:
      result = sub_1BBBC90();
      break;
    case 0x44u:
      result = sub_1BBC490();
      break;
    case 0x45u:
      result = sub_1BA5B10();
      break;
    case 0x46u:
      result = sub_1BA5B60();
      break;
    case 0x47u:
      result = sub_1BB5F70();
      break;
    case 0x48u:
      result = sub_1BB9710();
      break;
    case 0x49u:
      result = sub_1BB5FF0();
      break;
    case 0x4Au:
      result = sub_1BAED10();
      break;
    case 0x4Bu:
      result = sub_1AE7F70(a2);
      break;
    case 0x4Cu:
      result = sub_1BAEDD0();
      break;
    case 0x4Du:
      result = sub_1BB60A0();
      break;
    case 0x4Eu:
      result = sub_1BB6280();
      break;
    case 0x4Fu:
      result = sub_1BB6290();
      break;
    case 0x50u:
      result = sub_1BB62A0();
      break;
    case 0x51u:
      result = sub_1BB62B0();
      break;
    case 0x52u:
      result = sub_1BB62C0();
      break;
    case 0x53u:
      result = sub_1BBAB90();
      break;
    case 0x54u:
      result = sub_1BB62D0();
      break;
    case 0x55u:
      result = sub_1BB6360();
      break;
    case 0x56u:
      result = sub_1BAEDF0();
      break;
    case 0x57u:
      result = sub_1BAEFB0();
      break;
    case 0x58u:
      result = sub_1BBBCF0();
      break;
    case 0x59u:
      result = sub_1BAEFC0();
      break;
    case 0x5Au:
      result = sub_1BAEFD0();
      break;
    case 0x5Bu:
      result = sub_1BB63C0();
      break;
    case 0x5Cu:
      result = sub_1BBACA0();
      break;
    case 0x5Du:
      result = sub_1BB64C0();
      break;
    case 0x5Eu:
      result = sub_1BAF110();
      break;
    case 0x5Fu:
      result = sub_1BB3140();
      break;
    case 0x60u:
      result = sub_1BAF180();
      break;
    case 0x61u:
      result = sub_1BB4F90();
      break;
    case 0x62u:
      result = sub_1BAF190();
      break;
    case 0x63u:
      result = sub_1BBDD20();
      break;
    case 0x64u:
      result = sub_1BB3340();
      break;
    case 0x65u:
      result = sub_1AE7F80(a2);
      break;
    case 0x66u:
      result = sub_1BAF470();
      break;
    case 0x67u:
      result = sub_1BBA680();
      break;
    case 0x68u:
      result = sub_1BB3210();
      break;
    case 0x69u:
      result = sub_1BAF500();
      break;
    case 0x6Au:
      result = sub_1BBD7D0();
      break;
    case 0x6Bu:
      result = sub_1BAF720();
      break;
    case 0x6Cu:
      result = sub_1B03FA0((__int64)a1, a2);
      break;
    case 0x6Du:
      result = sub_1BAF840();
      break;
    case 0x6Eu:
      result = sub_1BB3420();
      break;
    case 0x6Fu:
      result = sub_1BBA3E0();
      break;
    case 0x70u:
      result = sub_1AE7F90(a2);
      break;
    case 0x71u:
      result = sub_1BAF8F0();
      break;
    case 0x72u:
      result = sub_1BC1160();
      break;
    case 0x73u:
      result = sub_1BAF950();
      break;
    case 0x74u:
      result = sub_1BAFB10();
      break;
    case 0x75u:
      result = sub_1BA5F20();
      break;
    case 0x76u:
      result = sub_1BB37A0();
      break;
    case 0x77u:
      result = sub_1BB6650();
      break;
    case 0x78u:
      result = sub_1BAFBD0();
      break;
    case 0x79u:
      result = sub_1BAFC90();
      break;
    case 0x7Au:
      JUMPOUT(0x2EA703);
    case 0x7Bu:
      JUMPOUT(0x2EA6F9);
    case 0x7Cu:
      result = sub_1B04020(a1, a2);
      break;
    case 0x7Du:
      result = sub_1BAFEC0();
      break;
    case 0x7Eu:
      result = sub_1BAFF80();
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
