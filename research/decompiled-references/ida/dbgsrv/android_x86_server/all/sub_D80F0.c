/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D80F0
// Address: 0x000D80F0

//----- (000D80F0) --------------------------------------------------------
char __cdecl sub_D80F0(int a1, char **a2)
{
  int v2; // edi
  int v3; // ecx
  _BYTE *v4; // eax
  _BYTE *v5; // ebx
  _BYTE *v6; // edx
  int *v7; // ebx
  char *v8; // ecx
  unsigned int v9; // eax
  char *v10; // eax
  _BYTE *v11; // eax
  char v12; // cl
  char *v13; // ecx
  unsigned int v14; // eax
  char *v15; // eax
  size_t v16; // eax
  _BYTE *v17; // eax
  char v18; // cl
  char v19; // cl
  char *v20; // ecx
  unsigned int v21; // eax
  char *v22; // eax
  size_t v23; // eax
  char *v24; // ecx
  unsigned int v25; // eax
  char *v26; // eax
  size_t v27; // eax
  char *v28; // ecx
  char result; // al
  size_t v30; // eax
  int v31; // ecx
  const void *v32; // eax
  size_t v33; // edi
  unsigned int v34; // eax
  char *v35; // eax
  size_t v36; // eax
  int v37; // edi
  unsigned int v38; // eax
  char *v39; // eax
  size_t v40; // eax
  int *v41; // [esp+4h] [ebp-18h]
  const void *v42; // [esp+8h] [ebp-14h]

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 4) == 10 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    if ( *(_BYTE *)(v3 + 4) == 7 )
    {
      v4 = *(_BYTE **)(v3 + 8);
      v5 = *(_BYTE **)(v3 + 12);
      if ( v5 - v4 == 11 )
      {
        if ( v4 == v5 )
        {
LABEL_8:
          v7 = (int *)(a2 + 1);
          v8 = a2[1];
          v9 = (unsigned int)a2[2];
          v41 = (int *)(a2 + 1);
          if ( (unsigned int)(v8 + 3) >= v9 )
          {
            v30 = 2 * v9;
            if ( v30 < (unsigned int)(v8 + 3) )
              v30 = (size_t)(v8 + 3);
            a2[2] = (char *)v30;
            v10 = (char *)realloc(*a2, v30);
            v7 = (int *)(a2 + 1);
            *a2 = v10;
            v8 = a2[1];
          }
          else
          {
            v10 = *a2;
          }
          v8[(_DWORD)v10 + 2] = 60;
          *(_WORD *)&v8[(_DWORD)v10] = 25705;
          v31 = *v7 + 3;
          *v7 = v31;
          v32 = *(const void **)(v2 + 12);
          v33 = *(_DWORD *)(v2 + 16) - (_DWORD)v32;
          if ( v33 )
          {
            v42 = v32;
            v34 = (unsigned int)a2[2];
            if ( v31 + v33 >= v34 )
            {
              v36 = 2 * v34;
              if ( v36 < v31 + v33 )
                v36 = v31 + v33;
              a2[2] = (char *)v36;
              v35 = (char *)realloc(*a2, v36);
              *a2 = v35;
              v31 = (int)a2[1];
            }
            else
            {
              v35 = *a2;
            }
            memmove(&v35[v31], v42, v33);
            v7 = (int *)(a2 + 1);
            v37 = *v41 + v33;
            *v41 = v37;
            v31 = v37;
          }
          v38 = (unsigned int)a2[2];
          if ( v31 + 1 >= v38 )
          {
            v40 = 2 * v38;
            if ( v40 < v31 + 1 )
              v40 = v31 + 1;
            a2[2] = (char *)v40;
            v39 = (char *)realloc(*a2, v40);
            v7 = (int *)(a2 + 1);
            *a2 = v39;
            v31 = (int)a2[1];
          }
          else
          {
            v39 = *a2;
          }
          v28 = &v39[v31];
          result = 62;
          goto LABEL_38;
        }
        v6 = (char *)&qword_13ACD8 - 308339;
        while ( *v4 == *v6 )
        {
          ++v4;
          ++v6;
          if ( v5 == v4 )
            goto LABEL_8;
        }
      }
    }
  }
  (*(void (__cdecl **)(int, char **))(*(_DWORD *)v2 + 12))(v2, a2);
  v11 = *(_BYTE **)(a1 + 8);
  v12 = v11[6];
  if ( !v12 || v12 == 2 && (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v11 + 4))(v11, a2) )
  {
    v13 = a2[1];
    v14 = (unsigned int)a2[2];
    if ( (unsigned int)(v13 + 1) >= v14 )
    {
      v16 = 2 * v14;
      if ( v16 < (unsigned int)(v13 + 1) )
        v16 = (size_t)(v13 + 1);
      a2[2] = (char *)v16;
      v15 = (char *)realloc(*a2, v16);
      *a2 = v15;
      v13 = a2[1];
    }
    else
    {
      v15 = *a2;
    }
    v13[(_DWORD)v15] = 32;
    ++a2[1];
  }
  v17 = *(_BYTE **)(a1 + 8);
  v18 = v17[6];
  if ( !v18 )
    goto LABEL_26;
  if ( v18 == 2 )
  {
    if ( (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v17 + 4))(v17, a2) )
    {
LABEL_26:
      v20 = a2[1];
      v21 = (unsigned int)a2[2];
      if ( (unsigned int)(v20 + 1) >= v21 )
      {
        v23 = 2 * v21;
        if ( v23 < (unsigned int)(v20 + 1) )
          v23 = (size_t)(v20 + 1);
        a2[2] = (char *)v23;
        v22 = (char *)realloc(*a2, v23);
        *a2 = v22;
        v20 = a2[1];
      }
      else
      {
        v22 = *a2;
      }
      v20[(_DWORD)v22] = 40;
      ++a2[1];
      goto LABEL_32;
    }
    v17 = *(_BYTE **)(a1 + 8);
  }
  v19 = v17[7];
  if ( !v19 || v19 == 2 && (*(unsigned __int8 (__cdecl **)(_BYTE *, char **))(*(_DWORD *)v17 + 8))(v17, a2) )
    goto LABEL_26;
LABEL_32:
  v24 = a2[1];
  v25 = (unsigned int)a2[2];
  if ( (unsigned int)(v24 + 1) >= v25 )
  {
    v27 = 2 * v25;
    if ( v27 < (unsigned int)(v24 + 1) )
      v27 = (size_t)(v24 + 1);
    a2[2] = (char *)v27;
    v26 = (char *)realloc(*a2, v27);
    *a2 = v26;
    v24 = a2[1];
  }
  else
  {
    v26 = *a2;
  }
  v28 = &v24[(_DWORD)v26];
  result = 42;
  v7 = (int *)(a2 + 1);
LABEL_38:
  *v28 = result;
  ++*v7;
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
