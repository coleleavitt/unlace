/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B2F8
// Address: 0x0047B2F8

//----- (0047B2F8) --------------------------------------------------------
int __usercall sub_47B2F8@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        LPCWCH lpWideCharStr,
        _WORD *a4,
        LPSTR lpMultiByteStr,
        UINT CodePage)
{
  if ( sub_47E2BE(a2, a4, 64, (int)lpWideCharStr, 32) )
  {
    sub_467F04(a1, a2);
    __debugbreak();
  }
  return sub_47B467(CodePage, 0, lpWideCharStr, -1, lpMultiByteStr, 64, nullptr, nullptr);
}
