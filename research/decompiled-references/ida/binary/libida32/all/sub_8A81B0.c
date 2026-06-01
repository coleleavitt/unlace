unsigned __int64 __fastcall sub_8A81B0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // rax
  __int64 v6; // rax
  const char *v7; // rdi
  char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  _QWORD *v15; // r12
  size_t v16; // rax
  size_t v17; // r15
  size_t v18; // r14
  char *v19; // rax
  _QWORD *v20; // r15
  __int64 v21; // r14
  const char *v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // r13
  const char *v25; // rsi
  const char *v26; // rdi
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  const char *v31; // rsi
  char *v32; // r14
  char *v33; // rbx
  __int64 v34; // r13
  char *v35; // r12
  const char *v36; // rdi
  int v37; // eax
  char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  const char *v41; // rdi
  const char *v42; // rsi
  const char *v44; // rdi
  __int64 v45; // rax
  size_t v46; // r13
  __int64 v47; // r12
  char *v48; // rax
  __int64 v49; // rdx
  size_t v50; // rax
  size_t v51; // rbx
  void *v52; // rdi
  size_t v53; // r12
  void *v54; // rdi
  void *v55; // rax
  const char *v56; // rsi
  __int64 v57; // rax
  const char *v58; // rsi
  const char *v59; // rdi
  char *s2; // [rsp+0h] [rbp-10A8h]
  char *s2a; // [rsp+0h] [rbp-10A8h]
  _QWORD *v63; // [rsp+18h] [rbp-1090h]
  char *s1; // [rsp+20h] [rbp-1088h] BYREF
  __int128 v65; // [rsp+28h] [rbp-1080h]
  __int64 v66; // [rsp+40h] [rbp-1068h]
  __int64 v67; // [rsp+48h] [rbp-1060h]
  __m128i v68; // [rsp+50h] [rbp-1058h] BYREF
  char dest[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v70; // [rsp+1068h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 64);
  v70 = __readfsqword(0x28u);
  v66 = v4;
  v6 = *(_QWORD *)(a3 + 40);
  v68 = _mm_loadu_si128(a4);
  v67 = v6;
  qdirname(dest);
  strrpl();
  v7 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  s1 = nullptr;
  v8 = (char *)qbasename(v7);
  v65 = 0;
  v9 = strlen(dest);
  v10 = v9 + 1;
  v11 = v9;
  s1 = (char *)qvector_reserve(&s1, 0, v9 + 1, 1);
  *(_QWORD *)&v65 = v10;
  memmove(s1, dest, v11);
  s1[v11] = 0;
  v15 = sub_8A65F0((_QWORD *)a1, (__int64)&s1, 0, v12, v13, v14);
  if ( s1 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(s1);
  }
  s1 = nullptr;
  v65 = 0;
  if ( v8 )
  {
    v16 = strlen(v8);
    v17 = v16 + 1;
    v18 = v16;
    v19 = (char *)qvector_reserve(&s1, 0, v16 + 1, 1);
    *(_QWORD *)&v65 = v17;
    s1 = v19;
    memmove(v19, v8, v18);
    s1[v18] = 0;
    v20 = (_QWORD *)v15[2];
    v63 = v15 + 1;
    v8 = s1;
    if ( !v20 )
    {
LABEL_20:
      if ( v8 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v8);
      }
      goto LABEL_22;
    }
  }
  else
  {
    v20 = (_QWORD *)v15[2];
    v63 = v15 + 1;
    if ( !v20 )
      goto LABEL_22;
  }
  v21 = v65;
  v22 = haystack;
  v23 = v63;
  if ( (_QWORD)v65 )
    v22 = v8;
  s2 = (char *)v22;
  while ( 1 )
  {
    v29 = v20[5];
    if ( !v21 )
      break;
    v24 = v20;
    v25 = v8;
    v26 = haystack;
    if ( v29 )
      goto LABEL_11;
LABEL_12:
    v27 = strcmp(v26, v25);
    v28 = (_QWORD *)v20[2];
    v20 = (_QWORD *)v20[3];
    if ( v27 >= 0 )
    {
      v23 = v24;
      v20 = v28;
    }
    if ( !v20 )
      goto LABEL_37;
  }
  if ( v29 )
  {
LABEL_19:
    v24 = v20;
LABEL_11:
    v26 = (const char *)v20[4];
    v25 = s2;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v30 = v20[2];
    if ( !v30 )
      break;
    v23 = v20;
    v20 = (_QWORD *)v20[2];
    if ( *(_QWORD *)(v30 + 40) )
      goto LABEL_19;
  }
  v23 = v20;
LABEL_37:
  if ( v23 == v63 )
    goto LABEL_20;
  if ( !v23[5] )
  {
    v41 = v8;
    v42 = haystack;
    if ( v21 )
      goto LABEL_41;
    goto LABEL_42;
  }
  v41 = haystack;
  v42 = (const char *)v23[4];
  if ( v21 )
    v41 = v8;
