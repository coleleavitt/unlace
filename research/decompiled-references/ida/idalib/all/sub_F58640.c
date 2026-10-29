char *__fastcall sub_F58640(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      j__strlen("struct");
      result = "struct";
      break;
    case 1:
      j__strlen("__interface");
      result = "__interface";
      break;
    case 2:
      j__strlen("union");
      result = (char *)"union";
      break;
    case 3:
      j__strlen("class");
      result = "class";
      break;
    case 4:
      j__strlen("enum");
      result = "enum";
      break;
    case 5:
      j__strlen("typename");
      result = "typename";
      break;
    case 6:
      result = nullptr;
      break;
  }
  return result;
}
