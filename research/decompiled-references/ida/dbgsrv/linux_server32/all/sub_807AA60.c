/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807AA60
// Address: 0x0807AA60

//----- (0807AA60) --------------------------------------------------------
int __cdecl sub_807AA60(int a1, char *s2, char a3, int a4)
{
  unsigned int v4; // eax
  void **v5; // ebp
  _BYTE *v6; // edx
  void *v7; // eax
  int v8; // eax
  size_t v9; // ebp
  int v10; // ebp
  int v11; // eax
  void **v12; // edi
  _BYTE *v13; // edx
  void *v14; // eax
  int v16; // ecx
  char *v17; // eax
  int v18; // eax
  int v19; // edi
  char *v20; // ecx
  int v21; // eax
  char v22; // bp
  char v23; // al
  void **v24; // edi
  _BYTE *v25; // edx
  void *v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // edx
  char *v30; // eax
  int v31; // edx
  char *v32; // eax
  int v33; // eax
  int v34; // ecx
  char *v35; // edx
  int v36; // eax
  void **v37; // edi
  _BYTE *v38; // edx
  void *v39; // eax
  int v40; // [esp-14h] [ebp-38h]
  int v41; // [esp-10h] [ebp-34h]
  int v42; // [esp-Ch] [ebp-30h]
  int v43; // [esp+0h] [ebp-24h]
  int v44; // [esp+0h] [ebp-24h]
  size_t v45; // [esp+4h] [ebp-20h]

  v4 = *(_DWORD *)s2;
  if ( *(_DWORD *)s2 > 4u )
  {
    if ( v4 != 5 )
      goto LABEL_42;
    v18 = sub_807AA60(a1, *((char **)s2 + 2), 0, 0);
    v19 = *((_DWORD *)s2 + 1);
    v20 = (char *)&dword_80DDFD8;
    v44 = v18;
    v21 = *(_DWORD *)(v19 + 4);
    if ( v21 )
    {
      v20 = *(char **)v19;
      --v21;
    }
    v22 = a3 - 14;
    sub_8078F10(a1, v20, v21);
    if ( a4 )
      v22 = (a4 <= 0) - 11;
    v23 = v22;
LABEL_21:
    v24 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = v23;
    v25 = v24[1];
    v26 = *v24;
    if ( v24[2] < v25 + 1 )
    {
      v26 = sub_80CF920((int)v24, v26, (unsigned int)(v25 + 1), 1u);
      v25 = v24[1];
      *v24 = v26;
    }
    v25[(_DWORD)v26] = v22;
    v24[1] = (char *)v24[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    return v44;
  }
  if ( v4 > 2 )
  {
    v27 = *((_DWORD *)s2 + 2);
    if ( a3 && *(_DWORD *)v27 == 1 )
    {
      v31 = *(_DWORD *)(v27 + 8);
      v32 = (char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v31 + 4) )
        v32 = *(char **)v31;
      v44 = sub_807A930((int *)a1, v32);
    }
    else
    {
      v44 = sub_807AA60(a1, (char *)v27, 0, 0);
    }
    v28 = *((_DWORD *)s2 + 1);
    v45 = *(_DWORD *)(v28 + 4);
    sub_807FAE0(*(char ***)(a1 + 108), *(const void **)v28, v45);
    *(_DWORD *)(a1 + 112) += v45;
    v23 = a3 - 2;
    if ( *(_DWORD *)s2 == 3 )
    {
      v23 = -4 - a3;
      v22 = -4 - a3;
    }
    else
    {
      v22 = a3 - 2;
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    v16 = *((_DWORD *)s2 + 2);
    v17 = (char *)&dword_80DDFD8;
    if ( *(_DWORD *)(v16 + 4) )
      v17 = *(char **)v16;
    return sub_807A1C0(a1, v17, a3, a4);
  }
  if ( v4 != 2 )
  {
LABEL_42:
    if ( !byte_811F8A1 )
      sub_80CFF40(273, v40, v41, v42);
    BUG();
  }
  v5 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -86;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < v6 + 1 )
  {
    v7 = sub_80CF920((int)v5, v7, (unsigned int)(v6 + 1), 1u);
    v6 = v5[1];
    *v5 = v7;
  }
  v6[(_DWORD)v7] = -86;
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  v8 = *((_DWORD *)s2 + 1);
  v9 = *(_DWORD *)(v8 + 4);
  sub_807FAE0(*(char ***)(a1 + 108), *(const void **)v8, v9);
  *(_DWORD *)(a1 + 112) += v9;
  v10 = *((_DWORD *)s2 + 2);
  if ( *(_DWORD *)v10 != 1 )
  {
    if ( *(_DWORD *)v10 != 5 )
    {
      v11 = sub_807AA60(a1, (char *)v10, 0, 0);
      v12 = *(void ***)(a1 + 108);
      *(_BYTE *)(a1 + 116) = -92;
      v43 = v11;
      v13 = v12[1];
      v14 = *v12;
      if ( v12[2] < v13 + 1 )
      {
        v14 = sub_80CF920((int)v12, v14, (unsigned int)(v13 + 1), 1u);
        v13 = v12[1];
        *v12 = v14;
      }
      v13[(_DWORD)v14] = -92;
      v12[1] = (char *)v12[1] + 1;
      ++*(_DWORD *)(a1 + 112);
      return v43;
    }
    v33 = sub_807AA60(a1, *(char **)(v10 + 8), 0, 0);
    v34 = *(_DWORD *)(v10 + 4);
    v35 = (char *)&dword_80DDFD8;
    v44 = v33;
    v36 = *(_DWORD *)(v34 + 4);
    if ( v36 )
    {
      v35 = *(char **)v34;
      --v36;
    }
    sub_8078F10(a1, v35, v36);
    v37 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -9;
    v38 = v37[1];
    v39 = *v37;
    if ( v37[2] < v38 + 1 )
    {
      v39 = sub_80CF920((int)v37, v39, (unsigned int)(v38 + 1), 1u);
      v38 = v37[1];
      *v37 = v39;
    }
    v38[(_DWORD)v39] = -9;
    v37[1] = (char *)v37[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    return v44;
  }
  v29 = *(_DWORD *)(v10 + 8);
  v30 = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v29 + 4) )
    v30 = *(char **)v29;
  return sub_807A580(a1, v30, *((_DWORD *)s2 + 3));
}
// 807AE06: variable 'v40' is possibly undefined
// 807AE06: variable 'v41' is possibly undefined
// 807AE06: variable 'v42' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
