/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x00000000000B6F40

//----- (00000000000B6F40) ----------------------------------------------------
_QWORD *__fastcall set_error_data(unsigned int a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(480);
    BUG();
  }
  result = _emutls_get_address((unsigned __int64 *)qword_155628);
  result[a1] = a2;
  return result;
}
// 155628: using guessed type __int64 qword_155628[5];
// 158B40: using guessed type __int64 under_debugger;
