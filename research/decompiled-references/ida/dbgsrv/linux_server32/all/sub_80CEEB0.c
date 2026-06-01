/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CEEB0
// Address: 0x080CEEB0

//----- (080CEEB0) --------------------------------------------------------
int __cdecl sub_80CEEB0(FILE *a1, void *ptr, size_t n)
{
  int v3; // esi
  signed int v5; // eax

  if ( !a1 )
  {
    v3 = -1;
    sub_80C7880(1);
    *__errno_location() = 9;
    sub_80C7880(1);
    return v3;
  }
  v3 = 0;
  if ( !n )
    return v3;
  v5 = fwrite(ptr, 1u, n, a1);
  v3 = v5;
  if ( n == v5 )
    return v3;
  sub_80C7880((v5 > 0) + 1);
  return v3;
}
