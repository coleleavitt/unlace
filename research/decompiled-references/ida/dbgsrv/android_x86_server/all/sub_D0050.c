/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0050
// Address: 0x000D0050

//----- (000D0050) --------------------------------------------------------
char *__cdecl sub_D0050(_DWORD *a1, char **a2)
{
  _BYTE *v2; // eax
  _BYTE *v3; // edi
  const char *v4; // edx
  char *v5; // ecx
  unsigned int v6; // eax
  char *v7; // eax
  size_t v8; // eax
  char *v9; // ecx
  unsigned int v10; // eax
  char *v11; // eax
  size_t v12; // eax
  _BYTE *v13; // edi
  char *v14; // ecx
  unsigned int v15; // eax
  char *v16; // eax
  size_t v17; // eax
  int v18; // ecx
  size_t v19; // edi
  unsigned int v20; // eax
  char *v21; // eax
  size_t v22; // eax
  int v23; // edi
  unsigned int v24; // eax
  char *v25; // eax
  size_t v26; // eax
  _BYTE *v27; // edi
  char *v28; // ecx
  unsigned int v29; // eax
  char *v30; // eax
  size_t v31; // eax
  char *result; // eax
  _BYTE *v33; // edx
  _BYTE *v34; // edi
  _BYTE *v35; // ecx
  char *v36; // eax
  unsigned int v37; // ecx
  char *v38; // ecx
  size_t v39; // ecx
  const void *v40; // [esp+8h] [ebp-14h]
  char *v41; // [esp+8h] [ebp-14h]

  v2 = (_BYTE *)a1[3];
  v3 = (_BYTE *)a1[4];
  if ( v3 - v2 == 1 )
  {
    if ( v2 == v3 )
    {
LABEL_6:
      v5 = a2[1];
      v6 = (unsigned int)a2[2];
      if ( (unsigned int)(v5 + 1) >= v6 )
      {
        v8 = 2 * v6;
        if ( v8 < (unsigned int)(v5 + 1) )
          v8 = (size_t)(v5 + 1);
        a2[2] = (char *)v8;
        v7 = (char *)realloc(*a2, v8);
        *a2 = v7;
        v5 = a2[1];
      }
      else
      {
        v7 = *a2;
      }
      v5[(_DWORD)v7] = 40;
      ++a2[1];
    }
    else
    {
      v4 = ">";
      while ( *v2 == *v4 )
      {
        ++v2;
        ++v4;
        if ( v3 == v2 )
          goto LABEL_6;
      }
    }
  }
  v9 = a2[1];
  v10 = (unsigned int)a2[2];
  if ( (unsigned int)(v9 + 1) >= v10 )
  {
    v12 = 2 * v10;
    if ( v12 < (unsigned int)(v9 + 1) )
      v12 = (size_t)(v9 + 1);
    a2[2] = (char *)v12;
    v11 = (char *)realloc(*a2, v12);
    *a2 = v11;
    v9 = a2[1];
  }
  else
  {
    v11 = *a2;
  }
  v9[(_DWORD)v11] = 40;
  ++a2[1];
  v13 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v13 + 12))(v13, a2);
  if ( v13[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v13 + 16))(v13, a2);
  v14 = a2[1];
  v15 = (unsigned int)a2[2];
  if ( (unsigned int)(v14 + 2) >= v15 )
  {
    v17 = 2 * v15;
    if ( v17 < (unsigned int)(v14 + 2) )
      v17 = (size_t)(v14 + 2);
    a2[2] = (char *)v17;
    v16 = (char *)realloc(*a2, v17);
    *a2 = v16;
    v14 = a2[1];
  }
  else
  {
    v16 = *a2;
  }
  *(_WORD *)&v14[(_DWORD)v16] = 8233;
  v18 = (int)(a2[1] + 2);
  a2[1] = (char *)v18;
  v19 = a1[4] - a1[3];
  if ( v19 )
  {
    v40 = (const void *)a1[3];
    v20 = (unsigned int)a2[2];
    if ( v18 + v19 >= v20 )
    {
      v22 = 2 * v20;
      if ( v22 < v18 + v19 )
        v22 = v18 + v19;
      a2[2] = (char *)v22;
      v21 = (char *)realloc(*a2, v22);
      *a2 = v21;
      v18 = (int)a2[1];
    }
    else
    {
      v21 = *a2;
    }
    memmove(&v21[v18], v40, v19);
    v23 = (int)&a2[1][v19];
    a2[1] = (char *)v23;
    v18 = v23;
  }
  v24 = (unsigned int)a2[2];
  if ( v18 + 2 >= v24 )
  {
    v26 = 2 * v24;
    if ( v26 < v18 + 2 )
      v26 = v18 + 2;
    a2[2] = (char *)v26;
    v25 = (char *)realloc(*a2, v26);
    *a2 = v25;
    v18 = (int)a2[1];
  }
  else
  {
    v25 = *a2;
  }
  *(_WORD *)&v25[v18] = 10272;
  a2[1] += 2;
  v27 = (_BYTE *)a1[5];
  (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v27 + 12))(v27, a2);
  if ( v27[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v27 + 16))(v27, a2);
  v28 = a2[1];
  v29 = (unsigned int)a2[2];
  if ( (unsigned int)(v28 + 1) >= v29 )
  {
    v31 = 2 * v29;
    if ( v31 < (unsigned int)(v28 + 1) )
      v31 = (size_t)(v28 + 1);
    a2[2] = (char *)v31;
    v30 = (char *)realloc(*a2, v31);
    *a2 = v30;
    v28 = a2[1];
  }
  else
  {
    v30 = *a2;
  }
  v28[(_DWORD)v30] = 41;
  result = a2[1];
  v41 = result + 1;
  a2[1] = result + 1;
  v33 = (_BYTE *)a1[3];
  v34 = (_BYTE *)a1[4];
  if ( v34 - v33 == 1 )
  {
    if ( v33 == v34 )
    {
LABEL_48:
      v36 = result + 2;
      v37 = (unsigned int)a2[2];
      if ( (unsigned int)v36 >= v37 )
      {
        v39 = 2 * v37;
        if ( v39 < (unsigned int)v36 )
          v39 = (size_t)v36;
        a2[2] = (char *)v39;
        result = (char *)realloc(*a2, v39);
        *a2 = result;
        v38 = a2[1];
      }
      else
      {
        result = *a2;
        v38 = v41;
      }
      v38[(_DWORD)result] = 41;
      ++a2[1];
    }
    else
    {
      v35 = (char *)&qword_13ACD8 - 309863;
      while ( *v33 == *v35 )
      {
        ++v33;
        ++v35;
        if ( v34 == v33 )
          goto LABEL_48;
      }
    }
  }
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
