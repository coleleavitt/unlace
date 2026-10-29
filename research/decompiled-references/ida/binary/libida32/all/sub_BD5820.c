char *__fastcall sub_BD5820(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 2:
      j__strlen("++");
      result = "++";
      break;
    case 1:
    case 3:
      j__strlen("--");
      result = "--";
      break;
    case 4:
      j__strlen("&");
      result = "&";
      break;
    case 5:
      j__strlen("*");
      result = (char *)"*";
      break;
    case 6:
      j__strlen("+");
      result = "+";
      break;
    case 7:
      j__strlen("-");
      result = "-";
      break;
    case 8:
      j__strlen("~");
      result = "~";
      break;
    case 9:
      j__strlen("!");
      result = "!";
      break;
    case 10:
      j__strlen("__real");
      result = "__real";
      break;
    case 11:
      j__strlen("__imag");
      result = "__imag";
      break;
    case 12:
      j__strlen("__extension__");
      result = "__extension__";
      break;
    case 13:
      j__strlen("co_await");
      result = "co_await";
      break;
  }
  return result;
}

