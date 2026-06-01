unsigned __int64 __fastcall sub_6A810(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
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
  void *v19; // rax
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
  char *v31; // r14
  char *v32; // rbx
  __int64 v33; // r13
  const char *v34; // rsi
  char *v35; // r12
  const char *v36; // rdi
  int v37; // eax
  char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  const char *v41; // rdi
  const char *v42; // rsi
  const char *v43; // rsi
  const char *v45; // rdi
  __int64 v46; // rax
  size_t v47; // r13
  __int64 v48; // r12
  char *v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  size_t v52; // rbx
  void *v53; // rdi
  size_t v54; // r12
  void *v55; // rdi
  void *v56; // rax
  const char *v57; // rsi
  __int64 v58; // rax
  const char *v59; // rsi
  const char *v60; // rdi
  char *s2; // [rsp+0h] [rbp-10A8h]
  char *s2a; // [rsp+0h] [rbp-10A8h]
  _QWORD *v64; // [rsp+18h] [rbp-1090h]
  void *ptr; // [rsp+20h] [rbp-1088h] BYREF
  __int128 v66; // [rsp+28h] [rbp-1080h]
  __int64 v67; // [rsp+40h] [rbp-1068h]
  __int64 v68; // [rsp+48h] [rbp-1060h]
  __m128i v69; // [rsp+50h] [rbp-1058h] BYREF
  char dest[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v71; // [rsp+1068h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 64);
  v71 = __readfsqword(0x28u);
  v67 = v4;
  v6 = *(_QWORD *)(a3 + 40);
  v69 = _mm_loadu_si128(a4);
  v68 = v6;
  sub_94D70(dest);
  sub_97680(dest, 92, 47);
  v7 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  ptr = nullptr;
  v8 = (char *)sub_94E50(v7);
  v66 = 0;
  v9 = strlen(dest);
  v10 = v9 + 1;
  v11 = v9;
  ptr = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
  *(_QWORD *)&v66 = v10;
  memmove(ptr, dest, v11);
  *((_BYTE *)ptr + v11) = 0;
  v15 = sub_68C40((_QWORD *)a1, (__int64)&ptr, 0, v12, v13, v14);
  if ( ptr )
  {
    *(_QWORD *)&v66 = 0;
    j__free(ptr);
  }
  ptr = nullptr;
  v66 = 0;
  if ( v8 )
  {
    v16 = strlen(v8);
    v17 = v16 + 1;
    v18 = v16;
    v19 = (void *)sub_96080(&ptr, 0, v16 + 1, 1);
    *(_QWORD *)&v66 = v17;
    ptr = v19;
    memmove(v19, v8, v18);
    *((_BYTE *)ptr + v18) = 0;
    v20 = (_QWORD *)v15[2];
    v64 = v15 + 1;
    v8 = (char *)ptr;
    if ( !v20 )
    {
LABEL_20:
      if ( v8 )
      {
        *(_QWORD *)&v66 = 0;
        j__free(v8);
      }
      goto LABEL_22;
    }
  }
  else
  {
    v20 = (_QWORD *)v15[2];
    v64 = v15 + 1;
    if ( !v20 )
      goto LABEL_22;
  }
  v21 = v66;
  v22 = haystack;
  v23 = v64;
  if ( (_QWORD)v66 )
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
  if ( v23 == v64 )
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
    *(_QWORD *)&v66 = 0;
    j__free(v8);
  }
  if ( v23[7] == v67 && v23[8] == v68 && *(_OWORD *)&v69 - *(_OWORD *)(v23 + 9) == 0 )
    return v71 - __readfsqword(0x28u);
LABEL_22:
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( strcmp(*(const char **)(a1 + 160), dest) )
      goto LABEL_67;
  }
  else
  {
    if ( !strcmp(haystack, dest) )
      goto LABEL_24;
LABEL_67:
    sub_6A6B0((_QWORD *)a1);
    v51 = strlen(dest);
    v52 = v51;
    if ( v51 )
    {
      v54 = v51 + 1;
      v55 = *(void **)(a1 + 160);
      if ( *(_QWORD *)(a1 + 176) < v51 + 1 )
      {
        v58 = sub_96080(a1 + 160, *(_QWORD *)(a1 + 160), v54, 1);
        *(_QWORD *)(a1 + 160) = v58;
        v55 = (void *)v58;
      }
      *(_QWORD *)(a1 + 168) = v54;
      memmove(v55, dest, v52);
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v52) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 168) = 0;
    }
  }
