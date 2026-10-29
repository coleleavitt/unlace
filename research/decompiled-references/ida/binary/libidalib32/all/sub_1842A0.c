__int64 __fastcall sub_1842A0(__int64 a1)
{
  char v1; // dl
  __int64 (__fastcall ***v2)(_QWORD); // rax
  __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 52);
  switch ( v1 )
  {
    case ' ':
    case 'h':
      if ( under_debugger )
        goto LABEL_19;
      interr();
      goto LABEL_16;
    case '$':
    case '=':
    case 'D':
    case 'H':
    case 'K':
    case 'M':
    case 'N':
    case 'O':
    case 'S':
    case 'Y':
    case 'n':
    case 'o':
    case 's':
    case 'u':
      return 4;
    case 'A':
    case 'T':
      return *(_QWORD *)(a1 + 64);
    case 'B':
    case 'k':
      return 0;
    case 'C':
    case 'G':
    case 'R':
    case 'c':
    case 'g':
    case 'r':
      return 2;
    case 'E':
    case 'I':
    case 'i':
    case 'p':
    case 'q':
    case 'y':
      return 24;
    case 'F':
    case 'f':
      return 4096;
    case 'L':
    case 'l':
    case 'm':
      return 8;
    case 'X':
      return 1024;
    case 'b':
      result = 4;
      if ( *(_DWORD *)(a1 + 48) )
        return 24;
      return result;
    case 't':
LABEL_16:
      result = 40;
      break;
    default:
      v2 = (__int64 (__fastcall ***)(_QWORD))sub_18BE40((unsigned int)v1);
      if ( v2 )
      {
        result = (**v2)(v2);
      }
      else
      {
        if ( under_debugger )
LABEL_19:
          BUG();
        interr();
        result = sub_1843B0(2508);
      }
      break;
  }
  return result;
}

