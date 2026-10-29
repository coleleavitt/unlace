/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70E54
// Address: 0x00070E54

//----- (00070E54) --------------------------------------------------------
int __fastcall sub_70E54(const void *a1, int a2)
{
  int addr; // r5
  unsigned int v5; // r8
  void *v6; // r7
  size_t v7; // r0
  size_t v8; // r10
  unsigned int v9; // r5
  int v10; // r10
  int v11; // r6
  int v12; // r8
  int v13; // r8
  const char *v14; // r0
  const char *v15; // r10
  size_t v16; // r0
  int v17; // r5
  size_t v18; // r9
  size_t v19; // r11
  int v20; // r0
  int v21; // r6
  _BYTE *v22; // r8
  int v23; // r0
  size_t v25; // r11
  int v26; // r0
  int v27; // r5
  _DWORD *v28; // [sp+4h] [bp-8h]

  addr = _tls_get_addr(&dword_D33C4);
  v5 = *(_DWORD *)(addr + 108);
  v6 = *(void **)(addr + 100);
  if ( a1 && (v7 = strlen((const char *)a1), (v8 = v7) != 0) )
  {
    v25 = v7 + 1;
    if ( v7 + 1 > v5 )
    {
      v6 = sub_78018(addr + 100, v6, v7 + 1, 1u);
      *(_DWORD *)(addr + 100) = v6;
    }
    v26 = _tls_get_addr(&dword_D33C4);
    *(_DWORD *)(v26 + 104) = v25;
    v28 = (_DWORD *)v26;
    memmove(v6, a1, v8);
    *(_BYTE *)(v28[25] + v8) = 0;
    v27 = v28[26];
    if ( v27 )
    {
      v11 = v27 - 1;
      v10 = v27 + 1;
      v5 = v28[27];
      v9 = v27 + 2;
      v6 = (void *)v28[25];
    }
    else
    {
      v11 = 0;
      v5 = v28[27];
      v6 = (void *)v28[25];
      v9 = 3;
      v10 = 2;
    }
  }
  else
  {
    v9 = 3;
    v10 = 2;
    v11 = 0;
    *(_DWORD *)(_tls_get_addr(&dword_D33C4) + 104) = 0;
  }
  if ( v9 > v5 )
  {
    v12 = _tls_get_addr(&dword_D33C4);
    v6 = sub_78018(v12 + 100, v6, v9, 1u);
    *(_DWORD *)(v12 + 100) = v6;
  }
  v13 = _tls_get_addr(&dword_D33C4);
  *(_DWORD *)(v13 + 104) = v9;
  *((_BYTE *)v6 + v10) = 0;
  *(_WORD *)(*(_DWORD *)(v13 + 100) + v11) = *(_WORD *)": ";
  v14 = sub_79980(a2);
  v15 = v14;
  if ( v14 )
  {
    v16 = strlen(v14);
    v17 = *(_DWORD *)(v13 + 104);
    v18 = v16;
    v19 = v16;
    if ( v17 )
    {
      --v17;
      v19 = v16 + v17;
    }
    v20 = _tls_get_addr(&dword_D33C4);
    v21 = v20;
    v22 = *(_BYTE **)(v20 + 100);
    if ( v19 + 1 > *(_DWORD *)(v20 + 108) )
    {
      v22 = sub_78018(v20 + 100, *(void **)(v20 + 100), v19 + 1, 1u);
      *(_DWORD *)(v21 + 100) = v22;
    }
    v23 = _tls_get_addr(&dword_D33C4);
    *(_DWORD *)(v23 + 104) = v19 + 1;
    v22[v19] = 0;
    memmove((void *)(*(_DWORD *)(v23 + 100) + v17), v15, v18);
  }
  return *(_DWORD *)(_tls_get_addr(&dword_D33C4) + 100);
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
