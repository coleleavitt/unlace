/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CFCC
// Address: 0x0008CFCC

//----- (0008CFCC) --------------------------------------------------------
_DWORD *__fastcall sub_8CFCC(_DWORD *a1, _BYTE *a2, size_t a3)
{
  if ( 0x7FFFFFFF - a1[1] < a3 )
    sub_83DCC("basic_string::append");
  return sub_8CE68(a1, a2, a3);
}
