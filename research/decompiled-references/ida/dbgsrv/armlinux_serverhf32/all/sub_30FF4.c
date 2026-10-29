/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_30FF4
// Address: 0x00030FF4

//----- (00030FF4) --------------------------------------------------------
int __fastcall sub_30FF4(int a1)
{
  _DWORD *v2; // r3
  int v3; // r6
  int i; // r4
  void *v5; // r0
  char *v6; // r3

  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[7 * i];
        v6 = (char *)&v2[7 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77E08(v5);
        }
        v2 = *(_DWORD **)a1;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v2);
  }
  return a1;
}
