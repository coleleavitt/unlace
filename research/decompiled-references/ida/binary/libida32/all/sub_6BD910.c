__int64 __fastcall sub_6BD910(_QWORD *a1, __int64 *a2, const char *a3, _QWORD *a4)
{
  char *v5; // rbp
  char *v6; // rax
  char *v7; // rbx
  size_t v8; // r15
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // rbp
  void *v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rsi
  unsigned __int64 v16; // rbp
  _BYTE *v17; // rdi
  unsigned __int64 v18; // rbp
  _BYTE *v19; // rdx
  _BYTE *v20; // rax
  unsigned __int64 v21; // r13
  _BYTE *v22; // rsi
  const char *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r13
  const char *v27; // rdi
  const char *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r12d
  void *v32; // rdi
  __int64 v33; // rcx
  _BYTE *v34; // rdi
  __int64 v35; // rbp
  char *v36; // rdx
  _BYTE *v37; // rax
  unsigned __int64 v38; // r15
  _BYTE *v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // r15
  __int64 v42; // rbp
  char *v43; // rdi
  _BYTE *v44; // rdx
  __int64 v45; // rax
  const char *v46; // rdx
  const char *v47; // r8
  char *v48; // rdi
  void *v49; // rax
  void *v50; // rax
  __int64 v51; // rbx
  size_t v52; // rbp
  _BYTE *v53; // rdx
  __int64 v54; // rax
  int v58; // [rsp+2Ch] [rbp-ECh] BYREF
  __int64 v59; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v61; // [rsp+40h] [rbp-D8h] BYREF
  __int64 tinfo_property; // [rsp+48h] [rbp-D0h] BYREF
  void *dest; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+58h] [rbp-C0h]
  void *v65; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v66; // [rsp+78h] [rbp-A0h]
  void *v67; // [rsp+90h] [rbp-88h] BYREF
  __int128 v68; // [rsp+98h] [rbp-80h]
  void *ptr[3]; // [rsp+B0h] [rbp-68h] BYREF
  int v70; // [rsp+C8h] [rbp-50h]
  __int16 v71; // [rsp+CCh] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+D8h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v5 = (char *)(a3 + 10);
  v6 = strrchr(a3 + 10, 44);
  if ( !v6 )
  {
    v30 = 0;
    sub_6BB730(a1, 0, (__int64)"Illegal %s specification", a3);
    return v30;
  }
  v7 = v6;
  dest = nullptr;
  v64 = 0;
  v8 = v6 - v5;
  if ( v6 == v5 )
    goto LABEL_3;
  v32 = nullptr;
  if ( v8 != -1 )
  {
    dest = (void *)qvector_reserve(&dest, 0, v8 + 1, 1);
    v32 = dest;
  }
  *(_QWORD *)&v64 = v8 + 1;
  memmove(v32, v5, v8);
  *((_BYTE *)dest + v8) = 0;
  v33 = v64;
  if ( (unsigned __int64)v64 <= 1 )
    goto LABEL_3;
  v34 = dest;
  v35 = v64 - 1;
  v36 = (char *)dest + v64 - 1;
  v37 = v36;
  if ( dest < v36 )
  {
    while ( *(v37 - 1) == 32 )
    {
      if ( dest == --v37 )
        goto LABEL_82;
    }
    v35 = v37 - (_BYTE *)dest;
    if ( v37 != dest )
      goto LABEL_57;
LABEL_82:
    if ( !dest )
      goto LABEL_63;
    *(_QWORD *)&v64 = 0;
    qfree(dest);
    dest = nullptr;
    *((_QWORD *)&v64 + 1) = 0;
  }
  else
  {
LABEL_57:
    v38 = v35 + 1;
    if ( (unsigned __int64)v64 < v35 + 1 )
    {
      if ( *((_QWORD *)&v64 + 1) < v38 )
      {
        v49 = (void *)qvector_reserve(&dest, dest, v35 + 1, 1);
        v33 = v64;
        dest = v49;
        v34 = v49;
      }
      memset(&v34[v33], 0, v38 - v33);
      *(_QWORD *)&v64 = v35 + 1;
      v37 = (char *)dest + v35;
    }
    else if ( (_QWORD)v64 != v35 + 1 )
    {
      *(_QWORD *)&v64 = v35 + 1;
    }
    *v37 = 0;
  }
  if ( (unsigned __int64)v64 <= 1 || (v34 = dest, v36 = (char *)dest + v64 - 1, dest >= v36) )
  {
LABEL_3:
    v9 = v7 + 1;
LABEL_4:
    v65 = nullptr;
    v66 = 0;
    goto LABEL_5;
  }
