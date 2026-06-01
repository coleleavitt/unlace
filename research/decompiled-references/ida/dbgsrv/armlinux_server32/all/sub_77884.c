/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77884
// Address: 0x00077884

//----- (00077884) --------------------------------------------------------
int __fastcall sub_77884(int a1)
{
  int v1; // r4

  if ( a1 )
  {
    v1 = fseeko64(a1);
    if ( v1 )
      sub_70B98(1);
  }
  else
  {
    v1 = -1;
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
  }
  return v1;
}
// 1439C: using guessed type int __fastcall fseeko64(_DWORD);
