__int64 __fastcall sub_103DD0(int a1, __int64 *a2, int a3, __int64 a4, char a5, unsigned int a6, __int64 a7)
{
  size_t v12; // rcx
  int v13; // r8d
  char *v14; // r15
  __int64 v16; // rcx
  char *v17; // r8
  signed __int64 v18; // r9
  char *v19; // rdx
  char *v20; // rax
  size_t v21; // r10
  char *v22; // rsi
  __int64 v23; // rdx
  char *v24; // rdi
  __int64 v25; // rsi
  signed __int64 v26; // r13
  char *v27; // rcx
  char *v28; // rax
  unsigned __int64 v29; // r14
  char *v30; // rsi
  __int64 v31; // rax
  const void *v32; // rsi
  char *v33; // rsi
  signed __int64 v34; // r9
  char *v35; // rdi
  size_t v36; // r10
  char *v37; // rax
  __int64 v38; // rdx
  char *v39; // rax
  signed __int64 v40; // rcx
  unsigned __int64 v41; // r14
  signed __int64 v42; // r13
  char *v43; // rdx
  __int64 v44; // rax
  char *src; // [rsp+0h] [rbp-90h]
  const void **v46; // [rsp+8h] [rbp-88h]
  signed __int64 v47; // [rsp+8h] [rbp-88h]
  signed __int64 v48; // [rsp+8h] [rbp-88h]
  __int64 v49; // [rsp+8h] [rbp-88h]
  signed __int64 v50; // [rsp+8h] [rbp-88h]
  size_t na; // [rsp+10h] [rbp-80h]
  size_t nb; // [rsp+10h] [rbp-80h]
  unsigned __int64 n; // [rsp+10h] [rbp-80h]
  size_t nd; // [rsp+10h] [rbp-80h]
  size_t ne; // [rsp+10h] [rbp-80h]
  size_t nc; // [rsp+10h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-70h] BYREF
  __int128 v59; // [rsp+28h] [rbp-68h]
  __int64 v60; // [rsp+40h] [rbp-50h]
  __int128 v61; // [rsp+48h] [rbp-48h]
  unsigned __int64 v62; // [rsp+58h] [rbp-38h]

  v12 = *(_QWORD *)(a4 + 8);
  v62 = __readfsqword(0x28u);
  s = nullptr;
  v59 = 0;
  if ( v12 )
  {
    v46 = (const void **)a4;
    na = v12;
    s = (char *)qalloc_or_throw();
    v32 = *v46;
    *((_QWORD *)&v59 + 1) = na;
    memcpy(s, v32, na);
    *(_QWORD *)&v59 = na;
  }
  if ( a5 != 83 )
  {
    if ( (a5 & 0xDF) != 0x49 )
    {
      v13 = a5;
LABEL_6:
      a6 = sub_18B900(a1, (_DWORD)a2, a3, (unsigned int)&s, v13, (unsigned __int8)a6, a7);
LABEL_7:
      v14 = s;
      goto LABEL_8;
    }
    v16 = v59;
    if ( (unsigned __int64)v59 <= 1 )
      goto LABEL_32;
    v17 = s;
    v18 = v59 - 1;
    v19 = &s[v59 - 1];
    v20 = v19;
    if ( s < v19 )
    {
      while ( *(v20 - 1) == 32 )
      {
        if ( s == --v20 )
          goto LABEL_70;
      }
      v18 = v20 - s;
      if ( v20 != s )
        goto LABEL_17;
LABEL_70:
      if ( !s )
      {
LABEL_23:
        v22 = v17;
        while ( *v22 == 32 )
        {
          if ( v19 == ++v22 )
          {
            if ( v17 >= v19 )
            {
              if ( a5 != 73 )
                goto LABEL_60;
              v60 = 0;
              v61 = 0;
              goto LABEL_59;
            }
            *v17 = *v19;
            v37 = s;
            goto LABEL_88;
          }
        }
        if ( v17 >= v22 )
          goto LABEL_27;
        v47 = v19 - v22;
        n = v19 - v22 + 1;
        memmove(v17, v22, n);
        v34 = v47;
        v35 = s;
        v36 = n;
        v37 = s;
        if ( v47 )
        {
          v38 = v59;
          if ( (unsigned __int64)v59 < n )
          {
            if ( *((_QWORD *)&v59 + 1) < n )
            {
              v37 = (char *)qvector_reserve();
              v38 = v59;
              v34 = v47;
              s = v37;
              v36 = n;
            }
            v49 = v34;
            ne = v36;
            memset(&v37[v38], 0, v36 - v38);
            v35 = s;
            v34 = v49;
            *(_QWORD *)&v59 = ne;
          }
          else if ( n != (_QWORD)v59 )
          {
            *(_QWORD *)&v59 = n;
          }
          v35[v34] = 0;
          goto LABEL_83;
        }
LABEL_88:
        if ( v37 )
        {
          v59 = 0u;
          qfree();
          s = nullptr;
        }
LABEL_83:
        if ( (unsigned __int64)v59 <= 1 )
          goto LABEL_32;
        v17 = s;
LABEL_27:
        if ( a5 == 73 )
        {
          v60 = 0;
          v61 = 0;
          if ( v17 )
          {
LABEL_59:
            src = v17;
            nb = strlen(v17);
            v60 = qvector_reserve();
            *(_QWORD *)&v61 = nb + 1;
            memmove((void *)v60, src, nb);
            *(_BYTE *)(v60 + nb) = 0;
          }
          if ( (unsigned __int8)validate_name() )
          {
            if ( v60 )
            {
              *(_QWORD *)&v61 = 0;
              qfree();
            }
            goto LABEL_32;
          }
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree();
          }
          goto LABEL_61;
        }
LABEL_60:
        if ( !(unsigned __int8)is_ident() )
        {
LABEL_61:
          if ( !(_BYTE)a6 )
          {
            v33 = (char *)s1;
            if ( (_QWORD)v59 )
              v33 = s;
            sub_F9540(100, v33);
            goto LABEL_7;
          }
          goto LABEL_67;
        }
LABEL_32:
        v13 = 113;
        goto LABEL_6;
      }
      v59 = 0u;
      qfree();
      s = nullptr;
    }
    else
    {
LABEL_17:
      v21 = v18 + 1;
      if ( (unsigned __int64)v59 < v18 + 1 )
      {
        if ( *((_QWORD *)&v59 + 1) < v21 )
        {
          v50 = v18;
          nc = v18 + 1;
          v39 = (char *)qvector_reserve();
          v16 = v59;
          v21 = nc;
          s = v39;
          v17 = v39;
          v18 = v50;
        }
        nd = v21;
        v48 = v18;
        memset(&v17[v16], 0, v21 - v16);
        v20 = &s[v48];
        *(_QWORD *)&v59 = nd;
      }
      else if ( (_QWORD)v59 != v18 + 1 )
      {
        *(_QWORD *)&v59 = v18 + 1;
      }
      *v20 = 0;
    }
    if ( (unsigned __int64)v59 <= 1 )
      goto LABEL_32;
    v17 = s;
    v19 = &s[v59 - 1];
    if ( s >= v19 )
      goto LABEL_27;
    goto LABEL_23;
  }
  v23 = v59;
  v24 = s;
  v25 = v59;
  if ( (unsigned __int64)v59 <= 1 )
    goto LABEL_54;
  v26 = v59 - 1;
  v14 = s;
  v27 = &s[v59 - 1];
  v28 = v27;
  if ( s < v27 )
  {
    while ( *(v28 - 1) == 32 )
    {
      if ( s == --v28 )
        goto LABEL_68;
    }
    v26 = v28 - s;
    if ( v28 != s )
      goto LABEL_39;
LABEL_68:
    if ( !s )
      goto LABEL_45;
    v59 = 0u;
    qfree();
    s = nullptr;
  }
  else
  {
LABEL_39:
    v29 = v26 + 1;
    if ( (unsigned __int64)v59 < v26 + 1 )
    {
      if ( *((_QWORD *)&v59 + 1) < v29 )
      {
        s = (char *)qvector_reserve();
        v25 = v59;
        v14 = s;
      }
      memset(&v14[v25], 0, v29 - v25);
      *(_QWORD *)&v59 = v26 + 1;
      v28 = &s[v26];
    }
    else if ( (_QWORD)v59 != v26 + 1 )
    {
      *(_QWORD *)&v59 = v26 + 1;
    }
    *v28 = 0;
  }
  v23 = v59;
  if ( (unsigned __int64)v59 <= 1 )
  {
    if ( (_QWORD)v59 )
    {
      v14 = s;
      v31 = -1;
      goto LABEL_55;
    }
    v24 = s;
    goto LABEL_54;
  }
  v27 = &s[v59 - 1];
  v14 = s;
  if ( s >= v27 )
    goto LABEL_49;
