unsigned __int64 __fastcall sub_5D2E20(__int64 a1, const char *a2)
{
  const char **v2; // r15
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  char *v5; // rdi
  char *v6; // rax
  size_t v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  char *v10; // r13
  char *v11; // rbp
  unsigned __int64 v12; // r14
  size_t v13; // rbp
  char *v14; // rdi
  unsigned __int64 v15; // rbx
  const char *v16; // rax
  const char *v17; // r14
  void *v18; // rbx
  __int64 v19; // rdx
  char *v20; // rax
  char *v21; // rdi
  __int64 v22; // rdx
  char *v23; // r13
  char *v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // rsi
  char *v27; // rbx
  unsigned __int64 v28; // rbp
  size_t v29; // r15
  __int64 v30; // r14
  size_t v31; // r9
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  size_t v36; // r14
  __int64 v37; // rax
  const char *v38; // rbx
  unsigned __int64 v39; // rbp
  char *v40; // rdi
  const char *v41; // r13
  size_t v42; // rbx
  char *v43; // rdi
  char *v44; // rdi
  unsigned __int64 v45; // rax
  char *v46; // rdi
  char v47; // al
  __int128 v48; // kr00_16
  void *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rbp
  char *v53; // rdx
  void *v54; // rax
  __int64 v56; // rax
  const char *v57; // rbx
  unsigned __int64 v58; // rbp
  const char *v59; // rbx
  unsigned __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  signed __int64 v65; // rax
  const char *v66; // r13
  signed __int64 v67; // rbx
  const char *v68; // rbp
  const char *v69; // rax
  __int64 v70; // rax
  signed __int64 v71; // rax
  const char *v72; // r13
  signed __int64 v73; // rbx
  const char *v74; // rbp
  const char *v75; // rax
  __int64 v76; // rax
  char v77; // [rsp+0h] [rbp-90h]
  size_t v78; // [rsp+0h] [rbp-90h]
  const char **v79; // [rsp+8h] [rbp-88h]
  void *v81; // [rsp+18h] [rbp-78h] BYREF
  __int128 v82; // [rsp+20h] [rbp-70h]
  __int64 v83; // [rsp+38h] [rbp-58h] BYREF
  __int128 v84; // [rsp+40h] [rbp-50h]
  unsigned __int64 v85; // [rsp+50h] [rbp-40h]

  v2 = *(const char ***)a2;
  v85 = __readfsqword(0x28u);
  v3 = *((_QWORD *)a2 + 1);
  v77 = 0;
  v81 = nullptr;
  v82 = 0;
  v79 = &v2[3 * v3];
  if ( v2 == v79 )
  {
    v83 = 0;
    v84 = 0;
    goto LABEL_108;
  }
  do
  {
    v4 = (unsigned __int64)v2[1];
    if ( v4 > 1 )
    {
      v5 = (char *)*v2;
      v6 = (char *)&(*v2)[v4 - 1];
      a2 = *v2;
      if ( *v2 < v6 )
      {
        while ( *a2 == 9 )
        {
          if ( v6 == ++a2 )
          {
            *v5 = *v6;
            v44 = (char *)*v2;
            goto LABEL_88;
          }
        }
        if ( v5 >= a2 )
          goto LABEL_8;
        v71 = v6 - a2;
        v72 = (const char *)(v71 + 1);
        v73 = v71;
        memmove(v5, a2, v71 + 1);
        v74 = *v2;
        v44 = (char *)*v2;
        if ( v73 )
        {
          v75 = v2[1];
          if ( v75 < v72 )
          {
            if ( v2[2] < v72 )
            {
              v76 = qvector_reserve(v2, *v2, v72, 1);
              *v2 = (const char *)v76;
              v44 = (char *)v76;
              v75 = v2[1];
            }
            a2 = nullptr;
            memset(&v44[(_QWORD)v75], 0, v72 - v75);
            v2[1] = v72;
            v74 = *v2;
          }
          else if ( v72 != v75 )
          {
            v2[1] = v72;
          }
          v74[v73] = 0;
          goto LABEL_90;
        }
LABEL_88:
        if ( v44 )
        {
          v2[1] = nullptr;
          qfree(v44);
          *v2 = nullptr;
          v2[2] = nullptr;
        }
LABEL_90:
        v45 = (unsigned __int64)v2[1];
        if ( v45 <= 1 )
          goto LABEL_13;
        v5 = (char *)*v2;
        v6 = (char *)&(*v2)[v45 - 1];
LABEL_8:
        if ( v5 < v6 )
        {
          a2 = v5;
          while ( *a2 == 32 )
          {
            if ( ++a2 == v6 )
            {
              *v5 = *a2;
              v43 = (char *)*v2;
              goto LABEL_85;
            }
          }
          if ( v5 >= a2 )
            goto LABEL_13;
          v65 = v6 - a2;
          v66 = (const char *)(v65 + 1);
          v67 = v65;
          memmove(v5, a2, v65 + 1);
          v68 = *v2;
          v43 = (char *)*v2;
          if ( v67 )
          {
            v69 = v2[1];
            if ( v69 < v66 )
            {
              if ( v2[2] < v66 )
              {
                v70 = qvector_reserve(v2, *v2, v66, 1);
                *v2 = (const char *)v70;
                v43 = (char *)v70;
                v69 = v2[1];
              }
              a2 = nullptr;
              memset(&v43[(_QWORD)v69], 0, v66 - v69);
              v2[1] = v66;
              v68 = *v2;
            }
            else if ( v66 != v69 )
            {
              v2[1] = v66;
            }
            v68[v67] = 0;
            goto LABEL_13;
          }
LABEL_85:
          if ( v43 )
          {
            v2[1] = nullptr;
            qfree(v43);
            *v2 = nullptr;
            v2[2] = nullptr;
          }
        }
      }
    }
LABEL_13:
    sub_5C9720((__int64)v2);
    v7 = (size_t)v2[1];
    v8 = v7;
    if ( !v7 )
    {
LABEL_33:
      v18 = nullptr;
      goto LABEL_34;
    }
    while ( 1 )
    {
      v9 = v8 - 1;
      if ( v8 - 1 <= 3 )
        break;
      v10 = (char *)*v2;
      a2 = "/**/";
      v11 = (char *)*v2;
      if ( strncmp(*v2, "/**/", 4u) )
        goto LABEL_61;
      if ( v8 == 5 )
      {
        v12 = 1;
        v13 = 0;
      }
      else
      {
        v13 = v8 - 5;
        a2 = v10 + 4;
        v12 = v8 - 4;
        memmove(v10, v10 + 4, v13);
        v10 = (char *)*v2;
      }
      if ( (unsigned __int64)v2[2] < v12 )
      {
        a2 = v10;
        v34 = qvector_reserve(v2, v10, v12, 1);
        *v2 = (const char *)v34;
        v10 = (char *)v34;
      }
      v2[1] = (const char *)v12;
      v10[v13] = 0;
      v8 = (unsigned __int64)v2[1];
      if ( !v8 )
        goto LABEL_21;
    }
    if ( v8 != 4 )
      goto LABEL_21;
    v11 = (char *)*v2;
LABEL_61:
    a2 = v11;
    if ( *v11 != 47 )
      goto LABEL_21;
    if ( v11[1] == 42 && v11[2] == 42 || v11[1] == 42 && v11[2] == 33 )
    {
      v77 = 1;
LABEL_94:
      if ( v8 == 4 )
        goto LABEL_68;
      goto LABEL_95;
    }
    if ( v11[1] == 47 && v11[2] == 47 )
      goto LABEL_94;
    if ( v11[1] != 47 || v11[2] != 33 )
      goto LABEL_21;
    if ( v8 == 4 )
    {
LABEL_68:
      v35 = 1;
      v36 = 0;
      if ( v2[2] )
        goto LABEL_96;
LABEL_69:
      v37 = qvector_reserve(v2, a2, v35, 1);
      *v2 = (const char *)v37;
      a2 = (const char *)v37;
      goto LABEL_96;
    }
LABEL_95:
    v36 = v8 - 4;
    v35 = v9 - 2;
    memmove(v11, v11 + 3, v36);
    a2 = *v2;
    if ( (unsigned __int64)v2[2] < v35 )
      goto LABEL_69;
LABEL_96:
    v2[1] = (const char *)v35;
    a2[v36] = 0;
    v8 = (unsigned __int64)v2[1];
    v7 = v8;
    if ( v8 <= 1 )
      goto LABEL_104;
    v46 = (char *)*v2;
    v47 = **v2;
    if ( v47 != 60 )
      goto LABEL_98;
    v59 = (const char *)(v8 - 1);
    v60 = 0;
    if ( v8 != 2 )
    {
      v60 = v8 - 2;
      a2 = v46 + 1;
      memmove(v46, v46 + 1, v8 - 2);
      v46 = (char *)*v2;
    }
    if ( v2[2] < v59 )
    {
      a2 = v46;
      v62 = qvector_reserve(v2, v46, v8 - 1, 1);
      *v2 = (const char *)v62;
      v46 = (char *)v62;
    }
    v2[1] = v59;
    v46[v60] = 0;
    v8 = (unsigned __int64)v2[1];
    v7 = v8;
    if ( v8 <= 1 )
    {
LABEL_104:
      if ( !v77 )
        goto LABEL_31;
      if ( v8 )
      {
        v77 = 1;
        v7 = v8;
        goto LABEL_31;
      }
LABEL_106:
      v77 = 1;
      v7 = 0;
      v18 = nullptr;
LABEL_34:
      v19 = v82;
      a2 = (const char *)v81;
      if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v82 + 1) )
      {
        v81 = (void *)qvector_reserve(&v81, v81, v82 + 1, 24);
        v19 = v82;
        a2 = (const char *)v81;
      }
      v20 = (char *)&a2[24 * v19];
      *(_QWORD *)v20 = v18;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
      *(_QWORD *)&v82 = v82 + 1;
      goto LABEL_37;
    }
    v46 = (char *)*v2;
    v47 = **v2;
