/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CDE8
// Address: 0x0008CDE8

//----- (0008CDE8) --------------------------------------------------------
_DWORD *__fastcall sub_8CDE8(_DWORD *a1, char *s)
{
  unsigned int v4; // r0

  v4 = strlen(s);
  if ( 0x7FFFFFFF - a1[1] < v4 )
    sub_83AE4("basic_string::append");
  return sub_8CD2C(a1, s, v4);
}
