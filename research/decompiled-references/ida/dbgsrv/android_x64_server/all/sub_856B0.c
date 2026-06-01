/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_856B0
// Address: 0x00000000000856B0

//----- (00000000000856B0) ----------------------------------------------------
__int64 __fastcall sub_856B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  const char *v4; // rbp
  const char *v5; // rdi
  int v6; // r15d
  const char *v7; // rdi
  char *i; // r13
  int v9; // ebp
  __int64 v10; // rbx
  _BYTE *j; // rax
  const char *v12; // rsi
  char v13; // al
  int v14; // eax
  char *v15; // rax
  bool v16; // zf
  char *v17; // rax
  int v18; // ecx
  __int16 v19; // dx
  __int64 v20; // rax
  __int64 v21; // rbp
  _BYTE *v22; // rax
  const void *v23; // rbx
  size_t v24; // rax
  size_t v25; // r15
  size_t v26; // rbp
  void *v27; // rdi
  char v28; // r13
  char *v29; // rbx
  void *v30; // rax
  int v31; // ebp
  _BYTE *v32; // r15
  void *v33; // rdi
  char *v34; // rax
  void *v36; // rax
  char *v37; // rcx
  char v38; // [rsp+7h] [rbp-1061h]
  void *ptr[2]; // [rsp+10h] [rbp-1058h] BYREF
  unsigned __int64 v41; // [rsp+20h] [rbp-1048h]
  char v42[4]; // [rsp+30h] [rbp-1038h] BYREF
  int v43; // [rsp+34h] [rbp-1034h]
  __int16 v44; // [rsp+38h] [rbp-1030h]
  char v45; // [rsp+3Ah] [rbp-102Eh]
  __int64 v46; // [rsp+3Bh] [rbp-102Dh]
  int v47; // [rsp+44h] [rbp-1024h]
  unsigned __int64 v48; // [rsp+1030h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    if ( **(_BYTE **)a2 != 95 )
      goto LABEL_12;
  }
  else if ( byte_155771[0] != 95 )
  {
    goto LABEL_12;
  }
  v4 = *(const char **)a2;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 1LL) != 95 )
    goto LABEL_12;
  if ( !v3 )
    v4 = s1;
  if ( !strcmp(v4, "__LINE__") )
  {
    *(_QWORD *)(a2 + 32) = *(int *)(a1 + 288);
    *(_WORD *)(a2 + 24) = 3;
    LOBYTE(v3) = 1;
    return (unsigned int)v3;
  }
  if ( !strcmp(v4, "__FILE__") )
  {
    v23 = *(const void **)(a1 + 280);
    if ( v23 && (v24 = strlen(*(const char **)(a1 + 280))) != 0 )
    {
      v25 = v24;
      v26 = v24 + 1;
      if ( *(_QWORD *)(a2 + 16) >= v24 + 1 )
      {
        v27 = *(void **)a2;
      }
      else
      {
        v27 = qvector_reserve(a2, *(char **)a2, v24 + 1, 1u);
        *(_QWORD *)a2 = v27;
      }
      *(_QWORD *)(a2 + 8) = v26;
      memmove(v27, v23, v25);
      *(_BYTE *)(*(_QWORD *)a2 + v25) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
LABEL_94:
    *(_WORD *)(a2 + 24) = 4;
    *(_BYTE *)(a2 + 40) = 0;
    LOBYTE(v3) = 1;
    return (unsigned int)v3;
  }
  if ( !strcmp(v4, "__DATE__") || !strcmp(v4, "__TIME__") )
  {
    v14 = time(nullptr);
    qctime(v42, 0x28u, v14);
    v15 = *(char **)a2;
    v16 = *(_BYTE *)(*(_QWORD *)a2 + 2LL) == 68;
    *(_QWORD *)(a2 + 8) = 0;
    if ( v16 )
    {
      if ( *(_QWORD *)(a2 + 16) <= 7u )
      {
        v15 = (char *)qvector_reserve(a2, v15, 8u, 1u);
        *(_QWORD *)a2 = v15;
      }
      *(_QWORD *)(a2 + 8) = 8;
      v15[7] = 0;
      v17 = *(char **)a2;
      v18 = v43;
      v19 = v44;
      v17[6] = v45;
      *((_WORD *)v17 + 2) = v19;
      *(_DWORD *)v17 = v18;
      v20 = *(_QWORD *)(a2 + 8);
      v21 = v20 - 1;
      if ( !v20 )
        v21 = 0;
      if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v21 + 5) )
      {
        v22 = *(_BYTE **)a2;
      }
      else
      {
        v22 = qvector_reserve(a2, *(char **)a2, v21 + 5, 1u);
        *(_QWORD *)a2 = v22;
      }
      *(_QWORD *)(a2 + 8) = v21 + 5;
      v22[v21 + 4] = 0;
      *(_DWORD *)(*(_QWORD *)a2 + v21) = v47;
    }
    else
    {
      if ( *(_QWORD *)(a2 + 16) <= 8u )
      {
        v15 = (char *)qvector_reserve(a2, v15, 9u, 1u);
        *(_QWORD *)a2 = v15;
      }
      *(_QWORD *)(a2 + 8) = 9;
      v15[8] = 0;
      **(_QWORD **)a2 = v46;
    }
    goto LABEL_94;
  }
