/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8075940
// Address: 0x08075940

//----- (08075940) --------------------------------------------------------
void __usercall sub_8075940(_DWORD *a1@<eax>)
{
  int v1; // ebp
  int i; // esi
  int v4; // edx
  void *v5; // eax

  v1 = a1[1];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = *a1 + 12 * i;
      v5 = *(void **)v4;
      if ( *(_DWORD *)v4 )
      {
        *(_DWORD *)(v4 + 4) = 0;
        sub_80CF780(v5);
      }
    }
    a1[1] = 0;
  }
}
