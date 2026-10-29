/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CAA0
// Address: 0x0004CAA0

//----- (0004CAA0) --------------------------------------------------------
int __fastcall sub_4CAA0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r8
  int i; // r9
  _DWORD *v5; // r3
  char *v6; // r5
  int v7; // r10
  int j; // r4
  void *v9; // r0
  char *v10; // r3

  v2 = *(_DWORD **)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_DWORD *)v2[7 * i];
        v6 = (char *)&v2[7 * i];
        if ( v5 )
        {
          v7 = *((_DWORD *)v6 + 1);
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (void *)v5[3 * j];
              v10 = (char *)&v5[3 * j];
              if ( v9 )
              {
                *((_DWORD *)v10 + 1) = 0;
                sub_77F70(v9);
              }
              v5 = *(_DWORD **)v6;
            }
          }
          *((_DWORD *)v6 + 1) = 0;
          sub_77F70(v5);
        }
        v2 = *(_DWORD **)a1;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v2);
  }
  return a1;
}
