/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x000A3E50

//----- (000A3E50) --------------------------------------------------------
int __cdecl set_interr_throws(char a1)
{
  _DWORD *address; // eax
  int v2; // ecx

  address = _emutls_get_address((unsigned int *)dword_13BC24);
  LOBYTE(v2) = *((_BYTE *)address + 128);
  *((_BYTE *)address + 128) = a1;
  return v2;
}
// A3E83: variable 'v2' is possibly undefined
// 13BC24: using guessed type int dword_13BC24[4];
