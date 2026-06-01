/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_interr_throws
// Address: 0x00000000000B7760

//----- (00000000000B7760) ----------------------------------------------------
__int64 __fastcall set_interr_throws(char a1)
{
  _QWORD *address; // rax
  unsigned int v2; // ecx

  address = _emutls_get_address((unsigned __int64 *)qword_155628);
  LOBYTE(v2) = *((_BYTE *)address + 252);
  *((_BYTE *)address + 252) = a1;
  return v2;
}
// B777B: variable 'v2' is possibly undefined
// 155628: using guessed type __int64 qword_155628[5];
