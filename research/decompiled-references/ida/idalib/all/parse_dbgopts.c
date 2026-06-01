__int64 __fastcall parse_dbgopts(__int64 a1, __int64 a2)
{
  char *v4; // rax
  char *v5; // rbp
  char *v6; // r14
  bool v7; // zf
  int v8; // r15d
  char *v9; // rax
  char *v10; // r13
  char *v11; // rax
  char *v12; // rbp
  char *v13; // rdi
  char *v14; // rax
  unsigned int v15; // edx
  size_t v16; // rax
  size_t v17; // r8
  size_t v18; // rax
  size_t v19; // r12
  size_t v20; // rax
  size_t v21; // r12
  size_t v22; // rax
  size_t v23; // rbp
  void *v24; // rdi
  size_t v25; // rdx
  char *v26; // rax
  char *v27; // rax
  char v28; // al
  char *v29; // rax
  void *v30; // rdi
  size_t v31; // rdx
  void *v32; // rdi
  size_t v33; // r14
  void *v34; // rdi
  size_t v35; // r12
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // [rsp+0h] [rbp-478h]
  int v42; // [rsp+8h] [rbp-470h]
  int v43; // [rsp+Ch] [rbp-46Ch]
  size_t v44; // [rsp+10h] [rbp-468h]
  size_t v45; // [rsp+10h] [rbp-468h]
  size_t v46; // [rsp+10h] [rbp-468h]
  size_t v47; // [rsp+18h] [rbp-460h]
  char *endptr; // [rsp+28h] [rbp-450h] BYREF
  char s[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+438h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v41 = a2 == 0 || a1 == 0;
  if ( v41 )
    return 0;
  qstrncpy(s, a2, 1024);
  endptr = s;
  v4 = strchr(s, 64);
  v5 = v4;
  if ( !v4 )
  {
    v26 = strchr(s, 123);
    v6 = v26;
    if ( v26 )
    {
      *v26 = 0;
      v10 = v26 + 1;
      v27 = strchr(v26 + 1, 125);
      if ( !v27 )
        return 0;
      v13 = v27 + 1;
      *v27 = 0;
      v28 = v27[1];
      endptr = v13;
      if ( v28 != 43 )
      {
        if ( v28 )
          return 0;
      }
      v6 = nullptr;
      v8 = 23946;
    }
    else
    {
      v10 = nullptr;
      v13 = s;
      v8 = 23946;
    }
    goto LABEL_18;
  }
  v6 = v4 + 1;
  v7 = v4[1] == 91;
  *v4 = 0;
  endptr = v4 + 1;
  if ( !v7 )
  {
    v8 = 0;
    v9 = strchr(v4 + 1, 58);
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v29 = strchr(v4 + 1, 93);
  if ( !v29 )
    return 0;
  v5[1] = 0;
  v8 = 0;
  v7 = v29[2] == 58;
  *v29 = 0;
  v6 = v5 + 2;
  endptr = v29 + 1;
  if ( v7 )
  {
    v9 = v29 + 2;
LABEL_6:
    v8 = 0;
    if ( (unsigned __int8)(v9[1] - 48) <= 9u )
    {
      *v9 = 0;
      endptr = v9 + 1;
      v8 = strtol(v9 + 1, nullptr, 10);
    }
  }
LABEL_8:
  v10 = strchr(s, 123);
  v11 = strchr(s, 58);
  if ( !v10 )
    goto LABEL_14;
  if ( !v11 )
  {
    *v10 = 0;
    v12 = v10 + 1;
    v11 = &v10[strlen(v10 + 1) + 1];
    goto LABEL_12;
  }
  if ( v11 >= v10 )
  {
    *v10 = 0;
    v12 = v10 + 1;
LABEL_12:
    if ( *(v11 - 1) != 125 )
      return 0;
    *(v11 - 1) = 0;
    v10 = v12;
    v11 = strchr(v11, 58);
LABEL_14:
    v5 = nullptr;
    if ( !v11 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v10 = nullptr;
LABEL_15:
  *v11 = 0;
  v5 = v11 + 1;
LABEL_16:
  v13 = endptr;
  if ( !v8 )
    v8 = 23946;
LABEL_18:
  v14 = strchr(v13, 43);
  if ( !v14 )
    goto LABEL_36;
  v15 = v14[1];
  if ( v15 > 0x7F )
    goto LABEL_36;
  if ( v15 - 48 > 9 )
  {
    if ( !v14[1] )
    {
      *v14 = 0;
      v42 = -1;
      v43 = -1;
      goto LABEL_23;
    }
LABEL_36:
    v42 = -1;
    v43 = -1;
    v16 = strlen(s);
    v17 = v16;
    if ( !v16 )
      goto LABEL_24;
LABEL_37:
    v24 = *(void **)a1;
    v25 = v16 + 1;
    if ( *(_QWORD *)(a1 + 16) < v16 + 1 )
    {
      v46 = v16 + 1;
      v47 = v16;
      v40 = qvector_reserve(a1, *(_QWORD *)a1, v25, 1);
      v17 = v47;
      v25 = v46;
      *(_QWORD *)a1 = v40;
      v24 = (void *)v40;
    }
    *(_QWORD *)(a1 + 8) = v25;
    v44 = v17;
    memmove(v24, s, v17);
    *(_BYTE *)(*(_QWORD *)a1 + v44) = 0;
    goto LABEL_25;
  }
  *v14 = 0;
  v42 = strtoul(v14 + 1, &endptr, 10);
  if ( v42 == -1 )
    return 0;
  v43 = -1;
  v36 = *endptr;
  if ( *endptr != 44 )
    goto LABEL_60;
  ++endptr;
  v43 = strtoul(endptr, &endptr, 10);
  if ( v43 == -1 )
    return 0;
  v36 = *endptr;
LABEL_60:
  if ( v36 )
    return 0;
LABEL_23:
  v41 = 1;
  v16 = strlen(s);
  v17 = v16;
  if ( v16 )
    goto LABEL_37;
LABEL_24:
  *(_QWORD *)(a1 + 8) = 0;
LABEL_25:
  if ( v6 && (v18 = strlen(v6), (v19 = v18) != 0) )
  {
    v30 = *(void **)(a1 + 48);
    v31 = v18 + 1;
    if ( *(_QWORD *)(a1 + 64) < v18 + 1 )
    {
      v45 = v18 + 1;
      v39 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), v31, 1);
      v31 = v45;
      *(_QWORD *)(a1 + 48) = v39;
      v30 = (void *)v39;
    }
    *(_QWORD *)(a1 + 56) = v31;
    memmove(v30, v6, v19);
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + v19) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0;
  }
  if ( v5 && (v20 = strlen(v5), (v21 = v20) != 0) )
  {
    v32 = *(void **)(a1 + 72);
    v33 = v20 + 1;
    if ( *(_QWORD *)(a1 + 88) < v20 + 1 )
    {
      v38 = qvector_reserve(a1 + 72, *(_QWORD *)(a1 + 72), v33, 1);
      *(_QWORD *)(a1 + 72) = v38;
      v32 = (void *)v38;
    }
    *(_QWORD *)(a1 + 80) = v33;
    memmove(v32, v5, v21);
    *(_BYTE *)(*(_QWORD *)(a1 + 72) + v21) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = 0;
  }
  if ( v10 && (v22 = strlen(v10), (v23 = v22) != 0) )
  {
    v34 = *(void **)(a1 + 24);
    v35 = v22 + 1;
    if ( *(_QWORD *)(a1 + 40) < v22 + 1 )
    {
      v37 = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v35, 1);
      *(_QWORD *)(a1 + 24) = v37;
      v34 = (void *)v37;
    }
    *(_QWORD *)(a1 + 32) = v35;
    memmove(v34, v10, v23);
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v23) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_DWORD *)(a1 + 96) = v8;
  *(_DWORD *)(a1 + 100) = v42;
  *(_DWORD *)(a1 + 104) = v43;
  *(_BYTE *)(a1 + 108) = v41;
  return 1;
}
