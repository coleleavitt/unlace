/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x00000000000B6EE0

//----- (00000000000B6EE0) ----------------------------------------------------
__int64 __fastcall set_qerrno(unsigned int a1)
{
  unsigned int v1; // ebx

  if ( a1 == -1 )
  {
    return *((unsigned int *)_emutls_get_address((unsigned __int64 *)qword_155628) + 62);
  }
  else
  {
    v1 = a1;
    *((_DWORD *)_emutls_get_address((unsigned __int64 *)qword_155628) + 62) = a1;
  }
  return v1;
}
// 155628: using guessed type __int64 qword_155628[5];
