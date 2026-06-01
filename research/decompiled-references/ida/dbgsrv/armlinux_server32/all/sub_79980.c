/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79980
// Address: 0x00079980

//----- (00079980) --------------------------------------------------------
const char *__fastcall sub_79980(int a1)
{
  int v1; // r4
  const char *result; // r0
  const char **v3; // r5

  if ( a1 == -1 )
    v1 = sub_70B7C();
  else
    v1 = a1;
  switch ( v1 )
  {
    case 0:
      result = "No error";
      break;
    case 1:
      result = (const char *)sub_71020(-1);
      break;
    case 2:
      result = "Disk is full";
      break;
    case 3:
      result = "Read attempt past file end";
      break;
    default:
      v3 = (const char **)sub_70E1C();
      sub_188E0((int)v3, "Unknown error code %d", v1);
      result = *v3;
      break;
  }
  return result;
}
