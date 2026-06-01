/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BA10
// Address: 0x0001BA10

//----- (0001BA10) --------------------------------------------------------
void __cdecl sub_1BA10(void **a1)
{
  void **v1; // ecx
  void **v2; // edi
  void **v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // edx
  int v6; // ecx

  sub_1C250(a1);
  v1 = a1;
  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  if ( v2 != v3 )
  {
    do
      operator delete(*v2++);
    while ( v3 != v2 );
    v1 = a1;
    v4 = a1[1];
    v5 = a1[2];
    if ( v5 != v4 )
    {
      v6 = v4 - v5;
      do
        v6 += 4;
      while ( v6 );
      v1 = a1;
      a1[2] = v4;
    }
  }
  if ( *v1 )
    operator delete(*v1);
}
