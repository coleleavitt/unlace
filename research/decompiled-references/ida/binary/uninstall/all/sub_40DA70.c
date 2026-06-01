__int64 __fastcall sub_40DA70(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 'I':
    case 'S':
    case 'W':
    case 'd':
    case 'f':
    case 'r':
      goto LABEL_3;
    case 'Q':
      result = (unsigned int)sub_496120() == 0 ? 1 : 3;
      break;
    case 'R':
    case 'i':
    case 'm':
    case 'n':
    case 's':
    case 't':
    case 'w':
      result = 1;
      break;
    case 'q':
      result = (unsigned int)sub_496120() != 0 ? 2 : 0;
      break;
    default:
      sub_47D740((unsigned int)"unexpected fallthrough", a2, a3, a4, a5, a6);
LABEL_3:
      result = 0;
      break;
  }
  return result;
}

