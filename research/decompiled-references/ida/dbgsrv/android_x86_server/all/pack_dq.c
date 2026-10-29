/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x000AD6F0

//----- (000AD6F0) --------------------------------------------------------
_BYTE *__cdecl pack_dq(_BYTE *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _BYTE *v4; // eax

  v4 = pack_dd(a1, a2, a3);
  return pack_dd(v4, a2, a4);
}
