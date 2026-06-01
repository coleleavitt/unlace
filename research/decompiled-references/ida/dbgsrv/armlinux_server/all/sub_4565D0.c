/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4565D0
// Address: 0x00000000004565D0

//----- (00000000004565D0) ----------------------------------------------------
__int64 __fastcall sub_4565D0(__int64 a1, char a2, __int64 a3)
{
  bool v5; // w0
  unsigned int v6; // w1
  unsigned __int8 v8; // [xsp+27h] [xbp-9h] BYREF

  if ( !a2 )
    sub_451060(a1, a3);
  v5 = sub_453920(a1, a3);
  v6 = 2;
  if ( !v5 )
  {
    if ( (unsigned int)sub_4563A8(a1, a3, &v8) )
      return (unsigned int)-1;
    else
      return v8;
  }
  return v6;
}
