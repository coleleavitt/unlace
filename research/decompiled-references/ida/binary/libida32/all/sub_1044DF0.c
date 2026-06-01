__int64 __fastcall sub_1044DF0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0u:
      result = 5;
      break;
    case 1u:
      result = a2;
      break;
    case 3u:
      result = 2;
      break;
    case 4u:
      result = 3;
      break;
    case 5u:
      result = 4;
      break;
    default:
      result = a2 + 25;
      break;
  }
  return result;
}