LABEL_12:
  if ( !*(_BYTE *)(a1 + 84) )
    goto LABEL_81;
  v5 = v3 ? *(const char **)a2 : s1;
  v6 = strcmp(v5, "defined");
  if ( v6 )
  {
    v7 = v3 ? *(const char **)a2 : s1;
    if ( strcmp(v7, "__has_include") )
      goto LABEL_81;
  }
  for ( i = *(char **)(a1 + 8); (unsigned __int8)(*i++ - 9) < 5u || *(i - 1) == 32; *(_QWORD *)(a1 + 8) = i )
    ;
  *(_QWORD *)(a1 + 8) = i;
  v9 = (unsigned __int8)*(i - 1);
  if ( v9 == 40 )
  {
    do
    {
      do
        *(_QWORD *)(a1 + 8) = ++i;
      while ( (unsigned __int8)(*(i - 1) - 9) < 5u );
    }
    while ( *(i - 1) == 32 );
    LOBYTE(v3) = 1;
    if ( !v6 )
    {
LABEL_29:
      v10 = a2;
      sub_851A0(a1, a2);
      if ( !(_BYTE)v3 )
        goto LABEL_103;
      for ( j = *(_BYTE **)(a1 + 8); (unsigned __int8)(*j++ - 9) < 5u || *(j - 1) == 32; *(_QWORD *)(a1 + 8) = j )
        ;
      *(_QWORD *)(a1 + 8) = j;
      if ( *(j - 1) == 41 )
      {
LABEL_103:
        if ( *(_QWORD *)(a2 + 8) )
          v12 = *(const char **)a2;
        else
          v12 = s1;
        *(_QWORD *)(a2 + 32) = sub_827A0(a1, v12) != nullptr;
LABEL_89:
        *(_WORD *)(v10 + 24) = 3;
        LOBYTE(v3) = 1;
        return (unsigned int)v3;
      }
      goto LABEL_81;
    }
    goto LABEL_45;
  }
  if ( (v9 & 0x80u) == 0 && isalpha((unsigned __int8)*(i - 1)) )
  {
    LODWORD(v3) = 0;
    if ( !v6 )
      goto LABEL_29;
LABEL_45:
    v13 = *(i - 1);
    if ( v13 == 60 )
    {
      v38 = 62;
      goto LABEL_60;
    }
    if ( v13 == 34 )
    {
      v38 = 34;
LABEL_60:
      *(_OWORD *)ptr = 0;
      v41 = 0;
      while ( *i && *i != 41 )
      {
        *(_QWORD *)(a1 + 8) = i + 1;
        v28 = *i;
        v29 = (char *)ptr[1];
        if ( ptr[1] )
          v29 = (char *)ptr[1] - 1;
        v30 = ptr[0];
        if ( v41 < (unsigned __int64)(v29 + 2) )
        {
          v30 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v29 + 2), 1u);
          ptr[0] = v30;
        }
        ptr[1] = v29 + 2;
        v29[(_QWORD)v30] = v28;
        *((_BYTE *)ptr[0] + (unsigned __int64)v29 + 1) = 0;
        i = *(char **)(a1 + 8);
      }
      v31 = 1;
      if ( (_BYTE)v3 && (*(_QWORD *)(a1 + 8) = i + 1, *i == 41) )
      {
        v32 = ptr[1];
        v10 = a2;
        if ( ptr[1] >= (char *)&dword_0 + 2 )
        {
          v33 = ptr[0];
          v31 = 1;
          if ( *((_BYTE *)ptr[0] + (unsigned __int64)ptr[1] - 2) != v38 )
            goto LABEL_78;
          if ( (__int64)ptr[1] - 1 > 1 )
          {
            v36 = ptr[0];
            if ( (void *)v41 < (char *)ptr[1] - 1 )
            {
              v36 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)ptr[1] - 1, 1u);
              ptr[0] = v36;
            }
            ptr[1] = v32 - 1;
            v32[(_QWORD)v36 - 2] = 0;
            v34 = (char *)ptr[0];
          }
          else
          {
            if ( ptr[0] )
            {
              ptr[1] = nullptr;
              qfree(ptr[0]);
              ptr[0] = nullptr;
              v41 = 0;
            }
            v34 = nullptr;
          }
          v37 = (char *)s1;
          if ( ptr[1] )
            v37 = v34;
          v31 = 0;
          *(_QWORD *)(a2 + 32) = sub_85CF0(a1, v42, 4096, v37, v38, 0) != nullptr;
        }
      }
      else
      {
        v10 = a2;
      }
      v33 = ptr[0];
LABEL_78:
      if ( v33 )
      {
        ptr[1] = nullptr;
        qfree(v33);
        ptr[0] = nullptr;
        v41 = 0;
      }
      if ( !v31 )
        goto LABEL_89;
    }
LABEL_81:
    LODWORD(v3) = 0;
    return (unsigned int)v3;
  }
  LODWORD(v3) = 0;
  if ( (_BYTE)v9 == 36 || (_BYTE)v9 == 95 )
  {
    if ( !v6 )
      goto LABEL_29;
    goto LABEL_45;
  }
  return (unsigned int)v3;
}
// 0: using guessed type int dword_0;
