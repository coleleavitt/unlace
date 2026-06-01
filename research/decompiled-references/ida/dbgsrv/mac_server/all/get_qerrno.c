/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_qerrno
// Address: 0x0000000100074310

//----- (0000000100074310) ----------------------------------------------------
__int64 get_qerrno()
{
  __int64 v0; // rax

  off_1000ACFB0();
  return *(unsigned int *)(v0 + 248);
}
// 10007431D: variable 'v0' is possibly undefined
// 1000ACFB0: using guessed type void (*off_1000ACFB0)(void);
