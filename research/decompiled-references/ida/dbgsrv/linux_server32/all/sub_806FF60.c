/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806FF60
// Address: 0x0806FF60

//----- (0806FF60) --------------------------------------------------------
int __cdecl sub_806FF60(int a1, int a2)
{
  int v2; // esi
  char *v3; // eax
  int v4; // esi
  char *v5; // eax
  void *v6; // ecx
  void *v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // ebx
  _DWORD *v11; // ecx
  int v13; // [esp-38h] [ebp-38h]
  char *v14; // [esp-30h] [ebp-30h]
  int v15; // [esp-30h] [ebp-30h]
  _DWORD *v16; // [esp-30h] [ebp-30h]
  void *v17; // [esp-2Ch] [ebp-2Ch] BYREF
  int v18; // [esp-28h] [ebp-28h]
  int v19; // [esp-24h] [ebp-24h]
  unsigned int v20; // [esp-20h] [ebp-20h]

  v2 = a1;
  v20 = __readgsdword(0x14u);
  v3 = *(char **)(a2 + 4);
  if ( v3 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      v13 = *(_DWORD *)(a2 + 8);
      v4 = 0;
      do
      {
        v5 = &v3[28 * v4];
        v6 = *((void **)v5 + 3);
        v14 = v5;
        if ( v6 )
        {
          *((_DWORD *)v5 + 4) = 0;
          sub_80CF780(v6);
        }
        v7 = *(void **)v14;
        if ( *(_DWORD *)v14 )
        {
          *((_DWORD *)v14 + 1) = 0;
          sub_80CF780(v7);
        }
        v3 = *(char **)(a2 + 4);
        ++v4;
      }
      while ( v13 != v4 );
      v2 = a1;
    }
    *(_DWORD *)(a2 + 8) = 0;
    sub_80CF780(v3);
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  if ( *(_BYTE *)(v2 + 176) )
  {
    v8 = *(_DWORD *)(v2 + 60);
    v9 = *(_DWORD *)(v2 + 56);
    v15 = v9;
    if ( v8 << 6 )
    {
      do
      {
        if ( *(_DWORD *)(v15 + 4) == 7 )
        {
          v17 = nullptr;
          v18 = 0;
          v19 = 0;
          sub_806F910(v2 + 40, (int)&v17, v15);
          sub_806CD90((_DWORD *)a2, (int *)&v17);
          if ( v17 )
          {
            v18 = 0;
            sub_80CF780(v17);
          }
          v9 = *(_DWORD *)(v2 + 56);
          v8 = *(_DWORD *)(v2 + 60);
        }
        v15 += 64;
      }
      while ( v15 != v9 + (v8 << 6) );
    }
  }
  if ( *(_BYTE *)(v2 + 36) )
  {
    v10 = *(_DWORD *)(v2 + 20);
    v11 = *(_DWORD **)(v2 + 16);
    v16 = v11;
    if ( 56 * v10 )
    {
      do
      {
        while ( *v16 != 4 )
        {
          v16 += 14;
          if ( v16 == &v11[14 * v10] )
            goto LABEL_27;
        }
        v17 = nullptr;
        v18 = 0;
        v19 = 0;
        sub_806FD30(v2, (int)&v17, (int)v16);
        sub_806CD90((_DWORD *)a2, (int *)&v17);
        if ( v17 )
        {
          v18 = 0;
          sub_80CF780(v17);
        }
        v10 = *(_DWORD *)(v2 + 20);
        v11 = *(_DWORD **)(v2 + 16);
        v16 += 14;
      }
      while ( v16 != &v11[14 * v10] );
    }
  }
LABEL_27:
  *(_BYTE *)(a2 + 16) = 1;
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