LABEL_98:
    if ( v47 != 32 )
    {
      v7 = v8;
      if ( !v77 )
        goto LABEL_31;
      goto LABEL_23;
    }
    v57 = (const char *)(v8 - 1);
    v58 = 0;
    if ( v8 != 2 )
    {
      v58 = v8 - 2;
      a2 = v46 + 1;
      memmove(v46, v46 + 1, v8 - 2);
      v46 = (char *)*v2;
    }
    if ( v2[2] < v57 )
    {
      a2 = v46;
      v63 = qvector_reserve(v2, v46, v8 - 1, 1);
      *v2 = (const char *)v63;
      v46 = (char *)v63;
    }
    v2[1] = v57;
    v46[v58] = 0;
    v8 = (unsigned __int64)v2[1];
LABEL_21:
    v7 = v8;
    if ( !v77 )
      goto LABEL_31;
    if ( !v8 )
      goto LABEL_106;
LABEL_23:
    if ( v8 - 1 <= 1 )
    {
      v7 = v8;
      if ( v8 <= 1 )
      {
        v77 = 1;
      }
      else
      {
        v14 = (char *)*v2;
LABEL_72:
        v77 = 1;
        if ( *v14 == 42 )
          goto LABEL_73;
LABEL_30:
        v7 = v8;
      }
      goto LABEL_31;
    }
    v14 = (char *)*v2;
    v15 = v8 - 3;
    v16 = &(*v2)[v8 - 3];
    if ( *v16 != 42 || v16[1] != 47 )
      goto LABEL_72;
    v17 = (const char *)(v8 - 2);
    if ( v2[2] < v17 )
    {
      a2 = *v2;
      v56 = qvector_reserve(v2, *v2, v17, 1);
      *v2 = (const char *)v56;
      v16 = (const char *)(v15 + v56);
    }
    v2[1] = v17;
    *v16 = 0;
    sub_5C9720((__int64)v2);
    v8 = (unsigned __int64)v2[1];
    if ( v8 > 1 )
    {
      v14 = (char *)*v2;
      v77 = 0;
      if ( **v2 != 42 )
        goto LABEL_30;
LABEL_73:
      v38 = (const char *)(v8 - 1);
      v39 = 0;
      if ( v8 != 2 )
      {
        v39 = v8 - 2;
        a2 = v14 + 1;
        memmove(v14, v14 + 1, v8 - 2);
        v14 = (char *)*v2;
      }
      if ( v2[2] < v38 )
      {
        a2 = v14;
        v61 = qvector_reserve(v2, v14, v8 - 1, 1);
        *v2 = (const char *)v61;
        v14 = (char *)v61;
      }
      v2[1] = v38;
      v14[v39] = 0;
      v7 = (size_t)v2[1];
      if ( v7 > 1 )
      {
        v40 = (char *)*v2;
        if ( **v2 == 32 )
        {
          v41 = (const char *)(v7 - 1);
          v42 = 0;
          if ( v7 != 2 )
          {
            v42 = v7 - 2;
            a2 = v40 + 1;
            memmove(v40, v40 + 1, v7 - 2);
            v40 = (char *)*v2;
          }
          if ( v2[2] < v41 )
          {
            a2 = v40;
            v64 = qvector_reserve(v2, v40, v7 - 1, 1);
            *v2 = (const char *)v64;
            v40 = (char *)v64;
          }
          v2[1] = v41;
          v40[v42] = 0;
          v7 = (size_t)v2[1];
          goto LABEL_31;
        }
LABEL_32:
        v18 = (void *)qalloc_or_throw(v7, a2);
        memcpy(v18, *v2, v7);
        goto LABEL_34;
      }
LABEL_31:
      if ( !v7 )
        goto LABEL_33;
      goto LABEL_32;
    }
    v77 = 0;
