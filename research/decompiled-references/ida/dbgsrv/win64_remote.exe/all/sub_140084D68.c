/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140084D68
// Address: 0x0000000140084D68

//----- (0000000140084D68) ----------------------------------------------------
__int64 __fastcall sub_140084D68(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1400CCB70;
    return 0;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 22;
  }
}
// 1400CCB70: using guessed type int dword_1400CCB70;
