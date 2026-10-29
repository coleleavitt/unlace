/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CC60
// Address: 0x0004CC60

//----- (0004CC60) --------------------------------------------------------
void *__fastcall sub_4CC60(int a1)
{
  void *v2; // r5

  if ( !*(_BYTE *)(a1 + 644) )
  {
    v2 = *(void **)(a1 + 612);
    if ( v2 )
    {
      sub_4CC44(*(void ***)(a1 + 612));
      sub_8121C(v2);
    }
  }
  *(_DWORD *)(a1 + 612) = 0;
  *(_BYTE *)(a1 + 644) = 0;
  return sub_4CB68(a1 + 616);
}
