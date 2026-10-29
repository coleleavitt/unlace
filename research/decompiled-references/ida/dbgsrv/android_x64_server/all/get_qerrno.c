/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_qerrno
// Address: 0x00000000000B6F20

//----- (00000000000B6F20) ----------------------------------------------------
__int64 get_qerrno()
{
  return *((unsigned int *)_emutls_get_address((unsigned __int64 *)qword_155628) + 62);
}
// 155628: using guessed type __int64 qword_155628[5];