LABEL_63:
  v39 = v34;
  while ( *v39 == 32 )
  {
    if ( ++v39 == v36 )
    {
      v9 = v7 + 1;
      *v34 = *v39;
      v43 = (char *)dest;
      goto LABEL_102;
    }
  }
  if ( v34 >= v39 )
    goto LABEL_3;
  v40 = v36 - v39;
  v9 = v7 + 1;
  v41 = v40 + 1;
  v42 = v40;
  memmove(v34, v39, v40 + 1);
  v43 = (char *)dest;
  v44 = dest;
  if ( v42 )
  {
    v45 = v64;
    if ( (unsigned __int64)v64 < v41 )
    {
      if ( *((_QWORD *)&v64 + 1) < v41 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v41, 1);
        v43 = (char *)dest;
        v45 = v64;
      }
      memset(&v43[v45], 0, v41 - v45);
      *(_QWORD *)&v64 = v41;
      v44 = dest;
    }
    else if ( v41 != (_QWORD)v64 )
    {
      *(_QWORD *)&v64 = v41;
    }
    v44[v42] = 0;
    v65 = nullptr;
    v66 = 0;
    goto LABEL_5;
  }
LABEL_102:
  if ( !v43 )
    goto LABEL_4;
  *(_QWORD *)&v64 = 0;
  qfree(v43);
  dest = nullptr;
  *((_QWORD *)&v64 + 1) = 0;
  v65 = nullptr;
  v66 = 0;
LABEL_5:
  v10 = strlen(v9);
  v11 = v10 + 1;
  v12 = v10;
  v13 = (void *)qvector_reserve(&v65, 0, v10 + 1, 1);
  *(_QWORD *)&v66 = v11;
  v65 = v13;
  memmove(v13, v9, v12);
  *((_BYTE *)v65 + v12) = 0;
  v14 = v66;
  v15 = (char *)v65;
  v16 = v66 - 1;
  if ( (__int64)v66 - 1 <= 1 )
  {
    if ( v65 )
    {
      *(_QWORD *)&v66 = 0;
      qfree(v65);
      v14 = v66;
      v65 = nullptr;
      *((_QWORD *)&v66 + 1) = 0;
    }
  }
  else
  {
    if ( *((_QWORD *)&v66 + 1) < v16 )
    {
      v65 = (void *)qvector_reserve(&v65, v65, v66 - 1, 1);
      v15 = (char *)v65;
    }
    *(_QWORD *)&v66 = v16;
    v15[v14 - 2] = 0;
    v14 = v66;
  }
  if ( v14 <= 1 )
    goto LABEL_25;
  v17 = v65;
  v18 = v14 - 1;
  v19 = (char *)v65 + v14 - 1;
  v20 = v19;
  if ( v65 >= v19 )
  {
LABEL_15:
    v21 = v18 + 1;
    if ( v14 < v18 + 1 )
    {
      if ( *((_QWORD *)&v66 + 1) < v21 )
      {
        v50 = (void *)qvector_reserve(&v65, v65, v18 + 1, 1);
        v14 = v66;
        v65 = v50;
        v17 = v50;
      }
      memset(&v17[v14], 0, v21 - v14);
      *(_QWORD *)&v66 = v18 + 1;
      v20 = (char *)v65 + v18;
    }
    else if ( v21 != v14 )
    {
      *(_QWORD *)&v66 = v18 + 1;
    }
    *v20 = 0;
LABEL_19:
    if ( (unsigned __int64)v66 <= 1 )
      goto LABEL_25;
    v17 = v65;
    v19 = (char *)v65 + v66 - 1;
    if ( v65 >= v19 )
      goto LABEL_25;
    goto LABEL_21;
  }
  while ( *(v20 - 1) == 32 )
  {
    if ( v65 == --v20 )
      goto LABEL_84;
  }
  v18 = v20 - (_BYTE *)v65;
  if ( v20 != v65 )
    goto LABEL_15;
LABEL_84:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
    v65 = nullptr;
    *((_QWORD *)&v66 + 1) = 0;
    goto LABEL_19;
  }
LABEL_21:
  v22 = v17;
  while ( *v22 == 32 )
  {
    if ( v19 == ++v22 )
    {
      *v17 = *v19;
      v48 = (char *)v65;
      goto LABEL_105;
    }
  }
  if ( v17 >= v22 )
    goto LABEL_25;
  v51 = v19 - v22;
  v52 = v19 - v22 + 1;
  memmove(v17, v22, v52);
  v48 = (char *)v65;
  v53 = v65;
  if ( v51 )
  {
    v54 = v66;
    if ( (unsigned __int64)v66 < v52 )
    {
      if ( *((_QWORD *)&v66 + 1) < v52 )
      {
        v65 = (void *)qvector_reserve(&v65, v65, v52, 1);
        v48 = (char *)v65;
        v54 = v66;
      }
      memset(&v48[v54], 0, v52 - v54);
      *(_QWORD *)&v66 = v52;
      v53 = v65;
    }
    else if ( v52 != (_QWORD)v66 )
    {
      *(_QWORD *)&v66 = v52;
    }
    v53[v51] = 0;
    goto LABEL_25;
  }
