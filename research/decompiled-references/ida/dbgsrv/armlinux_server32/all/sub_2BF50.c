/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2BF50
// Address: 0x0002BF50

//----- (0002BF50) --------------------------------------------------------
int __fastcall sub_2BF50(int a1)
{
  void *v2; // r0
  _DWORD *v3; // r3
  int v4; // r6
  int i; // r4
  void *v6; // r0
  char *v7; // r3
  void *v8; // r0

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_77F70(v2);
  }
  v3 = *(_DWORD **)(a1 + 12);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (void *)v3[7 * i];
        v7 = (char *)&v3[7 * i];
        if ( v6 )
        {
          *((_DWORD *)v7 + 1) = 0;
          sub_77F70(v6);
        }
        v3 = *(_DWORD **)(a1 + 12);
      }
    }
    *(_DWORD *)(a1 + 16) = 0;
    sub_77F70(v3);
  }
  v8 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v8);
  }
  return a1;
}
