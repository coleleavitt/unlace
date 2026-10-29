/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CE58
// Address: 0x0008CE58

//----- (0008CE58) --------------------------------------------------------
_DWORD *__fastcall sub_8CE58(_DWORD *a1, _BYTE *a2, size_t a3)
{
  if ( 0x7FFFFFFF - a1[1] < a3 )
    sub_83AE4("basic_string::append");
  return sub_8CD2C(a1, a2, a3);
}
