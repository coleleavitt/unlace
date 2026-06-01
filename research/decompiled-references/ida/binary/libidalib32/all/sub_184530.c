char *__fastcall sub_184530(char a1)
{
  __int64 v1; // rax
  char *result; // rax

  switch ( a1 )
  {
    case ' ':
    case 'h':
      result = "label";
      break;
    case '$':
      result = "ea";
      break;
    case 'B':
    case 'k':
      result = "button";
      break;
    case 'C':
    case 'c':
      result = "checkbox";
      break;
    case 'D':
    case 'H':
    case 'O':
    case 'Y':
    case 'n':
    case 'o':
    case 's':
      result = "signed";
      break;
    case 'E':
      result = "chooser";
      break;
    case 'F':
    case 'f':
      result = "path";
      break;
    case 'G':
      result = "cbgroup";
      break;
    case 'I':
      result = "ident2";
      break;
    case 'K':
      result = "color";
      break;
    case 'L':
    case 'm':
      result = "uint64";
      break;
    case 'M':
    case 'N':
    case 'u':
      result = "unsigned";
      break;
    case 'R':
    case 'r':
      result = "radiobutton";
      break;
    case 'S':
      result = "segment";
      break;
    case 'X':
      result = "string";
      break;
    case 'b':
      result = "combobox";
      break;
    case 'g':
      result = "rbgroup";
      break;
    case 'i':
      result = "ident";
      break;
    case 'l':
      result = "int64";
      break;
    case 'p':
    case 'q':
    case 'y':
      result = "qstring";
      break;
    case 't':
      result = "text";
      break;
    default:
      v1 = sub_18BE40((unsigned int)a1);
      if ( !v1 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      result = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
      break;
  }
  return result;
}

