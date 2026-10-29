/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003DEB0
// Address: 0x000000014003DEB0

//----- (000000014003DEB0) ----------------------------------------------------
char __fastcall sub_14003DEB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int16 *v5; // rax
  char *v6; // r12
  __int16 *v7; // r14
  const char *v8; // rcx
  const char *v10; // rcx
  const void *v11; // rbx
  size_t v12; // rax
  const char *v13; // rcx
  const char *v14; // rcx
  int v15; // eax
  char v16; // cl
  bool v17; // zf
  __int64 v18; // rcx
  size_t v19; // r8
  char *v20; // rdx
  char v21; // r15
  const char *v22; // rcx
  int v23; // r14d
  const char *v24; // rcx
  unsigned __int8 *v25; // rcx
  int v26; // edi
  char *v27; // rcx
  char v28; // al
  char *v29; // rcx
  char v30; // dl
  char *v31; // rax
  char v32; // r13
  char *v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // r9
  char v36; // r15
  char *v37; // rcx
  __int64 v38; // r14
  char v39; // cl
  __int64 v40; // r14
  __int64 v41; // rax
  char v42; // [rsp+30h] [rbp-D0h]
  void *Block; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  CHAR v46[272]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = word_1400CAE32;
  if ( v4 )
    v5 = *(__int16 **)a2;
  v6 = (char *)Str1;
  if ( *(_BYTE *)v5 == 95 )
  {
    v7 = *(__int16 **)a2;
    if ( *(_BYTE *)(*(_QWORD *)a2 + 1LL) == 95 )
    {
      v8 = Str1;
      if ( v4 )
        v8 = *(const char **)a2;
      if ( !strcmp(v8, "__LINE__") )
      {
        *(_QWORD *)(a2 + 32) = *(int *)(a1 + 312);
        *(_WORD *)(a2 + 24) = 3;
        return 1;
      }
      v10 = Str1;
      if ( v4 )
        v10 = (const char *)v7;
      if ( !strcmp(v10, "__FILE__") )
      {
        v11 = *(const void **)(a1 + 304);
        if ( v11 && (v12 = strlen((const char *)v11)) != 0 )
        {
          sub_140001810(a2, v11, v12);
          *(_WORD *)(a2 + 24) = 4;
          *(_BYTE *)(a2 + 40) = 0;
          return 1;
        }
        else
        {
          *(_QWORD *)(a2 + 8) = 0;
          *(_WORD *)(a2 + 24) = 4;
          *(_BYTE *)(a2 + 40) = 0;
          return 1;
        }
      }
      v13 = Str1;
      if ( v4 )
        v13 = (const char *)v7;
      if ( !strcmp(v13, "__DATE__") )
        goto LABEL_22;
      v14 = Str1;
      if ( v4 )
        v14 = (const char *)v7;
      if ( !strcmp(v14, "__TIME__") )
      {
LABEL_22:
        v15 = unknown_libname_44(0);
        sub_14005A5C0((char *)&Block, 0x28u, v15);
        v16 = *(_BYTE *)(*(_QWORD *)a2 + 2LL);
        *(_QWORD *)(a2 + 8) = 0;
        v17 = v16 == 68;
        v18 = a2;
        if ( v17 )
        {
          sub_1400048F0(a2, (char *)&Block + 4, 7u);
          v19 = 4;
          v20 = (char *)&v45 + 4;
          v18 = a2;
        }
        else
        {
          v19 = 8;
          v20 = (char *)&v44 + 3;
        }
        sub_1400048F0(v18, v20, v19);
        *(_WORD *)(a2 + 24) = 4;
        *(_BYTE *)(a2 + 40) = 0;
        return 1;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 84) )
    return 0;
  v21 = 0;
  v42 = 0;
  v22 = Str1;
  if ( v4 )
    v22 = *(const char **)a2;
  v23 = strcmp(v22, "defined");
  if ( v23 )
  {
    v24 = Str1;
    if ( v4 )
      v24 = *(const char **)a2;
    if ( strcmp(v24, "__has_include") )
      return 0;
  }
  while ( 1 )
  {
    v25 = *(unsigned __int8 **)(a1 + 8);
    v26 = *v25;
    if ( (_BYTE)v26 != 32 && (unsigned __int8)(v26 - 9) > 4u )
      break;
    *(_QWORD *)(a1 + 8) = v25 + 1;
  }
  v27 = (char *)(v25 + 1);
  *(_QWORD *)(a1 + 8) = v27;
  if ( (_BYTE)v26 == 40 )
  {
    do
    {
      do
      {
        v28 = *v27++;
        *(_QWORD *)(a1 + 8) = v27;
      }
      while ( v28 == 32 );
    }
    while ( (unsigned __int8)(v28 - 9) <= 4u );
    v21 = 1;
    v42 = 1;
  }
  else if ( ((v26 & 0x80u) != 0 || !isalpha(v26)) && (_BYTE)v26 != 95 && (_BYTE)v26 != 36 )
  {
    return 0;
  }
  if ( !v23 )
  {
    sub_140039B20(a1, a2);
    if ( !v21 )
      goto LABEL_89;
    while ( 1 )
    {
      v29 = *(char **)(a1 + 8);
      v30 = *v29;
      if ( *v29 != 32 && (unsigned __int8)(v30 - 9) > 4u )
        break;
      *(_QWORD *)(a1 + 8) = v29 + 1;
    }
    *(_QWORD *)(a1 + 8) = v29 + 1;
    if ( v30 == 41 )
    {
LABEL_89:
      if ( *(_QWORD *)(a2 + 8) )
        v6 = *(char **)a2;
      *(_QWORD *)(a2 + 32) = sub_14003A4F0(a1, v6) != nullptr;
      *(_WORD *)(a2 + 24) = 3;
      return 1;
    }
    return 0;
  }
  v31 = *(char **)(a1 + 8);
  v32 = *(v31 - 1);
  if ( v32 == 60 )
  {
    v32 = 62;
  }
  else if ( v32 != 34 )
  {
    return 0;
  }
  v33 = nullptr;
  Block = nullptr;
  v34 = 0;
  v44 = 0;
  v35 = 0;
  v45 = 0;
  v36 = *v31;
  if ( *v31 )
  {
    v37 = v31;
    do
    {
      v31 = v37;
      if ( v36 == 41 )
        break;
      *(_QWORD *)(a1 + 8) = v37 + 1;
      v38 = v34 - 1;
      if ( !v34 )
        v38 = 0;
      if ( v38 + 2 > v35 )
      {
        v33 = (char *)sub_14005ABE0((__int64)&Block, v33, v38 + 2, 1u);
        Block = v33;
      }
      v44 = v38 + 2;
      v33[v38] = v36;
      *((_BYTE *)Block + v38 + 1) = 0;
      v31 = *(char **)(a1 + 8);
      v36 = *v31;
      v37 = v31;
      v35 = v45;
      v34 = v44;
      v33 = (char *)Block;
    }
    while ( *v31 );
    v6 = (char *)Str1;
  }
  if ( !v42 )
    goto LABEL_84;
  v39 = *v31;
  *(_QWORD *)(a1 + 8) = v31 + 1;
  if ( v39 != 41 )
    goto LABEL_84;
  v40 = v34 - 1;
  v41 = v34 - 1;
  if ( !v34 )
    v41 = 0;
  if ( v41 )
    LOBYTE(v41) = v33[v41 - 1];
  if ( (_BYTE)v41 != v32 )
  {
LABEL_84:
    if ( v33 )
    {
      v44 = 0;
      j_free(v33);
    }
    return 0;
  }
  if ( v40 > 1 )
  {
    if ( v40 > v35 )
    {
      v33 = (char *)sub_14005ABE0((__int64)&Block, v33, v34 - 1, 1u);
      Block = v33;
    }
    v44 = v40;
    v33[v40 - 1] = 0;
    v33 = (char *)Block;
    goto LABEL_78;
  }
  if ( v33 )
  {
    v44 = 0;
    j_free(v33);
    v33 = nullptr;
    Block = nullptr;
    v45 = 0;
LABEL_78:
    v34 = v44;
  }
  if ( v34 )
    v6 = v33;
  *(_QWORD *)(a2 + 32) = sub_14003A350(a1, v46, 260, v6, v32, 0) != nullptr;
  if ( Block )
  {
    v44 = 0;
    j_free(Block);
  }
  *(_WORD *)(a2 + 24) = 3;
  return 1;
}
// 14007117C: using guessed type __int64 __fastcall unknown_libname_44(_QWORD);
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
