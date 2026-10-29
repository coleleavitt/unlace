/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x00075CFC

//----- (00075CFC) --------------------------------------------------------
int __fastcall set_interr_throws(char a1)
{
  _DWORD *address; // r0
  int v3; // r1

  address = _emutls_get_address((size_t *)dword_DE26C);
  v3 = *((unsigned __int8 *)address + 128);
  *((_BYTE *)address + 128) = a1;
  return v3;
}
// DE26C: using guessed type int dword_DE26C[4];
