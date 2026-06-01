/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DEC0
// Address: 0x0006DEC0

//----- (0006DEC0) --------------------------------------------------------
char *__cdecl sub_6DEC0(int a1, char **a2)
{
  int v2; // edi
  char *v3; // edx
  char *v4; // eax
  int v5; // ecx
  const char *v6; // esi
  int v7; // eax
  char *v8; // edi
  const char *v9; // eax
  int v10; // esi
  const char *v11; // eax
  int v12; // edx
  char *v13; // esi
  int v14; // eax
  unsigned __int8 v15; // di
  bool v16; // zf
  char *v17; // eax
  char v18; // al
  int v19; // ecx
  _BYTE *i; // eax
  char *v21; // eax
  time_t v22; // eax
  _BYTE *v23; // eax
  char *v24; // eax
  int v25; // edi
  __int16 v26; // dx
  char **v27; // edx
  char *v28; // eax
  char *v29; // edi
  char *v30; // eax
  const void *v31; // edi
  size_t v32; // ecx
  unsigned int v33; // esi
  char **v34; // edx
  char *v35; // eax
  _BYTE *v36; // eax
  unsigned int v37; // esi
  int v38; // ecx
  unsigned int v39; // edx
  int v40; // esi
  unsigned int v41; // ecx
  int v42; // esi
  size_t v43; // esi
  char *v45; // eax
  unsigned int v46; // esi
  char *v47; // eax
  const void *v48; // [esp-Ch] [ebp-1048h]
  char v49; // [esp+Fh] [ebp-102Dh]
  int v50; // [esp+10h] [ebp-102Ch]
  char *v51; // [esp+14h] [ebp-1028h]
  int v52; // [esp+14h] [ebp-1028h]
  char *v53; // [esp+14h] [ebp-1028h]
  char v54; // [esp+14h] [ebp-1028h]
  unsigned int v55; // [esp+14h] [ebp-1028h]
  int v56; // [esp+18h] [ebp-1024h] BYREF
  unsigned int v57; // [esp+1Ch] [ebp-1020h]
  unsigned int v58; // [esp+20h] [ebp-101Ch]
  char v59[4]; // [esp+28h] [ebp-1014h] BYREF
  int v60; // [esp+2Ch] [ebp-1010h]
  __int16 v61; // [esp+30h] [ebp-100Ch]
  char v62; // [esp+32h] [ebp-100Ah]
  __int64 v63; // [esp+33h] [ebp-1009h]
  int v64; // [esp+3Ch] [ebp-1000h]
  unsigned int v65; // [esp+1028h] [ebp-14h]

  v2 = (int)a2;
  v65 = __readgsdword(0x14u);
  v3 = a2[1];
  if ( v3 )
    v4 = *a2;
  else
    v4 = byte_13BD21;
  v5 = a1;
  if ( *v4 != 95 )
    goto LABEL_12;
  v6 = *a2;
  if ( (*a2)[1] != 95 )
    goto LABEL_12;
  v51 = a2[1];
  if ( !v3 )
    v6 = byte_EF875;
  if ( !strcmp(v6, "__LINE__") )
  {
    v17 = *(char **)(a1 + 148);
    a2[4] = v17;
LABEL_88:
    *(_WORD *)(v2 + 12) = 3;
LABEL_94:
    LOBYTE(v17) = 1;
    return v17;
  }
  if ( !strcmp(v6, "__FILE__") )
  {
    v17 = (char *)a1;
    v31 = *(const void **)(a1 + 144);
    if ( v31 && (v17 = (char *)strlen(*(const char **)(a1 + 144))) != nullptr )
    {
      v32 = (size_t)v17;
      v33 = (unsigned int)(v17 + 1);
      v34 = a2;
      if ( a2[2] >= v17 + 1 )
      {
        v35 = *a2;
      }
      else
      {
        v53 = v17;
        v35 = (char *)qvector_reserve((int)a2, *a2, v33, 1u);
        v34 = a2;
        v32 = (size_t)v53;
        *a2 = v35;
      }
      v34[1] = (char *)v33;
      v48 = v31;
      v43 = v32;
      v2 = (int)v34;
      memmove(v35, v48, v32);
      v17 = *(char **)v2;
      *(_BYTE *)(*(_DWORD *)v2 + v43) = 0;
    }
    else
    {
      v2 = (int)a2;
      a2[1] = nullptr;
    }
LABEL_93:
    *(_WORD *)(v2 + 12) = 4;
    *(_BYTE *)(v2 + 20) = 0;
    goto LABEL_94;
  }
  if ( !strcmp(v6, "__DATE__") || (v7 = strcmp(v6, "__TIME__"), v3 = v51, v5 = a1, !v7) )
  {
    v22 = time(nullptr);
    qctime((unsigned int)v59, 0x28u, v22);
    v23 = *a2;
    v16 = (*a2)[2] == 68;
    a2[1] = nullptr;
    if ( v16 )
    {
      if ( (unsigned int)a2[2] <= 7 )
      {
        v23 = qvector_reserve((int)a2, v23, 8u, 1u);
        *a2 = v23;
      }
      a2[1] = &byte_8;
      v23[7] = 0;
      v24 = *a2;
      v25 = v60;
      v26 = v61;
      v24[6] = v62;
      *((_WORD *)v24 + 2) = v26;
      v27 = a2;
      *(_DWORD *)v24 = v25;
      v28 = a2[1];
      v29 = v28 - 1;
      if ( !v28 )
        v29 = nullptr;
      if ( a2[2] >= v29 + 5 )
      {
        v30 = *a2;
      }
      else
      {
        v30 = (char *)qvector_reserve((int)a2, *a2, (unsigned int)(v29 + 5), 1u);
        v27 = a2;
        *a2 = v30;
      }
      v27[1] = v29 + 5;
      v29[(_DWORD)v30 + 4] = 0;
      v17 = *v27;
      *(_DWORD *)&v29[(_DWORD)*v27] = v64;
      v2 = (int)v27;
    }
    else
    {
      if ( (unsigned int)a2[2] <= 8 )
      {
        v23 = qvector_reserve((int)a2, v23, 9u, 1u);
        *a2 = v23;
      }
      a2[1] = byte_9;
      v23[8] = 0;
      v17 = *a2;
      *(_QWORD *)*a2 = v63;
    }
    goto LABEL_93;
  }
LABEL_12:
  if ( !*(_BYTE *)(v5 + 44) )
    return nullptr;
  v8 = v3;
  v9 = v3 ? *a2 : byte_EF875;
  v10 = strcmp(v9, "defined");
  if ( v10 )
  {
    v11 = v8 ? *a2 : byte_EF875;
    if ( strcmp(v11, "__has_include") )
      return nullptr;
  }
  v52 = v10;
  v12 = a1;
  v13 = (char *)(*(_DWORD *)(a1 + 4) + 1);
  v2 = (int)a2;
  while ( (unsigned __int8)(*(v13 - 1) - 9) < 5u || *(v13 - 1) == 32 )
    *(_DWORD *)(a1 + 4) = v13++;
  *(_DWORD *)(a1 + 4) = v13;
  v14 = (unsigned __int8)*(v13 - 1);
  if ( v14 == 40 )
  {
    do
    {
      do
        *(_DWORD *)(a1 + 4) = ++v13;
      while ( (unsigned __int8)(*(v13 - 1) - 9) < 5u );
    }
    while ( *(v13 - 1) == 32 );
    LOBYTE(v50) = 1;
    if ( !v52 )
    {
LABEL_41:
      sub_6D8F0(v12, v2);
      v19 = a1;
      if ( !(_BYTE)v50 )
        goto LABEL_104;
      for ( i = *(_BYTE **)(a1 + 4); (unsigned __int8)(*i++ - 9) < 5u || *(i - 1) == 32; *(_DWORD *)(a1 + 4) = i )
        ;
      v19 = a1;
      *(_DWORD *)(a1 + 4) = i;
      if ( *(i - 1) == 41 )
      {
LABEL_104:
        if ( *(_DWORD *)(v2 + 4) )
          v21 = *(char **)v2;
        else
          v21 = byte_EF875;
        v17 = (char *)sub_6AB50(v19, v21);
        *(_DWORD *)(v2 + 16) = v17 != nullptr;
        goto LABEL_88;
      }
      return nullptr;
    }
    goto LABEL_38;
  }
  if ( (v14 & 0x80u) == 0 )
  {
    v15 = *(v13 - 1);
    v14 = isalpha(v15);
    v12 = a1;
    v16 = v14 == 0;
    LOBYTE(v14) = v15;
    v2 = (int)a2;
    if ( !v16 )
    {
      LOBYTE(v50) = 0;
      if ( !v52 )
        goto LABEL_41;
LABEL_38:
      v18 = *(v13 - 1);
      if ( v18 == 60 )
      {
        v49 = 62;
        goto LABEL_61;
      }
      if ( v18 == 34 )
      {
        v49 = 34;
LABEL_61:
        v56 = 0;
        v57 = 0;
        v58 = 0;
        while ( *v13 && *v13 != 41 )
        {
          *(_DWORD *)(v12 + 4) = v13 + 1;
          v54 = *v13;
          v36 = (_BYTE *)v56;
          v37 = v57;
          if ( v57 )
            v37 = v57 - 1;
          if ( v58 < v37 + 2 )
          {
            v36 = qvector_reserve((int)&v56, (void *)v56, v37 + 2, 1u);
            v56 = (int)v36;
            v12 = a1;
          }
          v57 = v37 + 2;
          v36[v37] = v54;
          *(_BYTE *)(v56 + v37 + 1) = 0;
          v13 = *(char **)(v12 + 4);
        }
        v38 = 1;
        if ( (_BYTE)v50 )
        {
          *(_DWORD *)(v12 + 4) = v13 + 1;
          v2 = (int)a2;
          if ( *v13 == 41 )
          {
            v39 = v57;
            if ( v57 >= 2 )
            {
              v17 = (char *)v56;
              v40 = 1;
              if ( *(_BYTE *)(v56 + v57 - 2) != v49 )
                goto LABEL_78;
              v41 = v57 - 1;
              if ( (int)(v57 - 1) > 1 )
              {
                v45 = (char *)v56;
                if ( v58 < v41 )
                {
                  v55 = v57;
                  v46 = v57 - 1;
                  v45 = (char *)qvector_reserve((int)&v56, (void *)v56, v57 - 1, 1u);
                  v56 = (int)v45;
                  v39 = v55;
                  v41 = v46;
                }
                v57 = v41;
                v45[v39 - 2] = 0;
                v42 = v56;
              }
              else
              {
                v42 = 0;
                if ( v56 )
                {
                  v57 = 0;
                  qfree((void *)v56);
                  v56 = 0;
                  v58 = 0;
                }
              }
              v47 = byte_EF875;
              if ( v57 )
                v47 = (char *)v42;
              a2[4] = (char *)(sub_6E510(a1, v59, 4096, v47, v49, 0) != nullptr);
              v38 = 0;
            }
          }
        }
        else
        {
          v2 = (int)a2;
        }
        v40 = v38;
        v17 = (char *)v56;
LABEL_78:
        if ( v17 )
        {
          v57 = 0;
          qfree(v17);
          v56 = 0;
          v58 = 0;
        }
        if ( !v40 )
          goto LABEL_88;
      }
      return nullptr;
    }
  }
  v50 = 0;
  if ( (_BYTE)v14 == 36 || (_BYTE)v14 == 95 )
  {
    if ( !v52 )
      goto LABEL_41;
    goto LABEL_38;
  }
  return (char *)v50;
}
// 6E421: variable 'v17' is possibly undefined
// 8: using guessed type char;
