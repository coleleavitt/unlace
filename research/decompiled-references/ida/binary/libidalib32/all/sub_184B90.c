__int64 __fastcall sub_184B90(__int64 a1, char a2, int a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 'A':
    case 'T':
    case 'X':
      if ( a3 <= 0 )
        a3 = 1024;
      goto LABEL_8;
    case 'F':
    case 'f':
      result = 4096;
      break;
    case 'I':
    case 'i':
      if ( a3 <= 0 )
        a3 = 0x8000;
LABEL_8:
      result = (unsigned int)(a3 - 1);
      break;
    case 'p':
    case 'q':
      result = 2147483646;
      if ( a3 > 0 )
        result = (unsigned int)(a3 - 1);
      break;
    default:
      result = 0x7FFFFFFF;
      break;
  }
  return result;
}

