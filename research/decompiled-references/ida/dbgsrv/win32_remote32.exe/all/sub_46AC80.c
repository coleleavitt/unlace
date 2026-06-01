/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AC80
// Address: 0x0046AC80

//----- (0046AC80) --------------------------------------------------------
int __cdecl sub_46AC80(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
    case 3:
    case 6:
    case 7:
    case 9:
    case 10:
      result = 4;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 4:
    case 5:
    case 11:
      result = 8;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
