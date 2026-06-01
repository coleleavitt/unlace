/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlread
// Address: 0x000AB7D0

//----- (000AB7D0) --------------------------------------------------------
int __cdecl qlread(__int64 a1, size_t n)
{
  if ( !(_DWORD)a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    return qfread(*(FILE **)(a1 + 4), (void *)HIDWORD(a1), n);
  return sub_AB320(a1, n);
}
