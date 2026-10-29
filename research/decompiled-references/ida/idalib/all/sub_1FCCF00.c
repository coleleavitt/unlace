void __fastcall sub_1FCCF00(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = *(_WORD *)a2 & 0x1FF;
  if ( v3 <= 0x75u )
  {
    if ( v3 == 4 )
    {
LABEL_6:
      sub_1FC85B0(a1, a2);
      return;
    }
    goto LABEL_4;
  }
  if ( v3 > 0x77u )
  {
LABEL_4:
    while ( 2 )
    {
      switch ( v3 )
      {
        case 0u:
          sub_1FC7D20(a1, a2);
          break;
        case 1u:
          sub_1FC7A50(a1, a2);
          break;
        case 2u:
          sub_1FC7710(a1, a2);
          break;
        case 3u:
          sub_1FC9300(a1, a2);
          break;
        case 4u:
          goto LABEL_6;
        case 5u:
          sub_1FC8690(a1, a2);
          break;
        case 6u:
          sub_1FCC4C0(a1, a2, a3);
          break;
        case 7u:
          sub_1FCC6C0(a1, a2);
          break;
        case 8u:
          sub_1FCA6F0(a1, a2);
          break;
        case 9u:
          sub_1FC5010(a1, a2);
          break;
        case 0xAu:
          sub_1FC93F0(a1, a2);
          break;
        case 0xBu:
          sub_1FC51D0(a1, a2);
          break;
        case 0xCu:
          sub_1FCC5D0(a1, a2);
          break;
        case 0xDu:
          sub_1FC6500(a1, a2);
          break;
        case 0xEu:
          sub_1FC2890(a1, a2);
          break;
        case 0xFu:
          sub_1FCB500(a1, a2);
          break;
        case 0x10u:
          sub_1FC6130(a1, a2);
          break;
        case 0x11u:
          sub_1FC9590(a1, a2);
          break;
        case 0x12u:
          sub_1FC84A0(a1, a2);
          break;
        case 0x13u:
          sub_1FC5AC0(a1, a2);
          break;
        case 0x14u:
          sub_1FC8540(a1, a2);
          break;
        case 0x15u:
          sub_1FCA5E0(a1, a2);
          break;
        case 0x16u:
          sub_1FCA590(a1, a2);
          break;
        case 0x17u:
          sub_1FCB200(a1, a2);
          break;
        case 0x18u:
          sub_1FCC060(a1, a2);
          break;
        case 0x19u:
          sub_1FC2850(a1, a2);
          break;
        case 0x1Au:
          sub_1FCA860(a1, a2);
          break;
        case 0x1Bu:
          sub_1FC5BA0(a1, a2);
          break;
        case 0x1Cu:
          sub_1FC97A0(a1, a2);
          break;
        case 0x1Du:
          sub_1FC9670(a1, a2);
          break;
        case 0x1Eu:
          sub_1FC2B80(a1, a2);
          break;
        case 0x1Fu:
          sub_1FC2BD0(a1, a2);
          break;
        case 0x20u:
          sub_1FCB370(a1, a2);
          break;
        case 0x21u:
          sub_1FC9810(a1, a2);
          break;
        case 0x22u:
          sub_1FC9710(a1, a2);
          break;
        case 0x23u:
          sub_1FC8D40(a1, a2);
          break;
        case 0x24u:
          sub_1FC8DA0(a1, a2);
          break;
        case 0x25u:
          sub_1FC2B30(a1, a2);
          break;
        case 0x26u:
          sub_1FC6960(a1, a2);
          break;
        case 0x27u:
          sub_1FC96B0(a1, (__int64 *)a2);
          break;
        case 0x28u:
          sub_1FC5250(a1, a2);
          break;
        case 0x29u:
          sub_1FC2D90(a1, (const __m128i *)a2);
          break;
        case 0x2Au:
          sub_1FC6880(a1, a2);
          break;
        case 0x2Bu:
          sub_1FC5DF0(a1, a2);
          break;
        case 0x2Cu:
          sub_1FC88B0(a1, a2);
          break;
        case 0x2Du:
          sub_1FC2690(a1, a2);
          *(_DWORD *)(a1 + 224) = 198;
          break;
        case 0x2Eu:
          sub_1FCAAE0(a1, a2);
          break;
        case 0x2Fu:
          sub_1FC87A0(a1, a2);
          break;
        case 0x30u:
          sub_1FCB2D0(a1, a2);
          break;
        case 0x31u:
          sub_1FCA980(a1, a2);
          break;
        case 0x32u:
          sub_1FCA910(a1, a2);
          break;
        case 0x33u:
          sub_1FC6B00(a1, a2);
          break;
        case 0x34u:
          sub_1FCBCF0(a1, a2);
          break;
        case 0x35u:
          sub_1FCADC0(a1, a2);
          break;
        case 0x36u:
          sub_1FC2690(a1, a2);
          *(_DWORD *)(a1 + 224) = 201;
          break;
        case 0x37u:
          sub_1FC2690(a1, a2);
          sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
          *(_DWORD *)(a1 + 224) = 176;
          break;
        case 0x38u:
          sub_1FCAA80(a1, a2);
          break;
        case 0x39u:
          sub_1FC65F0(a1, a2);
          break;
        case 0x3Au:
          sub_1FC2AB0(a1, a2);
          break;
        case 0x3Bu:
          sub_1FC53B0(a1, a2);
          break;
        case 0x3Cu:
          sub_1FCBBA0(a1, a2);
          break;
        case 0x3Du:
          sub_1FCC400(a1, a2);
          break;
        case 0x3Eu:
          sub_1FC4E40(a1, a2);
          break;
        case 0x3Fu:
          sub_1FCBE20(a1, a2);
          break;
        case 0x40u:
          sub_1FC92B0(a1, a2);
          break;
        case 0x41u:
          sub_1FCA4C0(a1, a2, a3);
          break;
        case 0x42u:
          sub_1FC9380(a1, a2);
          break;
        case 0x43u:
          sub_1FC28F0(a1, a2);
          break;
        case 0x44u:
          sub_1FC62A0(a1, a2);
          break;
        case 0x45u:
          sub_1FC2ED0(a1, a2);
          break;
        case 0x46u:
          sub_1FC2730(a1, a2);
          break;
        case 0x47u:
          sub_1FC4B20(a1, a2);
          break;
        case 0x48u:
          sub_1FC80E0(a1, a2);
          *(_DWORD *)(a1 + 224) = 389;
          break;
        case 0x49u:
          sub_1FC8210(a1, (_DWORD *)a2);
          break;
        case 0x4Au:
          sub_1FC94E0(a1, a2);
          break;
        case 0x4Bu:
          sub_1FC7660(a1, a2);
          break;
        case 0x4Cu:
          sub_1FC9240(a1, a2);
          break;
        case 0x4Du:
          sub_1FC9450(a1, a2);
          break;
        case 0x4Eu:
          sub_1FC5160(a1, a2);
          break;
        case 0x4Fu:
          sub_1FC90E0((_DWORD *)a1, a2);
          break;
        case 0x50u:
          sub_1FC9080(a1, a2);
          break;
        case 0x51u:
          sub_1FC8FA0(a1, a2);
          *(_DWORD *)(a1 + 224) = 248;
          break;
        case 0x52u:
          sub_1FC8FA0(a1, a2);
          *(_DWORD *)(a1 + 224) = 250;
          break;
        case 0x53u:
          sub_1FC8FA0(a1, a2);
          *(_DWORD *)(a1 + 224) = 249;
          break;
        case 0x54u:
          sub_1FC8FA0(a1, a2);
          *(_DWORD *)(a1 + 224) = 251;
          break;
        case 0x55u:
          sub_1FC8FA0(a1, a2);
          *(_DWORD *)(a1 + 224) = 252;
          break;
        case 0x56u:
          sub_1FC8F50(a1, a2);
          break;
        case 0x57u:
          sub_1FC9030(a1, a2);
          break;
        case 0x58u:
          sub_1FC8F00(a1, a2);
          break;
        case 0x59u:
          sub_1FC8A00(a1, a2);
          break;
        case 0x5Au:
          sub_1FC8BF0(a1, a2);
          break;
        case 0x5Bu:
          sub_1FC8C70(a1, a2);
          break;
        case 0x5Cu:
          sub_1FC8C30((_DWORD *)a1, a2);
          break;
        case 0x5Du:
          sub_1FC8CE0(a1, a2);
          break;
        case 0x5Eu:
          sub_1FCB180(a1, (_QWORD *)a2);
          break;
        case 0x5Fu:
          sub_1FC6C40(a1, a2);
          break;
        case 0x60u:
          sub_1FCB110(a1, a2);
          break;
        case 0x61u:
          sub_1FCA030(a1, a2);
          break;
        case 0x62u:
          sub_1FC5350(a1, a2);
          break;
        case 0x63u:
          sub_1FC2690(a1, a2);
          sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
          *(_DWORD *)(a1 + 224) = 256;
          break;
        case 0x64u:
          sub_1FC2E90(a1, a2);
          break;
        case 0x65u:
          sub_1FC9FE0(a1, a2);
          break;
        case 0x66u:
          sub_1FCBA90(a1, a2);
          break;
        case 0x67u:
          sub_1FCAF90(a1, a2);
          break;
        case 0x68u:
          sub_1FC2DE0(a1, a2);
          break;
        case 0x69u:
          sub_1FCA530(a1, a2);
          break;
        case 0x6Au:
          sub_1FC73D0(a1, a2);
          break;
        case 0x6Bu:
          sub_1FC5290(a1, a2);
          break;
        case 0x6Cu:
          sub_1FCA7D0(a1, a2);
          break;
        case 0x6Du:
          sub_1FCA260(a1, a2);
          break;
        case 0x6Eu:
          sub_1FCA1C0(a1, a2);
          break;
        case 0x6Fu:
          sub_1FCA120(a1, (_QWORD *)a2);
          break;
        case 0x70u:
          sub_1FCA090(a1, a2);
          break;
        case 0x71u:
          sub_1FC7060(a1, a2);
          break;
        case 0x72u:
          sub_1FC7060(a1, a2);
          sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 40), v4, v5, v6, v7);
          *(_DWORD *)(a1 + 224) = 247;
          break;
        case 0x73u:
          sub_1FC5300(a1, a2);
          break;
        case 0x74u:
          sub_1FC2E20(a1, a2);
          break;
        case 0x75u:
          sub_1FC2AF0(a1, a2);
          break;
        case 0x76u:
          goto LABEL_7;
        case 0x77u:
          goto LABEL_8;
        default:
          continue;
      }
      return;
    }
  }
  switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x20:
LABEL_7:
      sub_1FCB8E0(a1, a2);
      break;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
LABEL_8:
      sub_1FCBA10(a1, a2);
      break;
    default:
      goto LABEL_4;
  }
}
