/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: make_linput
// Address: 0x000AB6F0

//----- (000AB6F0) --------------------------------------------------------
_DWORD *__cdecl make_linput(int a1)
{
  _DWORD *result; // eax

  if ( !a1 )
    return nullptr;
  result = operator new(0x24u);
  *result = 1;
  result[1] = a1;
  return result;
}
