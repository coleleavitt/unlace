char *__fastcall sub_10AE240(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
    case 1:
      result = "host";
      break;
    case 2:
      result = "cuda";
      break;
    case 3:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      result = "sycl";
      break;
    case 4:
      result = "openmp";
      break;
    case 8:
      result = "hip";
      break;
  }
  return result;
}

