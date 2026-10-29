/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14007B4C8
// Address: 0x000000014007B4C8

//----- (000000014007B4C8) ----------------------------------------------------
__int64 __fastcall sub_14007B4C8(unsigned __int16 *a1, unsigned __int16 *a2)
{
  if ( dword_1400CC338 )
    return sub_14007B510(a1, a2, nullptr);
  if ( a1 && a2 )
    return _ascii_wcsicmp(a1, a2);
  *errno() = 22;
  invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}
// 14007B488: using guessed type __int64 __fastcall _ascii_wcsicmp(_QWORD, _QWORD);
// 1400CC338: using guessed type int dword_1400CC338;
