/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB220
// Address: 0x000AB220

//----- (000AB220) --------------------------------------------------------
void __cdecl sub_AB220(int a1)
{
  _DWORD *v1; // ecx
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // esi
  void *v6; // eax
  int v7; // [esp-10h] [ebp-2Ch]

  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v1 = *(_DWORD **)(a1 + 4);
  v2 = v1[1];
  v3 = v1[2];
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v4 = v1[3];
  *(_DWORD *)(a1 + 32) = v4;
  if ( v4 )
  {
    if ( __SPAIR64__(v3, v2) >= 1 && !v3 )
    {
      v7 = v2;
      v5 = ((unsigned int)((__int64)(v4 + (unsigned __int64)(unsigned int)v2 - 1) / v4) + 7) >> 3;
      *(_DWORD *)(a1 + 28) = qalloc(v7);
      v6 = qalloc(v5);
      *(_DWORD *)(a1 + 24) = v6;
      if ( v6 && *(_DWORD *)(a1 + 28) )
      {
        memset(v6, 0, v5);
        return;
      }
      qfree(*(void **)(a1 + 28));
      *(_DWORD *)(a1 + 28) = 0;
      qfree(*(void **)(a1 + 24));
      *(_DWORD *)(a1 + 24) = 0;
    }
    *(_DWORD *)(a1 + 32) = 0;
  }
}
