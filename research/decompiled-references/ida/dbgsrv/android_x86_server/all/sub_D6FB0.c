/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6FB0
// Address: 0x000D6FB0

//----- (000D6FB0) --------------------------------------------------------
char __cdecl sub_D6FB0(int a1, void **a2)
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
  int v20; // ecx
  size_t v21; // eax
  void **v22; // edx
  int v23; // eax
  char *v24; // ecx
  unsigned int v25; // eax
  char *v26; // eax
  size_t v27; // eax
  _BYTE *v28; // ecx
  unsigned int v29; // eax
  void **v30; // esi
  void *v31; // eax
  size_t v32; // eax
  _BYTE *v33; // ecx
  unsigned int v34; // eax
  void **v35; // esi
  void *v36; // eax
  size_t v37; // eax
  int v38; // eax
  char *v39; // ecx
  unsigned int v40; // eax
  void **v41; // esi
  char *v42; // eax
  _BYTE *v43; // ecx
  unsigned int v44; // eax
  void **v45; // esi
  void *v46; // eax
  size_t v47; // eax
  size_t v48; // eax
  int v49; // esi
  void **v50; // edi
  _BYTE *v51; // edx
  unsigned int v52; // eax
  size_t v53; // ecx
  void *v54; // eax
  size_t v55; // eax
  _BYTE *v56; // esi
  int v58; // [esp+Ch] [ebp-20h]
  char v59; // [esp+10h] [ebp-1Ch]
  int v60; // [esp+14h] [ebp-18h]
  int v61; // [esp+18h] [ebp-14h]

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
  if ( *(_DWORD *)(a1 + 16) )
  {
    v58 = 0;
    v59 = 1;
    do
    {
      v9 = v8;
      if ( (v59 & 1) == 0 )
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
      v61 = v9;
      v60 = v8;
      v14 = *(_BYTE **)(*(_DWORD *)(v4 + 12) + 4 * v58);
      v15 = v7;
      (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v14 + 12))(v14, v7);
      if ( v14[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v14 + 16))(v14, v15);
      v16 = (int)v15[1];
      v7 = v15;
      if ( v61 == v16 )
      {
        v8 = v60;
        v15[1] = (void *)v60;
        v16 = v60;
      }
      else
      {
        v59 = 0;
        v8 = (int)v15[1];
      }
      ++v58;
      v4 = a1;
    }
    while ( v58 != *(_DWORD *)(a1 + 16) );
  }
  else
  {
    v16 = v8;
  }
  v17 = v7;
  v18 = (unsigned int)v7[2];
  if ( v16 + 1 >= v18 )
  {
    v21 = 2 * v18;
    if ( v21 < v16 + 1 )
      v21 = v16 + 1;
    v7[2] = (void *)v21;
    v19 = realloc(*v7, v21);
    *v17 = v19;
    v20 = (int)v17[1];
  }
  else
  {
    v19 = *v7;
    v20 = v16;
  }
  v19[v20] = 41;
  v17[1] = (char *)v17[1] + 1;
  (*(void (__cdecl **)(_DWORD, void **))(**(_DWORD **)(v4 + 8) + 16))(*(_DWORD *)(v4 + 8), v17);
  v22 = a2;
  v23 = *(_DWORD *)(v4 + 20);
  if ( (v23 & 1) != 0 )
  {
    v24 = (char *)a2[1];
    v25 = (unsigned int)a2[2];
    if ( (unsigned int)(v24 + 6) >= v25 )
    {
      v27 = 2 * v25;
      if ( v27 < (unsigned int)(v24 + 6) )
        v27 = (size_t)(v24 + 6);
      a2[2] = (void *)v27;
      v26 = (char *)realloc(*a2, v27);
      *a2 = v26;
      v24 = (char *)a2[1];
    }
    else
    {
      v26 = (char *)*a2;
    }
    v22 = a2;
    *(_WORD *)&v24[(_DWORD)v26 + 4] = 29811;
    *(_DWORD *)&v24[(_DWORD)v26] = 1852793632;
    a2[1] = (char *)a2[1] + 6;
    v23 = *(_DWORD *)(v4 + 20);
    if ( (v23 & 2) == 0 )
    {
LABEL_30:
      if ( (v23 & 4) == 0 )
        goto LABEL_50;
      goto LABEL_44;
    }
  }
  else if ( (v23 & 2) == 0 )
  {
    goto LABEL_30;
  }
  v28 = v22[1];
  v29 = (unsigned int)v22[2];
  v30 = v22;
  if ( (unsigned int)(v28 + 9) >= v29 )
  {
    v32 = 2 * v29;
    if ( v32 < (unsigned int)(v28 + 9) )
      v32 = (size_t)(v28 + 9);
    v22[2] = (void *)v32;
    v31 = realloc(*v22, v32);
    *v30 = v31;
    v28 = v30[1];
  }
  else
  {
    v31 = *v22;
  }
  v22 = v30;
  v28[(_DWORD)v31 + 8] = 101;
  *(_DWORD *)&v28[(_DWORD)v31 + 4] = 1818850401;
  *(_DWORD *)&v28[(_DWORD)v31] = 1819244064;
  v30[1] = (char *)v30[1] + 9;
  if ( (*(_DWORD *)(v4 + 20) & 4) != 0 )
  {
LABEL_44:
    v33 = v22[1];
    v34 = (unsigned int)v22[2];
    v35 = v22;
    if ( (unsigned int)(v33 + 9) >= v34 )
    {
      v37 = 2 * v34;
      if ( v37 < (unsigned int)(v33 + 9) )
        v37 = (size_t)(v33 + 9);
      v22[2] = (void *)v37;
      v36 = realloc(*v22, v37);
      *v35 = v36;
      v33 = v35[1];
    }
    else
    {
      v36 = *v22;
    }
    v22 = v35;
    v33[(_DWORD)v36 + 8] = 116;
    *(_DWORD *)&v33[(_DWORD)v36 + 4] = 1667854964;
    *(_DWORD *)&v33[(_DWORD)v36] = 1936028192;
    v35[1] = (char *)v35[1] + 9;
  }
