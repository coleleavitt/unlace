/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_701FC
// Address: 0x000701FC

//----- (000701FC) --------------------------------------------------------
int __fastcall sub_701FC(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // [sp+4h] [bp-4h] BYREF

  v2 = a1;
  do
  {
    if ( !*v2 )
      return 1;
  }
  while ( sub_70124(&v2) != -1 );
  return 0;
}
