__int64 __fastcall sub_324050(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  while ( 2 )
  {
    switch ( a2 )
    {
      case 1u:
        result = 17;
        break;
      case 2u:
        result = 16;
        break;
      case 4u:
        result = 33;
        break;
      case 8u:
        result = 32;
        break;
      case 0x10u:
        result = 49;
        break;
      default:
        result = get_scalar_bt(a2);
        if ( !(_BYTE)result )
        {
          sub_2AFAB0((__int64)"illegal unk type size %d", a2);
          a2 = *(unsigned __int8 *)(a1 + 130);
          continue;
        }
        break;
    }
    break;
  }
  return result;
}