LABEL_50:
  LOBYTE(v38) = *(_BYTE *)(v4 + 24);
  if ( (_BYTE)v38 == 2 )
  {
    v43 = v22[1];
    v44 = (unsigned int)v22[2];
    v45 = v22;
    if ( (unsigned int)(v43 + 3) >= v44 )
    {
      v48 = 2 * v44;
      if ( v48 < (unsigned int)(v43 + 3) )
        v48 = (size_t)(v43 + 3);
      v22[2] = (void *)v48;
      v46 = realloc(*v22, v48);
      *v45 = v46;
      v43 = v45[1];
    }
    else
    {
      v46 = *v22;
    }
    v22 = v45;
    v43[(_DWORD)v46 + 2] = 38;
    *(_WORD *)&v43[(_DWORD)v46] = 9760;
    v38 = 3;
  }
  else
  {
    if ( (_BYTE)v38 != 1 )
      goto LABEL_65;
    v39 = (char *)v22[1];
    v40 = (unsigned int)v22[2];
    v41 = v22;
    if ( (unsigned int)(v39 + 2) >= v40 )
    {
      v47 = 2 * v40;
      if ( v47 < (unsigned int)(v39 + 2) )
        v47 = (size_t)(v39 + 2);
      v22[2] = (void *)v47;
      v42 = (char *)realloc(*v22, v47);
      *v41 = v42;
      v39 = (char *)v41[1];
    }
    else
    {
      v42 = (char *)*v22;
    }
    v22 = v41;
    *(_WORD *)&v39[(_DWORD)v42] = 9760;
    v38 = 2;
  }
  v22[1] = (char *)v22[1] + v38;
LABEL_65:
  if ( *(_DWORD *)(v4 + 28) )
  {
    v49 = v4;
    v50 = v22;
    v51 = v22[1];
    v52 = (unsigned int)v50[2];
    v53 = (size_t)(v51 + 1);
    if ( (unsigned int)(v51 + 1) >= v52 )
    {
      v55 = 2 * v52;
      if ( v55 < v53 )
        v55 = (size_t)(v51 + 1);
      v50[2] = (void *)v55;
      v54 = realloc(*v50, v55);
      *v50 = v54;
      v51 = v50[1];
      v53 = (size_t)(v51 + 1);
    }
    else
    {
      v54 = *v50;
    }
    v50[1] = (void *)v53;
    v51[(_DWORD)v54] = 32;
    v56 = *(_BYTE **)(v49 + 28);
    LOBYTE(v38) = (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v56 + 12))(v56, v50);
    if ( v56[5] != 1 )
      LOBYTE(v38) = (*(int (__cdecl **)(_BYTE *, void **))(*(_DWORD *)v56 + 16))(v56, v50);
  }
  return v38;
}
