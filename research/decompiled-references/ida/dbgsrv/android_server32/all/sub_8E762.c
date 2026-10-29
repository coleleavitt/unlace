/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E762
// Address: 0x0008E762

//----- (0008E762) --------------------------------------------------------
int __fastcall sub_8E762(int a1)
{
  int result; // r0
  int v3; // r1

  result = -102;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 224);
    if ( v3 )
      return *(_DWORD *)(v3 + 24);
  }
  return result;
}
