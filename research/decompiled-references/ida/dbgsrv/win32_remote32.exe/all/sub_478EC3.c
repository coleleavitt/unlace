/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478EC3
// Address: 0x00478EC3

//----- (00478EC3) --------------------------------------------------------
int __stdcall sub_478EC3(
        unsigned __int16 *a1,
        DWORD dwCmpFlags,
        PCNZWCH lpString1,
        int cchCount1,
        PCNZWCH lpString2,
        int cchCount2,
        int a7,
        int a8,
        int a9)
{
  FARPROC v9; // eax
  LCID v11; // eax

  v9 = sub_478CCC();
  if ( v9 )
    return ((int (__thiscall *)(FARPROC, unsigned __int16 *, DWORD, PCNZWCH, int, PCNZWCH, int, int, int, int))v9)(
             v9,
             a1,
             dwCmpFlags,
             lpString1,
             cchCount1,
             lpString2,
             cchCount2,
             a7,
             a8,
             a9);
  v11 = sub_4790C7(a1, 0);
  return CompareStringW(v11, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
