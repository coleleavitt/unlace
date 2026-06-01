/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BDE1
// Address: 0x0046BDE1

//----- (0046BDE1) --------------------------------------------------------
_DWORD *__cdecl sub_46BDE1(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 )
    *a3 = a2;
  return result;
}
