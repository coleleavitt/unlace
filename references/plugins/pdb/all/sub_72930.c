__int64 __fastcall sub_72930(unsigned int a1)
{
  __int64 result; // rax

  if ( (unsigned __int16)a1 > 0x20Eu )
  {
    result = 4112;
    if ( (_WORD)a1 != 768 )
    {
      result = 4113;
      if ( (_WORD)a1 != 769 )
        return a1;
    }
  }
  else if ( (unsigned __int16)a1 <= 0x1FFu )
  {
    if ( (unsigned __int16)(a1 - 2) > 0xAu )
    {
      return a1;
    }
    else
    {
      switch ( (__int16)a1 )
      {
        case 2:
          result = 4097;
          break;
        case 3:
          result = 4098;
          break;
        case 4:
          result = 4099;
          break;
        case 11:
          result = 4100;
          break;
        case 12:
          result = 4101;
          break;
        default:
          return a1;
      }
    }
  }
  else
  {
    switch ( a1 )
    {
      case 0x200u:
        result = 4102;
        break;
      case 0x201u:
        result = 4103;
        break;
      case 0x202u:
        result = 4104;
        break;
      case 0x203u:
        result = 4105;
        break;
      case 0x204u:
        result = 4106;
        break;
      case 0x205u:
        result = 4107;
        break;
      case 0x20Bu:
        result = 4108;
        break;
      case 0x20Cu:
        result = 4109;
        break;
      case 0x20Du:
        result = 4110;
        break;
      case 0x20Eu:
        result = 4111;
        break;
      default:
        return a1;
    }
  }
  return result;
}
