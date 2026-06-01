/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47ADD1
// Address: 0x0047ADD1

//----- (0047ADD1) --------------------------------------------------------
int __usercall sub_47ADD1@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        WCHAR *lpWideCharStr,
        LPSTR lpMultiByteStr,
        int cchWideChar)
{
  UINT v6; // eax

  if ( sub_47E2BE(a2, lpWideCharStr, 64, a3, cchWideChar) )
  {
    sub_467F04(a1, a2);
    __debugbreak();
  }
  v6 = sub_47246A();
  return sub_47B467(v6, 0, lpWideCharStr, cchWideChar, lpMultiByteStr, 63, nullptr, nullptr);
}
