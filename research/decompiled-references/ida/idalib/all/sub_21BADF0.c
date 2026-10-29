__int64 __fastcall sub_21BADF0(void **a1, __int64 a2, __int64 a3, unsigned int *a4, char *a5, size_t a6, char a7)
{
  char *v9; // rdx
  __int64 v10; // r8
  size_t v11; // r9
  const char *v12; // rbx
  size_t v13; // rax
  unsigned int *v14; // rcx
  unsigned int *v15; // rbx
  unsigned int *v16; // r14
  size_t v17; // rax
  size_t v18; // r15
  __int64 v19; // rsi
  bool v20; // zf
  const char *v21; // rdx
  const char *v22; // r13
  char *v23; // rdi
  size_t v24; // rax
  const char *v26; // rdi
  unsigned int v27; // eax
  unsigned int na; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+0h] [rbp-78h]
  unsigned int nb; // [rsp+0h] [rbp-78h]
  void *s2a; // [rsp+18h] [rbp-60h]
  const char *s2; // [rsp+18h] [rbp-60h]
  char *s2b; // [rsp+18h] [rbp-60h]
  char *v35; // [rsp+20h] [rbp-58h]
  unsigned int *v36; // [rsp+28h] [rbp-50h]
  char *v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-40h]

  v9 = (char *)*a1;
  v10 = *a4;
  if ( (_DWORD)v10 )
  {
    v11 = 0;
    v26 = &v9[*(unsigned int *)(a2 + 4LL * (unsigned int)(v10 + 1))];
    if ( v26 )
    {
      v36 = a4;
      s2b = v9;
      nb = *a4;
      v27 = strlen(v26);
      a4 = v36;
      v9 = s2b;
      v10 = nb;
      v11 = v27;
    }
    v13 = 0;
    v12 = &v9[a4[1]];
    if ( !v12 )
    {
LABEL_4:
      n = 0;
      if ( v13 < v11 )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_3:
    v35 = v9;
    s2a = (void *)v11;
    na = v10;
    v13 = strlen(v12);
    v9 = v35;
    v11 = (size_t)s2a;
    v10 = na;
    goto LABEL_4;
  }
  v11 = 0;
  v12 = &v9[a4[1]];
  if ( v12 )
    goto LABEL_3;
  v11 = 0;
  v13 = 0;
LABEL_5:
  n = v13 - v11;
  v13 = v11;
LABEL_6:
  s2 = &v12[v13];
  if ( !(_DWORD)v10 )
    return 0;
  v14 = (unsigned int *)(a2 + 4LL * (unsigned int)(v10 + 1));
  v15 = &v14[*(unsigned int *)(a2 + 4 * v10)];
  if ( v15 == v14 )
    return 0;
  v16 = (unsigned int *)(a2 + 4LL * (unsigned int)(v10 + 1));
  while ( 1 )
  {
    v19 = *v16;
    v20 = &v9[v19] == nullptr;
    v21 = &v9[v19];
    v22 = v21;
    if ( v20 )
      goto LABEL_13;
    v17 = strlen(v21);
    v18 = v17;
    if ( a6 < v17 )
      goto LABEL_10;
    if ( !v17 )
    {
LABEL_13:
      v23 = a5;
      v24 = a6;
      LODWORD(v18) = 0;
    }
    else
    {
      if ( memcmp(a5, v22, v17) )
        goto LABEL_10;
      v23 = &a5[v18];
      v24 = a6 - v18;
    }
    if ( v24 == -1 )
    {
      v37 = v23;
      v38 = -1;
      if ( a7 )
        goto LABEL_16;
    }
    else
    {
      v37 = v23;
      v38 = v24;
      if ( a7 )
      {
LABEL_16:
        if ( (unsigned __int8)sub_2246340(&v37, s2, n) )
          return (unsigned int)(v18 + n);
        goto LABEL_10;
      }
      if ( n > v24 )
        goto LABEL_10;
    }
    if ( !n )
      return (unsigned int)(v18 + n);
    if ( !memcmp(v23, s2, n) )
      return (unsigned int)(v18 + n);
LABEL_10:
    if ( v15 == ++v16 )
      return 0;
    v9 = (char *)*a1;
  }
}
