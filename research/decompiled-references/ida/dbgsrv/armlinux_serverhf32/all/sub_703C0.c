/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_703C0
// Address: 0x000703C0

//----- (000703C0) --------------------------------------------------------
int __fastcall sub_703C0(unsigned __int8 *a1)
{
  int v1; // r4
  int v2; // r0
  unsigned __int8 *v3; // r3
  unsigned __int8 *v5; // [sp+4h] [bp-8h] BYREF

  v5 = a1;
  v1 = *a1;
  if ( *a1 )
  {
    v1 = 0;
    do
    {
      ++v1;
      v2 = sub_70124(&v5);
      v3 = v5;
      if ( v2 == -1 )
        v3 = ++v5;
    }
    while ( *v3 );
  }
  return v1;
}
