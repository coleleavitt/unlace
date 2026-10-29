/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7771C
// Address: 0x0007771C

//----- (0007771C) --------------------------------------------------------
int __fastcall sub_7771C(int a1)
{
  int v1; // r4

  if ( a1 )
  {
    v1 = fseeko64(a1);
    if ( v1 )
      sub_70A2C(1);
  }
  else
  {
    v1 = -1;
    sub_70A2C(1);
    *_errno_location() = 9;
    sub_70A2C(1);
  }
  return v1;
}
// 14230: using guessed type int __fastcall fseeko64(_DWORD);
