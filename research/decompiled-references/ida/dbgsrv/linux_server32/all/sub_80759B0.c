/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80759B0
// Address: 0x080759B0

//----- (080759B0) --------------------------------------------------------
int __cdecl sub_80759B0(int a1)
{
  int v1; // ecx
  void **v2; // esi
  _BYTE *v3; // edi
  unsigned int v4; // edx
  void *v5; // eax
  unsigned int v6; // esi
  size_t v7; // edx
  void **v8; // edi
  void *v9; // ecx
  void *v10; // eax
  int v12; // [esp+0h] [ebp-28h]
  unsigned int v13; // [esp+0h] [ebp-28h]
  unsigned int v14; // [esp+4h] [ebp-24h]
  size_t v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+8h] [ebp-20h]
  void *v17; // [esp+8h] [ebp-20h]

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
  v2 = *(void ***)(v1 + 8);
  v3 = v2[1];
  if ( !v3 )
  {
    v12 = 1;
    v5 = *v2;
    v4 = 2;
    if ( (unsigned int)v2[2] >= 2 )
      goto LABEL_3;
LABEL_12:
    v16 = *(_DWORD *)(*(_DWORD *)(a1 + 188) + 4 * *(_DWORD *)(a1 + 192) - 4);
    v14 = v4;
    v5 = sub_80CF920((int)v2, v5, v4, 1u);
    v1 = v16;
    v4 = v14;
    *v2 = v5;
    goto LABEL_3;
  }
  v12 = (int)v2[1];
  v4 = (unsigned int)(v3 + 1);
  v5 = *v2;
  --v3;
  if ( (unsigned int)v2[2] < v4 )
    goto LABEL_12;
LABEL_3:
  v2[1] = (void *)v4;
  v3[(_DWORD)v5] = 46;
  *((_BYTE *)*v2 + v12) = 0;
  v6 = *(_DWORD *)(a1 + 24);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v6 != 1 )
    {
      v8 = *(void ***)(v1 + 8);
      v13 = v6 - 1;
      v9 = v8[1];
      if ( v9 )
      {
        v9 = (char *)v9 - 1;
        v13 = (unsigned int)v9 + v7;
        v6 += (unsigned int)v9;
      }
      v10 = *v8;
      if ( (unsigned int)v8[2] < v6 )
      {
        v17 = v9;
        v15 = v7;
        v10 = sub_80CF920((int)v8, v10, v6, 1u);
        v9 = v17;
        v7 = v15;
        *v8 = v10;
      }
      v8[1] = (void *)v6;
      *((_BYTE *)v10 + v13) = 0;
      memcpy((char *)v9 + (_DWORD)*v8, *(const void **)(a1 + 20), v7);
    }
  }
  return 0;
}
