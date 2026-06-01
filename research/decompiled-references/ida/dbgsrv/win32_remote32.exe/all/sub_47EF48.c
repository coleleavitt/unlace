/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EF48
// Address: 0x0047EF48

//----- (0047EF48) --------------------------------------------------------
int __cdecl sub_47EF48(
        unsigned __int16 *a1,
        DWORD dwMapFlags,
        __m128i *lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest)
{
  int v6; // esi
  int v7; // eax

  v6 = cchSrc;
  if ( cchSrc > 0 )
  {
    v7 = sub_479958(lpSrcStr, cchSrc);
    v6 = v7 + 1;
    if ( v7 >= cchSrc )
      v6 = v7;
  }
  return sub_47906A(a1, dwMapFlags, (LPCWSTR)lpSrcStr, v6, lpDestStr, cchDest, 0, 0, 0);
}
