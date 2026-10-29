__int64 __fastcall sub_23B360(__int64 *a1, char *a2, char a3, unsigned __int64 *a4)
{
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  char *v8; // rdi
  unsigned __int64 v9; // r13
  char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  char *v16; // r12
  char *v17; // r11
  int v18; // eax
  char *v19; // r11
  char *v21; // rax
  char v22; // dl
  __int64 v23; // [rsp+0h] [rbp-A8h]
  size_t na; // [rsp+18h] [rbp-90h]
  char *n; // [rsp+18h] [rbp-90h]
  int nb; // [rsp+18h] [rbp-90h]
  char *src; // [rsp+28h] [rbp-80h]
  char *s1; // [rsp+30h] [rbp-78h] BYREF
  __int128 v31; // [rsp+38h] [rbp-70h]
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int128 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v31 = 0;
  s1 = nullptr;
  if ( !a2 )
  {
    if ( a4 )
      *a4 = 0;
    return 0;
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  s1 = (char *)qvector_reserve(&s1, 0, v5 + 1, 1);
  *(_QWORD *)&v31 = v6;
  memmove(s1, a2, v7);
  s1[v7] = 0;
  v8 = s1;
  v9 = v31;
  v10 = s1;
  if ( (unsigned __int64)v31 <= 1 )
  {
    v14 = 0;
    v23 = 0;
    if ( a4 )
      goto LABEL_31;
    goto LABEL_32;
  }
  if ( !*s1
    || (v21 = &v10[strlen(s1)], v22 = *(v21 - 1), v22 != 47) && v22 != 92
    || (*(v21 - 1) = 0, v9 = v31, v10 = s1, (_QWORD)v31) )
  {
    --v9;
  }
  v11 = a1[1];
  v12 = *a1;
  v13 = *a1;
  v14 = 48 * v11;
  if ( !(48 * v11) )
  {
    v23 = 0;
    v8 = v10;
    if ( a4 )
      goto LABEL_31;
    goto LABEL_32;
  }
  v23 = 0;
  v14 = 0;
  do
  {
    v15 = v13 + 24;
    if ( a3 )
      v15 = v13;
    a2 = *(char **)(v15 + 8);
    if ( a2 )
    {
      v16 = a2 - 1;
      if ( v14 < (unsigned __int64)(a2 - 1) && v9 >= (unsigned __int64)v16 )
      {
        if ( (unsigned __int64)v16 >= v9
          || (a2 = (char *)(unsigned __int8)a2[(_QWORD)v10 - 1], (_BYTE)a2 == 47)
          || (_BYTE)a2 == 92 )
        {
          v17 = *(char **)v15;
          s2 = nullptr;
          v33 = 0;
          if ( v17 )
          {
            src = v17;
            na = strlen(v17);
            s2 = (char *)qvector_reserve(&s2, 0, na + 1, 1);
            *(_QWORD *)&v33 = na + 1;
            memmove(s2, src, na);
            s2[na] = 0;
            a2 = s2;
            if ( v10 )
            {
              v17 = s2;
              if ( (_QWORD)v33 )
              {
                n = s2;
                if ( *v10 != 47 )
                {
LABEL_19:
                  if ( (_DWORD)v16 == -1 )
                    v18 = strcasecmp(v10, a2);
                  else
                    v18 = strncasecmp(v10, a2, (int)v16);
                  v19 = n;
LABEL_22:
                  if ( v19 )
                  {
                    nb = v18;
                    *(_QWORD *)&v33 = 0;
                    qfree(v19, a2);
                    v18 = nb;
                  }
                  if ( !v18 )
                  {
                    v23 = v13;
                    v14 = (unsigned __int64)v16;
                  }
LABEL_26:
                  v12 = *a1;
                  v11 = a1[1];
                  goto LABEL_27;
                }
              }
              else
              {
LABEL_40:
                n = v17;
                a2 = (char *)&::s1;
                if ( *v10 != 47 )
                  goto LABEL_19;
              }
              if ( (_DWORD)v16 == -1 )
                v18 = strcmp(v10, a2);
              else
                v18 = strncmp(v10, a2, (int)v16);
              v19 = n;
              goto LABEL_22;
            }
            if ( !s2 )
              goto LABEL_26;
            *(_QWORD *)&v33 = 0;
            qfree(s2, s2);
            v12 = *a1;
            v11 = a1[1];
          }
          else if ( v10 )
          {
            goto LABEL_40;
          }
        }
      }
    }
LABEL_27:
    v13 += 48;
  }
  while ( v13 != v12 + 48 * v11 );
  v8 = s1;
  if ( a4 )
  {
    if ( !v23 )
      v14 = 0;
LABEL_31:
    *a4 = v14;
  }
LABEL_32:
  if ( v8 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v8, a2);
  }
  return v23;
}
