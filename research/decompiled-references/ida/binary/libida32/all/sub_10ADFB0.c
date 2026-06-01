char *__fastcall sub_10ADFB0(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "input";
      break;
    case 1:
      result = "bind-arch";
      break;
    case 2:
      result = "offload";
      break;
    case 3:
      result = "preprocessor";
      break;
    case 4:
      result = "precompiler";
      break;
    case 5:
      result = "api-extractor";
      break;
    case 6:
      result = "analyzer";
      break;
    case 7:
      result = "compiler";
      break;
    case 8:
      result = "backend";
      break;
    case 9:
      result = "assembler";
      break;
    case 10:
      result = "linker";
      break;
    case 11:
      result = "interface-stub-merger";
      break;
    case 12:
      result = "lipo";
      break;
    case 13:
      result = "dsymutil";
      break;
    case 14:
      result = "verify-debug-info";
      break;
    case 15:
      result = "verify-pch";
      break;
    case 16:
      result = "clang-offload-bundler";
      break;
    case 17:
      result = "clang-offload-unbundler";
      break;
    case 18:
      result = "clang-offload-packager";
      break;
    case 19:
      result = "clang-linker-wrapper";
      break;
    case 20:
      result = "static-lib-linker";
      break;
    case 21:
      result = "binary-analyzer";
      break;
    case 22:
      result = "binary-translator";
      break;
  }
  return result;
}