LABEL_45:
  v30 = v14;
  while ( *v30 == 32 )
  {
    if ( ++v30 == v27 )
    {
      *v14 = *v30;
      v24 = s;
LABEL_73:
      if ( v24 )
      {
        qfree();
        s = nullptr;
        v23 = 0;
        v24 = nullptr;
        *((_QWORD *)&v59 + 1) = 0;
      }
      else
      {
        v23 = v59;
      }
      goto LABEL_75;
    }
  }
  if ( v14 >= v30 )
    goto LABEL_49;
  v40 = v27 - v30;
  v41 = v40 + 1;
  v42 = v40;
  memmove(v14, v30, v40 + 1);
  v24 = s;
  v43 = s;
  if ( !v42 )
    goto LABEL_73;
  v44 = v59;
  if ( (unsigned __int64)v59 < v41 )
  {
    if ( *((_QWORD *)&v59 + 1) < v41 )
    {
      s = (char *)qvector_reserve();
      v43 = s;
      v44 = v59;
    }
    memset(&v43[v44], 0, v41 - v44);
    *(_QWORD *)&v59 = v41;
    v24 = s;
  }
  else if ( v41 != (_QWORD)v59 )
  {
    *(_QWORD *)&v59 = v41;
  }
  v24[v42] = 0;
  v23 = v59;
  v24 = s;
LABEL_75:
  if ( !v23 )
  {
LABEL_54:
    v14 = v24;
    v31 = -1;
    goto LABEL_55;
  }
  v14 = v24;
LABEL_49:
  v60 = -1;
  if ( v23 == 1 )
  {
    v31 = -1;
    goto LABEL_55;
  }
  if ( (unsigned int)atos() )
  {
    v31 = v60;
    v14 = s;
LABEL_55:
    *a2 = v31;
    a6 = 1;
    goto LABEL_8;
  }
  if ( !(_BYTE)a6 )
    sub_F9540(101, v14);
LABEL_67:
  v14 = s;
  a6 = 0;
LABEL_8:
  if ( v14 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return a6;
}

