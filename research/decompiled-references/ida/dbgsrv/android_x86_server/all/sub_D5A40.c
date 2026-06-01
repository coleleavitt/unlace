/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5A40
// Address: 0x000D5A40

//----- (000D5A40) --------------------------------------------------------
char __cdecl sub_D5A40(int a1, void **a2)
{
  char *v2; // ecx
  unsigned int v3; // eax
  int v4; // edi
  void *v5; // eax
  size_t v6; // eax
  void **v7; // edx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // eax
  int v12; // ecx
  size_t v13; // eax
  _BYTE *v14; // esi
  void **v15; // edi
  int v16; // ebx
  void **v17; // esi
  unsigned int v18; // eax
  _BYTE *v19; // eax
  size_t v20; // eax
  void **v21; // edx
  int v22; // eax
  int v23; // eax
  char *v24; // ecx
  unsigned int v25; // eax
  void **v26; // esi
  char *v27; // eax
  size_t v28; // eax
  _BYTE *v29; // ecx
  unsigned int v30; // eax
  void **v31; // esi
  void *v32; // eax
  size_t v33; // eax
  _BYTE *v34; // ecx
  unsigned int v35; // eax
  void **v36; // esi
  void *v37; // eax
  size_t v38; // eax
  int v39; // eax
  char *v40; // ecx
  unsigned int v41; // eax
  void **v42; // esi
  char *v43; // eax
  _BYTE *v44; // ecx
  unsigned int v45; // eax
  void **v46; // esi
  void *v47; // eax
  size_t v48; // eax
  size_t v49; // eax
  _BYTE *v50; // esi
  int v52; // [esp+Ch] [ebp-20h]
  char v53; // [esp+10h] [ebp-1Ch]
  int v54; // [esp+14h] [ebp-18h]
  int v55; // [esp+18h] [ebp-14h]

  v2 = (char *)a2[1];
  v3 = (unsigned int)a2[2];
  v4 = a1;
  if ( (unsigned int)(v2 + 1) >= v3 )
  {
    v6 = 2 * v3;
    if ( v6 < (unsigned int)(v2 + 1) )
      v6 = (size_t)(v2 + 1);
    a2[2] = (void *)v6;
    v5 = realloc(*a2, v6);
    *a2 = v5;
    v2 = (char *)a2[1];
  }
  else
  {
    v5 = *a2;
  }
  v7 = a2;
  v2[(_DWORD)v5] = 40;
  v8 = (int)a2[1] + 1;
  a2[1] = (void *)v8;
  if ( *(_DWORD *)(a1 + 20) )
  {
    v52 = 0;
    v53 = 1;
    do
    {
      v9 = v8;
      if ( (v53 & 1) == 0 )
      {
        v10 = (unsigned int)v7[2];
        if ( v8 + 2 >= v10 )
        {
          v13 = 2 * v10;
          if ( v13 < v8 + 2 )
            v13 = v8 + 2;
          v7[2] = (void *)v13;
          v11 = (char *)realloc(*v7, v13);
          v7 = a2;
          *a2 = v11;
          v12 = (int)a2[1];
        }
        else
        {
          v11 = (char *)*v7;
          v12 = v8;
        }
        *(_WORD *)&v11[v12] = 8236;
        v9 = (int)v7[1] + 2;
        v7[1] = (void *)v9;
      }
      v55 = v9;
      v54 = v8;
      v14 = *(_BYTE **)(*(_DWORD *)(v4 + 16) + 4 * v52);
      v15 = v7;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v14 + 12))(v14, v7);
      if ( v14[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v14 + 16))(v14, v15);
      v16 = (int)v15[1];
      v7 = v15;
      if ( v55 == v16 )
      {
        v8 = v54;
        v15[1] = (void *)v54;
        v16 = v54;
      }
      else
      {
        v53 = 0;
        v8 = (int)v15[1];
      }
      ++v52;
      v4 = a1;
    }
    while ( v52 != *(_DWORD *)(a1 + 20) );
  }
  else
  {
    v16 = v8;
  }
  v17 = v7;
  v18 = (unsigned int)v7[2];
  if ( v16 + 1 >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < v16 + 1 )
      v20 = v16 + 1;
    v7[2] = (void *)v20;
    v19 = realloc(*v7, v20);
    *v17 = v19;
    v16 = (int)v17[1];
  }
  else
  {
    v19 = *v7;
  }
  v21 = v17;
  v19[v16] = 41;
  v17[1] = (char *)v17[1] + 1;
  v22 = *(_DWORD *)(v4 + 8);
  if ( v22 )
  {
    (*(void (__cdecl **)(int, void **))(*(_DWORD *)v22 + 16))(v22, v17);
    v21 = a2;
  }
  v23 = *(_DWORD *)(v4 + 28);
  if ( (v23 & 1) != 0 )
  {
    v24 = (char *)v21[1];
    v25 = (unsigned int)v21[2];
    v26 = v21;
    if ( (unsigned int)(v24 + 6) >= v25 )
    {
      v28 = 2 * v25;
      if ( v28 < (unsigned int)(v24 + 6) )
        v28 = (size_t)(v24 + 6);
      v21[2] = (void *)v28;
      v27 = (char *)realloc(*v21, v28);
      *v26 = v27;
      v24 = (char *)v26[1];
    }
    else
    {
      v27 = (char *)*v21;
    }
    v21 = v26;
    *(_WORD *)&v24[(_DWORD)v27 + 4] = 29811;
    *(_DWORD *)&v24[(_DWORD)v27] = 1852793632;
    v26[1] = (char *)v26[1] + 6;
    v23 = *(_DWORD *)(v4 + 28);
    if ( (v23 & 2) == 0 )
    {
LABEL_32:
      if ( (v23 & 4) == 0 )
        goto LABEL_52;
      goto LABEL_46;
    }
  }
  else if ( (v23 & 2) == 0 )
  {
    goto LABEL_32;
  }
  v29 = v21[1];
  v30 = (unsigned int)v21[2];
  v31 = v21;
  if ( (unsigned int)(v29 + 9) >= v30 )
  {
    v33 = 2 * v30;
    if ( v33 < (unsigned int)(v29 + 9) )
      v33 = (size_t)(v29 + 9);
    v21[2] = (void *)v33;
    v32 = realloc(*v21, v33);
    *v31 = v32;
    v29 = v31[1];
  }
  else
  {
    v32 = *v21;
  }
  v21 = v31;
  v29[(_DWORD)v32 + 8] = 101;
  *(_DWORD *)&v29[(_DWORD)v32 + 4] = 1818850401;
  *(_DWORD *)&v29[(_DWORD)v32] = 1819244064;
  v31[1] = (char *)v31[1] + 9;
  if ( (*(_DWORD *)(v4 + 28) & 4) != 0 )
  {
LABEL_46:
    v34 = v21[1];
    v35 = (unsigned int)v21[2];
    v36 = v21;
    if ( (unsigned int)(v34 + 9) >= v35 )
    {
      v38 = 2 * v35;
      if ( v38 < (unsigned int)(v34 + 9) )
        v38 = (size_t)(v34 + 9);
      v21[2] = (void *)v38;
      v37 = realloc(*v21, v38);
      *v36 = v37;
      v34 = v36[1];
    }
    else
    {
      v37 = *v21;
    }
    v21 = v36;
    v34[(_DWORD)v37 + 8] = 116;
    *(_DWORD *)&v34[(_DWORD)v37 + 4] = 1667854964;
    *(_DWORD *)&v34[(_DWORD)v37] = 1936028192;
    v36[1] = (char *)v36[1] + 9;
  }
