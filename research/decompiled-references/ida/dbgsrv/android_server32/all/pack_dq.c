/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x0007CA5C

//----- (0007CA5C) --------------------------------------------------------
_BYTE *__fastcall pack_dq(_BYTE *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _BYTE *v6; // r0

  v6 = pack_dd(a1, a2, a3);
  return pack_dd(v6, a2, a4);
}
