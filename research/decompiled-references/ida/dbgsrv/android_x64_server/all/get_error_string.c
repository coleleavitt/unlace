/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x00000000000B71F0

//----- (00000000000B71F0) ----------------------------------------------------
__int64 __fastcall get_error_string(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(483);
    BUG();
  }
  return _emutls_get_address((unsigned __int64 *)qword_155628)[3 * (int)a1 + 4];
}
// 155628: using guessed type __int64 qword_155628[5];
// 158B40: using guessed type __int64 under_debugger;
