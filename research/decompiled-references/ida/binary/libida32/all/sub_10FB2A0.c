char *__fastcall sub_10FB2A0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "preprocessor";
      break;
    case 1:
      result = "precompiler";
      break;
    case 2:
      result = "compiler";
      break;
    case 3:
      result = "backend";
      break;
    case 4:
      result = "assembler";
      break;
    case 5:
      result = "linker";
      break;
    case 6:
      result = "ifsmerger";
      break;
  }
  return result;
}

