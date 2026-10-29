/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74F94
// Address: 0x00074F94

//----- (00074F94) --------------------------------------------------------
int __fastcall sub_74F94(int a1)
{
  unsigned __int8 v2; // [sp+3h] [bp-5h] BYREF

  if ( sub_74B94(a1, &v2, 1) == 1 )
    return v2;
  else
    return -1;
}
