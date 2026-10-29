/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: quote_cmdline_arg
// Address: 0x0009EA40

//----- (0009EA40) --------------------------------------------------------
char __cdecl quote_cmdline_arg(int a1)
{
  int v1; // esi
  char *v2; // edx
  char *v3; // edi
  char *v4; // eax
  char v5; // cl
  unsigned int v6; // eax
  unsigned int v7; // esi
  char *v8; // edi
  char *v9; // eax
  unsigned int v10; // ecx
  char *v11; // eax
  char v12; // cl
  char v13; // al
  _BYTE *v14; // eax
  unsigned int v15; // esi
  char *v16; // eax
  unsigned int v17; // edi
  char *v18; // esi
  _BYTE *v19; // eax
  unsigned int v20; // esi
  char *v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  char *v25; // eax
  char v26; // [esp+0h] [ebp-2Ch]
  char *v27; // [esp+0h] [ebp-2Ch]
  char *v28; // [esp+0h] [ebp-2Ch]
  char v29; // [esp+0h] [ebp-2Ch]
  unsigned int v30; // [esp+4h] [ebp-28h]
  int v31; // [esp+8h] [ebp-24h] BYREF
  unsigned int v32; // [esp+Ch] [ebp-20h]
  unsigned int v33; // [esp+10h] [ebp-1Ch]
  unsigned int v34; // [esp+18h] [ebp-14h]

  v34 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    v2 = *(char **)a1;
  else
    v2 = byte_EF875;
  if ( *v2 )
  {
    v3 = v2;
    v26 = *v2;
    v4 = strpbrk(v2, " \t?*[]()<>;&$|^#");
    v5 = v26;
    v2 = v3;
    if ( !v4 )
    {
      v25 = v3 + 1;
      while ( v5 != 39 && v5 != 34 )
      {
        v5 = *v25++;
        if ( !v5 )
          return 0;
      }
    }
  }
  v6 = v1 + 1;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( !v1 )
    v6 = 2;
  v7 = 0;
  if ( v6 )
  {
    v8 = v2;
    v9 = (char *)qvector_reserve((int)&v31, nullptr, v6, 1u);
    v31 = (int)v9;
    v10 = v33;
    if ( v32 )
      v7 = v32 - 1;
    v2 = v8;
  }
  else
  {
    v10 = 0;
    v9 = nullptr;
  }
  if ( v10 < v7 + 2 )
  {
    v27 = v2;
    v9 = (char *)qvector_reserve((int)&v31, v9, v7 + 2, 1u);
    v31 = (int)v9;
    v2 = v27;
  }
  v32 = v7 + 2;
  v11 = &v9[v7];
  v12 = 39;
  while ( 1 )
  {
    *v11 = v12;
    *(_BYTE *)(v31 + v7 + 1) = 0;
    v13 = *v2;
    if ( *v2 > 38 )
    {
      if ( v13 != 92 && v13 != 39 )
        goto LABEL_27;
      goto LABEL_22;
    }
    if ( v13 != 34 )
      break;
LABEL_22:
    v14 = (_BYTE *)v31;
    v15 = v32 - 1;
    if ( !v32 )
      v15 = 0;
    if ( v33 < v15 + 2 )
    {
      v28 = v2;
      v14 = qvector_reserve((int)&v31, (void *)v31, v15 + 2, 1u);
      v31 = (int)v14;
      v2 = v28;
    }
    v32 = v15 + 2;
    v14[v15] = 92;
    *(_BYTE *)(v31 + v15 + 1) = 0;
    v13 = *v2;
LABEL_27:
    v29 = v13;
    v16 = (char *)v31;
    v7 = v32 - 1;
    if ( !v32 )
      v7 = 0;
    v17 = v7 + 2;
    if ( v33 < v7 + 2 )
    {
      v30 = v7;
      v18 = v2;
      v16 = (char *)qvector_reserve((int)&v31, (void *)v31, v17, 1u);
      v31 = (int)v16;
      v2 = v18;
      v7 = v30;
    }
    v12 = v29;
    ++v2;
    v32 = v17;
    v11 = &v16[v7];
  }
  if ( v13 )
    goto LABEL_27;
  v19 = (_BYTE *)v31;
  v20 = v32 - 1;
  if ( !v32 )
    v20 = 0;
  if ( v33 < v20 + 2 )
  {
    v19 = qvector_reserve((int)&v31, (void *)v31, v20 + 2, 1u);
    v31 = (int)v19;
  }
  v32 = v20 + 2;
  v19[v20] = 39;
  *(_BYTE *)(v31 + v20 + 1) = 0;
  v21 = *(char **)a1;
  v22 = *(_DWORD *)(a1 + 4);
  v23 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v31;
  *(_DWORD *)(a1 + 4) = v32;
  *(_DWORD *)(a1 + 8) = v33;
  v31 = (int)v21;
  v32 = v22;
  v33 = v23;
  if ( v21 )
  {
    v32 = 0;
    qfree(v21);
    v31 = 0;
    v33 = 0;
  }
  return 1;
}
