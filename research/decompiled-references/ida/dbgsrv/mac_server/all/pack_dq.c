/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: pack_dq
// Address: 0x000000010007B240

//----- (000000010007B240) ----------------------------------------------------
_BYTE *__fastcall pack_dq(_BYTE *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // rbx^4
  _BYTE *v4; // rax

  v3 = HIDWORD(a3);
  v4 = pack_dd(a1, a2, a3);
  return pack_dd(v4, a2, v3);
}
