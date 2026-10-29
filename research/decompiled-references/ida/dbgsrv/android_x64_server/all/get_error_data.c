/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x00000000000B71B0

//----- (00000000000B71B0) ----------------------------------------------------
__int64 __fastcall get_error_data(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(482);
    BUG();
  }
  return _emutls_get_address((unsigned __int64 *)qword_155628)[a1];
}
// 155628: using guessed type __int64 qword_155628[5];
// 158B40: using guessed type __int64 under_debugger;
