/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x00000000000B2A7C

//----- (00000000000B2A7C) ----------------------------------------------------
__int64 __fastcall set_interr_throws(char a1)
{
  char v1; // w19
  _QWORD *address; // x0
  unsigned int v3; // w8

  v1 = a1 & 1;
  address = _emutls_get_address((size_t *)qword_166910);
  v3 = *((unsigned __int8 *)address + 252);
  *((_BYTE *)address + 252) = v1;
  return v3;
}
// 166910: using guessed type __int64 qword_166910[4];
