__int64 __fastcall sub_483CC0(__int64 *a1, char *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  size_t v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15
  size_t v12; // rbp
  char *v13; // rdi
  void *v15; // rbx
  char *s2; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  s2 = nullptr;
  v17 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
    *(_QWORD *)&v17 = v4;
    memmove(s2, a2, v5);
    s2[v5] = 0;
    if ( (unsigned __int64)v17 > 1 )
      qstrupr(s2);
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = *a1;
  if ( !(48 * v6) )
  {
LABEL_21:
    v8 = 0;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v9 = 0;
    v10 = 0;
    if ( *(_QWORD *)(v8 + 32) )
      break;
LABEL_20:
    v8 += 48;
    if ( v8 == v7 + 48 * v6 )
      goto LABEL_21;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v8 + 24) + 24 * v10;
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      v13 = s2;
      if ( !(_QWORD)v17 || !*s2 )
        goto LABEL_8;
      goto LABEL_18;
    }
    v15 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 8));
    memcpy(v15, *(const void **)v11, v12);
    if ( v12 != 1 )
      qstrupr(v15);
    a2 = (char *)&s1;
    if ( (_QWORD)v17 )
      a2 = s2;
    if ( !strcmp((const char *)v15, a2) )
      break;
    if ( v15 )
      qfree(v15, a2);
LABEL_18:
    v10 = ++v9;
    if ( (unsigned __int64)v9 >= *(_QWORD *)(v8 + 32) )
    {
      v7 = *a1;
      v6 = a1[1];
      goto LABEL_20;
    }
  }
  if ( !v15 )
  {
LABEL_22:
    v13 = s2;
    goto LABEL_8;
  }
  qfree(v15, a2);
  v13 = s2;
LABEL_8:
  if ( v13 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v13, a2);
  }
  return v8;
}
