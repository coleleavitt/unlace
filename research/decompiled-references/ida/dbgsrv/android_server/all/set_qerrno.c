/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x00000000000B2264

//----- (00000000000B2264) ----------------------------------------------------
__int64 __fastcall set_qerrno(unsigned int a1)
{
  unsigned int v1; // w19

  if ( a1 == -1 )
  {
    return *((unsigned int *)_emutls_get_address((size_t *)qword_166910) + 62);
  }
  else
  {
    v1 = a1;
    *((_DWORD *)_emutls_get_address((size_t *)qword_166910) + 62) = a1;
  }
  return v1;
}
// 166910: using guessed type __int64 qword_166910[4];
