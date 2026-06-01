/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140084D98
// Address: 0x0000000140084D98

//----- (0000000140084D98) ----------------------------------------------------
__int64 __fastcall sub_140084D98(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1400CCB68;
    return 0;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 22;
  }
}
// 1400CCB68: using guessed type int dword_1400CCB68;