LABEL_24:
  v31 = *(char **)(a1 + 80);
  v32 = (char *)(a1 + 72);
  s2a = (char *)(a1 + 72);
  if ( !v31 )
  {
    v32 = (char *)(a1 + 72);
    goto LABEL_61;
  }
  v33 = *(_QWORD *)(a2 + 8);
  while ( 2 )
  {
    v39 = *((_QWORD *)v31 + 5);
    if ( v33 )
    {
      v34 = *(const char **)a2;
      v35 = v31;
      v36 = haystack;
      if ( !v39 )
        goto LABEL_28;
      goto LABEL_27;
    }
    if ( v39 )
    {
LABEL_35:
      v34 = haystack;
LABEL_27:
      v36 = *((const char **)v31 + 4);
      v35 = v31;
LABEL_28:
      v37 = strcmp(v36, v34);
      v38 = *((char **)v31 + 2);
      v31 = *((char **)v31 + 3);
      if ( v37 >= 0 )
      {
        v32 = v35;
        v31 = v38;
      }
      if ( !v31 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v40 = *((_QWORD *)v31 + 2);
    if ( !v40 )
      break;
    v32 = v31;
    v31 = *((char **)v31 + 2);
    if ( *(_QWORD *)(v40 + 40) )
      goto LABEL_35;
  }
  v32 = v31;
LABEL_49:
  if ( v32 != s2a )
  {
    if ( *((_QWORD *)v32 + 5) )
    {
      v43 = *((const char **)v32 + 4);
      v45 = haystack;
      if ( v33 )
        goto LABEL_69;
    }
    else
    {
      v43 = haystack;
      if ( !v33 )
        goto LABEL_52;
LABEL_69:
      v45 = *(const char **)a2;
    }
    if ( strcmp(v45, v43) >= 0 )
      goto LABEL_52;
  }
LABEL_61:
  v46 = operator new(0x58u);
  v47 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v46 + 32) = 0;
  v48 = v46;
  *(_OWORD *)(v46 + 40) = 0;
  if ( v47 )
  {
    v56 = (void *)sub_96030(v47);
    *(_QWORD *)(v48 + 32) = v56;
    v57 = *(const char **)a2;
    *(_QWORD *)(v48 + 48) = v47;
    memcpy(v56, v57, v47);
    *(_QWORD *)(v48 + 40) = v47;
  }
  *(_OWORD *)(v48 + 56) = 0;
  *(_OWORD *)(v48 + 72) = 0;
  v49 = (char *)sub_67CF0((_QWORD *)(a1 + 64), v32, v48 + 32);
  v32 = v49;
  if ( v50 )
  {
    if ( !v49 && s2a != (char *)v50 )
    {
      v59 = haystack;
      if ( *(_QWORD *)(v50 + 40) )
        v59 = *(const char **)(v50 + 32);
      v60 = haystack;
      if ( *(_QWORD *)(v48 + 40) )
        v60 = *(const char **)(v48 + 32);
      strcmp(v60, v59);
    }
    v32 = (char *)v48;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 104);
  }
  else if ( v48 )
  {
    v53 = *(void **)(v48 + 32);
    if ( v53 )
    {
      *(_QWORD *)(v48 + 40) = 0;
      j__free(v53);
    }
    operator delete((void *)v48, 0x58u);
  }
LABEL_52:
  *((_QWORD *)v32 + 7) = v67;
  *((_QWORD *)v32 + 8) = v68;
  if ( &v69 != (__m128i *)(v32 + 72) )
    *(__m128i *)(v32 + 72) = _mm_load_si128(&v69);
  return v71 - __readfsqword(0x28u);
}

