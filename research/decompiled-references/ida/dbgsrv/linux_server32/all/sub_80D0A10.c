/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0A10
// Address: 0x080D0A10

//----- (080D0A10) --------------------------------------------------------
int __cdecl sub_80D0A10(int a1)
{
  int v1; // eax
  int v3; // esi
  int v4; // eax

  v1 = getsid(0);
  if ( v1 == -1 )
    return 0;
  v3 = v1;
  v4 = tcgetsid(a1);
  if ( v4 == -1 )
    return 0;
  else
    return (v3 != v4) + 1;
}
// 804B380: using guessed type int __cdecl tcgetsid(_DWORD);
// 804B8C0: using guessed type int __cdecl getsid(_DWORD);
