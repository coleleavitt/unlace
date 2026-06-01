/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70368
// Address: 0x00070368

//----- (00070368) --------------------------------------------------------
int __fastcall sub_70368(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // [sp+4h] [bp-4h] BYREF

  v2 = a1;
  do
  {
    if ( !*v2 )
      return 1;
  }
  while ( sub_70290(&v2) != -1 );
  return 0;
}
