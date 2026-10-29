/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493840
// Address: 0x0000000000493840

//----- (0000000000493840) ----------------------------------------------------
const char *__fastcall sub_493840(int a1)
{
  int v1; // w19
  bool v2; // cc
  const char *result; // x0
  unsigned __int64 v4; // x20

  v1 = a1;
  if ( a1 != -1 )
  {
    v2 = a1 <= 1;
    if ( a1 != 1 )
      goto LABEL_3;
    return (const char *)sub_487060(-1);
  }
  v1 = sub_4869A0();
  v2 = v1 <= 1;
  if ( v1 == 1 )
    return (const char *)sub_487060(-1);
LABEL_3:
  if ( v2 )
  {
    result = "No error";
    if ( !v1 )
      return result;
LABEL_9:
    v4 = sub_486D60();
    sub_40CD68(v4, "Unknown error code %d", v1);
    return *(const char **)v4;
  }
  if ( v1 == 2 )
    return "Disk is full";
  result = "Read attempt past file end";
  if ( v1 != 3 )
    goto LABEL_9;
  return result;
}
