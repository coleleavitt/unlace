/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55FE0
// Address: 0x00055FE0

//----- (00055FE0) --------------------------------------------------------
unsigned int __cdecl sub_55FE0(int a1, char *s, int a3)
{
  int v3; // eax
  char *v4; // edi
  int v5; // esi
  void **v6; // edx
  size_t v7; // eax
  char *v8; // ecx
  char *v9; // esi
  size_t v10; // edi
  void *v11; // eax
  int v12; // edi
  char *v13; // eax
  int v14; // ecx
  int v15; // ecx
  const char **v16; // edx
  int v17; // eax
  const char **v18; // ecx
  int v19; // esi
  const char **v20; // edi
  const char **v21; // ecx
  char *v22; // eax
  unsigned int v23; // ecx
  int v24; // ebx
  char *v25; // eax
  int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // ecx
  const char **v31; // edx
  unsigned int v32; // eax
  __int128 *v33; // edi
  unsigned int v34; // esi
  __int128 v35; // xmm1
  _DWORD *v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // edx
  void **v40; // [esp+8h] [ebp-44h]
  const char *v41; // [esp+8h] [ebp-44h]
  char **v42; // [esp+Ch] [ebp-40h]
  unsigned int v43; // [esp+10h] [ebp-3Ch]
  unsigned int v44; // [esp+10h] [ebp-3Ch]
  size_t v45; // [esp+14h] [ebp-38h]
  int v46; // [esp+14h] [ebp-38h]
  char *v47; // [esp+18h] [ebp-34h]
  int v48; // [esp+1Ch] [ebp-30h]
  const char **v49; // [esp+24h] [ebp-28h]
  int v50; // [esp+28h] [ebp-24h]
  int v51; // [esp+2Ch] [ebp-20h] BYREF
  _DWORD v52[7]; // [esp+30h] [ebp-1Ch] BYREF

  v52[2] = __readgsdword(0x14u);
  v3 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 16) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(char **)(a1 + 8);
  }
  else
  {
    v4 = (char *)qvector_reserve(a1 + 8, *(void **)(a1 + 8), v3 + 1, 0xCu);
    *(_DWORD *)(a1 + 8) = v4;
    v3 = *(_DWORD *)(a1 + 12);
  }
  v5 = 3 * v3;
  v6 = (void **)&v4[12 * v3];
  *v6 = nullptr;
  v6[1] = nullptr;
  v6[2] = nullptr;
  ++*(_DWORD *)(a1 + 12);
  if ( s && (v40 = (void **)&v4[12 * v3], v7 = strlen(s), v6 = (void **)&v4[4 * v5], v8 = s, v7) )
  {
    v9 = &v4[4 * v5 + 8];
    v45 = v7;
    v10 = v7 + 1;
    if ( *(_DWORD *)v9 >= v7 + 1 )
    {
      v11 = *v40;
    }
    else
    {
      v11 = qvector_reserve((int)v40, *v40, v7 + 1, 1u);
      v6 = v40;
      v8 = s;
      *v40 = v11;
    }
    v6[1] = (void *)v10;
    memmove(v11, v8, v45);
    v6 = v40;
    *((_BYTE *)*v40 + v45) = 0;
  }
  else
  {
    v6[1] = nullptr;
  }
  v41 = qstrtok((char *)*v6, "|", (const char **)&v51);
  if ( v41 )
  {
    v12 = a3;
    v42 = (char **)(a1 + 20);
    while ( 1 )
    {
      v43 = *(_DWORD *)(a1 + 24);
      if ( v43 )
        break;
LABEL_45:
      v22 = sub_56850(v42);
      *((_DWORD *)v22 + 3) = v12;
LABEL_46:
      v52[0] = v41;
      sub_56630((char **)v22, (char *)v52);
LABEL_47:
      v41 = qstrtok(nullptr, "|", (const char **)&v51);
      v12 = a3;
      if ( !v41 )
        return __readgsdword(0x14u);
    }
    v13 = *v42;
    v14 = 0;
    v47 = *v42;
    while ( 1 )
    {
      v46 = v14;
      v15 = 16 * v14;
      v16 = *(const char ***)&v13[v15];
      v48 = v15;
      v17 = *(_DWORD *)&v13[v15 + 4];
      v18 = v16;
      v19 = 4 * v17;
      v20 = v16;
      if ( 4 * v17 )
      {
        v50 = v17;
        v49 = v16;
        v20 = v16;
        while ( strcmp(*v20, v41) )
        {
          ++v20;
          v19 -= 4;
          if ( !v19 )
            goto LABEL_22;
        }
        v17 = v50;
        v18 = v49;
      }
      v21 = &v18[v17];
      if ( v20 != v21 )
        break;
LABEL_22:
      v14 = v46 + 1;
      v13 = v47;
      if ( v46 + 1 >= v43 )
      {
        v12 = a3;
        v22 = *v42;
        v23 = 0;
        while ( *((_DWORD *)v22 + 3) != a3 )
        {
          ++v23;
          v22 += 16;
          if ( v23 >= v43 )
            goto LABEL_45;
        }
        goto LABEL_44;
      }
    }
    v24 = v17;
    if ( *(_DWORD *)&v47[v48 + 12] == a3 )
      goto LABEL_47;
    v25 = &v47[v48 + 4];
    v26 = (char *)v21 - (char *)v20;
    if ( v26 < 5 )
    {
LABEL_39:
      *(_DWORD *)v25 = v24 - 1;
      v37 = *(_DWORD *)(a1 + 24);
      v12 = a3;
      if ( !v37 )
        goto LABEL_45;
      v22 = *v42;
      v38 = 0;
      while ( *((_DWORD *)v22 + 3) != a3 )
      {
        ++v38;
        v22 += 16;
        if ( v38 >= v37 )
          goto LABEL_45;
      }
LABEL_44:
      if ( v22 )
        goto LABEL_46;
      goto LABEL_45;
    }
    v27 = (unsigned int)v26 >> 2;
    v28 = 2 - v27;
    if ( (int)(2 - v27) < 0 )
      v28 = 0;
    v29 = v28 + v27 - 1;
    v30 = v27 - 2;
    if ( v29 >= 8 )
    {
      v44 = v29;
      v32 = v29 & 0xFFFFFFF8;
      v30 -= v32;
      v31 = &v20[v32];
      v33 = (__int128 *)(v20 + 5);
      v34 = v32;
      do
      {
        v35 = *v33;
        *(__int128 *)((char *)v33 - 20) = *(v33 - 1);
        *(__int128 *)((char *)v33 - 4) = v35;
        v33 += 2;
        v34 -= 8;
      }
      while ( v34 );
      if ( v44 == v32 )
        goto LABEL_38;
    }
    else
    {
      v31 = v20;
    }
    v36 = v31 + 1;
    do
    {
      *(v36 - 1) = *v36;
      ++v36;
      --v30;
    }
    while ( v30 >= 0 );
LABEL_38:
    v25 = &v47[v48 + 4];
    v24 = *(_DWORD *)v25;
    goto LABEL_39;
  }
  return __readgsdword(0x14u);
}
// 561B6: conditional instruction was optimized away because %0x20.4!=0
