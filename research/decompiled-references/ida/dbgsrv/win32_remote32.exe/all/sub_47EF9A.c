/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EF9A
// Address: 0x0047EF9A

//----- (0047EF9A) --------------------------------------------------------
BOOL __cdecl sub_47EF9A(DWORD dwInfoType, LPCWCH lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}