LABEL_52:
  LOBYTE(v39) = *(_BYTE *)(v4 + 32);
  if ( (_BYTE)v39 == 2 )
  {
    v44 = v21[1];
    v45 = (unsigned int)v21[2];
    v46 = v21;
    if ( (unsigned int)(v44 + 3) >= v45 )
    {
      v49 = 2 * v45;
      if ( v49 < (unsigned int)(v44 + 3) )
        v49 = (size_t)(v44 + 3);
      v21[2] = (void *)v49;
      v47 = realloc(*v21, v49);
      *v46 = v47;
      v44 = v46[1];
    }
    else
    {
      v47 = *v21;
    }
    v21 = v46;
    v44[(_DWORD)v47 + 2] = 38;
    *(_WORD *)&v44[(_DWORD)v47] = 9760;
    v39 = 3;
    goto LABEL_66;
  }
  if ( (_BYTE)v39 == 1 )
  {
    v40 = (char *)v21[1];
    v41 = (unsigned int)v21[2];
    v42 = v21;
    if ( (unsigned int)(v40 + 2) >= v41 )
    {
      v48 = 2 * v41;
      if ( v48 < (unsigned int)(v40 + 2) )
        v48 = (size_t)(v40 + 2);
      v21[2] = (void *)v48;
      v43 = (char *)realloc(*v21, v48);
      *v42 = v43;
      v40 = (char *)v42[1];
    }
    else
    {
      v43 = (char *)*v21;
    }
    v21 = v42;
    *(_WORD *)&v40[(_DWORD)v43] = 9760;
    v39 = 2;
LABEL_66:
    v21[1] = (char *)v21[1] + v39;
  }
  v50 = *(_BYTE **)(v4 + 24);
  if ( v50 )
  {
    LOBYTE(v39) = (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v50 + 12))(v50, v21);
    if ( v50[5] != 1 )
      LOBYTE(v39) = (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v50 + 16))(v50, a2);
  }
  return v39;
}
