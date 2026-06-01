/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB650
// Address: 0x000AB650

//----- (000AB650) --------------------------------------------------------
_DWORD *__cdecl sub_AB650(int a1)
{
  _DWORD *result; // eax

  result = operator new(0x24u);
  *result = 1;
  result[1] = a1;
  return result;
}
