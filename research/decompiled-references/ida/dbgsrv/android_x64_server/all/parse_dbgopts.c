/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_dbgopts
// Address: 0x00000000000B2C50

//----- (00000000000B2C50) ----------------------------------------------------
__int64 __fastcall parse_dbgopts(__int64 a1, __int64 a2)
{
  char *v2; // r14
  const char *v4; // r15
  _BYTE *v5; // rax
  _BYTE *v6; // rbp
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  char *v10; // rbx
  char *v11; // rax
  char v12; // al
  const char *v13; // r12
  int v14; // eax
  char *v15; // rbp
  char *v16; // r12
  int v17; // ebp
  char *v18; // rax
  int v19; // ecx
  int v20; // ebx
  char v21; // cl
  int v22; // eax
  __int64 v23; // rax
  size_t v24; // rbx
  __int64 v25; // r15
  char *v26; // rdi
  size_t v27; // rax
  size_t v28; // rbx
  char **v29; // r15
  size_t v30; // rbp
  char *v31; // rdi
  size_t v32; // rax
  size_t v33; // rbx
  int v34; // r15d
  size_t v35; // rbp
  char *v36; // rdi
  size_t v37; // rax
  size_t v38; // r12
  int v39; // r15d
  size_t v40; // rbp
  void *v41; // rdi
  int v43; // [rsp+8h] [rbp-460h]
  int v44; // [rsp+8h] [rbp-460h]
  char v45; // [rsp+Ch] [rbp-45Ch]
  char *s; // [rsp+10h] [rbp-458h]
  int v47; // [rsp+18h] [rbp-450h]
  int v48; // [rsp+20h] [rbp-448h]
  char *endptr; // [rsp+28h] [rbp-440h] BYREF
  char src[1024]; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int64 v51; // [rsp+430h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  LODWORD(v2) = 0;
  if ( !a1 || !a2 )
    return (unsigned int)v2;
  v4 = src;
  qstrncpy(src, a2, 1024);
  endptr = src;
  v5 = (_BYTE *)__strchr_chk(src, 64, 1024);
  if ( !v5 )
  {
    v9 = __strchr_chk(src, 123, 1024);
    if ( v9 )
    {
      v10 = (char *)(v9 + 1);
      *(_BYTE *)v9 = 0;
      v11 = strchr((const char *)(v9 + 1), 125);
      endptr = v11;
      if ( !v11 )
        goto LABEL_41;
      s = v10;
      v4 = v11 + 1;
      endptr = v11 + 1;
      *v11 = 0;
      v12 = v11[1];
      v2 = nullptr;
      if ( v12 )
      {
        v13 = nullptr;
        if ( v12 != 43 )
          return (unsigned int)v2;
        goto LABEL_32;
      }
    }
    else
    {
      v2 = nullptr;
      s = nullptr;
    }
    v13 = nullptr;
LABEL_32:
    v17 = 23946;
    goto LABEL_33;
  }
  v6 = v5;
  v4 = v5 + 1;
  *v5 = 0;
  endptr = v5 + 1;
  if ( v5[1] == 91 )
  {
    v7 = strchr(v5 + 1, 93);
    if ( !v7 )
      goto LABEL_41;
    v2 = v6 + 2;
    v6[1] = 0;
    v4 = v7 + 1;
    *v7 = 0;
    endptr = v7 + 1;
    if ( v7[2] != 58 )
      goto LABEL_18;
    v8 = v7 + 2;
    if ( v7 == (char *)-2LL )
      goto LABEL_18;
  }
  else
  {
    v8 = strchr(v5 + 1, 58);
    v2 = (char *)v4;
    if ( !v8 )
    {
LABEL_18:
      v43 = 0;
      goto LABEL_19;
    }
  }
  v14 = (unsigned __int8)v8[1];
  if ( (v14 & 0x80u) != 0 || (unsigned int)(v14 - 48) > 9 )
    goto LABEL_18;
  *v8 = 0;
  endptr = v8 + 1;
  v43 = atoi(v8 + 1);
  v4 = v8 + 1;
LABEL_19:
  v15 = (char *)__strchr_chk(src, 123, 1024);
  v16 = (char *)__strchr_chk(src, 58, 1024);
  if ( !v15 || v16 != nullptr && v15 > v16 )
  {
    s = nullptr;
    v17 = v43;
    if ( !v16 )
      goto LABEL_31;
LABEL_25:
    *v16 = 0;
    v13 = v16 + 1;
    if ( !v17 )
      goto LABEL_32;
    goto LABEL_33;
  }
  s = v15 + 1;
  *v15 = 0;
  v17 = v43;
  if ( v16 )
  {
    if ( *(v16 - 1) != 125 )
      goto LABEL_41;
  }
  else
  {
    v16 = &s[strlen(s)];
    if ( *(v16 - 1) != 125 )
      goto LABEL_41;
  }
  *(v16 - 1) = 0;
  v16 = strchr(v16, 58);
  if ( v16 )
    goto LABEL_25;
LABEL_31:
  v13 = nullptr;
  if ( !v17 )
    goto LABEL_32;
LABEL_33:
  v18 = strchr(v4, 43);
  if ( !v18 )
    goto LABEL_43;
  v19 = (unsigned __int8)v18[1];
  if ( (v19 & 0x80u) != 0 )
    goto LABEL_43;
  if ( (unsigned int)(v19 - 48) > 9 )
  {
    if ( !(_BYTE)v19 )
    {
      v48 = -1;
      *v18 = 0;
      v45 = 1;
      goto LABEL_44;
    }
LABEL_43:
    v48 = -1;
    v45 = 0;
LABEL_44:
    v47 = -1;
    goto LABEL_45;
  }
  *v18 = 0;
  v20 = strtoul(v18 + 1, &endptr, 10);
  if ( v20 == -1 )
    goto LABEL_41;
  v21 = *endptr;
  v22 = -1;
  if ( *endptr == 44 )
  {
    ++endptr;
    v22 = strtoul(endptr, &endptr, 10);
    if ( v22 != -1 )
    {
      v21 = *endptr;
      goto LABEL_40;
    }
LABEL_41:
    LODWORD(v2) = 0;
    return (unsigned int)v2;
  }
LABEL_40:
  if ( v21 )
    goto LABEL_41;
  v47 = v20;
  v48 = v22;
  v45 = 1;
LABEL_45:
  v23 = __strlen_chk(src, 1024);
  if ( v23 )
  {
    v24 = v23;
    v25 = v23 + 1;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v23 + 1) )
    {
      v26 = *(char **)a1;
    }
    else
    {
      v26 = (char *)qvector_reserve(a1, *(char **)a1, v23 + 1, 1u);
      *(_QWORD *)a1 = v26;
    }
    *(_QWORD *)(a1 + 8) = v25;
    memmove(v26, src, v24);
    *(_BYTE *)(*(_QWORD *)a1 + v24) = 0;
    if ( !v2 )
      goto LABEL_55;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( !v2 )
      goto LABEL_55;
  }
  v27 = strlen(v2);
  if ( v27 )
  {
    v28 = v27;
    v44 = v17;
    v29 = (char **)(a1 + 48);
    v30 = v27 + 1;
    if ( *(_QWORD *)(a1 + 64) >= v27 + 1 )
    {
      v31 = *v29;
    }
    else
    {
      v31 = (char *)qvector_reserve(a1 + 48, *v29, v27 + 1, 1u);
      *v29 = v31;
    }
    *(_QWORD *)(a1 + 56) = v30;
    memmove(v31, v2, v28);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v28) = 0;
    v17 = v44;
    if ( !v13 )
      goto LABEL_62;
    goto LABEL_59;
  }
