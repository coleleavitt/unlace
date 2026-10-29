/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AD44
// Address: 0x0005AD44

//----- (0005AD44) --------------------------------------------------------
int __fastcall sub_5AD44(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r1
  int result; // r0

  v4 = *(unsigned __int8 *)(a4 + 153);
  if ( *(_BYTE *)(a4 + 153) )
  {
    v5 = sub_5C3F0(a4, 40);
    result = 2;
    if ( v5 )
    {
      if ( v4 )
        return result;
      return v4;
    }
  }
  result = 1;
  if ( !v4 )
    return v4;
  return result;
}
