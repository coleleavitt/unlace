/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7470
// Address: 0x080C7470

//----- (080C7470) --------------------------------------------------------
int __cdecl sub_80C7470(_BYTE *a1)
{
  int v1; // esi
  int v2; // edx
  _BYTE *v3; // eax

  v1 = 0;
  if ( *a1 )
  {
    do
    {
      v2 = sub_80C7170(&a1);
      v3 = a1;
      if ( v2 == -1 )
        v3 = ++a1;
      ++v1;
    }
    while ( *v3 );
  }
  return v1;
}
