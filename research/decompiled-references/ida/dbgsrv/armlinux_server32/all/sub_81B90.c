/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81B90
// Address: 0x00081B90

//----- (00081B90) --------------------------------------------------------
size_t __fastcall sub_81B90(int *a1, _BYTE *dest, size_t n, unsigned int a4)
{
  int v4; // r6
  unsigned int v5; // r4
  size_t v6; // r4

  v4 = *a1;
  v5 = *(_DWORD *)(*a1 - 12);
  if ( a4 > v5 )
    sub_83E54("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, *(_DWORD *)(*a1 - 12));
  v6 = v5 - a4;
  if ( v6 >= n )
    v6 = n;
  if ( !v6 )
    return v6;
  if ( v6 != 1 )
  {
    memcpy(dest, (const void *)(v4 + a4), v6);
    return v6;
  }
  *dest = *(_BYTE *)(v4 + a4);
  return 1;
}
