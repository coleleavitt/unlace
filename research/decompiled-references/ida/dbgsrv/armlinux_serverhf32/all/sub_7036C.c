/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7036C
// Address: 0x0007036C

//----- (0007036C) --------------------------------------------------------
int __fastcall sub_7036C(unsigned __int8 **a1, int a2)
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
      v5 = sub_70124(&v7);
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
