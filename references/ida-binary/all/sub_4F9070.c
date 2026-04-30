__int64 __fastcall sub_4F9070(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = *(unsigned __int8 *)(a1 + 52);
  switch ( (char)v5 )
  {
    case ' ':
    case 'h':
      if ( under_debugger )
        goto LABEL_19;
      interr(2507, a2, v5, a5, a3);
      goto LABEL_16;
    case '$':
    case 'D':
    case 'H':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'S':
    case 'Y':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 's':
    case 'u':
      return 8;
    case '=':
    case 'K':
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
      v6 = (__int64 (__fastcall ***)(_QWORD))sub_508440((unsigned int)(char)v5);
      if ( v6 )
      {
        result = (**v6)(v6);
      }
      else
      {
        if ( under_debugger )
LABEL_19:
          BUG();
        interr(2508, a2, v7, v8, a3);
        result = sub_4F9180();
      }
      break;
  }
  return result;
}
