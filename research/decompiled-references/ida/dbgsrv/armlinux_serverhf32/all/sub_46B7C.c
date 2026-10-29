/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B7C
// Address: 0x00046B7C

//----- (00046B7C) --------------------------------------------------------
void __fastcall sub_46B7C(int a1, int *a2)
{
  int *v3; // r4
  void *v4; // r0

  v3 = sub_81494(a2, (_DWORD *)(a1 + 4));
  sub_455C8((unsigned __int8 *)v3 + 32);
  v4 = (void *)v3[4];
  if ( v4 )
  {
    v3[5] = 0;
    sub_77E08(v4);
  }
  sub_80648(v3);
  --*(_DWORD *)(a1 + 20);
}
