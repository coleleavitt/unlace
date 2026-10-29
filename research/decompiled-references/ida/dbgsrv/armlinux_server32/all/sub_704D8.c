/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_704D8
// Address: 0x000704D8

//----- (000704D8) --------------------------------------------------------
int __fastcall sub_704D8(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v3; // r1
  int v5; // r0
  unsigned __int8 *v7; // [sp+0h] [bp-Ch] BYREF

  v3 = *a1;
  v7 = *a1;
  if ( a2 )
  {
    do
    {
      v5 = sub_70290(&v7);
      if ( !v5 )
        break;
      if ( v5 == -1 )
        ++v7;
      --a2;
    }
    while ( a2 );
    v3 = v7;
  }
  *a1 = v3;
  return a2;
}
