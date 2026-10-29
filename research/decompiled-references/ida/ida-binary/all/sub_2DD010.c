__int64 __fastcall sub_2DD010(int a1, char *a2, int a3, __int64 a4, char a5, unsigned int a6, __int64 a7)
{
  char *v10; // r12
  size_t v12; // rcx
  int v13; // r8d
  unsigned int v14; // eax
  __int64 v15; // rdx
  char *v16; // r15
  __int64 v18; // rcx
  char *v19; // r8
  signed __int64 v20; // r9
  char *v21; // rdx
  char *v22; // rax
  size_t v23; // r10
  char *v24; // rdi
  signed __int64 v25; // r13
  char *v26; // rcx
  char *v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  signed __int64 v30; // r9
  char *v31; // rdi
  size_t v32; // r10
  char *v33; // rax
  __int64 v34; // rdx
  size_t v35; // rdx
  char *v36; // rdi
  char *v37; // rax
  signed __int64 v38; // rcx
  unsigned __int64 v39; // r14
  signed __int64 v40; // r13
  char *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // [rsp-10h] [rbp-A0h]
  char *src; // [rsp+0h] [rbp-90h]
  char **v45; // [rsp+8h] [rbp-88h]
  signed __int64 v46; // [rsp+8h] [rbp-88h]
  signed __int64 v47; // [rsp+8h] [rbp-88h]
  signed __int64 v48; // [rsp+8h] [rbp-88h]
  signed __int64 v49; // [rsp+8h] [rbp-88h]
  size_t na; // [rsp+10h] [rbp-80h]
  size_t nb; // [rsp+10h] [rbp-80h]
  unsigned __int64 n; // [rsp+10h] [rbp-80h]
  size_t nd; // [rsp+10h] [rbp-80h]
  size_t ne; // [rsp+10h] [rbp-80h]
  size_t nc; // [rsp+10h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-70h] BYREF
  __int128 v58; // [rsp+28h] [rbp-68h]
  __int64 v59; // [rsp+40h] [rbp-50h] BYREF
  __int128 v60; // [rsp+48h] [rbp-48h]
  unsigned __int64 v61; // [rsp+58h] [rbp-38h]

  v10 = a2;
  v12 = *(_QWORD *)(a4 + 8);
  v61 = __readfsqword(0x28u);
  s = nullptr;
  v58 = 0;
  if ( v12 )
  {
    v45 = (char **)a4;
    na = v12;
    s = (char *)qalloc_or_throw(v12);
    a2 = *v45;
    *((_QWORD *)&v58 + 1) = na;
    memcpy(s, a2, na);
    *(_QWORD *)&v58 = na;
  }
  if ( a5 != 83 )
  {
    if ( (a5 & 0xDF) != 0x49 )
    {
      v13 = a5;
LABEL_6:
      a2 = v10;
      v14 = sub_4FCC40(a1, (_DWORD)v10, a3, (unsigned int)&s, v13, (unsigned __int8)a6, a7);
      v15 = v43;
      a6 = v14;
LABEL_7:
      v16 = s;
      goto LABEL_8;
    }
    v18 = v58;
    if ( (unsigned __int64)v58 <= 1 )
      goto LABEL_32;
    v19 = s;
    v20 = v58 - 1;
    v21 = &s[v58 - 1];
    v22 = v21;
    if ( s < v21 )
    {
      while ( *(v22 - 1) == 32 )
      {
        if ( s == --v22 )
          goto LABEL_70;
      }
      v20 = v22 - s;
      if ( v22 != s )
        goto LABEL_17;
LABEL_70:
      if ( !s )
      {
LABEL_23:
        a2 = v19;
        while ( *a2 == 32 )
        {
          if ( v21 == ++a2 )
          {
            if ( v19 >= v21 )
            {
              if ( a5 != 73 )
                goto LABEL_60;
              v59 = 0;
              v60 = 0;
              goto LABEL_59;
            }
            *v19 = *v21;
            v33 = s;
            goto LABEL_88;
          }
        }
        if ( v19 >= a2 )
          goto LABEL_27;
        v46 = v21 - a2;
        n = v21 - a2 + 1;
        memmove(v19, a2, n);
        v30 = v46;
        v31 = s;
        v32 = n;
        v33 = s;
        if ( v46 )
        {
          v34 = v58;
          if ( (unsigned __int64)v58 < n )
          {
            if ( *((_QWORD *)&v58 + 1) < n )
            {
              v33 = (char *)qvector_reserve(&s, s, n, 1);
              v34 = v58;
              v30 = v46;
              s = v33;
              v32 = n;
            }
            a2 = nullptr;
            v48 = v30;
            ne = v32;
            memset(&v33[v34], 0, v32 - v34);
            v31 = s;
            v30 = v48;
            *(_QWORD *)&v58 = ne;
          }
          else if ( n != (_QWORD)v58 )
          {
            *(_QWORD *)&v58 = n;
          }
          v31[v30] = 0;
          goto LABEL_83;
        }
LABEL_88:
        if ( v33 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v33, a2);
          s = nullptr;
          *((_QWORD *)&v58 + 1) = 0;
        }
LABEL_83:
        if ( (unsigned __int64)v58 <= 1 )
          goto LABEL_32;
        v19 = s;
LABEL_27:
        if ( a5 == 73 )
        {
          v59 = 0;
          v60 = 0;
          if ( v19 )
          {
LABEL_59:
            src = v19;
            nb = strlen(v19);
            v59 = qvector_reserve(&v59, 0, nb + 1, 1);
            *(_QWORD *)&v60 = nb + 1;
            memmove((void *)v59, src, nb);
            *(_BYTE *)(v59 + nb) = 0;
          }
          a2 = (_BYTE *)(&dword_0 + 2);
          if ( (unsigned __int8)validate_name(&v59, 2, 256) )
          {
            if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v59, (_BYTE *)&dword_0 + 2);
            }
            goto LABEL_32;
          }
          if ( v59 )
          {
            *(_QWORD *)&v60 = 0;
            qfree(v59, (_BYTE *)&dword_0 + 2);
          }
          goto LABEL_61;
        }
LABEL_60:
        if ( !(unsigned __int8)is_ident(v19) )
        {
LABEL_61:
          if ( !(_BYTE)a6 )
          {
            a2 = (char *)&s1;
            if ( (_QWORD)v58 )
              a2 = s;
            sub_17CE30(100, a2);
            goto LABEL_7;
          }
          goto LABEL_67;
        }
LABEL_32:
        v13 = 113;
        goto LABEL_6;
      }
      v58 = 0u;
      qfree(s, a2);
      s = nullptr;
    }
    else
    {
LABEL_17:
      v23 = v20 + 1;
      if ( (unsigned __int64)v58 < v20 + 1 )
      {
        if ( *((_QWORD *)&v58 + 1) < v23 )
        {
          v49 = v20;
          nc = v20 + 1;
          v37 = (char *)qvector_reserve(&s, s, v20 + 1, 1);
          v18 = v58;
          v23 = nc;
          s = v37;
          v19 = v37;
          v20 = v49;
        }
        a2 = nullptr;
        nd = v23;
        v47 = v20;
        memset(&v19[v18], 0, v23 - v18);
        v22 = &s[v47];
        *(_QWORD *)&v58 = nd;
      }
      else if ( (_QWORD)v58 != v20 + 1 )
      {
        *(_QWORD *)&v58 = v20 + 1;
      }
      *v22 = 0;
    }
    if ( (unsigned __int64)v58 <= 1 )
      goto LABEL_32;
    v19 = s;
    v21 = &s[v58 - 1];
    if ( s >= v21 )
      goto LABEL_27;
    goto LABEL_23;
  }
  v15 = v58;
  v24 = s;
  a2 = (char *)v58;
  if ( (unsigned __int64)v58 <= 1 )
    goto LABEL_54;
  v25 = v58 - 1;
  v16 = s;
  v26 = &s[v58 - 1];
  v27 = v26;
  if ( s < v26 )
  {
    while ( *(v27 - 1) == 32 )
    {
      if ( s == --v27 )
        goto LABEL_68;
    }
    v25 = v27 - s;
    if ( v27 != s )
      goto LABEL_39;
LABEL_68:
    if ( !s )
      goto LABEL_45;
    v58 = 0u;
    qfree(s, a2);
    s = nullptr;
  }
  else
  {
LABEL_39:
    v28 = v25 + 1;
    if ( (unsigned __int64)v58 < v25 + 1 )
    {
      if ( *((_QWORD *)&v58 + 1) < v28 )
      {
        s = (char *)qvector_reserve(&s, s, v25 + 1, 1);
        a2 = (char *)v58;
        v16 = s;
      }
      v35 = v28 - (_QWORD)a2;
      v36 = &v16[(_QWORD)a2];
      a2 = nullptr;
      memset(v36, 0, v35);
      *(_QWORD *)&v58 = v25 + 1;
      v27 = &s[v25];
    }
    else if ( (_QWORD)v58 != v25 + 1 )
    {
      *(_QWORD *)&v58 = v25 + 1;
    }
    *v27 = 0;
  }
  v15 = v58;
  if ( (unsigned __int64)v58 <= 1 )
  {
    if ( (_QWORD)v58 )
    {
      v16 = s;
      v29 = -1;
      goto LABEL_55;
    }
    v24 = s;
    goto LABEL_54;
  }
  v26 = &s[v58 - 1];
  v16 = s;
  if ( s >= v26 )
    goto LABEL_49;
