/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EFB24
// Address: 0x00000000000EFB24

//----- (00000000000EFB24) ----------------------------------------------------
__int64 __fastcall sub_EFB24(unsigned __int8 a1)
{
  __int64 result; // x0

  if ( a1 == 255 )
    return 0;
  switch ( a1 & 7 )
  {
    case 0:
    case 4:
      result = 8;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 4;
      break;
    default:
      abort();
  }
  return result;
}
