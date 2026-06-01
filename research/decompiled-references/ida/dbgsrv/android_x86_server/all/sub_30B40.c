/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30B40
// Address: 0x00030B40

//----- (00030B40) --------------------------------------------------------
int __cdecl sub_30B40(int a1)
{
  unsigned __int16 v1; // dx
  int result; // eax

  v1 = *(_WORD *)(a1 + 402);
  result = -1;
  switch ( v1 )
  {
    case 2u:
    case 0x12u:
    case 0x2Bu:
      result = 23;
      break;
    case 3u:
    case 6u:
    case 0x3Eu:
      result = 0;
      break;
    case 4u:
      result = 7;
      break;
    case 5u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0x10u:
    case 0x11u:
    case 0x18u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Fu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
    case 0x23u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x27u:
    case 0x29u:
    case 0x2Cu:
    case 0x33u:
    case 0x34u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Du:
    case 0x3Fu:
    case 0x40u:
    case 0x41u:
    case 0x42u:
    case 0x44u:
    case 0x45u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x55u:
    case 0x56u:
    case 0x59u:
    case 0x5Bu:
    case 0x5Cu:
    case 0x5Eu:
    case 0x5Fu:
    case 0x60u:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
    case 0x7Bu:
    case 0x7Cu:
    case 0x7Du:
    case 0x7Eu:
    case 0x7Fu:
    case 0x80u:
    case 0x81u:
    case 0x82u:
    case 0x83u:
    case 0x84u:
    case 0x85u:
    case 0x86u:
    case 0x87u:
    case 0x88u:
    case 0x89u:
    case 0x8Au:
    case 0x8Bu:
    case 0x8Cu:
    case 0x8Du:
    case 0x8Eu:
    case 0x8Fu:
    case 0x90u:
    case 0x91u:
    case 0x92u:
    case 0x93u:
    case 0x94u:
    case 0x95u:
    case 0x96u:
    case 0x97u:
    case 0x98u:
    case 0x99u:
    case 0x9Au:
    case 0x9Bu:
    case 0x9Cu:
    case 0x9Du:
    case 0x9Eu:
    case 0x9Fu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
    case 0xA5u:
    case 0xA6u:
    case 0xA7u:
    case 0xA8u:
    case 0xA9u:
    case 0xAAu:
    case 0xABu:
    case 0xACu:
    case 0xADu:
    case 0xAEu:
    case 0xAFu:
    case 0xB0u:
    case 0xB1u:
    case 0xB2u:
    case 0xB3u:
    case 0xB4u:
    case 0xB5u:
    case 0xB6u:
    case 0xB7u:
    case 0xB8u:
    case 0xB9u:
    case 0xBAu:
    case 0xBBu:
    case 0xBCu:
    case 0xBDu:
    case 0xBEu:
    case 0xBFu:
    case 0xC0u:
    case 0xC1u:
    case 0xC2u:
    case 0xC4u:
    case 0xC5u:
    case 0xC6u:
    case 0xC7u:
    case 0xC8u:
    case 0xC9u:
    case 0xCAu:
    case 0xCBu:
    case 0xCCu:
    case 0xCDu:
    case 0xCEu:
    case 0xCFu:
    case 0xD0u:
    case 0xD1u:
    case 0xD2u:
    case 0xD3u:
    case 0xD4u:
    case 0xD5u:
    case 0xD6u:
    case 0xD7u:
    case 0xD8u:
    case 0xD9u:
    case 0xDAu:
    case 0xDBu:
    case 0xDCu:
    case 0xDDu:
    case 0xDEu:
    case 0xDFu:
    case 0xE0u:
    case 0xE1u:
    case 0xE2u:
    case 0xE3u:
    case 0xE4u:
    case 0xE5u:
    case 0xE6u:
    case 0xE7u:
    case 0xE8u:
    case 0xE9u:
    case 0xEAu:
    case 0xEBu:
    case 0xECu:
    case 0xEDu:
    case 0xEEu:
    case 0xEFu:
    case 0xF0u:
    case 0xF1u:
    case 0xF2u:
    case 0xF3u:
    case 0xF4u:
    case 0xF5u:
    case 0xF6u:
    case 0xF7u:
    case 0xF8u:
      return result;
    case 7u:
      result = 2;
      break;
    case 8u:
    case 0x19u:
    case 0x1Eu:
    case 0xF9u:
      result = 12;
      break;
    case 0xFu:
      result = 25;
      break;
    case 0x13u:
      result = 32;
      break;
    case 0x14u:
    case 0x15u:
      result = 15;
      break;
    case 0x16u:
      result = 70;
      break;
    case 0x17u:
      result = 59;
      break;
    case 0x28u:
      result = 13;
      break;
    case 0x2Au:
      result = 18;
      break;
    case 0x2Du:
    case 0x5Du:
    case 0xC3u:
      result = 63;
      break;
    case 0x2Eu:
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
      result = 21;
      break;
    case 0x32u:
      result = 31;
      break;
    case 0x35u:
      result = 11;
      break;
    case 0x43u:
      result = 42;
      break;
    case 0x46u:
      result = 9;
      break;
    case 0x53u:
      result = 20;
      break;
    case 0x54u:
      result = 43;
      break;
    case 0x57u:
      goto LABEL_9;
    case 0x58u:
      result = 37;
      break;
    case 0x5Au:
      result = 53;
      break;
    case 0x74u:
      result = 29;
      break;
    case 0x75u:
      result = 62;
      break;
    default:
      if ( v1 == 36902 )
      {
        result = 24;
      }
      else if ( v1 == 28927 )
      {
LABEL_9:
        result = 55;
      }
      break;
  }
  return result;
}
