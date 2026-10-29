/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42420
// Address: 0x00042420

//----- (00042420) --------------------------------------------------------
int __fastcall sub_42420(int a1)
{
  void *v2; // r0
  unsigned __int8 *v3; // r0
  unsigned int v4; // r5
  unsigned int v5; // r6
  int i; // r7
  void *v7; // r0
  void *v8; // r0

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  sub_42AFE((char **)(a1 + 44));
  v3 = *(unsigned __int8 **)(a1 + 32);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 36);
    if ( v4 )
    {
      v5 = 1;
      for ( i = 0; ; i += 24 )
      {
        free_idcv(&v3[i]);
        if ( v5 >= v4 )
          break;
        ++v5;
        v3 = *(unsigned __int8 **)(a1 + 32);
      }
      v3 = *(unsigned __int8 **)(a1 + 32);
    }
    *(_DWORD *)(a1 + 36) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v7 = *(void **)(a1 + 16);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    qfree(v7);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
  v8 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v8);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  return a1;
}
