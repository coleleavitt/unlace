/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BF08
// Address: 0x0002BF08

//----- (0002BF08) --------------------------------------------------------
int __fastcall sub_2BF08(int a1)
{
  _DWORD *v2; // r3
  int v3; // r6
  int i; // r4
  void *v5; // r0
  char *v6; // r3
  void *v7; // r0

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[7 * i];
        v6 = (char *)&v2[7 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v5);
        }
        v2 = *(_DWORD **)(a1 + 36);
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
    sub_77F70(v2);
  }
  v7 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v7);
  }
  return a1;
}
