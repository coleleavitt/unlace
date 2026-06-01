/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: make_linput
// Address: 0x0007B72E

//----- (0007B72E) --------------------------------------------------------
_DWORD *__fastcall make_linput(int a1)
{
  _DWORD *result; // r0

  result = nullptr;
  if ( a1 )
  {
    result = operator new(0x30u);
    *result = 1;
    result[2] = a1;
  }
  return result;
}