LABEL_37:
    v2 += 3;
  }
  while ( v79 != v2 );
  v83 = 0;
  v84 = 0;
  if ( !(_QWORD)v82 )
  {
LABEL_108:
    if ( !a1 )
      goto LABEL_113;
    v26 = nullptr;
    v48 = 0u;
    goto LABEL_110;
  }
  v21 = (char *)v81;
  v22 = v82 - 1;
  v23 = (char *)v81 + 24 * v82;
  if ( v81 == v23 )
  {
    if ( (_QWORD)v82 != 1 )
      goto LABEL_125;
    v26 = nullptr;
    if ( !a1 )
      goto LABEL_114;
LABEL_127:
    v48 = v84;
LABEL_110:
    v49 = *(void **)a1;
    v50 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v26;
    *(_OWORD *)(a1 + 8) = v48;
    v83 = (__int64)v49;
    *((_QWORD *)&v84 + 1) = v50;
    goto LABEL_111;
  }
  v24 = (char *)v81;
  do
  {
    v25 = *((_QWORD *)v24 + 1);
    if ( v25 )
      v22 = v22 + v25 - 1;
    v24 += 24;
  }
  while ( v24 != v23 );
  v26 = nullptr;
  if ( !v22 )
  {
LABEL_45:
    v27 = v21;
    do
    {
      v32 = v84;
      if ( (unsigned __int64)v84 > 1 )
      {
        v33 = v84 - 1;
        if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
        {
          v83 = qvector_reserve(&v83, v26, v84 + 1, 1);
          v26 = (_BYTE *)v83;
        }
        *(_QWORD *)&v84 = v32 + 1;
        v26[v32] = 0;
        *(_BYTE *)(v83 + v33) = 10;
        v26 = (_BYTE *)v83;
      }
      v28 = *((_QWORD *)v27 + 1);
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v28 != 1 )
        {
          v30 = v84;
          v31 = v28 - 1;
          if ( (_QWORD)v84 )
          {
            v30 = v84 - 1;
            v31 = v29 + v84 - 1;
            v28 += v84 - 1;
          }
          if ( *((_QWORD *)&v84 + 1) < v28 )
          {
            v78 = v31;
            v83 = qvector_reserve(&v83, v26, v28, 1);
            v31 = v78;
            v26 = (_BYTE *)v83;
          }
          *(_QWORD *)&v84 = v28;
          v26[v31] = 0;
          memcpy((void *)(v30 + v83), *(const void **)v27, v29);
          v26 = (_BYTE *)v83;
        }
      }
      v27 += 24;
    }
    while ( v23 != v27 );
    goto LABEL_126;
  }
LABEL_125:
  v83 = qvector_reserve(&v83, 0, v22, 1);
  v26 = (_BYTE *)v83;
  v21 = (char *)v81;
  v23 = (char *)v81 + 24 * v82;
  if ( v23 != v81 )
    goto LABEL_45;
LABEL_126:
  v49 = v26;
  if ( a1 )
    goto LABEL_127;
LABEL_111:
  if ( v49 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v49);
  }
LABEL_113:
  v21 = (char *)v81;
LABEL_114:
  if ( v21 )
  {
    v51 = v82;
    if ( (_QWORD)v82 )
    {
      v52 = 0;
      do
      {
        v53 = &v21[24 * v52];
        v54 = *(void **)v53;
        if ( *(_QWORD *)v53 )
        {
          *((_QWORD *)v53 + 1) = 0;
          qfree(v54);
          v21 = (char *)v81;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v21);
  }
  return v85 - __readfsqword(0x28u);
}

