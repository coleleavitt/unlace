unsigned __int64 __fastcall sub_60EAD0(__int64 a1, unsigned int a2, const char *a3, char a4)
{
  int v6; // r13d
  char *v7; // rsi
  size_t v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // ebx
  char *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // r15
  int v16; // eax
  const char *v17; // rdx
  const char *v18; // rdx
  size_t v19; // rbp
  int v21; // [rsp+28h] [rbp-80h]
  unsigned int v22; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v24; // [rsp+38h] [rbp-70h]
  void *s1; // [rsp+50h] [rbp-58h] BYREF
  __int128 v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v22 = a2;
  v27 = __readfsqword(0x28u);
  v21 = netnode_altval(a2, 1, 65);
  if ( !v21 )
    return v27 - __readfsqword(0x28u);
  v6 = netnode_altval(v22, 0, 65);
  v24 = 0;
  ptr = nullptr;
  if ( netnode_qsupstr(v22, &ptr, 0, 80) <= 0 || (unsigned __int64)v24 <= 1 )
    netnode_qsupstr(v22, &ptr, 2, 65);
  s1 = nullptr;
  v26 = 0;
  if ( a4 )
  {
    v7 = nullptr;
    v8 = 0;
  }
  else
  {
    v19 = strlen(a3) + 1;
    s1 = (void *)qvector_reserve(&s1, 0, v19, 1);
    memset((char *)s1 + v26, 0, v19 - v26);
    *(_QWORD *)&v26 = v19;
    memcpy(s1, a3, v19);
    v9 = v26;
    v8 = v26;
    if ( (unsigned __int64)v26 > 0x3FF )
    {
      if ( !under_debugger )
        interr(3375);
      BUG();
    }
    v7 = (char *)s1;
    if ( *((_QWORD *)&v26 + 1) > 0x3FFu )
      goto LABEL_8;
  }
  s1 = (void *)qvector_reserve(&s1, v7, 1024, 1);
  v7 = (char *)s1;
  v9 = v26;
LABEL_8:
  v10 = 0;
  memset(&v7[v9], 0, 1024 - v9);
  *(_QWORD *)&v26 = 1024;
  do
  {
    while ( 1 )
    {
      v17 = haystack;
      if ( (_QWORD)v24 )
        v17 = (const char *)ptr;
      netnode_supset(v22, v10, v17, 0, 80);
      if ( v6 == v10 )
      {
        v18 = haystack;
        if ( (_QWORD)v24 )
          v18 = (const char *)ptr;
        netnode_hashset(v22, a3, v18, 0, 80);
      }
      v11 = (char *)s1 + v8;
      v12 = sub_79B5C0(&v22, a1, v10, (char *)s1 + v8, 1024 - v8, 83);
      v13 = v12;
      if ( v12 <= 0 )
        goto LABEL_13;
      v14 = s1;
      v15 = v12;
      if ( v12 < v8 )
        break;
      v16 = memcmp(s1, v11, v8);
      v13 = v15;
      if ( v16 )
        break;
      v14 = v11;
      if ( v6 == v10 )
        goto LABEL_21;
LABEL_13:
      if ( v21 == ++v10 )
        goto LABEL_22;
    }
    v15 = v13 + v8;
    netnode_supset(v22, v10, v14, v13 + v8, 83);
    if ( v6 != v10 )
      goto LABEL_13;
LABEL_21:
    netnode_hashset(v22, a3, v14, v15, 72);
    ++v10;
  }
  while ( v21 != v10 );
LABEL_22:
  netnode_supset(v22, 2, s1, v8, 65);
  if ( s1 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v24 = 0;
    qfree(ptr);
  }
  return v27 - __readfsqword(0x28u);
}

