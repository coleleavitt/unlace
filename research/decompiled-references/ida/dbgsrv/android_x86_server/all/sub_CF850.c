/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF850
// Address: 0x000CF850

//----- (000CF850) --------------------------------------------------------
int __cdecl sub_CF850(int a1, char **a2)
{
  void **v2; // edi
  char *v3; // edx
  unsigned int v4; // eax
  size_t v5; // ecx
  int *v6; // esi
  char *v7; // eax
  size_t v8; // eax
  _BYTE *v9; // esi
  char *v10; // edx
  unsigned int v11; // eax
  size_t v12; // ecx
  char *v13; // eax
  char *v14; // edx
  unsigned int v15; // eax
  size_t v16; // ecx
  char *v17; // eax
  size_t v18; // eax
  size_t v19; // edi
  int v20; // ecx
  unsigned int v21; // eax
  char *v22; // eax
  size_t v23; // eax
  size_t v24; // edi
  int v25; // ecx
  unsigned int v26; // eax
  char *v27; // eax
  size_t v28; // eax
  size_t v29; // edi
  size_t v30; // edx
  unsigned int v31; // eax
  char *v32; // eax
  size_t v33; // eax
  char *v34; // ecx
  unsigned int v35; // eax
  char *v36; // eax
  size_t v37; // eax
  int v38; // ecx
  const void *v39; // esi
  size_t v40; // edi
  unsigned int v41; // eax
  char *v42; // eax
  size_t *v43; // esi
  size_t v44; // eax
  int v45; // edi
  size_t v46; // edx
  void **v47; // edi
  unsigned int v48; // eax
  char *v49; // eax
  size_t v50; // eax
  char *v51; // edx
  unsigned int v52; // eax
  size_t v53; // ecx
  void *v54; // eax
  size_t v55; // eax
  size_t v57; // eax
  size_t v58; // edi
  unsigned int v59; // eax
  char *v60; // eax
  size_t v61; // eax
  int v62; // ecx
  int v63; // edx
  size_t v64; // ecx
  size_t v65; // eax
  char *v66; // eax
  size_t v67; // eax
  size_t v68; // edi
  int v69; // ecx
  unsigned int v70; // eax
  char *v71; // eax
  size_t v72; // eax
  size_t v73; // edi
  size_t v74; // edx
  unsigned int v75; // eax
  char *v76; // eax
  size_t v77; // eax
  _BYTE *v78; // esi
  int *v79; // [esp+4h] [ebp-28h]
  const void *v80; // [esp+8h] [ebp-24h]
  const void *v81; // [esp+8h] [ebp-24h]
  const void *v82; // [esp+8h] [ebp-24h]
  char **v83[7]; // [esp+10h] [ebp-1Ch] BYREF

  v2 = (void **)a2;
  v83[0] = a2;
  v83[1] = (char **)a1;
  v3 = a2[1];
  v4 = (unsigned int)a2[2];
  v5 = (size_t)(v3 + 1);
  v6 = (int *)(a2 + 1);
  if ( (unsigned int)(v3 + 1) >= v4 )
  {
    v8 = 2 * v4;
    if ( v8 < v5 )
      v8 = (size_t)(v3 + 1);
    a2[2] = (char *)v8;
    v7 = (char *)realloc(*a2, v8);
    *a2 = v7;
    v3 = a2[1];
    v5 = (size_t)(v3 + 1);
  }
  else
  {
    v7 = *a2;
  }
  *v6 = v5;
  v3[(_DWORD)v7] = 40;
  v79 = (int *)(a2 + 1);
  if ( *(_BYTE *)(a1 + 24) )
  {
    v9 = *(_BYTE **)(a1 + 12);
    if ( v9 )
    {
      (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v9 + 12))(v9, a2);
      if ( v9[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v9 + 16))(v9, a2);
      v10 = a2[1];
      v11 = (unsigned int)a2[2];
      v12 = (size_t)(v10 + 1);
      if ( (unsigned int)(v10 + 1) >= v11 )
      {
        v18 = 2 * v11;
        if ( v18 < v12 )
          v18 = (size_t)(v10 + 1);
        a2[2] = (char *)v18;
        v13 = (char *)realloc(*a2, v18);
        *a2 = v13;
        v10 = a2[1];
        v12 = (size_t)(v10 + 1);
      }
      else
      {
        v13 = *a2;
      }
      *v79 = v12;
      v10[(_DWORD)v13] = 32;
      v19 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 16);
      v20 = *v79;
      if ( v19 )
      {
        v80 = *(const void **)(a1 + 16);
        v21 = (unsigned int)a2[2];
        if ( v20 + v19 >= v21 )
        {
          v28 = 2 * v21;
          if ( v28 < v20 + v19 )
            v28 = v20 + v19;
          a2[2] = (char *)v28;
          v22 = (char *)realloc(*a2, v28);
          *a2 = v22;
          v20 = (int)a2[1];
        }
        else
        {
          v22 = *a2;
        }
        memmove(&v22[v20], v80, v19);
        v29 = *v79 + v19;
        *v79 = v29;
        v20 = v29;
      }
      v30 = v20 + 1;
      v2 = (void **)a2;
      v31 = (unsigned int)a2[2];
      if ( v20 + 1 >= v31 )
      {
        v33 = 2 * v31;
        if ( v33 < v30 )
          v33 = v20 + 1;
        a2[2] = (char *)v33;
        v32 = (char *)realloc(*a2, v33);
        *a2 = v32;
        v20 = (int)a2[1];
        v30 = v20 + 1;
      }
      else
      {
        v32 = *a2;
      }
      *v79 = v30;
      v32[v20] = 32;
    }
    v34 = (char *)v2[1];
    v35 = (unsigned int)v2[2];
    if ( (unsigned int)(v34 + 4) >= v35 )
    {
      v37 = 2 * v35;
      if ( v37 < (unsigned int)(v34 + 4) )
        v37 = (size_t)(v34 + 4);
      v2[2] = (void *)v37;
      v36 = (char *)realloc(*v2, v37);
      *v2 = v36;
      v34 = (char *)v2[1];
    }
    else
    {
      v36 = (char *)*v2;
    }
    *(_DWORD *)&v34[(_DWORD)v36] = 539897390;
    v38 = *v79 + 4;
    *v79 = v38;
    v39 = *(const void **)(a1 + 16);
    v40 = *(_DWORD *)(a1 + 20) - (_DWORD)v39;
    if ( v40 )
    {
      v41 = (unsigned int)a2[2];
      if ( v38 + v40 >= v41 )
      {
        v44 = 2 * v41;
        if ( v44 < v38 + v40 )
          v44 = v38 + v40;
        a2[2] = (char *)v44;
        v42 = (char *)realloc(*a2, v44);
        *a2 = v42;
        v38 = (int)a2[1];
      }
      else
      {
        v42 = *a2;
      }
      memmove(&v42[v38], v39, v40);
      v43 = (size_t *)(a2 + 1);
      v45 = *v79 + v40;
      *v79 = v45;
      v38 = v45;
    }
    else
    {
      v43 = (size_t *)(a2 + 1);
    }
    v46 = v38 + 1;
    v47 = (void **)a2;
    v48 = (unsigned int)a2[2];
    if ( v38 + 1 >= v48 )
    {
      v50 = 2 * v48;
      if ( v50 < v46 )
        v50 = v38 + 1;
      a2[2] = (char *)v50;
      v49 = (char *)realloc(*a2, v50);
      *a2 = v49;
      v38 = (int)a2[1];
      v46 = v38 + 1;
    }
    else
    {
      v49 = *a2;
    }
    *v43 = v46;
    v49[v38] = 32;
    sub_CFD40(v83);
  }
  else
  {
    sub_CFD40(v83);
    v14 = a2[1];
    v15 = (unsigned int)a2[2];
    v16 = (size_t)(v14 + 1);
    if ( (unsigned int)(v14 + 1) >= v15 )
    {
      v23 = 2 * v15;
      if ( v23 < v16 )
        v23 = (size_t)(v14 + 1);
      a2[2] = (char *)v23;
      v17 = (char *)realloc(*a2, v23);
      *a2 = v17;
      v14 = a2[1];
      v16 = (size_t)(v14 + 1);
    }
    else
    {
      v17 = *a2;
    }
    *v6 = v16;
    v14[(_DWORD)v17] = 32;
    v24 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 16);
    v25 = *v6;
    if ( v24 )
    {
      v81 = *(const void **)(a1 + 16);
      v26 = (unsigned int)a2[2];
      if ( v25 + v24 >= v26 )
      {
        v57 = 2 * v26;
        if ( v57 < v25 + v24 )
          v57 = v25 + v24;
        a2[2] = (char *)v57;
        v27 = (char *)realloc(*a2, v57);
        *a2 = v27;
        v25 = (int)a2[1];
      }
      else
      {
        v27 = *a2;
      }
      memmove(&v27[v25], v81, v24);
      v58 = *v6 + v24;
      *v6 = v58;
      v25 = v58;
    }
    v47 = (void **)a2;
    v59 = (unsigned int)a2[2];
    if ( v25 + 4 >= v59 )
    {
      v61 = 2 * v59;
      if ( v61 < v25 + 4 )
        v61 = v25 + 4;
      a2[2] = (char *)v61;
      v60 = (char *)realloc(*a2, v61);
      *a2 = v60;
      v25 = (int)a2[1];
    }
    else
    {
      v60 = *a2;
    }
    *(_DWORD *)&v60[v25] = 774778400;
    v62 = *v6;
    v63 = *v6 + 4;
    *v6 = v63;
    if ( *(_DWORD *)(a1 + 12) )
    {
      v64 = v62 + 5;
      v65 = (size_t)a2[2];
      if ( v64 >= v65 )
      {
        v67 = 2 * v65;
        if ( v67 < v64 )
          v67 = v64;
        a2[2] = (char *)v67;
        v66 = (char *)realloc(*a2, v67);
        *a2 = v66;
        v63 = (int)a2[1];
        v64 = v63 + 1;
      }
      else
      {
        v66 = *a2;
      }
      *v6 = v64;
      v66[v63] = 32;
      v68 = *(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 16);
      v69 = *v6;
      if ( v68 )
      {
        v82 = *(const void **)(a1 + 16);
        v70 = (unsigned int)a2[2];
        if ( v69 + v68 >= v70 )
        {
          v72 = 2 * v70;
          if ( v72 < v69 + v68 )
            v72 = v69 + v68;
          a2[2] = (char *)v72;
          v71 = (char *)realloc(*a2, v72);
          *a2 = v71;
          v69 = (int)a2[1];
        }
        else
        {
          v71 = *a2;
        }
        memmove(&v71[v69], v82, v68);
        v73 = *v6 + v68;
        *v6 = v73;
        v69 = v73;
      }
      v74 = v69 + 1;
      v47 = (void **)a2;
      v75 = (unsigned int)a2[2];
      if ( v69 + 1 >= v75 )
      {
        v77 = 2 * v75;
        if ( v77 < v74 )
          v77 = v69 + 1;
        a2[2] = (char *)v77;
        v76 = (char *)realloc(*a2, v77);
        *a2 = v76;
        v69 = (int)a2[1];
        v74 = v69 + 1;
      }
      else
      {
        v76 = *a2;
      }
      a2[1] = (char *)v74;
      v76[v69] = 32;
      v78 = *(_BYTE **)(a1 + 12);
      (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v78 + 12))(v78, a2);
      if ( v78[5] != 1 )
        (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v78 + 16))(v78, a2);
    }
  }
  v51 = (char *)v47[1];
  v52 = (unsigned int)v47[2];
  v53 = (size_t)(v51 + 1);
  if ( (unsigned int)(v51 + 1) >= v52 )
  {
    v55 = 2 * v52;
    if ( v55 < v53 )
      v55 = (size_t)(v51 + 1);
    v47[2] = (void *)v55;
    v54 = realloc(*v47, v55);
    *v47 = v54;
    v51 = (char *)v47[1];
    v53 = (size_t)(v51 + 1);
  }
  else
  {
    v54 = *v47;
  }
  *v79 = v53;
  v51[(_DWORD)v54] = 41;
  return _stack_chk_guard;
}
