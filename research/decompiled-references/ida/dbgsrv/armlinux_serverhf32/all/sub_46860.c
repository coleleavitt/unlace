/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46860
// Address: 0x00046860

//----- (00046860) --------------------------------------------------------
int __fastcall sub_46860(int a1, unsigned int a2)
{
  __int64 v4; // r0
  int v5; // r6

  if ( !a1 )
    return sub_70A2C(1532);
  sub_455C8((unsigned __int8 *)a1);
  *(_BYTE *)a1 = 5;
  v4 = __PAIR64__(a2, (unsigned int)sub_805CC(0x20u));
  v5 = v4;
  if ( a2 )
    HIDWORD(v4) = *(_DWORD *)(a2 + 28);
  sub_3FB8C(v4);
  *(_DWORD *)(a1 + 8) = v5;
  return 0;
}
