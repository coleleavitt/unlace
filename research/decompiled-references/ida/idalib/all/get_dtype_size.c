__int64 __fastcall get_dtype_size(unsigned __int8 a1, const char *a2)
{
  __int64 result; // rax
  __int64 ph; // rbx

  switch ( a1 )
  {
    case 0u:
      result = 1;
      break;
    case 1u:
    case 0x12u:
      result = 2;
      break;
    case 2u:
    case 3u:
      result = 4;
      break;
    case 4u:
    case 7u:
      result = 8;
      break;
    case 5u:
    case 6u:
      result = *(_QWORD *)(get_ph(a1, a2) + 120);
      break;
    case 8u:
      result = 16;
      break;
    case 9u:
    case 0xAu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
      result = 0;
      break;
    case 0xBu:
      result = 6;
      break;
    case 0xFu:
      ph = get_ph(a1, a2);
      if ( (unsigned __int8)getinf(66) )
        result = (unsigned __int8)getinf(66);
      else
        result = *(_QWORD *)(ph + 120);
      break;
    case 0x10u:
      result = 32;
      break;
    case 0x11u:
      result = 64;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