LABEL_45:
  a2 = v16;
  while ( *a2 == 32 )
  {
    if ( ++a2 == v26 )
    {
      *v16 = *a2;
      v24 = s;
LABEL_73:
      if ( v24 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v24, a2);
        s = nullptr;
        v15 = v58;
        v24 = nullptr;
        *((_QWORD *)&v58 + 1) = 0;
      }
      else
      {
        v15 = v58;
      }
      goto LABEL_75;
    }
  }
  if ( v16 >= a2 )
    goto LABEL_49;
  v38 = v26 - a2;
  v39 = v38 + 1;
  v40 = v38;
  memmove(v16, a2, v38 + 1);
  v24 = s;
  v41 = s;
  if ( !v40 )
    goto LABEL_73;
  v42 = v58;
  if ( (unsigned __int64)v58 < v39 )
  {
    if ( *((_QWORD *)&v58 + 1) < v39 )
    {
      s = (char *)qvector_reserve(&s, s, v39, 1);
      v41 = s;
      v42 = v58;
    }
    a2 = nullptr;
    memset(&v41[v42], 0, v39 - v42);
    *(_QWORD *)&v58 = v39;
    v24 = s;
  }
  else if ( v39 != (_QWORD)v58 )
  {
    *(_QWORD *)&v58 = v39;
  }
  v24[v40] = 0;
  v15 = v58;
  v24 = s;
LABEL_75:
  if ( !v15 )
  {
LABEL_54:
    v16 = v24;
    v29 = -1;
    goto LABEL_55;
  }
  v16 = v24;
LABEL_49:
  v59 = -1;
  if ( v15 == 1 )
  {
    v29 = -1;
    goto LABEL_55;
  }
  a2 = v16;
  if ( (unsigned int)atos(&v59, v16) )
  {
    v29 = v59;
    v16 = s;
LABEL_55:
    *(_QWORD *)v10 = v29;
    a6 = 1;
    goto LABEL_8;
  }
  if ( !(_BYTE)a6 )
  {
    a2 = v16;
    sub_17CE30(101, v16);
  }
LABEL_67:
  v16 = s;
  a6 = 0;
LABEL_8:
  if ( v16 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v16, a2, v15);
  }
  return a6;
}