LABEL_55:
  *(_QWORD *)(a1 + 56) = 0;
  if ( !v13 )
    goto LABEL_62;
LABEL_59:
  v32 = strlen(v13);
  if ( !v32 )
  {
LABEL_62:
    *(_QWORD *)(a1 + 80) = 0;
    goto LABEL_65;
  }
  v33 = v32;
  v34 = v17;
  v2 = (char *)(a1 + 72);
  v35 = v32 + 1;
  if ( *(_QWORD *)(a1 + 88) >= v32 + 1 )
  {
    v36 = *(char **)v2;
  }
  else
  {
    v36 = (char *)qvector_reserve(a1 + 72, *(char **)v2, v32 + 1, 1u);
    *(_QWORD *)v2 = v36;
  }
  *(_QWORD *)(a1 + 80) = v35;
  memmove(v36, v13, v33);
  *(_BYTE *)(*(_QWORD *)(a1 + 72) + v33) = 0;
  v17 = v34;
LABEL_65:
  if ( s && (v37 = strlen(s)) != 0 )
  {
    v38 = v37;
    v39 = v17;
    v2 = (char *)(a1 + 24);
    v40 = v37 + 1;
    if ( *(_QWORD *)(a1 + 40) >= v37 + 1 )
    {
      v41 = *(void **)v2;
    }
    else
    {
      v41 = qvector_reserve(a1 + 24, *(char **)v2, v37 + 1, 1u);
      *(_QWORD *)v2 = v41;
    }
    *(_QWORD *)(a1 + 32) = v40;
    memmove(v41, s, v38);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v38) = 0;
    v17 = v39;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_DWORD *)(a1 + 96) = v17;
  *(_DWORD *)(a1 + 100) = v47;
  *(_DWORD *)(a1 + 104) = v48;
  *(_BYTE *)(a1 + 108) = v45;
  LOBYTE(v2) = 1;
  return (unsigned int)v2;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
