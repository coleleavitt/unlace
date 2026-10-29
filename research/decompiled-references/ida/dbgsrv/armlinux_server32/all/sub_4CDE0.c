/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CDE0
// Address: 0x0004CDE0

//----- (0004CDE0) --------------------------------------------------------
void *__fastcall sub_4CDE0(int a1)
{
  void *v2; // r5

  if ( !*(_BYTE *)(a1 + 644) )
  {
    v2 = *(void **)(a1 + 612);
    if ( v2 )
    {
      sub_4CDC4(*(void ***)(a1 + 612));
      sub_808A0(v2);
    }
  }
  *(_DWORD *)(a1 + 612) = 0;
  *(_BYTE *)(a1 + 644) = 0;
  return sub_4CCE8(a1 + 616);
}
