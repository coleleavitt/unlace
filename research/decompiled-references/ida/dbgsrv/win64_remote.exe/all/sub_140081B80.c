/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140081B80
// Address: 0x0000000140081B80

//----- (0000000140081B80) ----------------------------------------------------
__int64 __fastcall sub_140081B80(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1400CCC78;
    return 0;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 22;
  }
}
// 1400CCC78: using guessed type int dword_1400CCC78;
