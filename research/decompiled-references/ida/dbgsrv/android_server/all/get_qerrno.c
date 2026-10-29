/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_qerrno
// Address: 0x00000000000B22A4

//----- (00000000000B22A4) ----------------------------------------------------
__int64 get_qerrno()
{
  return *((unsigned int *)_emutls_get_address((size_t *)qword_166910) + 62);
}
// 166910: using guessed type __int64 qword_166910[4];
