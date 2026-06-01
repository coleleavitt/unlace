/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55B60
// Address: 0x00055B60

//----- (00055B60) --------------------------------------------------------
void __cdecl sub_55B60(int a1)
{
  int v1; // esi
  void *v2; // eax
  char *v3; // eax
  unsigned int v4; // esi
  int i; // edi
  void *v6; // eax
  void *v7; // eax
  unsigned int v8; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
  }
  sub_56980((char **)(a1 + 44));
  v3 = *(char **)(a1 + 32);
  if ( v3 )
  {
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 )
    {
      v4 = 1;
      for ( i = 0; ; i += 20 )
      {
        free_idcv(&v3[i]);
        if ( v4 >= v8 )
          break;
        v3 = *(char **)(a1 + 32);
        ++v4;
      }
      v1 = a1;
      v3 = *(char **)(a1 + 32);
    }
    *(_DWORD *)(v1 + 36) = 0;
    qfree(v3);
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 40) = 0;
  }
  v6 = *(void **)(v1 + 16);
  if ( v6 )
  {
    *(_DWORD *)(v1 + 20) = 0;
    qfree(v6);
    *(_DWORD *)(v1 + 16) = 0;
    *(_DWORD *)(v1 + 24) = 0;
  }
  v7 = *(void **)v1;
  if ( *(_DWORD *)v1 )
  {
    *(_DWORD *)(v1 + 4) = 0;
    qfree(v7);
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 8) = 0;
  }
}
