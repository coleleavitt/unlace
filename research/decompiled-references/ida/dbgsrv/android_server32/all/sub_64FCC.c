/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64FCC
// Address: 0x00064FCC

//----- (00064FCC) --------------------------------------------------------
int __fastcall sub_64FCC(int a1)
{
  int v1; // r3
  int v2; // r5
  void **v4; // r6
  int v5; // r0
  int v6; // r7
  void *v7; // r0
  void *v8; // r0

  v1 = *(_DWORD *)(a1 + 36);
  v2 = 1;
  if ( v1 )
  {
    v2 = sub_5FB50(a1, *(int **)(a1 + 32), *(const char ***)(a1 + 44), v1);
    if ( *(_DWORD *)(a1 + 36) )
    {
      v4 = *(void ***)(a1 + 44);
      v5 = *(_DWORD *)(a1 + 48);
      if ( 4 * v5 )
      {
        v6 = 4 * v5;
        do
        {
          v7 = *v4++;
          qfree(v7);
          v6 -= 4;
        }
        while ( v6 );
        v4 = *(void ***)(a1 + 44);
      }
      if ( v4 )
      {
        *(_DWORD *)(a1 + 48) = 0;
        qfree(v4);
        *(_DWORD *)(a1 + 52) = 0;
        *(_DWORD *)(a1 + 44) = 0;
      }
      v8 = *(void **)(a1 + 32);
      if ( v8 )
      {
        *(_DWORD *)(a1 + 36) = 0;
        qfree(v8);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(a1 + 32) = 0;
      }
    }
  }
  return v2;
}
