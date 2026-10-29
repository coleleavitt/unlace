char *__fastcall sub_AF0A30(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "vector=sw0";
      break;
    case 1:
      result = "vector=sw1";
      break;
    case 2:
      result = "vector=hw0";
      break;
    case 3:
      result = "vector=hw1";
      break;
    case 4:
      result = "vector=hw2";
      break;
    case 5:
      result = "vector=hw3";
      break;
    case 6:
      result = "vector=hw4";
      break;
    case 7:
      result = "vector=hw5";
      break;
    case 8:
      result = "eic";
      break;
  }
  return result;
}

