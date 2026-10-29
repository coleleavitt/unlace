/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_366DA
// Address: 0x000366DA

//----- (000366DA) --------------------------------------------------------
void **__fastcall sub_366DA(void **a1, int a2)
{
  void **v4; // r0
  unsigned int v5; // r7
  void *v6; // r0
  size_t v7; // r7
  unsigned int v8; // r7
  size_t v9; // r2
  const void *v10; // r1
  void *v11; // r0
  size_t v12; // r7
  void *v13; // r2
  void *v14; // r3
  void *v15; // r2
  void *v16; // r3
  void *v17; // r0
  const void *v19; // [sp+4h] [bp-Ch]
  const void *v20; // [sp+4h] [bp-Ch]
  void **v21; // [sp+Ch] [bp-4h]

  memset(a1, 0, 0x30u);
  v4 = a1 + 3;
  if ( a1 != (void **)a2 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 < 2 )
    {
      a1[1] = nullptr;
    }
    else
    {
      v19 = *(const void **)a2;
      v6 = qvector_reserve((int)a1, nullptr, v5, 1u);
      *a1 = v6;
      a1[1] = (void *)v5;
      v7 = v5 - 1;
      memmove(v6, v19, v7);
      *((_BYTE *)*a1 + v7) = 0;
      v4 = a1 + 3;
    }
    v8 = *(_DWORD *)(a2 + 16);
    v9 = v8 - 1;
    if ( v8 < 2 )
    {
      a1[4] = nullptr;
    }
    else
    {
      v10 = *(const void **)(a2 + 12);
      if ( (unsigned int)a1[5] >= v8 )
      {
        v11 = *v4;
      }
      else
      {
        v20 = *(const void **)(a2 + 12);
        v21 = v4;
        v11 = qvector_reserve((int)v4, *v4, v8, 1u);
        *v21 = v11;
        v9 = v8 - 1;
        v10 = v20;
      }
      a1[4] = (void *)v8;
      v12 = v9;
      memmove(v11, v10, v9);
      *((_BYTE *)a1[3] + v12) = 0;
    }
  }
  v13 = *(void **)(a2 + 28);
  v14 = *(void **)(a2 + 32);
  a1[6] = *(void **)(a2 + 24);
  a1[7] = v13;
  a1[8] = v14;
  v15 = *(void **)(a2 + 40);
  v16 = *(void **)(a2 + 44);
  a1[9] = *(void **)(a2 + 36);
  a1[10] = v15;
  a1[11] = v16;
  v17 = *(void **)(a2 + 48);
  a1[13] = *(void **)(a2 + 52);
  a1[12] = v17;
  a1[14] = *(void **)(a2 + 56);
  a1[15] = *(void **)(a2 + 60);
  *((_BYTE *)a1 + 64) = *(_BYTE *)(a2 + 64);
  *((_BYTE *)a1 + 65) = *(_BYTE *)(a2 + 65);
  *((_BYTE *)a1 + 66) = *(_BYTE *)(a2 + 66);
  return a1;
}
