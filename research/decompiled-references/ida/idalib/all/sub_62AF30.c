unsigned __int64 __fastcall sub_62AF30(__int64 a1, __int64 a2, const char *a3, char a4)
{
  int v5; // eax
  int v7; // ebx
  __int64 v8; // r14
  char *v9; // rsi
  size_t v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // r13
  const char *v16; // rdx
  const char *v17; // rdx
  char *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r15
  int v22; // eax
  size_t v23; // rbp
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v26; // [rsp+28h] [rbp-80h] BYREF
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  void *s1; // [rsp+50h] [rbp-58h] BYREF
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v26 = a2;
  v31 = __readfsqword(0x28u);
  v5 = netnode_altval(a2, 1, 65);
  if ( !v5 )
    return v31 - __readfsqword(0x28u);
  v7 = v5;
  v8 = (int)netnode_altval(v26, 0, 65);
  v28 = 0;
  ptr = nullptr;
  if ( netnode_qsupstr(v26, &ptr, 0, 80) <= 0 || (unsigned __int64)v28 <= 1 )
    netnode_qsupstr(v26, &ptr, 2, 65);
  s1 = nullptr;
  v30 = 0;
  if ( a4 )
  {
    v9 = nullptr;
    v10 = 0;
  }
  else
  {
    v23 = strlen(a3) + 1;
    s1 = (void *)qvector_reserve(&s1, 0, v23, 1);
    memset((char *)s1 + v30, 0, v23 - v30);
    *(_QWORD *)&v30 = v23;
    memcpy(s1, a3, v23);
    v11 = v30;
    v10 = v30;
    if ( (unsigned __int64)v30 > 0x3FF )
    {
      if ( !under_debugger )
        interr(3375);
      BUG();
    }
    v9 = (char *)s1;
    if ( *((_QWORD *)&v30 + 1) > 0x3FFu )
      goto LABEL_8;
  }
  s1 = (void *)qvector_reserve(&s1, v9, 1024, 1);
  v9 = (char *)s1;
  v11 = v30;
LABEL_8:
  memset(&v9[v11], 0, 1024 - v11);
  v13 = v7;
  v14 = 0;
  *(_QWORD *)&v30 = 1024;
  v24 = v13;
  do
  {
    while ( 1 )
    {
      v16 = haystack;
      if ( (_QWORD)v28 )
        v16 = (const char *)ptr;
      netnode_supset(v26, v14, v16, 0, 80, v12);
      if ( v8 == v14 )
      {
        v17 = haystack;
        if ( (_QWORD)v28 )
          v17 = (const char *)ptr;
        netnode_hashset(v26, a3, v17, 0, 80);
      }
      v18 = (char *)s1 + v10;
      v19 = sub_7BE950(&v26, a1, v14, (char *)s1 + v10, 1024 - v10, 83);
      v20 = v19;
      if ( v19 <= 0 )
        goto LABEL_10;
      v15 = s1;
      v21 = v19;
      if ( v19 < v10 )
        break;
      v22 = memcmp(s1, v18, v10);
      v20 = v21;
      if ( v22 )
        break;
      v15 = v18;
      if ( v8 == v14 )
        goto LABEL_21;
LABEL_10:
      if ( ++v14 == v24 )
        goto LABEL_22;
    }
    v21 = v20 + v10;
    netnode_supset(v26, v14, v15, v20 + v10, 83, v12);
    if ( v8 != v14 )
      goto LABEL_10;
LABEL_21:
    netnode_hashset(v26, a3, v15, v21, 72);
    ++v14;
  }
  while ( v14 != v24 );
LABEL_22:
  netnode_supset(v26, 2, s1, v10, 65, v12);
  if ( s1 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v31 - __readfsqword(0x28u);
}
