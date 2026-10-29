/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28F50
// Address: 0x00028F50

//----- (00028F50) --------------------------------------------------------
_DWORD *__cdecl sub_28F50(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  int v5; // eax
  char *v6; // eax
  char *v7; // edi
  int v8; // esi
  size_t v9; // eax
  const char *v10; // ecx
  size_t v11; // edx
  char *v12; // eax
  size_t v13; // edi
  char *v14; // esi
  void *v15; // eax
  size_t v16; // edi
  char *v17; // eax
  int v18; // edi
  unsigned int v19; // esi
  unsigned int v20; // edx
  int v21; // esi
  _DWORD *v22; // ecx
  char *v23; // eax
  unsigned int v24; // esi
  char *v25; // ecx
  bool v26; // cf
  bool v27; // zf
  int v28; // ecx
  unsigned int v29; // edi
  int v30; // esi
  char *v31; // eax
  int v32; // edx
  int v34; // [esp+Ch] [ebp-30h]
  int v35; // [esp+Ch] [ebp-30h]
  char **v36; // [esp+10h] [ebp-2Ch]
  _DWORD *v37; // [esp+14h] [ebp-28h]
  char **v38; // [esp+18h] [ebp-24h]
  const char *v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+20h] [ebp-1Ch] BYREF
  int v41; // [esp+24h] [ebp-18h] BYREF
  size_t v42; // [esp+28h] [ebp-14h]

  v3 = a1;
  if ( *a2 )
  {
    v38 = (char **)(a1 + 3);
    v36 = (char **)(a1 + 6);
    v4 = a2 + 1;
    while ( 1 )
    {
      v37 = v4;
      v5 = v3[4];
      if ( v3[5] >= (unsigned int)(v5 + 1) )
      {
        v7 = *v38;
      }
      else
      {
        v6 = (char *)qvector_reserve((int)v38, (void *)v3[3], v5 + 1, 0xCu);
        v3 = a1;
        v7 = v6;
        a1[3] = v6;
        v5 = a1[4];
      }
      v8 = 3 * v5;
      v34 = (int)&v7[12 * v5];
      *(_DWORD *)v34 = 0;
      *(_DWORD *)(v34 + 4) = 0;
      *(_DWORD *)(v34 + 8) = 0;
      ++v3[4];
      if ( *(v37 - 1) && (v39 = (const char *)*(v37 - 1), v9 = strlen(v39), v10 = v39, v3 = a1, v9) )
      {
        v11 = v9;
        v12 = &v7[4 * v8 + 8];
        v42 = v11;
        v13 = v11 + 1;
        v14 = (char *)v34;
        if ( *(_DWORD *)v12 >= v11 + 1 )
        {
          v15 = *(void **)v34;
        }
        else
        {
          v15 = qvector_reserve(v34, *(void **)v34, v11 + 1, 1u);
          v10 = v39;
          *(_DWORD *)v34 = v15;
        }
        *(_DWORD *)(v34 + 4) = v13;
        v16 = v42;
        memmove(v15, v10, v42);
        *(_BYTE *)(*(_DWORD *)v34 + v16) = 0;
        v3 = a1;
      }
      else
      {
        v14 = &v7[4 * v8];
        *(_DWORD *)(v34 + 4) = 0;
      }
      v35 = *(_DWORD *)v14;
      v41 = *(_DWORD *)v14;
      v17 = (char *)v3[6];
      v18 = v3[7];
      v19 = v3[8];
      v20 = v18 + 1;
      if ( v17 <= (char *)&v41 && &v17[4 * v19] > (char *)&v41 )
        break;
      if ( v19 >= v20 )
        goto LABEL_19;
      v17 = (char *)qvector_reserve((int)v36, v17, v18 + 1, 4u);
      v3 = a1;
      a1[6] = v17;
      v18 = a1[7];
      v21 = v41;
      v22 = v37;
LABEL_21:
      *(_DWORD *)&v17[4 * v18] = v21;
      ++v3[7];
      v27 = *v22 == 0;
      v4 = v22 + 1;
      if ( v27 )
        goto LABEL_24;
    }
    if ( v19 >= v20 )
    {
LABEL_19:
      v3 = a1;
    }
    else
    {
      v17 = (char *)qvector_reserve((int)v36, v17, v18 + 1, 4u);
      v3 = a1;
      a1[6] = v17;
      v18 = a1[7];
    }
    v22 = v37;
    v21 = v35;
    goto LABEL_21;
  }
  v36 = (char **)(a1 + 6);
LABEL_24:
  v40 = 0;
  v23 = (char *)v3[6];
  v24 = v3[8];
  v25 = &v23[4 * v24];
  v26 = v25 < (char *)&v40;
  v27 = v25 == (char *)&v40;
  v28 = v3[7];
  v29 = v28 + 1;
  if ( v23 > (char *)&v40 || v26 || v27 )
  {
    v32 = 0;
    if ( v24 < v29 )
    {
      v23 = (char *)qvector_reserve((int)v36, v23, v28 + 1, 4u);
      *v36 = v23;
      v28 = a1[7];
      v32 = v40;
    }
    v30 = a3;
    v31 = &v23[4 * v28];
  }
  else
  {
    if ( v24 < v29 )
    {
      v23 = (char *)qvector_reserve((int)v36, v23, v28 + 1, 4u);
      *v36 = v23;
      v28 = a1[7];
    }
    v30 = a3;
    v31 = &v23[4 * v28];
    v32 = 0;
  }
  *(_DWORD *)v31 = v32;
  ++a1[7];
  a1[12] = v30;
  return a1;
}
