/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CF24
// Address: 0x0008CF24

//----- (0008CF24) --------------------------------------------------------
_DWORD *__fastcall sub_8CF24(_DWORD *a1, char *s)
{
  unsigned int v4; // r0

  v4 = strlen(s);
  if ( 0x7FFFFFFF - a1[1] < v4 )
    sub_83DCC("basic_string::append");
  return sub_8CE68(a1, s, v4);
}
