__int64 __fastcall gen_decorate_name(const void **a1, _BYTE *a2, char a3, unsigned int a4)
{
  _BYTE *v4; // rbx
  char v5; // al
  __int64 *v7; // r12
  __int64 v8; // rax
  _BYTE *v9; // rsi
  size_t v10; // rax
  char *v11; // r12
  size_t v12; // r13
  size_t v13; // r14
  __int64 v14; // rsi
  const char *v16; // rbx
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t v22; // r13
  char v23; // al
  const char *v24; // r12
  char *v25; // rax
  char *v26; // rbx
  const char *i; // rdi
  void *v28; // rdi
  const void *v29; // r14
  char *v30; // rax
  char *v31; // rdx
  const char *v32; // rax
  size_t v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  size_t v38; // r13
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // al
  __int64 v47; // rsi
  _BYTE *v48; // rbx
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r12
  size_t v52; // r13
  __int64 v53; // rax
  size_t v54; // rax
  size_t v55; // r12
  size_t v56; // rax
  size_t v57; // r12
  signed __int64 v58; // rbx
  unsigned __int64 v59; // rdi
  const void *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // rdi
  const void *v64; // r13
  void *v65; // rdi
  const void *v66; // r14
  void *v67; // rdi
  const void *v68; // r13
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rax

  if ( !a2 )
    return 0;
  v4 = a2;
  v5 = *a2;
  if ( *a2 && a1 )
  {
    v7 = *(__int64 **)(qword_2CA1698 + 1480);
    if ( a3 )
    {
      if ( a4 != 112 )
      {
        if ( a4 <= 0x70 )
        {
          if ( a4 == 96 )
          {
            v56 = strlen(a2);
            v57 = v56;
            if ( v56 )
            {
              v63 = (void *)*a1;
              v64 = (const void *)(v56 + 1);
              if ( (unsigned __int64)a1[2] < v56 + 1 )
              {
                v69 = qvector_reserve(a1, *a1, v56 + 1, 1);
                *a1 = (const void *)v69;
                v63 = (void *)v69;
              }
              a1[1] = v64;
              memmove(v63, v4, v57);
              *((_BYTE *)*a1 + v57) = 0;
            }
            else
            {
              a1[1] = nullptr;
            }
            if ( *v4 )
              qstrupr(*a1);
            return 1;
          }
          if ( a4 > 0x60 )
            return 1;
          if ( a4 <= 0x40 )
          {
            if ( a4 > 0xF )
            {
              v8 = 0x1000100010001LL;
              if ( _bittest64(&v8, a4 - 16) )
                goto LABEL_12;
            }
            return 1;
          }
          if ( a4 != 80 )
            return 1;
LABEL_65:
          v54 = strlen(a2);
          v55 = v54;
          if ( v54 )
          {
            v67 = (void *)*a1;
            v68 = (const void *)(v54 + 1);
            if ( (unsigned __int64)a1[2] < v54 + 1 )
            {
              v71 = qvector_reserve(a1, *a1, v54 + 1, 1);
              *a1 = (const void *)v71;
              v67 = (void *)v71;
            }
            a1[1] = v68;
            memmove(v67, v4, v55);
            *((_BYTE *)*a1 + v55) = 0;
          }
          else
          {
            a1[1] = nullptr;
          }
          return 1;
        }
        if ( a4 == 176 )
          goto LABEL_65;
        if ( a4 <= 0xB0 )
        {
          if ( a4 == 128 )
            goto LABEL_65;
          if ( a4 != 144 )
            return 1;
        }
        else if ( a4 != 240 )
        {
          if ( a4 > 0xF0 )
          {
            if ( a4 != 256 )
              return 1;
            goto LABEL_65;
          }
          if ( ((a4 - 208) & 0xFFFFFFEF) != 0 )
            return 1;
        }
LABEL_12:
        v9 = *a1;
        if ( (unsigned __int64)a1[2] <= 1 )
        {
          v61 = qvector_reserve(a1, v9, 2, 1);
          *a1 = (const void *)v61;
          v9 = (_BYTE *)v61;
        }
        a1[1] = &dword_0 + 2;
        *v9 = 95;
        *((_BYTE *)*a1 + 1) = 0;
        v10 = strlen(v4);
        v11 = (char *)a1[1];
        v12 = v10;
        v13 = v10;
        if ( v11 )
        {
          --v11;
          v13 = (size_t)&v11[v10];
        }
        v14 = (__int64)*a1;
        if ( (unsigned __int64)a1[2] < v13 + 1 )
        {
          v62 = qvector_reserve(a1, v14, v13 + 1, 1);
          *a1 = (const void *)v62;
          v14 = v62;
        }
        a1[1] = (const void *)(v13 + 1);
        *(_BYTE *)(v14 + v13) = 0;
        memmove((char *)*a1 + (_QWORD)v11, v4, v12);
        return 1;
      }
      v33 = strlen(a2);
      v38 = v33;
      if ( v33 )
      {
        v65 = (void *)*a1;
        v66 = (const void *)(v33 + 1);
        if ( (unsigned __int64)a1[2] < v33 + 1 )
        {
          v70 = qvector_reserve(a1, *a1, v33 + 1, 1);
          *a1 = (const void *)v70;
          v65 = (void *)v70;
        }
        a1[1] = v66;
        memmove(v65, v4, v38);
        *((_BYTE *)*a1 + v38) = 0;
      }
      else
      {
        a1[1] = nullptr;
      }
      if ( (sub_614FB0(*v7, 57, v34, v35, v36, v37) & 0xF) == 6 || sub_615160(*v7, 3, 4, v39, v40, v41) )
        return 1;
      v46 = sub_614FB0(*v7, 57, v42, v43, v44, v45);
      v47 = (__int64)*a1;
      v48 = a1[1];
      v49 = (unsigned __int64)a1[2];
      v50 = (__int64)*a1;
      if ( (v46 & 0xF) == 3 )
      {
        if ( v48 )
        {
          v72 = (unsigned __int64)(v48 + 1);
          v73 = (__int64)a1[1];
          --v48;
        }
        else
        {
          v73 = 1;
          v72 = 2;
        }
        if ( v49 < v72 )
        {
          v75 = qvector_reserve(a1, v47, v72, 1);
          *a1 = (const void *)v75;
          v47 = v75;
        }
        a1[1] = (const void *)v72;
        v48[v47] = 95;
        *((_BYTE *)*a1 + v73) = 0;
        return 1;
      }
      if ( v48 )
      {
        v51 = (__int64)(v48 + 1);
        v52 = (size_t)(v48 - 1);
        if ( v49 >= (unsigned __int64)(v48 + 1) )
          goto LABEL_58;
      }
      else
      {
        if ( v49 > 1 )
        {
          a1[1] = &dword_0 + 2;
          *(_BYTE *)(v47 + 1) = 0;
LABEL_60:
          *(_BYTE *)*a1 = 64;
          return 1;
        }
        v52 = 0;
        v48 = (_BYTE *)(&dword_0 + 1);
        v51 = 2;
      }
      v74 = qvector_reserve(a1, v47, v51, 1);
      *a1 = (const void *)v74;
      v50 = v74;
LABEL_58:
      a1[1] = (const void *)v51;
      v48[v50] = 0;
      if ( v52 )
        memmove((char *)*a1 + 1, *a1, v52);
      goto LABEL_60;
    }
    if ( v5 == 95 )
    {
      v5 = a2[1];
      v4 = a2 + 1;
    }
    if ( v5 == 64 )
      v5 = *++v4;
    v16 = &v4[v5 == 46];
    v17 = strlen(v16);
    v22 = v17;
    if ( v17 )
    {
      v28 = (void *)*a1;
      v29 = (const void *)(v17 + 1);
      if ( (unsigned __int64)a1[2] < v17 + 1 )
      {
        v53 = qvector_reserve(a1, *a1, v17 + 1, 1);
        *a1 = (const void *)v53;
        v28 = (void *)v53;
      }
      a1[1] = v29;
      memmove(v28, v16, v22);
      *((_BYTE *)*a1 + v22) = 0;
    }
    else
    {
      a1[1] = nullptr;
    }
    v23 = sub_614FB0(*v7, 57, v18, v19, v20, v21);
    v24 = (const char *)*a1;
    if ( (v23 & 0xF) == 3 )
    {
      v30 = (char *)a1[1];
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( (unsigned __int64)(v30 - 1) > 1 )
        {
          v32 = &v30[(_QWORD)v24 - 2];
          if ( *v32 == 95 )
          {
            a1[1] = v31;
            *v32 = 0;
            v24 = (const char *)*a1;
          }
        }
      }
    }
    if ( v24 )
    {
      v25 = strchr(v24, 64);
      v26 = v25;
      if ( v25 && v25 != v24 && !(unsigned int)sub_630FC0((__int64)a1, (__int64)a1) )
      {
        if ( (unsigned __int8)(v26[1] - 48) <= 9u )
          goto LABEL_71;
        for ( i = v26; *i == 64; ++i )
          ;
        if ( !strncmp(i, "GLIBC_", 6u) )
        {
LABEL_71:
          v58 = v26 - v24;
          v59 = (unsigned __int64)a1[1];
          v60 = (const void *)(v58 + 1);
          if ( v59 < v58 + 1 )
          {
            if ( a1[2] < v60 )
            {
              sub_62A290((__int64 *)a1, v58 + 1);
              v59 = (unsigned __int64)a1[1];
            }
            memset((char *)*a1 + v59, 0, (size_t)v60 - v59);
            a1[1] = v60;
          }
          else if ( v60 != (const void *)v59 )
          {
            a1[1] = v60;
          }
          *((_BYTE *)*a1 + v58) = 0;
        }
        else
        {
          strrpl();
        }
      }
      return 1;
    }
  }
  return 0;
}

