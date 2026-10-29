/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD8D0
// Address: 0x080CD8D0

//----- (080CD8D0) --------------------------------------------------------
void __cdecl sub_80CD8D0(int a1)
{
  int v1; // edx

  *(_DWORD *)a1 = &off_811CE3C;
  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 1 )
  {
    sub_80CD5F0(*(void **)(a1 + 20));
  }
  else if ( v1 != 2 )
  {
    if ( v1 )
      sub_80CD0D0();
    sub_80CD620(*(void **)(a1 + 20));
  }
}
// 811CE3C: using guessed type _UNKNOWN *off_811CE3C;
