__int64 __fastcall sub_CA4D0(__int64 *a1, const char *a2, char a3, unsigned __int64 *a4)
{
  size_t v5; // rax
  unsigned __int64 v6; // r15
  size_t v7; // r13
  void *v8; // rdi
  unsigned __int64 v9; // r13
  const char *v10; // rbp
  unsigned __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // r12
  char v19; // si
  const char *v20; // r11
  const char *v21; // rsi
  int v22; // eax
  size_t v23; // r11
  char *v25; // rax
  char v26; // dl
  __int64 v27; // [rsp+0h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+18h] [rbp-90h]
  int nb; // [rsp+18h] [rbp-90h]
  const char *src; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-78h]
  char *s2; // [rsp+50h] [rbp-58h]

  if ( !a2 )
  {
    if ( a4 )
      *a4 = 0;
    return 0;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  s1 = (char *)qvector_reserve();
  memmove(s1, a2, v7);
  s1[v7] = 0;
  v8 = s1;
  v9 = v6;
  v10 = s1;
  if ( v6 <= 1 )
  {
    v15 = 0;
    v27 = 0;
    if ( a4 )
      goto LABEL_30;
    goto LABEL_31;
  }
  if ( *s1 )
  {
    v25 = &s1[strlen(s1)];
    v26 = *(v25 - 1);
    if ( v26 == 47 || v26 == 92 )
    {
      *(v25 - 1) = 0;
      v9 = v6;
      v10 = s1;
    }
  }
  v11 = v9 - 1;
  v12 = a1[1];
  v13 = *a1;
  v14 = *a1;
  v15 = 48 * v12;
  if ( !(48 * v12) )
  {
    v27 = 0;
    v8 = (void *)v10;
    if ( a4 )
      goto LABEL_30;
    goto LABEL_31;
  }
  v27 = 0;
  v15 = 0;
  do
  {
    v16 = v14 + 24;
    if ( a3 )
      v16 = v14;
    v17 = *(_QWORD *)(v16 + 8);
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v15 < v17 - 1 && v11 >= v18 )
      {
        if ( v18 >= v11 || (v19 = v10[v17 - 1], v19 == 47) || v19 == 92 )
        {
          v20 = *(const char **)v16;
          if ( *(_QWORD *)v16 )
          {
            src = *(const char **)v16;
            n = strlen(v20);
            s2 = (char *)qvector_reserve();
            memmove(s2, src, n);
            s2[n] = 0;
            v21 = s2;
            if ( v10 )
            {
              v20 = s2;
              if ( n == -1 )
              {
LABEL_38:
                na = (size_t)v20;
                v21 = ::s1;
                if ( *v10 != 47 )
                  goto LABEL_18;
              }
              else
              {
                na = (size_t)s2;
                if ( *v10 != 47 )
                {
LABEL_18:
                  if ( (_DWORD)v18 == -1 )
                    v22 = strcasecmp(v10, v21);
                  else
                    v22 = strncasecmp(v10, v21, (int)v18);
                  v23 = na;
LABEL_21:
                  if ( v23 )
                  {
                    nb = v22;
                    qfree();
                    v22 = nb;
                  }
                  if ( !v22 )
                  {
                    v27 = v14;
                    v15 = v18;
                  }
LABEL_25:
                  v13 = *a1;
                  v12 = a1[1];
                  goto LABEL_26;
                }
              }
              if ( (_DWORD)v18 == -1 )
                v22 = strcmp(v10, v21);
              else
                v22 = strncmp(v10, v21, (int)v18);
              v23 = na;
              goto LABEL_21;
            }
            if ( !s2 )
              goto LABEL_25;
            qfree();
            v13 = *a1;
            v12 = a1[1];
          }
          else if ( v10 )
          {
            goto LABEL_38;
          }
        }
      }
    }
LABEL_26:
    v14 += 48;
  }
  while ( v14 != v13 + 48 * v12 );
  v8 = s1;
  if ( a4 )
  {
    if ( !v27 )
      v15 = 0;
LABEL_30:
    *a4 = v15;
  }
LABEL_31:
  if ( v8 )
    qfree();
  return v27;
}

