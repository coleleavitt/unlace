__int64 __fastcall sub_1704F30(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 result; // rax
  unsigned int v3; // edx

  if ( !a1 )
    return 1;
  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  switch ( v1 )
  {
    case 0u:
      result = 350;
      break;
    case 4u:
      result = 23;
      break;
    case 9u:
      result = 602;
      break;
    case 0xEu:
      result = (unsigned int)(*(_QWORD *)(a1 + 56) == 0) + 37;
      break;
    case 0x12u:
      result = (unsigned int)((*(_BYTE *)(a1 + 58) & 2) == 0) + 16;
      break;
    case 0x13u:
      result = 13;
      break;
    case 0x14u:
      result = 11;
      break;
    case 0x15u:
      result = 18;
      break;
    case 0x16u:
      result = 19;
      break;
    case 0x17u:
      result = 12;
      break;
    case 0x18u:
      result = 22;
      break;
    case 0x1Cu:
    case 0x3Fu:
    case 0x51u:
      result = 35;
      break;
    case 0x21u:
      result = 7;
      break;
    case 0x22u:
      result = 8;
      break;
    case 0x23u:
      result = 21;
      break;
    case 0x24u:
      result = 25;
      break;
    case 0x25u:
      result = 26;
      break;
    case 0x26u:
      result = 24;
      break;
    case 0x28u:
      result = 9;
      break;
    case 0x2Bu:
      result = 10;
      break;
    case 0x2Fu:
      result = 28;
      break;
    case 0x31u:
      result = 6;
      break;
    case 0x32u:
      result = 15;
      break;
    case 0x38u:
      result = 34;
      break;
    case 0x3Du:
      result = 32;
      break;
    case 0x3Eu:
    case 0x50u:
LABEL_5:
      result = 5;
      break;
    case 0x40u:
      result = 20;
      break;
    case 0x41u:
      result = 36;
      break;
    case 0x42u:
    case 0x43u:
      result = 27;
      break;
    case 0x44u:
      result = 29;
      break;
    case 0x46u:
      result = 601;
      break;
    case 0x47u:
      result = 30;
      break;
    case 0x48u:
      result = 31;
      break;
    case 0x49u:
      result = 604;
      break;
    case 0x4Bu:
      result = 14;
      break;
    case 0x4Du:
      result = 33;
      break;
    case 0x53u:
      result = 600;
      break;
    case 0x56u:
      result = 603;
      break;
    case 0x59u:
      result = 39;
      break;
    default:
      v3 = v1 - 58;
      result = 1;
      if ( v3 <= 4 )
      {
        switch ( *(_BYTE *)(a1 + 73) >> 5 )
        {
          case 0:
          case 1:
            result = 2;
            break;
          case 2:
            result = 3;
            break;
          case 3:
            result = 4;
            break;
          case 4:
            goto LABEL_5;
          default:
            return result;
        }
      }
      break;
  }
  return result;
}
