/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459260
// Address: 0x00459260

//----- (00459260) --------------------------------------------------------
_DWORD *__cdecl sub_459260(unsigned int a1, _WORD *a2, _DWORD *a3)
{
  if ( a1 >= 0x10000 )
  {
    a2[1] = a1 & 0x3FF | 0xDC00;
    *a2 = ((a1 - 0x10000) >> 10) & 0x3FF | 0xD800;
    *a3 = 2;
    return a3;
  }
  else
  {
    *a2 = a1;
    *a3 = 1;
    return a3;
  }
}
