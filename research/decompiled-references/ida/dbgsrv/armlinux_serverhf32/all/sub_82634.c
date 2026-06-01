/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82634
// Address: 0x00082634

//----- (00082634) --------------------------------------------------------
_DWORD *__fastcall sub_82634(_DWORD *a1, size_t a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  if ( a4 > a3 + 1073741820 - *(_DWORD *)(*a1 - 12) )
    sub_83AE4("basic_string::_M_replace_aux");
  sub_822F4(a1, a2, a3, a4);
  if ( a4 )
  {
    if ( a4 == 1 )
      *(_BYTE *)(*a1 + a2) = a5;
    else
      memset((void *)(*a1 + a2), a5, a4);
  }
  return a1;
}
