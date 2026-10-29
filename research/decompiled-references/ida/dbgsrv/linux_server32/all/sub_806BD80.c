/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806BD80
// Address: 0x0806BD80

//----- (0806BD80) --------------------------------------------------------
int __cdecl sub_806BD80(int a1, unsigned int a2, bool *a3)
{
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( a2 >= *(_DWORD *)(a1 + 20) )
      return 0;
    else
      return *(_DWORD *)(a1 + 16) + (a2 << 6);
  }
  else
  {
    sub_8068EB0();
    return sub_806BDC0(a1, a2, a3);
  }
}
