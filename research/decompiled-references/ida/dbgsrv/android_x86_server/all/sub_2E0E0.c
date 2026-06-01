/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E0E0
// Address: 0x0002E0E0

//----- (0002E0E0) --------------------------------------------------------
unsigned int __cdecl sub_2E0E0(int a1, char *s, int a3, char a4, char a5, int a6, int a7)
{
  int v7; // esi
  _DWORD *v8; // edx
  unsigned int *v9; // edi
  int v10; // ecx
  char *v11; // eax
  char *v12; // edx
  int i; // esi
  int v14; // eax
  unsigned int v15; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  int v18; // edi
  size_t v19; // eax
  const char *v20; // ecx
  int v21; // edx
  size_t v22; // edi
  char *v23; // eax
  char *v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  _DWORD *v27; // edi
  char *v28; // eax
  char *v29; // edi
  int v30; // esi
  size_t v31; // eax
  size_t v32; // edx
  char *v33; // eax
  size_t v34; // edi
  void *v35; // eax
  _DWORD *v36; // ecx
  _DWORD *v37; // esi
  size_t v38; // edi
  int v39; // ecx
  int v40; // edx
  _DWORD *v41; // eax
  char *v42; // edx
  int v43; // ecx
  unsigned int v45; // [esp+0h] [ebp-3Ch]
  int v46; // [esp+0h] [ebp-3Ch]
  size_t *v47; // [esp+4h] [ebp-38h]
  int v48; // [esp+4h] [ebp-38h]
  size_t v49; // [esp+8h] [ebp-34h]
  void **v50; // [esp+Ch] [ebp-30h]
  _DWORD *v51; // [esp+10h] [ebp-2Ch]
  char **v52; // [esp+10h] [ebp-2Ch]
  char *v53; // [esp+18h] [ebp-24h]
  const char *v54; // [esp+1Ch] [ebp-20h]
  size_t v55; // [esp+20h] [ebp-1Ch]
  _DWORD v56[6]; // [esp+24h] [ebp-18h] BYREF

  v56[1] = __readgsdword(0x14u);
  v7 = a1;
  if ( a6 )
  {
    v45 = 1;
    if ( (a3 & 0x100) == 0 )
    {
      switch ( a4 )
      {
        case 1:
          v45 = 16;
          break;
        case 7:
          v45 = 64;
          break;
        case 2:
          v45 = 32;
          break;
        default:
          if ( !(_BYTE)under_debugger )
            interr(1795);
          BUG();
      }
    }
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v10 + 1) )
    {
      v11 = *(char **)(a1 + 36);
    }
    else
    {
      v11 = (char *)qvector_reserve(a1 + 36, *(void **)(a1 + 36), v10 + 1, 0xCu);
      *(_DWORD *)(a1 + 36) = v11;
      v10 = *(_DWORD *)(a1 + 40);
    }
    v12 = &v11[12 * v10];
    *(_DWORD *)v12 = 0;
    *((_DWORD *)v12 + 1) = 0;
    *((_DWORD *)v12 + 2) = 0;
    ++*(_DWORD *)(a1 + 40);
    v56[0] = 0;
    v53 = v12;
    sub_2E4A0((char **)v12, v45, (char *)v56);
    v50 = (void **)(a1 + 12);
    v8 = (_DWORD *)(a1 + 16);
    v9 = (unsigned int *)(a1 + 20);
    for ( i = 0; i != v45; ++i )
    {
      if ( *(_DWORD *)(a6 + 4 * i) )
      {
        v14 = *v8;
        v15 = *v8 + 1;
        if ( *v9 >= v15 )
        {
          v17 = *v50;
        }
        else
        {
          v16 = qvector_reserve((int)v50, *v50, v15, 0xCu);
          v8 = (_DWORD *)(a1 + 16);
          v17 = v16;
          *v50 = v16;
          v14 = *(_DWORD *)(a1 + 16);
        }
        v18 = 3 * v14;
        v17[v18] = 0;
        v47 = &v17[3 * v14 + 1];
        v17[v18 + 1] = 0;
        v51 = v17;
        v17[v18 + 2] = 0;
        ++*v8;
        if ( *(_DWORD *)(a6 + 4 * i)
          && (v54 = *(const char **)(a6 + 4 * i), v19 = strlen(v54), v20 = v54, v8 = (_DWORD *)(a1 + 16), v19) )
        {
          v21 = (int)&v51[v18];
          v55 = v19;
          v22 = v19 + 1;
          v52 = (char **)v21;
          if ( *(_DWORD *)(v21 + 8) >= v19 + 1 )
          {
            v23 = *(char **)v21;
          }
          else
          {
            v23 = (char *)qvector_reserve(v21, *(void **)v21, v19 + 1, 1u);
            v20 = v54;
            *v52 = v23;
          }
          *v47 = v22;
          memmove(v23, v20, v55);
          (*v52)[v55] = 0;
          if ( *v47 )
            v24 = *v52;
          else
            v24 = byte_EF875;
          v8 = (_DWORD *)(a1 + 16);
        }
        else
        {
          *v47 = 0;
          v24 = byte_EF875;
        }
        v9 = (unsigned int *)(a1 + 20);
        *(_DWORD *)(*(_DWORD *)v53 + 4 * i) = v24;
      }
    }
    v46 = *(_DWORD *)v53;
    v7 = a1;
  }
  else
  {
    v50 = (void **)(a1 + 12);
    v8 = (_DWORD *)(a1 + 16);
    v9 = (unsigned int *)(a1 + 20);
    v46 = 0;
  }
  v25 = *v8;
  v26 = *v8 + 1;
  if ( *v9 >= v26 )
  {
    v29 = *(char **)(v7 + 12);
  }
  else
  {
    v27 = v8;
    v28 = (char *)qvector_reserve((int)v50, *v50, v26, 0xCu);
    v8 = v27;
    v29 = v28;
    *v50 = v28;
    v25 = *v8;
  }
  v30 = 3 * v25;
  v48 = (int)&v29[12 * v25];
  *(_DWORD *)v48 = 0;
  *(_DWORD *)(v48 + 4) = 0;
  *(_DWORD *)(v48 + 8) = 0;
  ++*v8;
  if ( s && (v31 = strlen(s)) != 0 )
  {
    v32 = v31;
    v33 = &v29[4 * v30 + 8];
    v34 = v32 + 1;
    if ( *(_DWORD *)v33 >= v32 + 1 )
    {
      v36 = (_DWORD *)v48;
      v35 = *(void **)v48;
    }
    else
    {
      v49 = v32;
      v35 = qvector_reserve(v48, *(void **)v48, v32 + 1, 1u);
      v32 = v49;
      v36 = (_DWORD *)v48;
      *(_DWORD *)v48 = v35;
    }
    v37 = v36;
    v36[1] = v34;
    v38 = v32;
    memmove(v35, s, v32);
    *(_BYTE *)(*v37 + v38) = 0;
  }
  else
  {
    *(_DWORD *)(v48 + 4) = 0;
  }
  v39 = *(_DWORD *)(a1 + 4);
  v40 = v39 + 1;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v39 + 1) )
  {
    v41 = *(_DWORD **)a1;
  }
  else
  {
    v41 = qvector_reserve(a1, *(void **)a1, v39 + 1, 0x14u);
    *(_DWORD *)a1 = v41;
    v39 = *(_DWORD *)(a1 + 4);
    v40 = v39 + 1;
  }
  *(_DWORD *)(a1 + 4) = v40;
  if ( *(_DWORD *)(v48 + 4) )
    v42 = *(char **)v48;
  else
    v42 = byte_EF875;
  v43 = 5 * v39;
  v41[v43] = v42;
  v41[v43 + 1] = a3;
  BYTE1(v41[v43 + 2]) = a4;
  LOBYTE(v41[v43 + 2]) = a5;
  v41[v43 + 3] = v46;
  v41[v43 + 4] = a7;
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
