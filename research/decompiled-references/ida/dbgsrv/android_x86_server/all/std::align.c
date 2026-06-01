/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::align
// Address: 0x000BC5B0

//----- (000BC5B0) --------------------------------------------------------
_BYTE *__cdecl std::align(unsigned int a1, unsigned int a2, void **a3, unsigned int *a4)
{
  int v4; // edx
  _BYTE *result; // eax
  _BYTE *v6; // esi
  unsigned int v7; // edi

  v4 = *a4;
  result = nullptr;
  if ( *a4 >= a2 )
  {
    v6 = (_BYTE *)(((unsigned int)*a3 + a1 - 1) & -a1);
    v7 = v6 - (_BYTE *)*a3;
    if ( v7 <= *a4 - a2 )
    {
      *a3 = v6;
      *a4 = v4 - v7;
      return v6;
    }
  }
  return result;
}
