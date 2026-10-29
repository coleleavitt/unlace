/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_266B8
// Address: 0x000266B8

//----- (000266B8) --------------------------------------------------------
_DWORD *__fastcall sub_266B8(_DWORD *a1, const void *a2, size_t a3)
{
  void *v4; // r0
  size_t v7; // r7

  v4 = nullptr;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( a3 )
  {
    v7 = a3 + 1;
    if ( a3 != -1 )
    {
      v4 = qvector_reserve((int)a1, nullptr, a3 + 1, 1u);
      *a1 = v4;
    }
    a1[1] = v7;
    memmove(v4, a2, a3);
    *(_BYTE *)(*a1 + a3) = 0;
  }
  return a1;
}
