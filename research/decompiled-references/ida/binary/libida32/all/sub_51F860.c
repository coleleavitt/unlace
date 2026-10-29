__int64 __fastcall sub_51F860(const char **a1, _DWORD *a2, __int64 **a3)
{
  unsigned __int8 v5; // al
  const char *v6; // rsi
  char v7; // al
  __int64 *v8; // r13
  char v10; // al
  int v11; // edi
  char v12; // cl
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r15
  const char *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int128 v20; // xmm0
  size_t v21; // r15
  __int64 v22; // rbp
  size_t v23; // r15
  void *v24; // rax
  char *v25; // rdi
  __int64 v26; // r12
  __int64 j; // rbp
  char *v28; // rbx
  void *v29; // rdi
  void *v30; // rdi
  int v31; // eax
  __int64 v32; // r14
  void **v33; // rdx
  void **p_src; // rbp
  __int64 *i; // r15
  char v36; // r12
  const char *v37; // rdi
  int v38; // eax
  int v39; // r9d
  unsigned __int64 v40; // rdx
  __int64 v41; // r10
  const char *v42; // rdx
  char v43; // al
  const char *v44; // rsi
  int v45; // ecx
  void *v46; // rdi
  __int64 *v47; // rcx
  __int64 v48; // r8
  char *v49; // rdx
  const char *v50; // r15
  __int64 v51; // rbp
  __int64 *v52; // rbx
  __int64 v53; // r13
  const char *v54; // rbp
  __int64 v55; // r12
  const char *v56; // rsi
  const char *v57; // rdi
  __int64 v58; // rax
  __int64 *v59; // rsi
  __int64 v60; // rax
  const char *v61; // rsi
  const char *v62; // rdi
  __int64 *v63; // rsi
  __int64 v64; // rbp
  __int64 v65; // r12
  char *v66; // rbx
  void *v67; // rdi
  void *v68; // rdi
  __int64 v69; // rax
  unsigned __int64 v70; // r14
  __int64 v71; // rbp
  void *v72; // rdi
  void *v73; // rdi
  size_t v74; // r14
  char *v75; // rbp
  size_t v76; // r14
  void *v77; // rax
  void *v78; // rax
  void *v79; // rax
  __int64 v80; // rax
  void **v81; // [rsp+8h] [rbp-D0h]
  __int64 v82; // [rsp+8h] [rbp-D0h]
  __int64 v83; // [rsp+8h] [rbp-D0h]
  __int64 v84; // [rsp+8h] [rbp-D0h]
  __int64 v85; // [rsp+10h] [rbp-C8h]
  const char *v86; // [rsp+10h] [rbp-C8h]
  __int64 *v88; // [rsp+18h] [rbp-C0h]
  int v89; // [rsp+2Ch] [rbp-ACh]
  int v90; // [rsp+2Ch] [rbp-ACh]
  void *v91; // [rsp+30h] [rbp-A8h] BYREF
  size_t v92[2]; // [rsp+38h] [rbp-A0h]
  void *v93; // [rsp+48h] [rbp-90h]
  size_t v94[2]; // [rsp+50h] [rbp-88h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+68h] [rbp-70h]
  void *v97; // [rsp+78h] [rbp-60h]
  size_t v98[3]; // [rsp+80h] [rbp-58h]
  unsigned __int64 v99; // [rsp+98h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  v5 = **a1;
  v6 = *a1 + 1;
  if ( v5 != 0xFE )
  {
    v7 = (v5 >> 3) & 6 | v5 & 1;
    if ( v7 != 7 )
    {
      *a1 = v6;
      if ( a2 )
        *a2 = (unsigned __int8)(v7 + 1);
LABEL_5:
      if ( !a3 )
        return 1;
      v8 = *a3;
      if ( *a3 )
        return 1;
      goto LABEL_83;
    }
  }
  v10 = (*a1)[1];
  v11 = 0;
  v12 = 0;
  if ( !v10 )
    return 0;
  while ( 1 )
  {
    ++v6;
    v11 |= (v10 & 0x7F) << v12;
    if ( v10 >= 0 )
      break;
    v10 = *v6;
    v12 += 7;
    if ( !*v6 )
      return 0;
  }
  *a1 = v6;
  if ( a2 )
    *a2 = v11;
  if ( (v11 & 0x10) == 0 )
    goto LABEL_5;
  if ( !a3 )
  {
    v8 = nullptr;
    v31 = sub_692FE0(a1);
    v15 = v31;
    if ( v31 <= 0 )
      return 0;
    goto LABEL_47;
  }
  v13 = qalloc_or_throw(24, v6);
  *(_QWORD *)v13 = 0;
  v8 = (__int64 *)v13;
  *(_OWORD *)(v13 + 8) = 0;
  v14 = sub_692FE0(a1);
  if ( v14 <= 0 )
    goto LABEL_34;
  v15 = v14;
  if ( v8 && v14 != v8[1] )
  {
    v91 = nullptr;
    v93 = nullptr;
    *(_OWORD *)v92 = 0;
    *(_OWORD *)v94 = 0;
    v16 = v8[1];
    if ( v14 < v16 )
    {
      v70 = v14;
      do
      {
        v71 = *v8 + 48 * v70;
        v72 = *(void **)(v71 + 24);
        if ( v72 )
        {
          *(_QWORD *)(v71 + 32) = 0;
          qfree(v72);
        }
        v73 = *(void **)v71;
        if ( *(_QWORD *)v71 )
        {
          *(_QWORD *)(v71 + 8) = 0;
          qfree(v73);
        }
        ++v70;
      }
      while ( v70 < v16 );
      goto LABEL_130;
    }
    if ( v16 < v14 )
    {
      v17 = (const char *)*v8;
      v18 = v8[2];
      if ( (unsigned __int64)&v91 >= *v8 && &v91 < (void **)&v17[48 * v18] )
      {
        src = nullptr;
        v97 = nullptr;
        *(_OWORD *)n = 0;
        *(_OWORD *)v98 = 0;
        if ( v8[2] < v15 )
        {
          v17 = (const char *)*v8;
          *v8 = qvector_reserve(v8, *v8, v15, 48);
        }
        v19 = v8[1];
        if ( v19 < v15 )
        {
          v20 = 0;
          do
          {
            v22 = *v8 + 48 * v19;
            *(_QWORD *)v22 = 0;
            *(_OWORD *)(v22 + 8) = v20;
            v23 = n[0];
            if ( n[0] )
            {
              v24 = (void *)qalloc_or_throw(n[0], v17);
              *(_QWORD *)v22 = v24;
              *(_QWORD *)(v22 + 16) = v23;
              v17 = (const char *)src;
              memcpy(v24, src, v23);
              *(_QWORD *)(v22 + 8) = v23;
              v20 = 0;
            }
            *(_QWORD *)(v22 + 24) = 0;
            *(_OWORD *)(v22 + 32) = v20;
            v21 = v98[0];
            if ( v98[0] )
            {
              v79 = (void *)qalloc_or_throw(v98[0], v17);
              *(_QWORD *)(v22 + 24) = v79;
              *(_QWORD *)(v22 + 40) = v21;
              v17 = (const char *)v97;
              memcpy(v79, v97, v21);
              *(_QWORD *)(v22 + 32) = v21;
              v20 = 0;
            }
            ++v19;
          }
          while ( v15 != v19 );
        }
        v8[1] = v15;
        if ( v97 )
        {
          v98[0] = 0;
          qfree(v97);
        }
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        goto LABEL_131;
      }
      if ( v18 >= v15
        || (v80 = qvector_reserve(v8, v17, v15, 48), v16 = v8[1], *v8 = v80, v17 = (const char *)v80, v16 < v15) )
      {
        while ( 1 )
        {
          v75 = (char *)&v17[48 * v16];
          *(_QWORD *)v75 = 0;
          *(_OWORD *)(v75 + 8) = 0;
          v76 = v92[0];
          if ( v92[0] )
          {
            v77 = (void *)qalloc_or_throw(v92[0], v17, 0.0);
            *(_QWORD *)v75 = v77;
            *((_QWORD *)v75 + 2) = v76;
            v17 = (const char *)v91;
            memcpy(v77, v91, v76);
            *((_QWORD *)v75 + 1) = v76;
          }
          *((_QWORD *)v75 + 3) = 0;
          *((_OWORD *)v75 + 2) = 0;
          v74 = v94[0];
          if ( v94[0] )
          {
            v78 = (void *)qalloc_or_throw(v94[0], v17, 0.0);
            *((_QWORD *)v75 + 3) = v78;
            *((_QWORD *)v75 + 5) = v74;
            memcpy(v78, v93, v74);
            *((_QWORD *)v75 + 4) = v74;
          }
          if ( ++v16 >= v15 )
            break;
          v17 = (const char *)*v8;
        }
      }
LABEL_130:
      v8[1] = v15;
LABEL_131:
      if ( v93 )
      {
        v94[0] = 0;
        qfree(v93);
      }
      if ( v91 )
      {
        v92[0] = 0;
        qfree(v91);
      }
    }
  }
LABEL_47:
  v32 = 0;
  v33 = nullptr;
  *(_OWORD *)v92 = 0;
  v85 = 48 * v15;
  v91 = nullptr;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( !v8 )
    goto LABEL_89;
LABEL_48:
  p_src = (void **)(v32 + *v8);
  for ( i = (__int64 *)(p_src + 3); ; i = nullptr )
  {
    v81 = v33;
    v36 = sub_54DE00(p_src, a1);
    if ( !v36 || (unsigned __int64)p_src[1] <= 1 )
      goto LABEL_66;
    if ( v81 )
    {
      v37 = haystack;
      if ( v81[1] )
        v37 = (const char *)*v81;
      if ( strcmp(v37, (const char *)*p_src) >= 0 )
        goto LABEL_66;
    }
    v38 = sub_692FE0(a1);
    v39 = v38;
    if ( v38 < 0 )
    {
LABEL_66:
      if ( src )
      {
        n[0] = 0;
        v36 = 0;
        qfree(src);
        v46 = v91;
        if ( v91 )
          goto LABEL_68;
      }
      else if ( v91 )
      {
        v92[0] = 0;
        qfree(v91);
      }
LABEL_34:
      if ( v8 )
      {
        v25 = (char *)*v8;
        if ( *v8 )
        {
          v26 = v8[1];
          if ( v26 )
          {
            for ( j = 0; j != v26; ++j )
            {
              v28 = &v25[48 * j];
              v29 = *((void **)v28 + 3);
              if ( v29 )
              {
                *((_QWORD *)v28 + 4) = 0;
                qfree(v29);
              }
              v30 = *(void **)v28;
              if ( *(_QWORD *)v28 )
              {
                *((_QWORD *)v28 + 1) = 0;
                qfree(v30);
              }
              v25 = (char *)*v8;
            }
          }
          v8[1] = 0;
          qfree(v25);
        }
        qfree(v8);
      }
      return 0;
    }
    if ( !i )
      goto LABEL_61;
    v40 = i[1];
    v41 = v38;
    if ( v40 >= v38 )
    {
      if ( v38 != v40 )
        i[1] = v38;
      i = (__int64 *)*i;
LABEL_61:
      v42 = *a1;
      if ( !v38 )
        goto LABEL_87;
      goto LABEL_62;
    }
    v63 = (__int64 *)*i;
    if ( i[2] < (unsigned __int64)v38 )
    {
      v90 = v38;
      v84 = v38;
      v69 = qvector_reserve(i, v63, v38, 1);
      v40 = i[1];
      v39 = v90;
      *i = v69;
      v63 = (__int64 *)v69;
      v41 = v84;
    }
    v89 = v39;
    v83 = v41;
    memset((char *)v63 + v40, 0, v41 - v40);
    v39 = v89;
    i[1] = v83;
    i = (__int64 *)*i;
    v42 = *a1;
LABEL_62:
    v43 = *v42;
    v44 = v42 + 1;
    if ( *v42 != -84 )
    {
      v45 = 0;
      goto LABEL_64;
    }
    ++v42;
    v45 = 0;
    v43 = 0;
    while ( !i )
    {
      if ( v39 == ++v45 )
        goto LABEL_87;
      while ( 1 )
      {
        v43 = *v42;
        v44 = v42 + 1;
        if ( *v42 != -84 )
          break;
        ++v45;
        ++v42;
        if ( v39 == v45 )
          goto LABEL_87;
      }
LABEL_64:
      if ( v43 == -82 )
      {
        v43 = v42[1];
        v44 = v42 + 2;
        if ( (v43 & 0xFD) != 0xAC )
          goto LABEL_66;
      }
      else if ( !v43 )
      {
        goto LABEL_66;
      }
      v42 = v44;
    }
    while ( 1 )
    {
      v59 = i;
      ++v45;
      i = (__int64 *)((char *)i + 1);
      *(_BYTE *)v59 = v43;
      if ( v39 == v45 )
        break;
      v43 = *v42;
      v44 = v42 + 1;
      if ( *v42 != -84 )
        goto LABEL_64;
      ++v42;
      v43 = 0;
    }
LABEL_87:
    *a1 = v42;
    v32 += 48;
    if ( v85 == v32 )
      break;
    v33 = p_src;
    if ( v8 )
      goto LABEL_48;
LABEL_89:
    p_src = &v91;
    if ( v33 == &v91 )
      p_src = &src;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
    v46 = v91;
    if ( !v91 )
      goto LABEL_69;
LABEL_68:
    v92[0] = 0;
    qfree(v46);
    if ( v36 )
      goto LABEL_69;
    goto LABEL_34;
  }
  if ( v91 )
  {
    v92[0] = 0;
    qfree(v91);
  }
LABEL_69:
  if ( !a3 )
    return 1;
  v47 = *a3;
  if ( !*a3 )
  {
LABEL_83:
    *a3 = v8;
    return 1;
  }
  if ( !v8 )
    return 1;
  v48 = v8[1];
  v49 = (char *)*v8;
  v50 = (const char *)*v8;
  if ( !(48 * v48) )
    goto LABEL_115;
  v82 = v8[1];
  v51 = *v47;
  v52 = *a3;
  v86 = (const char *)*v8;
  v88 = v8;
  v53 = *v47;
  while ( 2 )
  {
    v54 = (const char *)(48 * v52[1] + v51);
    if ( v54 != (const char *)v53 )
    {
      v55 = *((_QWORD *)v50 + 1);
      do
      {
        v58 = *(_QWORD *)(v53 + 8);
        if ( v55 )
        {
          v56 = *(const char **)v50;
          v57 = haystack;
          if ( !v58 )
            goto LABEL_77;
        }
        else
        {
          if ( !v58 )
          {
            if ( (const char *)v53 != v54 )
              goto LABEL_104;
            break;
          }
          v56 = haystack;
        }
        v57 = *(const char **)v53;
LABEL_77:
        if ( strcmp(v57, v56) >= 0 )
        {
          if ( (const char *)v53 == v54 )
            break;
          v60 = *(_QWORD *)(v53 + 8);
          if ( v55 )
          {
            v61 = *(const char **)v50;
            v62 = haystack;
            if ( v60 )
              goto LABEL_100;
          }
          else
          {
            v61 = haystack;
            if ( !v60 )
              goto LABEL_104;
LABEL_100:
            v62 = *(const char **)v53;
          }
          if ( !strcmp(v62, v61) )
            goto LABEL_104;
          v54 = (const char *)v53;
          break;
        }
        v53 += 48;
      }
      while ( (const char *)v53 != v54 );
    }
    v53 = (__int64)v54;
    sub_51F6F0(v52, v54, (__int64)v50);
    v86 = (const char *)*v88;
    v82 = v88[1];
LABEL_104:
    v50 += 48;
    if ( v50 != &v86[48 * v82] )
    {
      v51 = *v52;
      continue;
    }
    break;
  }
  v8 = v88;
  v48 = v82;
  v49 = (char *)v86;
LABEL_115:
  if ( v49 )
  {
    v64 = 0;
    v65 = v48;
    if ( v48 )
    {
      do
      {
        v66 = &v49[48 * v64];
        v67 = *((void **)v66 + 3);
        if ( v67 )
        {
          *((_QWORD *)v66 + 4) = 0;
          qfree(v67);
        }
        v68 = *(void **)v66;
        if ( *(_QWORD *)v66 )
        {
          *((_QWORD *)v66 + 1) = 0;
          qfree(v68);
        }
        ++v64;
        v49 = (char *)*v8;
      }
      while ( v64 != v65 );
    }
    v8[1] = 0;
    qfree(v49);
  }
  qfree(v8);
  return 1;
}

