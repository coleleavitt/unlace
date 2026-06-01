__int64 __fastcall sub_780CA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v5; // rbx
  char *v6; // r14
  int v7; // r12d
  char *v8; // rcx
  char v9; // al
  char *v10; // rbx
  char v11; // r14
  char *v12; // rax
  const char *v13; // rsi
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 i; // r12
  char v17; // r15
  unsigned __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  char v21; // r8
  const char *v22; // rcx
  __int64 v23; // rax
  void *v24; // rdi
  const void *v25; // rbx
  size_t v26; // rax
  size_t v27; // rbp
  unsigned int v28; // eax
  const char *v29; // rsi
  unsigned __int64 v30; // rax
  bool v31; // zf
  char *v32; // rsi
  char v33; // dl
  char *v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r12
  unsigned __int64 v37; // rbp
  const char *v38; // rsi
  __int64 v39; // rax
  size_t v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+Fh] [rbp-1069h]
  void *ptr; // [rsp+10h] [rbp-1068h] BYREF
  __int128 v46; // [rsp+18h] [rbp-1060h]
  _BYTE v47[4]; // [rsp+30h] [rbp-1048h] BYREF
  char src[7]; // [rsp+34h] [rbp-1044h] BYREF
  __int64 v49; // [rsp+3Bh] [rbp-103Dh]
  int v50; // [rsp+44h] [rbp-1034h]
  unsigned __int64 v51; // [rsp+1038h] [rbp-40h]

  v2 = a2[1];
  v51 = __readfsqword(0x28u);
  if ( !v2 )
  {
    if ( byte_2CA12E1 != 95 )
      return 0;
    v5 = *a2;
    if ( *(_BYTE *)(*a2 + 1) != 95 )
      return 0;
    v6 = (char *)haystack;
    goto LABEL_45;
  }
  v5 = *a2;
  v6 = (char *)*a2;
  if ( *(_BYTE *)*a2 == 95 && *(_BYTE *)(v5 + 1) == 95 )
  {
    if ( !strcmp((const char *)*a2, "__LINE__") )
    {
      v19 = *(_DWORD *)(a1 + 304);
      *((_WORD *)a2 + 12) = 3;
      *((_DWORD *)a2 + 7) = v19;
      return 1;
    }
    if ( !strcmp((const char *)v5, "__FILE__") )
    {
      v25 = *(const void **)(a1 + 296);
      if ( v25 && (v26 = strlen(*(const char **)(a1 + 296)), (v27 = v26) != 0) )
      {
        v40 = v26 + 1;
        if ( a2[2] < v26 + 1 )
        {
          v43 = qvector_reserve(a2, v6, v26 + 1, 1);
          *a2 = v43;
          v6 = (char *)v43;
        }
        a2[1] = v40;
        memmove(v6, v25, v27);
        *(_BYTE *)(*a2 + v27) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      goto LABEL_69;
    }
    if ( !strcmp((const char *)v5, "__DATE__") )
    {
LABEL_71:
      v28 = time(nullptr);
      qctime(v47, 40, v28);
      v29 = (const char *)*a2;
      v30 = a2[2];
      v31 = *(_BYTE *)(*a2 + 2) == 68;
      a2[1] = 0;
      if ( v31 )
      {
        if ( v30 <= 7 )
        {
          v42 = qvector_reserve(a2, v29, 8, 1);
          *a2 = v42;
          v29 = (const char *)v42;
        }
        a2[1] = 8;
        *((_BYTE *)v29 + 7) = 0;
        memmove((void *)*a2, src, 7u);
        v35 = a2[1];
        if ( v35 )
        {
          v36 = v35 + 3;
          v37 = v35 + 4;
          --v35;
        }
        else
        {
          v37 = 5;
          v36 = 4;
        }
        v38 = (const char *)*a2;
        if ( a2[2] < v37 )
        {
          v41 = qvector_reserve(a2, v38, v37, 1);
          *a2 = v41;
          v38 = (const char *)v41;
        }
        a2[1] = v37;
        v38[v36] = 0;
        *(_DWORD *)(*a2 + v35) = v50;
      }
      else
      {
        if ( v30 <= 8 )
        {
          v39 = qvector_reserve(a2, v29, 9, 1);
          *a2 = v39;
          v29 = (const char *)v39;
        }
        a2[1] = 9;
        *((_BYTE *)v29 + 8) = 0;
        *(_QWORD *)*a2 = v49;
      }
LABEL_69:
      *((_BYTE *)a2 + 32) = 0;
      *((_WORD *)a2 + 12) = 4;
      return 1;
    }
LABEL_45:
    if ( strcmp(v6, "__TIME__") )
    {
      if ( !*(_BYTE *)(a1 + 84) || !v2 )
        return 0;
      goto LABEL_6;
    }
    goto LABEL_71;
  }
  if ( !*(_BYTE *)(a1 + 84) )
    return 0;
LABEL_6:
  v7 = strcmp((const char *)v5, "defined");
  if ( v7 && strcmp((const char *)v5, "__has_include") )
    return 0;
  v8 = *(char **)(a1 + 8);
  v9 = *v8;
  v10 = v8 + 1;
  if ( (unsigned __int8)(*v8 - 9) <= 4u )
    goto LABEL_20;
  while ( v9 == 32 )
  {
    do
    {
LABEL_20:
      *(_QWORD *)(a1 + 8) = v10;
      v9 = *v10;
      v8 = v10++;
    }
    while ( (unsigned __int8)(v9 - 9) <= 4u );
  }
  *(_QWORD *)(a1 + 8) = v10;
  v11 = *v8;
  v12 = v10 + 1;
  if ( *v8 == 40 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a1 + 8) = v12;
      v11 = *(v12 - 1);
      v10 = v12;
      if ( (unsigned __int8)(v11 - 9) > 4u && v11 != 32 )
        break;
      ++v12;
    }
    if ( !v7 )
    {
      sub_77F0E0(a1, a2);
      v32 = *(char **)(a1 + 8);
      v33 = *v32;
      v34 = v32 + 1;
      if ( (unsigned __int8)(*v32 - 9) <= 4u )
        goto LABEL_79;
      while ( v33 == 32 )
      {
        do
        {
LABEL_79:
          *(_QWORD *)(a1 + 8) = v34;
          v33 = *v34;
          v32 = v34++;
        }
        while ( (unsigned __int8)(v33 - 9) <= 4u );
      }
      *(_QWORD *)(a1 + 8) = v34;
      if ( *v32 != 41 )
        return 0;
      goto LABEL_16;
    }
    v44 = 1;
