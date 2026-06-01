/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50108
// Address: 0x00050108

//----- (00050108) --------------------------------------------------------
int __fastcall sub_50108(int a1)
{
  int v1; // r4

  if ( *(_BYTE *)(a1 + 488) )
  {
    if ( !under_debugger )
      interr(302);
    __debugbreak();
  }
  v1 = *(_DWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 464) = 0;
  sub_4E710(a1, 0, 0);
  return v1;
}
// E0550: using guessed type char under_debugger;
