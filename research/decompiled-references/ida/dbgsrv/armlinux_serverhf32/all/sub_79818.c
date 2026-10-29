/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79818
// Address: 0x00079818

//----- (00079818) --------------------------------------------------------
const char *__fastcall sub_79818(int a1)
{
  int v1; // r4
  const char *result; // r0
  const char **v3; // r5

  if ( a1 == -1 )
    v1 = sub_70A10();
  else
    v1 = a1;
  switch ( v1 )
  {
    case 0:
      result = "No error";
      break;
    case 1:
      result = (const char *)sub_70EB4(-1);
      break;
    case 2:
      result = "Disk is full";
      break;
    case 3:
      result = "Read attempt past file end";
      break;
    default:
      v3 = (const char **)sub_70CB0();
      sub_1873C((int)v3, "Unknown error code %d", v1);
      result = *v3;
      break;
  }
  return result;
}
