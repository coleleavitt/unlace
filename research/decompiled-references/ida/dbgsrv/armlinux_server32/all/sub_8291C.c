/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8291C
// Address: 0x0008291C

//----- (0008291C) --------------------------------------------------------
_DWORD *__fastcall sub_8291C(_DWORD *a1, size_t a2, int a3, _BYTE *a4, size_t a5)
{
  sub_82490(a1, a2, a3, a5);
  if ( !a5 )
    return a1;
  if ( a5 != 1 )
  {
    memcpy((void *)(*a1 + a2), a4, a5);
    return a1;
  }
  *(_BYTE *)(*a1 + a2) = *a4;
  return a1;
}
