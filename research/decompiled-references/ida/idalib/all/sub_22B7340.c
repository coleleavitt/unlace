char *__fastcall sub_22B7340(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      j__strlen(&byte_22F0C30);
      result = (char *)&byte_22F0C30;
      break;
    case 1:
      j__strlen("coff");
      result = "coff";
      break;
    case 2:
      j__strlen("dxcontainer");
      result = "dxcontainer";
      break;
    case 3:
      j__strlen("elf");
      result = "elf";
      break;
    case 4:
      j__strlen("goff");
      result = "goff";
      break;
    case 5:
      j__strlen("macho");
      result = "macho";
      break;
    case 6:
      j__strlen("spirv");
      result = "spirv";
      break;
    case 7:
      j__strlen("wasm");
      result = "wasm";
      break;
    case 8:
      j__strlen("xcoff");
      result = "xcoff";
      break;
  }
  return result;
}
