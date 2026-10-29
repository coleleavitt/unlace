/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AC2B0
// Address: 0x080AC2B0

//----- (080AC2B0) --------------------------------------------------------
int __cdecl sub_80AC2B0(int a1, char *a2, unsigned int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(a1 + 248);
  if ( v3 )
    v3 -= 100;
  return sub_80AB620(v3, a2, a3);
}