LABEL_27:
    if ( v11 == 60 )
    {
      v11 = 62;
    }
    else if ( v11 != 34 )
    {
      return 0;
    }
    ptr = nullptr;
    v46 = 0;
    if ( *v10 != 41 && *v10 )
    {
      v14 = nullptr;
      v15 = 0;
      for ( i = 0; ; i = v46 )
      {
        *(_QWORD *)(a1 + 8) = v10 + 1;
        v17 = *v10;
        v18 = 2;
        if ( i )
          v18 = i-- + 1;
        if ( v15 < v18 )
        {
          ptr = (void *)qvector_reserve(&ptr, v14, v18, 1);
          v14 = ptr;
        }
        *(_QWORD *)&v46 = v18;
        v14[i] = v17;
        *((_BYTE *)ptr + i + 1) = 0;
        v10 = *(char **)(a1 + 8);
        v14 = ptr;
        if ( !*v10 || *v10 == 41 )
          break;
        v15 = *((_QWORD *)&v46 + 1);
      }
      if ( !v44 )
        goto LABEL_63;
      *(_QWORD *)(a1 + 8) = v10 + 1;
      if ( *v10 != 41 )
        goto LABEL_63;
      v20 = v46;
      if ( (unsigned __int64)v46 <= 1 )
        goto LABEL_63;
      goto LABEL_55;
    }
    if ( v44 )
    {
      *(_QWORD *)(a1 + 8) = v10 + 1;
      if ( *v10 == 41 )
      {
        v20 = v46;
        if ( (unsigned __int64)v46 > 1 )
        {
          v14 = nullptr;
LABEL_55:
          if ( v11 == v14[v20 - 2] )
          {
            if ( v20 - 1 <= 1 )
            {
              if ( !v14 )
              {
                v21 = v11;
LABEL_93:
                v22 = (const char *)ptr;
LABEL_61:
                v23 = sub_780040(a1, (__int64)v47, 4096, (__int64)v22, v21, 0);
                v24 = ptr;
                *((_DWORD *)a2 + 7) = v23 != 0;
                if ( v24 )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree(v24);
                }
                goto LABEL_19;
              }
              *(_QWORD *)&v46 = 0;
              qfree(v14);
              ptr = nullptr;
              *((_QWORD *)&v46 + 1) = 0;
            }
            else
            {
              if ( *((_QWORD *)&v46 + 1) < (unsigned __int64)(v20 - 1) )
              {
                ptr = (void *)qvector_reserve(&ptr, v14, v20 - 1, 1);
                v14 = ptr;
              }
              *(_QWORD *)&v46 = v20 - 1;
              v14[v20 - 2] = 0;
            }
            v21 = v11;
            v22 = haystack;
            if ( !(_QWORD)v46 )
              goto LABEL_61;
            goto LABEL_93;
          }
LABEL_63:
          if ( v14 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v14);
          }
        }
      }
    }
    return 0;
  }
  if ( (unsigned int)v11 > 0x7F || !isalpha(v11) && v11 != 95 && v11 != 36 )
    return 0;
  v44 = 0;
  if ( v7 )
    goto LABEL_27;
  sub_77F0E0(a1, a2);
LABEL_16:
  v13 = haystack;
  if ( a2[1] )
    v13 = (const char *)*a2;
  *((_DWORD *)a2 + 7) = sub_780B30(a1, v13) != nullptr;
LABEL_19:
  *((_WORD *)a2 + 12) = 3;
  return 1;
}