LABEL_41:
  if ( strcmp(v41, v42) < 0 )
    goto LABEL_20;
LABEL_42:
  if ( v8 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v8);
  }
  if ( v23[7] == v66 && v23[8] == v67 && *(_OWORD *)&v68 - *(_OWORD *)(v23 + 9) == 0 )
    return v70 - __readfsqword(0x28u);
LABEL_22:
  if ( *(_QWORD *)(a1 + 168) )
  {
    v31 = dest;
    if ( strcmp(*(const char **)(a1 + 160), dest) )
      goto LABEL_67;
  }
  else
  {
    v31 = dest;
    if ( !strcmp(haystack, dest) )
      goto LABEL_24;
LABEL_67:
    sub_8A8050((_QWORD *)a1);
    v50 = strlen(dest);
    v51 = v50;
    if ( v50 )
    {
      v53 = v50 + 1;
      v54 = *(void **)(a1 + 160);
      if ( *(_QWORD *)(a1 + 176) < v50 + 1 )
      {
        v57 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), v53, 1);
        *(_QWORD *)(a1 + 160) = v57;
        v54 = (void *)v57;
      }
      v31 = dest;
      *(_QWORD *)(a1 + 168) = v53;
      memmove(v54, dest, v51);
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v51) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 168) = 0;
    }
  }
LABEL_24:
  v32 = *(char **)(a1 + 80);
  v33 = (char *)(a1 + 72);
  s2a = (char *)(a1 + 72);
  if ( !v32 )
  {
    v33 = (char *)(a1 + 72);
    goto LABEL_61;
  }
  v34 = *(_QWORD *)(a2 + 8);
  while ( 2 )
  {
    v39 = *((_QWORD *)v32 + 5);
    if ( v34 )
    {
      v31 = *(const char **)a2;
      v35 = v32;
      v36 = haystack;
      if ( !v39 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( v39 )
    {
LABEL_35:
      v31 = haystack;
LABEL_27:
      v36 = *((const char **)v32 + 4);
      v35 = v32;
LABEL_28:
      v37 = strcmp(v36, v31);
      v38 = *((char **)v32 + 2);
      v32 = *((char **)v32 + 3);
      if ( v37 >= 0 )
      {
        v33 = v35;
        v32 = v38;
      }
      if ( !v32 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v40 = *((_QWORD *)v32 + 2);
    if ( !v40 )
      break;
    v33 = v32;
    v32 = *((char **)v32 + 2);
    if ( *(_QWORD *)(v40 + 40) )
      goto LABEL_35;
  }
  v33 = v32;
LABEL_49:
  if ( v33 != s2a )
  {
    if ( *((_QWORD *)v33 + 5) )
    {
      v31 = *((const char **)v33 + 4);
      v44 = haystack;
      if ( v34 )
        goto LABEL_69;
    }
    else
    {
      v31 = haystack;
      if ( !v34 )
        goto LABEL_52;
LABEL_69:
      v44 = *(const char **)a2;
    }
    if ( strcmp(v44, v31) >= 0 )
      goto LABEL_52;
  }
LABEL_61:
  v45 = operator new(0x58u);
  v46 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v45 + 32) = 0;
  v47 = v45;
  *(_OWORD *)(v45 + 40) = 0;
  if ( v46 )
  {
    v55 = (void *)qalloc_or_throw(v46, v31);
    *(_QWORD *)(v47 + 32) = v55;
    v56 = *(const char **)a2;
    *(_QWORD *)(v47 + 48) = v46;
    memcpy(v55, v56, v46);
    *(_QWORD *)(v47 + 40) = v46;
  }
  *(_OWORD *)(v47 + 56) = 0;
  *(_OWORD *)(v47 + 72) = 0;
  v48 = (char *)sub_8A56A0((_QWORD *)(a1 + 64), v33, v47 + 32);
  v33 = v48;
  if ( v49 )
  {
    if ( !v48 && s2a != (char *)v49 )
    {
      v58 = haystack;
      if ( *(_QWORD *)(v49 + 40) )
        v58 = *(const char **)(v49 + 32);
      v59 = haystack;
      if ( *(_QWORD *)(v47 + 40) )
        v59 = *(const char **)(v47 + 32);
      strcmp(v59, v58);
    }
    v33 = (char *)v47;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 104);
  }
  else if ( v47 )
  {
    v52 = *(void **)(v47 + 32);
    if ( v52 )
    {
      *(_QWORD *)(v47 + 40) = 0;
      qfree(v52);
    }
    operator delete((void *)v47, 0x58u);
  }
LABEL_52:
  *((_QWORD *)v33 + 7) = v66;
  *((_QWORD *)v33 + 8) = v67;
  if ( &v68 != (__m128i *)(v33 + 72) )
    *(__m128i *)(v33 + 72) = _mm_load_si128(&v68);
  return v70 - __readfsqword(0x28u);
}

