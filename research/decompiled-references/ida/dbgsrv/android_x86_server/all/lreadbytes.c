/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lreadbytes
// Address: 0x000ABB20

//----- (000ABB20) --------------------------------------------------------
int __cdecl lreadbytes(__int64 a1, size_t n, char a3)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax

  if ( (_DWORD)a1 )
  {
    if ( *(int *)a1 < 2 )
      v3 = qfread(*(FILE **)(a1 + 4), (void *)HIDWORD(a1), n);
    else
      v3 = sub_AB320(a1, n);
    v4 = v3;
  }
  else
  {
    v4 = -1;
  }
  result = -(v4 != n);
  if ( v4 == n )
  {
    if ( a3 )
    {
      memrev((_BYTE *)HIDWORD(a1), n);
      return 0;
    }
  }
  return result;
}
