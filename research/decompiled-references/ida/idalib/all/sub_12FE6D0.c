char *__fastcall sub_12FE6D0(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 12:
      j__strlen("HLSL");
      result = (char *)"HLSL";
      break;
    case 1:
      j__strlen("Asm");
      result = "Asm";
      break;
    case 2:
      j__strlen("Clang IR");
      result = "Clang IR";
      break;
    case 3:
      j__strlen("LLVM IR");
      result = "LLVM IR";
      break;
    case 4:
      j__strlen("C");
      result = (char *)"C";
      break;
    case 5:
      j__strlen("C++");
      result = "C++";
      break;
    case 6:
      j__strlen("Objective-C");
      result = "Objective-C";
      break;
    case 7:
      j__strlen("Objective-C++");
      result = "Objective-C++";
      break;
    case 8:
      j__strlen("OpenCL");
      result = (char *)"OpenCL";
      break;
    case 9:
      j__strlen("C++ for OpenCL");
      result = "C++ for OpenCL";
      break;
    case 10:
      j__strlen("CUDA");
      result = "CUDA";
      break;
    case 11:
      j__strlen("HIP");
      result = (char *)"HIP";
      break;
  }
  return result;
}
