/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8094240
// Address: 0x08094240

//----- (08094240) --------------------------------------------------------
int __cdecl sub_8094240(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  char *v4; // ecx
  char *v5; // esi
  char v6; // dl
  int v7; // eax
  char v8; // dl
  char *v9; // eax
  char *i; // eax
  char *v11; // eax
  unsigned int v12; // ecx
  char v13; // bl
  unsigned int v14; // esi
  const char *v15; // edx
  char v16; // al
  unsigned int v17; // esi
  char *v18; // eax
  const void *v19; // esi
  size_t v20; // eax
  void *v21; // edx
  size_t v22; // edi
  int v23; // eax
  time_t v24; // eax
  _BYTE *v25; // eax
  unsigned int v26; // edx
  char *v27; // ebx
  char v28; // dl
  char *v29; // eax
  int v30; // esi
  int v31; // eax
  unsigned int v32; // edi
  void *v33; // eax
  unsigned int v34; // eax
  char v35; // [esp-103Eh] [ebp-103Eh]
  char v36; // [esp-103Dh] [ebp-103Dh]
  char v37; // [esp-103Ch] [ebp-103Ch]
  void *v38; // [esp-103Ch] [ebp-103Ch]
  char v39; // [esp-103Ch] [ebp-103Ch]
  int v40; // [esp-1030h] [ebp-1030h]
  int v41; // [esp-1030h] [ebp-1030h]
  unsigned int j; // [esp-1030h] [ebp-1030h]
  unsigned int v43; // [esp-1030h] [ebp-1030h]
  int v44; // [esp-1030h] [ebp-1030h]
  unsigned int v45; // [esp-1030h] [ebp-1030h]
  char v46; // [esp-1030h] [ebp-1030h]
  char *v47; // [esp-102Ch] [ebp-102Ch] BYREF
  unsigned int v48; // [esp-1028h] [ebp-1028h]
  unsigned int v49; // [esp-1024h] [ebp-1024h]
  char v50; // [esp-1020h] [ebp-1020h] BYREF
  _BYTE v51[16]; // [esp-101Ch] [ebp-101Ch] BYREF
  int v52; // [esp-100Ch] [ebp-100Ch]
  unsigned int v53; // [esp-20h] [ebp-20h]

  v53 = __readgsdword(0x14u);
  v40 = *(_DWORD *)(a2 + 4);
  if ( !v40 )
  {
    if ( byte_811E601 != 95 )
      goto LABEL_3;
    v3 = *(_DWORD *)a2;
    if ( *(_BYTE *)(*(_DWORD *)a2 + 1) != 95 )
      goto LABEL_3;
    v15 = (char *)&qword_811CFF4 - 258076;
    goto LABEL_46;
  }
  v3 = *(_DWORD *)a2;
  if ( **(_BYTE **)a2 == 95 && *(_BYTE *)(v3 + 1) == 95 )
  {
    v38 = *(void **)a2;
    if ( !strcmp((const char *)v3, (const char *)&qword_811CFF4 - 278823) )
    {
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 156);
      *(_WORD *)(a2 + 12) = 3;
      goto LABEL_43;
    }
    if ( !strcmp((const char *)v3, (const char *)&qword_811CFF4 - 278814) )
    {
      v19 = *(const void **)(a1 + 152);
      if ( v19 && (v20 = strlen((const char *)v19), v21 = v38, (v22 = v20) != 0) )
      {
        v34 = v20 + 1;
        v45 = v34;
        if ( *(_DWORD *)(a2 + 8) < v34 )
        {
          v21 = sub_80CF920(a2, v38, v34, 1u);
          *(_DWORD *)a2 = v21;
        }
        *(_DWORD *)(a2 + 4) = v45;
        memmove(v21, v19, v22);
        *(_BYTE *)(*(_DWORD *)a2 + v22) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
      goto LABEL_73;
    }
    v23 = strcmp((const char *)v3, (const char *)&qword_811CFF4 - 278805);
    v15 = (const char *)v3;
    if ( !v23 )
    {
LABEL_75:
      v24 = time(nullptr);
      sub_80D0390((unsigned int)&v50, 0x28u, v24);
      v25 = *(_BYTE **)a2;
      v26 = *(_DWORD *)(a2 + 8);
      if ( *(_BYTE *)(*(_DWORD *)a2 + 2) == 68 )
      {
        *(_DWORD *)(a2 + 4) = 0;
        if ( v26 <= 7 )
        {
          v25 = sub_80CF920(a2, v25, 8u, 1u);
          *(_DWORD *)a2 = v25;
        }
        *(_DWORD *)(a2 + 4) = 8;
        v25[7] = 0;
        memmove(*(void **)a2, v51, 7u);
        v30 = *(_DWORD *)(a2 + 4);
        if ( v30 )
        {
          v31 = v30 + 3;
          v32 = v30 + 4;
          --v30;
          v44 = v31;
        }
        else
        {
          v44 = 4;
          v32 = 5;
        }
        v33 = *(void **)a2;
        if ( *(_DWORD *)(a2 + 8) < v32 )
        {
          v33 = sub_80CF920(a2, v33, v32, 1u);
          *(_DWORD *)a2 = v33;
        }
        *(_DWORD *)(a2 + 4) = v32;
        *((_BYTE *)v33 + v44) = 0;
        *(_DWORD *)(*(_DWORD *)a2 + v30) = v52;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
        if ( v26 <= 8 )
        {
          v25 = sub_80CF920(a2, v25, 9u, 1u);
          *(_DWORD *)a2 = v25;
        }
        *(_DWORD *)(a2 + 4) = 9;
        v25[8] = 0;
        *(_QWORD *)*(_DWORD *)a2 = *(_QWORD *)&v51[7];
      }
LABEL_73:
      *(_WORD *)(a2 + 12) = 4;
      *(_BYTE *)(a2 + 20) = 0;
      goto LABEL_43;
    }
LABEL_46:
    if ( strcmp(v15, (const char *)&qword_811CFF4 - 278796) )
    {
      if ( !*(_BYTE *)(a1 + 44) || !v40 )
        goto LABEL_3;
      goto LABEL_8;
    }
    goto LABEL_75;
  }
  if ( !*(_BYTE *)(a1 + 44) )
    goto LABEL_3;
LABEL_8:
  v41 = strcmp((const char *)v3, (const char *)&qword_811CFF4 - 278787);
  if ( v41 && strcmp((const char *)v3, (const char *)&qword_811CFF4 - 278779) )
    goto LABEL_3;
  v4 = *(char **)(a1 + 4);
  v5 = v4 + 1;
  if ( (unsigned __int8)(*v4 - 9) <= 4u || *v4 == 32 )
  {
    do
    {
      do
      {
        *(_DWORD *)(a1 + 4) = v5;
        v16 = *v5;
        v4 = v5++;
      }
      while ( (unsigned __int8)(v16 - 9) <= 4u );
    }
    while ( v16 == 32 );
  }
  *(_DWORD *)(a1 + 4) = v5;
  v6 = *v4;
  if ( *v4 == 40 )
  {
    for ( i = v5 + 1; ; ++i )
    {
      *(_DWORD *)(a1 + 4) = i;
      v8 = *(i - 1);
      v5 = i;
      if ( (unsigned __int8)(v8 - 9) > 4u && v8 != 32 )
        break;
    }
    if ( !v41 )
    {
      sub_80926A0(a1, a2);
      v27 = *(char **)(a1 + 4);
      v28 = *v27;
      v29 = v27 + 1;
      if ( (unsigned __int8)(*v27 - 9) <= 4u )
        goto LABEL_83;
      while ( v28 == 32 )
      {
        do
        {
LABEL_83:
          *(_DWORD *)(a1 + 4) = v29;
          v28 = *v29;
          v27 = v29++;
        }
        while ( (unsigned __int8)(v28 - 9) <= 4u );
      }
      *(_DWORD *)(a1 + 4) = v29;
      if ( *v27 != 41 )
        goto LABEL_3;
      goto LABEL_18;
    }
    v35 = 1;
LABEL_27:
    if ( v8 == 60 )
    {
      v8 = 62;
    }
    else if ( v8 != 34 )
    {
      goto LABEL_3;
    }
    v47 = nullptr;
    v48 = 0;
    v49 = 0;
    if ( *v5 != 41 && *v5 )
    {
      v11 = nullptr;
      v12 = 0;
      for ( j = 0; ; j = v48 )
      {
        *(_DWORD *)(a1 + 4) = v5 + 1;
        v13 = *v5;
        v14 = 2;
        if ( j )
          v14 = j-- + 1;
        if ( v12 < v14 )
        {
          v36 = v8;
          v11 = (char *)sub_80CF920((int)&v47, v11, v14, 1u);
          v8 = v36;
          v47 = v11;
        }
        v48 = v14;
        v11[j] = v13;
        v47[j + 1] = 0;
        v5 = *(char **)(a1 + 4);
        v11 = v47;
        if ( !*v5 || *v5 == 41 )
          break;
        v12 = v49;
      }
      if ( !v35 )
        goto LABEL_67;
      *(_DWORD *)(a1 + 4) = v5 + 1;
      if ( *v5 != 41 )
        goto LABEL_67;
      v17 = v48;
      if ( v48 <= 1 )
        goto LABEL_67;
      goto LABEL_59;
    }
    if ( v35 )
    {
      *(_DWORD *)(a1 + 4) = v5 + 1;
      if ( *v5 == 41 )
      {
        v17 = v48;
        if ( v48 > 1 )
        {
          v11 = nullptr;
LABEL_59:
          if ( v8 == v11[v17 - 2] )
          {
            v43 = v17 - 1;
            if ( (int)(v17 - 1) <= 1 )
            {
              if ( !v11 )
              {
LABEL_96:
                v18 = v47;
LABEL_65:
                *(_DWORD *)(a2 + 16) = sub_80935E0(a1, &v50, 4096, v18, v8, 0) != nullptr;
                if ( v47 )
                {
                  v48 = 0;
                  sub_80CF780(v47);
                }
                goto LABEL_21;
              }
              v46 = v8;
              v48 = 0;
              sub_80CF780(v11);
              v8 = v46;
              v47 = nullptr;
              v49 = 0;
            }
            else
            {
              if ( v49 < v43 )
              {
                v39 = v8;
                v11 = (char *)sub_80CF920((int)&v47, v11, v43, 1u);
                v8 = v39;
                v47 = v11;
              }
              v48 = v17 - 1;
              v11[v17 - 2] = 0;
            }
            v18 = (char *)&qword_811CFF4 - 258076;
            if ( !v48 )
              goto LABEL_65;
            goto LABEL_96;
          }
LABEL_67:
          if ( v11 )
          {
            v48 = 0;
            sub_80CF780(v11);
          }
        }
      }
    }
LABEL_3:
    result = 0;
    goto LABEL_4;
  }
  v37 = *v4;
  if ( (unsigned int)v6 > 0x7F )
    goto LABEL_3;
  v7 = isalpha(v6);
  v8 = v37;
  if ( !v7 && v37 != 95 && v37 != 36 )
    goto LABEL_3;
  v35 = 0;
  if ( v41 )
    goto LABEL_27;
  sub_80926A0(a1, a2);
LABEL_18:
  v9 = (char *)&qword_811CFF4 - 258076;
  if ( *(_DWORD *)(a2 + 4) )
    v9 = *(char **)a2;
  *(_DWORD *)(a2 + 16) = sub_80940C0(a1, v9) != 0;
LABEL_21:
  *(_WORD *)(a2 + 12) = 3;
LABEL_43:
  result = 1;
LABEL_4:
  if ( v53 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E601: using guessed type char byte_811E601;
