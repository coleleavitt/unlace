/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5315C
// Address: 0x0005315C

//----- (0005315C) --------------------------------------------------------
void __fastcall sub_5315C(int a1, int *a2, signed int a3)
{
  int v3; // r7
  int i; // r9
  _DWORD *v7; // r6
  void *v8; // r0
  void *v9; // r0
  unsigned int v10; // r3
  int v11; // r8
  int v12; // r3
  char *v13; // r1
  char *v14; // r0
  char *v15; // r3
  int v16; // r11
  int v17; // t1
  size_t v18; // r7
  void *v19; // r9
  size_t v20; // r6
  void *v21; // r10
  int v22; // [sp+4h] [bp-10h]
  int v24; // [sp+Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 24);
  v24 = a1 + 20;
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v7 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 32 * i);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        sub_77F70(v8);
      }
      v9 = (void *)v7[2];
      if ( v9 )
      {
        v7[3] = 0;
        sub_77F70(v9);
      }
    }
  }
  v10 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 24) = 0;
  if ( a3 > v10 )
    *(_DWORD *)(a1 + 20) = sub_78018(v24, *(void **)(a1 + 20), a3, 0x20u);
  if ( a3 > 0 )
  {
    v11 = 0;
    do
    {
      v17 = *a2;
      a2 += 8;
      v16 = v17;
      v18 = *(a2 - 5);
      v19 = (void *)v18;
      v22 = *(a2 - 7);
      if ( v18 )
      {
        v19 = sub_77FEC(v18);
        memcpy(v19, (const void *)*(a2 - 6), v18);
      }
      v20 = *(a2 - 2);
      v21 = (void *)v20;
      if ( v20 )
      {
        v21 = sub_77FEC(*(a2 - 2));
        memcpy(v21, (const void *)*(a2 - 3), v20);
      }
      v12 = *(_DWORD *)(a1 + 24);
      v13 = *(char **)(a1 + 20);
      if ( (unsigned int)(v12 + 1) > *(_DWORD *)(a1 + 28) )
      {
        v14 = (char *)sub_78018(v24, v13, v12 + 1, 0x20u);
        v12 = *(_DWORD *)(a1 + 24);
        v13 = v14;
        *(_DWORD *)(a1 + 20) = v14;
      }
      ++v11;
      *(_DWORD *)&v13[32 * v12] = v16;
      v15 = &v13[32 * v12];
      *((_DWORD *)v15 + 3) = v18;
      *((_DWORD *)v15 + 4) = v18;
      *((_DWORD *)v15 + 5) = v21;
      *((_DWORD *)v15 + 6) = v20;
      *((_DWORD *)v15 + 1) = v22;
      *((_DWORD *)v15 + 2) = v19;
      *((_DWORD *)v15 + 7) = v20;
      ++*(_DWORD *)(a1 + 24);
    }
    while ( a3 != v11 );
  }
}
