/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3947C
// Address: 0x0003947C

//----- (0003947C) --------------------------------------------------------
int __fastcall sub_3947C(int a1)
{
  int v1; // r1
  int result; // r0

  v1 = *(unsigned __int8 *)(a1 + 120) - 160;
  result = 1;
  switch ( v1 )
  {
    case 0:
    case 1:
    case 7:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 51:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
      return result;
    default:
      result = 0;
      break;
  }
  return result;
}
