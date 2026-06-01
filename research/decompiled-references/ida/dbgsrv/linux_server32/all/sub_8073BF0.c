/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8073BF0
// Address: 0x08073BF0

//----- (08073BF0) --------------------------------------------------------
int __cdecl sub_8073BF0(_DWORD *a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  _BYTE *v10; // ecx
  size_t v12; // edi
  const void *v13; // [esp-38h] [ebp-38h]
  int v14; // [esp-30h] [ebp-30h]
  _BYTE *v15; // [esp-2Ch] [ebp-2Ch] BYREF
  int v16; // [esp-28h] [ebp-28h]
  int v17; // [esp-24h] [ebp-24h]
  unsigned int v18; // [esp-20h] [ebp-20h]

  v2 = a1[6];
  v3 = a1[11];
  v18 = __readgsdword(0x14u);
  v4 = (a1[2] == 0) + a1[2] - 1;
  if ( v2 < 0 )
  {
    v5 = v2 + (a1[2] == 0) + a1[2];
    v2 = (a1[2] == 0) + a1[2] - 1;
    if ( v5 <= v4 )
      v2 = v5;
    if ( v5 < 0 )
      v2 = 0;
  }
  if ( v3 < 0 )
  {
    v3 += (a1[2] == 0) + a1[2];
    if ( v3 < 0 )
    {
LABEL_9:
      v8 = 0;
      v9 = 0;
      v10 = nullptr;
      goto LABEL_10;
    }
    if ( v3 > v4 )
      v3 = (a1[2] == 0) + a1[2] - 1;
  }
  v6 = v3 - v2;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  if ( v6 <= 0 )
    goto LABEL_9;
  v7 = v4 - v2;
  if ( v7 <= 0 )
    goto LABEL_9;
  if ( v6 <= v7 )
    v7 = v6;
  v13 = (const void *)(a1[1] + v2);
  v12 = v7;
  v14 = v7 + 1;
  v15 = sub_80CF920((int)&v15, nullptr, v7 + 1, 1u);
  v16 = v14;
  v15[v12] = 0;
  memmove(v15, v13, v12);
  v10 = v15;
  v9 = v16;
  v8 = v17;
LABEL_10:
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 4) = v10;
  *(_DWORD *)(a2 + 8) = v9;
  *(_DWORD *)(a2 + 12) = v8;
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 0;
}
