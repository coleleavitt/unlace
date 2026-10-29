/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E018
// Address: 0x0003E018

//----- (0003E018) --------------------------------------------------------
int __fastcall sub_3E018(int a1)
{
  _DWORD *v2; // r3
  int v3; // r6
  int i; // r4
  void *v5; // r0
  char *v6; // r3
  _DWORD *v7; // r3
  int v8; // r6
  int j; // r4
  void *v10; // r0
  char *v11; // r3

  v2 = *(_DWORD **)(a1 + 12);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (void *)v2[3 * i];
        v6 = (char *)&v2[3 * i];
        if ( v5 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_77E08(v5);
        }
        v2 = *(_DWORD **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_77E08(v2);
  }
  v7 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (void *)v7[3 * j];
        v11 = (char *)&v7[3 * j];
        if ( v10 )
        {
          *((_DWORD *)v11 + 1) = 0;
          sub_77E08(v10);
        }
        v7 = *(_DWORD **)a1;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v7);
  }
  return a1;
}
