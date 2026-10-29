/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2CF50
// Address: 0x0002CF50

//----- (0002CF50) --------------------------------------------------------
unsigned int __cdecl sub_2CF50(int a1, int a2)
{
  size_t v2; // eax
  size_t *v3; // eax
  size_t v4; // esi
  void *v5; // eax
  size_t v6; // esi
  void *v7; // eax
  size_t *v8; // edi
  size_t *v9; // esi
  size_t *v10; // ecx
  size_t *v11; // eax
  int v12; // edi
  bool v13; // zf
  int v14; // eax
  size_t v15; // esi
  void *v16; // eax
  size_t v17; // esi
  void *v18; // eax
  _DWORD v20[9]; // [esp+28h] [ebp-24h] BYREF

  v20[4] = __readgsdword(0x14u);
  v2 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a1 = v2;
  v3 = (size_t *)a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a2 + 12));
    *(_DWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 16) = v4;
    memcpy(v5, *(const void **)(a2 + 8), v4);
    v3 = (size_t *)a2;
    *(_DWORD *)(a1 + 12) = v4;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v6 = v3[6];
  if ( v6 )
  {
    v7 = qalloc_or_throw(v3[6]);
    *(_DWORD *)(a1 + 20) = v7;
    *(_DWORD *)(a1 + 28) = v6;
    memcpy(v7, *(const void **)(a2 + 20), v6);
    v3 = (size_t *)a2;
    *(_DWORD *)(a1 + 24) = v6;
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 32) = a1 + 36;
  v8 = (size_t *)v3[8];
  v9 = v3 + 9;
  if ( v8 != v3 + 9 )
  {
    do
    {
      v20[2] = a1 + 36;
      sub_2D230(v20, (_DWORD **)(a1 + 32), (_DWORD *)(a1 + 36), v8 + 4, (int)(v8 + 4));
      v10 = (size_t *)v8[1];
      if ( v10 )
      {
        do
        {
          v11 = v10;
          v10 = (size_t *)*v10;
        }
        while ( v10 );
      }
      else
      {
        v11 = (size_t *)v8[2];
        if ( (size_t *)*v11 != v8 )
        {
          v12 = (int)(v8 + 2);
          do
          {
            v11 = *(size_t **)(*(_DWORD *)v12 + 8);
            v13 = *v11 == *(_DWORD *)v12;
            v12 = *(_DWORD *)v12 + 8;
          }
          while ( !v13 );
        }
      }
      v8 = v11;
    }
    while ( v11 != v9 );
  }
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v14 = a2;
  v15 = *(_DWORD *)(a2 + 48);
  if ( v15 )
  {
    v16 = qalloc_or_throw(*(_DWORD *)(a2 + 48));
    *(_DWORD *)(a1 + 44) = v16;
    *(_DWORD *)(a1 + 52) = v15;
    memcpy(v16, *(const void **)(a2 + 44), v15);
    v14 = a2;
    *(_DWORD *)(a1 + 48) = v15;
  }
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  v17 = *(_DWORD *)(v14 + 60);
  if ( v17 )
  {
    v18 = qalloc_or_throw(*(_DWORD *)(v14 + 60));
    *(_DWORD *)(a1 + 56) = v18;
    *(_DWORD *)(a1 + 64) = v17;
    memcpy(v18, *(const void **)(a2 + 56), v17);
    v14 = a2;
    *(_DWORD *)(a1 + 60) = v17;
  }
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(v14 + 68);
  return __readgsdword(0x14u);
}
