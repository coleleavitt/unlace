char *__fastcall sub_1009C30(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 10:
      result = "long long unsigned int";
      break;
    case 1:
      result = (char *)"signed char";
      break;
    case 2:
      result = "unsigned char";
      break;
    case 3:
      result = (char *)"short";
      break;
    case 4:
      result = "unsigned short";
      break;
    case 5:
      result = "int";
      break;
    case 6:
      result = "unsigned int";
      break;
    case 7:
      result = "long int";
      break;
    case 8:
      result = "long unsigned int";
      break;
    case 9:
      result = "long long int";
      break;
  }
  return result;
}

