/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47906A
// Address: 0x0047906A

//----- (0047906A) --------------------------------------------------------
int __stdcall sub_47906A(
        unsigned __int16 *a1,
        DWORD dwMapFlags,
        LPCWSTR lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest,
        int a7,
        int a8,
        int a9)
{
  FARPROC v9; // eax
  LCID v11; // eax

  v9 = sub_478CE6();
  if ( v9 )
    return ((int (__thiscall *)(FARPROC, unsigned __int16 *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))v9)(
             v9,
             a1,
             dwMapFlags,
             lpSrcStr,
             cchSrc,
             lpDestStr,
             cchDest,
             a7,
             a8,
             a9);
  v11 = sub_4790C7(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