LABEL_105:
  if ( v48 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v48);
    v65 = nullptr;
    *((_QWORD *)&v66 + 1) = 0;
  }
LABEL_25:
  v23 = haystack;
  if ( (_QWORD)v64 )
    v23 = (const char *)dest;
  if ( v23 )
  {
    v24 = a1[71];
    if ( v24 )
    {
      v25 = a1[70];
      v26 = 0;
      while ( 1 )
      {
        v27 = haystack;
        if ( *(_QWORD *)(v25 + 32) )
          v27 = *(const char **)(v25 + 24);
        if ( !strcmp(v27, v23) )
          break;
        ++v26;
        v25 += 56;
        if ( v26 == v24 )
          goto LABEL_35;
      }
      v23 = *(const char **)v25;
    }
  }
LABEL_35:
  v59 = 0;
  v60 = 0;
  if ( (unsigned __int8)sub_6BC100((__int64)a1, &v60, v23) )
  {
    if ( (get_tinfo_property(v60, 2) & 0x3F) == 1 )
    {
      sub_6BB730(a1, 0, (__int64)"Illegal %s specification: Shifted pointer cannot be void", a3);
    }
    else
    {
      v67 = nullptr;
      v46 = haystack;
      v68 = 0;
      if ( (_QWORD)v66 )
        v46 = (const char *)v65;
      if ( (unsigned __int8)eval_expr_long(&v58, 0xFFFFFFFFLL, v46, &v67) )
      {
        if ( v58 )
        {
          tinfo_property = 0;
          *(_OWORD *)ptr = 0;
          v61 = 0;
          copy_tinfo_t(&ptr[1]);
          ptr[2] = nullptr;
          copy_tinfo_t(&ptr[2]);
          v70 = 0;
          v71 = 0;
          clear_tinfo_t(&v61);
          clear_tinfo_t(&tinfo_property);
          tinfo_property = 0;
          tinfo_property = get_tinfo_property(*a4, 9);
          copy_tinfo_t(ptr);
          clear_tinfo_t(&tinfo_property);
          copy_tinfo_t(&ptr[2]);
          HIBYTE(v71) |= 0x80u;
          v70 = v58;
          if ( (unsigned __int8)create_tinfo(&v59, 10, 10, ptr) )
          {
            clear_tinfo_t(&ptr[2]);
            clear_tinfo_t(&ptr[1]);
            clear_tinfo_t(ptr);
            if ( v67 )
            {
              *(_QWORD *)&v68 = 0;
              qfree(v67);
            }
            goto LABEL_41;
          }
          sub_6BB730(a1, 0, (__int64)"Illegal %s specification: Could not create pointer", a3);
          clear_tinfo_t(&ptr[2]);
          clear_tinfo_t(&ptr[1]);
          clear_tinfo_t(ptr);
        }
        else
        {
          sub_6BB730(a1, 0, (__int64)"Illegal %s specification: Shifted pointers cannot have zero delta", a3);
        }
      }
      else
      {
        v47 = haystack;
        if ( (_QWORD)v68 )
          v47 = (const char *)v67;
        sub_6BB730(a1, 0, (__int64)"Illegal %s specification: %s", a3, v47);
      }
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67);
      }
    }
  }
  else
  {
    memset(ptr, 0, sizeof(ptr));
    sub_3573A0((char **)ptr);
    v28 = haystack;
    if ( ptr[1] )
      v28 = (const char *)ptr[0];
    if ( (unsigned __int8)sub_6DC0E0(*(_QWORD *)(*a1 + 1480LL), &v59, v28, a4) )
    {
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
LABEL_41:
      if ( a2 )
      {
        v29 = *a2;
        *a2 = v59;
        v59 = v29;
      }
      v30 = 1;
      goto LABEL_44;
    }
    sub_6BB730(a1, 0, (__int64)"Illegal %s specification", a3);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
  }
  v30 = 0;
LABEL_44:
  clear_tinfo_t(&v60);
  clear_tinfo_t(&v59);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( dest )
  {
    *(_QWORD *)&v64 = 0;
    qfree(dest);
  }
  return v30;
}

