__int64 sub_38B560(__int64 a1, const char *a2, ...)
{
  char **v2; // rbx
  __int64 result; // rax
  const char *v4; // r14
  char *v5; // rax
  size_t v6; // rcx
  size_t v7; // r13
  const char *v8; // rdi
  size_t v9; // rax
  size_t v10; // r15
  char *v11; // r14
  char *v12; // rdi
  size_t v13; // r13
  size_t na; // [rsp+8h] [rbp-148h]
  size_t n; // [rsp+8h] [rbp-148h]
  unsigned __int8 nb; // [rsp+8h] [rbp-148h]
  char *s1; // [rsp+10h] [rbp-140h] BYREF
  __int128 v18; // [rsp+18h] [rbp-138h]
  void *ptr; // [rsp+30h] [rbp-120h] BYREF
  __int128 v20; // [rsp+38h] [rbp-118h]
  gcc_va_list va; // [rsp+50h] [rbp-100h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-E8h]

  v22 = __readfsqword(0x28u);
  v2 = &off_2B25AE0;
  while ( strcmp(*v2, a2) )
  {
    v2 += 4;
    if ( &off_2B25B40 == (_UNKNOWN **)v2 )
      return 0;
  }
  v4 = v2[2];
  s1 = nullptr;
  v18 = 0;
  if ( batch[0] )
    v4 = v2[1];
  if ( v4 )
  {
    na = strlen(v4);
    v5 = (char *)qvector_reserve(&s1, 0, na + 1, 1);
    *(_QWORD *)&v18 = na + 1;
    s1 = v5;
    memmove(v5, v4, na);
    s1[na] = 0;
    v6 = *(_QWORD *)(a1 + 104);
    v7 = v6 + 48LL * *(_QWORD *)(a1 + 112);
    if ( v6 == v7 )
      goto LABEL_22;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 104);
    v7 = v6 + 48LL * *(_QWORD *)(a1 + 112);
    if ( v7 == v6 )
      goto LABEL_19;
  }
  n = v6;
  while ( 1 )
  {
    v8 = haystack;
    if ( *(_QWORD *)(n + 8) )
      v8 = *(const char **)n;
    if ( !strcmp(v8, a2) )
      break;
    n += 48LL;
    if ( v7 == n )
      goto LABEL_22;
  }
  if ( *(_QWORD *)(n + 32) > 1u )
    v4 = *(const char **)(n + 24);
  if ( !v4 || (v9 = strlen(v4), (v10 = v9) == 0) )
  {
    *(_QWORD *)&v18 = 0;
LABEL_19:
    v11 = (char *)haystack;
    goto LABEL_20;
  }
  v12 = s1;
  v13 = v9 + 1;
  if ( *((_QWORD *)&v18 + 1) < v9 + 1 )
  {
    s1 = (char *)qvector_reserve(&s1, s1, v13, 1);
    v12 = s1;
  }
  *(_QWORD *)&v18 = v13;
  memmove(v12, v4, v10);
  s1[v10] = 0;
LABEL_22:
  if ( !(_QWORD)v18 )
    goto LABEL_19;
  v11 = s1;
  if ( !strcmp(s1, "yes") )
  {
    result = 1;
  }
  else if ( *v11 != 110 || v11[1] != 111 || (result = 0, v11[2]) )
  {
    if ( !strcmp(v11, "ask") )
    {
      va_start(va, a2);
      ptr = nullptr;
      v20 = 0;
      sub_35A790((char **)&ptr);
      callui();
    }
LABEL_20:
    sub_378C70((__int64)"Unknown cvt64 option value '%s' for %s", v11, a2);
  }
  if ( v11 )
  {
    nb = result;
    *(_QWORD *)&v18 = 0;
    qfree(v11);
    return nb;
  }
  return result;
}
