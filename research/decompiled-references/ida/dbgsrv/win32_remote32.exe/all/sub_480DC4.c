/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480DC4
// Address: 0x00480DC4

//----- (00480DC4) --------------------------------------------------------
int __cdecl sub_480DC4(
        unsigned __int16 *a1,
        DWORD dwCmpFlags,
        __m128i *lpString1,
        int cchCount1,
        __m128i *lpString2,
        int cchCount2)
{
  int v6; // esi
  int v7; // eax
  int v9; // esi

  v6 = cchCount1;
  if ( cchCount1 > 0 )
    v6 = sub_479958(lpString1, cchCount1);
  v7 = cchCount2;
  if ( cchCount2 > 0 )
    v7 = sub_479958(lpString2, cchCount2);
  if ( v6 && v7 )
    return sub_478EC3(a1, dwCmpFlags, (PCNZWCH)lpString1, v6, (PCNZWCH)lpString2, v7, 0, 0, 0);
  v9 = v6 - v7;
  if ( v9 )
    return ((v9 >> 31) & 0xFFFFFFFE) + 3;
  else
    return 2;
}
