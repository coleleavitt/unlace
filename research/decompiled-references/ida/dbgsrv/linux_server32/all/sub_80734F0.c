/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80734F0
// Address: 0x080734F0

//----- (080734F0) --------------------------------------------------------
int __cdecl sub_80734F0(int a1, int a2)
{
  char *v2; // edx

  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v2 = (char *)&dword_80DDFD8;
    if ( *(_DWORD *)(a1 + 28) )
      v2 = *(char **)(a1 + 24);
    *(_DWORD *)(a2 + 4) = sub_808C1E0(a1, v2, (unsigned __int8 *)(a1 + 40), 0) == 0;
    return 0;
  }
  else
  {
    sub_80C7910(0, "setattr");
    return sub_80C7880(56);
  }
}
// 80DDFD8: using guessed type int dword_80DDFD8;
