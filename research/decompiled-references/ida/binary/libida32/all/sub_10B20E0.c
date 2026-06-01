__int64 __fastcall sub_10B20E0(size_t a1, _QWORD *a2, void *a3, void *a4, unsigned int a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  size_t v8; // r15
  size_t v9; // r13
  _QWORD *v10; // r12
  void *v11; // r14
  size_t v12; // rbp
  int v13; // eax
  int v14; // eax
  void *v15; // rcx
  void *v16; // r9
  size_t v17; // r8
  const void *v18; // rsi
  int v19; // eax
  size_t v20; // rsi
  unsigned int v21; // eax
  void *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // r8
  __int64 result; // rax
  __int64 v26; // r14
  __int64 (*v27)(); // rax
  char *v28; // rbx
  char *v29; // rbp
  __int64 v30; // rsi
  __int64 (*v31)(); // rax
  unsigned __int64 v32; // rax
  void *v33; // r9
  size_t v34; // rcx
  const void *v35; // rsi
  void *v36; // r10
  size_t v37; // r11
  const void *v38; // r14
  int v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // rsi
  int v42; // edx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _BOOL8 v45; // rdx
  void *v46; // r15
  _QWORD *v47; // rcx
  _QWORD *v48; // r12
  _QWORD *v49; // rbx
  void *v50; // r15
  void *v51; // rdi
  __int64 v52; // rax
  _QWORD *v53; // r12
  _QWORD *v54; // rbx
  void *v55; // rbp
  void *v56; // rdi
  void *v57; // rdi
  int v58; // eax
  void *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rax
  size_t v62; // rdx
  void *v63; // rsi
  void *v64; // rsi
  void *s2; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v66; // [rsp+Ch] [rbp-9Ch]
  void *s1; // [rsp+10h] [rbp-98h]
  __int64 v68; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  void *v70; // [rsp+28h] [rbp-80h]
  size_t v71; // [rsp+30h] [rbp-78h]
  _QWORD *v72; // [rsp+38h] [rbp-70h]
  char *v73; // [rsp+40h] [rbp-68h] BYREF
  __int64 v74; // [rsp+48h] [rbp-60h]
  char v75; // [rsp+50h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1;
  v6 = a2;
  s2 = a3;
  v66 = a5;
  if ( !a2 )
    v6 = *(_QWORD **)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 216);
  v68 = a1 + 208;
  v9 = a1 + 208;
  if ( !v8 )
    goto LABEL_26;
  n = a1;
  v10 = v6;
  do
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v10 > *(_QWORD *)(v8 + 32) )
        goto LABEL_34;
      if ( v10 == *(_QWORD **)(v8 + 32) )
        break;
LABEL_15:
      v9 = v8;
      v8 = *(_QWORD *)(v8 + 16);
LABEL_16:
      if ( !v8 )
        goto LABEL_17;
    }
    v11 = *(void **)(v8 + 48);
    v12 = (size_t)v11;
    if ( a4 <= v11 )
      v12 = (size_t)a4;
    if ( v12 )
    {
      s1 = *(void **)(v8 + 40);
      v13 = memcmp(s1, s2, v12);
      if ( v13 )
      {
        if ( v13 < 0 )
          goto LABEL_34;
        v14 = memcmp(s2, s1, v12);
        if ( v14 )
          goto LABEL_37;
        if ( a4 != v11 && a4 < v11 )
          goto LABEL_15;
      }
      else
      {
        if ( a4 != v11 )
        {
          if ( a4 > v11 )
            goto LABEL_34;
          v14 = memcmp(s2, s1, v12);
          if ( !v14 )
            goto LABEL_14;
LABEL_37:
          if ( v14 < 0 )
            goto LABEL_15;
          goto LABEL_38;
        }
        v14 = memcmp(s2, s1, v12);
        if ( v14 )
          goto LABEL_37;
      }
    }
    else if ( a4 != v11 )
    {
      if ( a4 > v11 )
        goto LABEL_34;
LABEL_14:
      if ( a4 < v11 )
        goto LABEL_15;
    }
LABEL_38:
    if ( *(_DWORD *)(v8 + 56) >= (signed int)v66 )
    {
      v9 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      goto LABEL_16;
    }
LABEL_34:
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v8 );
LABEL_17:
  v6 = v10;
  v5 = (_QWORD *)n;
  if ( v68 == v9 || (unsigned __int64)v6 < *(_QWORD *)(v9 + 32) )
    goto LABEL_26;
  if ( v6 != *(_QWORD **)(v9 + 32) )
    goto LABEL_30;
  v15 = *(void **)(v9 + 48);
  v16 = *(void **)(v9 + 40);
  v17 = (size_t)v15;
  if ( a4 <= v15 )
    v17 = (size_t)a4;
  if ( !v17 )
  {
    if ( a4 == v15 )
      goto LABEL_73;
    if ( a4 < v15 )
      goto LABEL_26;
    goto LABEL_72;
  }
  v18 = *(const void **)(v9 + 40);
  v70 = *(void **)(v9 + 48);
  n = v17;
  s1 = v16;
  v19 = memcmp(s2, v18, v17);
  if ( v19 )
  {
    if ( v19 < 0 )
      goto LABEL_26;
    v59 = s1;
    s1 = v70;
    v58 = memcmp(v59, s2, n);
    v15 = v70;
    if ( v58 )
      goto LABEL_111;
    if ( a4 == s1 )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( a4 == v70 )
  {
    v58 = memcmp(s1, s2, n);
    if ( v58 )
      goto LABEL_111;
    goto LABEL_73;
  }
  if ( a4 < v70 )
    goto LABEL_26;
  v57 = s1;
  s1 = v70;
  v58 = memcmp(v57, s2, n);
  v15 = v70;
  if ( !v58 )
  {
LABEL_72:
    if ( a4 > v15 )
      goto LABEL_30;
LABEL_73:
    if ( (signed int)v66 >= *(_DWORD *)(v9 + 56) )
      goto LABEL_30;
LABEL_26:
    n = v9;
    s1 = v6;
    v9 = operator new(0x48u);
    *(_QWORD *)(v9 + 48) = a4;
    v20 = n;
    *(__m128 *)(v9 + 32) = _mm_loadh_ps((const double *)&s2);
    v21 = v66;
    *(_QWORD *)(v9 + 64) = 0;
    *(_DWORD *)(v9 + 56) = v21;
    v22 = (void *)sub_10B1A90(v5 + 25, v20, v9 + 32);
    v24 = v23;
    if ( !v23 )
    {
      s1 = v22;
      operator delete((void *)v9);
      v9 = (size_t)s1;
      goto LABEL_30;
    }
    if ( !v22 && (_QWORD *)v68 != v23 )
    {
      v32 = v23[4];
      if ( *(_QWORD *)(v9 + 32) >= v32 && *(_QWORD *)(v9 + 32) == v32 )
      {
        v33 = *(void **)(v9 + 48);
        v34 = v23[6];
        v35 = (const void *)v23[5];
        v36 = *(void **)(v9 + 40);
        v37 = v34;
        if ( (unsigned __int64)v33 <= v34 )
          v37 = *(_QWORD *)(v9 + 48);
        v38 = (const void *)v23[5];
        if ( v37 )
        {
          v72 = v23;
          v71 = v34;
          v70 = v33;
          n = v37;
          s1 = v36;
          v39 = memcmp(v36, v35, v37);
          v36 = s1;
          v37 = n;
          v33 = v70;
          v34 = v71;
          v24 = v72;
          if ( v39 )
          {
            if ( v39 >= 0 )
            {
              v62 = n;
              v63 = s1;
              v70 = v72;
              n = v71;
              s1 = v33;
              memcmp(v38, v63, v62);
            }
            goto LABEL_29;
          }
          if ( v70 != (void *)v71 )
            goto LABEL_66;
          v64 = s1;
          s1 = v72;
          memcmp(v38, v64, n);
        }
        else if ( v33 != (void *)v34 )
        {
LABEL_66:
          if ( (unsigned __int64)v33 >= v34 && v37 )
          {
            v70 = v24;
            n = v34;
            s1 = v33;
            memcmp(v38, v36, v37);
          }
        }
      }
    }
LABEL_29:
    std::_Rb_tree_insert_and_rebalance();
    ++v5[30];
    goto LABEL_30;
  }
LABEL_111:
  if ( v58 >= 0 )
    goto LABEL_73;
LABEL_30:
  result = *(_QWORD *)(v9 + 64);
  if ( result )
    return result;
  s1 = &v73;
  v73 = &v75;
  v74 = 0x400000000LL;
  if ( v66 != 4 )
  {
LABEL_46:
    v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, void *, _QWORD, void *))(*v6 + 96LL))(
            v6,
            v5[10],
            s2,
            a4,
            v66,
            s1);
    if ( v26 )
      goto LABEL_47;
    v31 = *(__int64 (**)())(*v6 + 72LL);
    if ( v31 == sub_10B0540 )
    {
      *(_QWORD *)(v9 + 64) = 0;
    }
    else
    {
      v61 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, void *, void *, _QWORD))v31)(v6, v5[10], s2, a4, v66);
      *(_QWORD *)(v9 + 64) = v61;
      if ( v61 )
        goto LABEL_49;
    }
    *(_QWORD *)(v9 + 64) = v5[10];
    goto LABEL_49;
  }
  v40 = v5[5];
  v41 = v5 + 4;
  if ( !v40 )
    goto LABEL_87;
  while ( 2 )
  {
    v42 = *(_DWORD *)(v40 + 32);
    if ( v42 <= 0 )
    {
      v40 = *(_QWORD *)(v40 + 24);
      goto LABEL_78;
    }
    v43 = *(_QWORD *)(v40 + 16);
    if ( v42 != 1 )
    {
      v41 = (_QWORD *)v40;
      v40 = *(_QWORD *)(v40 + 16);
LABEL_78:
      if ( !v40 )
        goto LABEL_87;
      continue;
    }
    break;
  }
  v60 = *(_QWORD *)(v40 + 24);
  while ( v60 )
  {
    if ( *(int *)(v60 + 32) > 1 )
      v60 = *(_QWORD *)(v60 + 16);
    else
      v60 = *(_QWORD *)(v60 + 24);
  }
  while ( v43 )
  {
    while ( *(int *)(v43 + 32) > 0 )
    {
      v40 = v43;
      v43 = *(_QWORD *)(v43 + 16);
      if ( !v43 )
        goto LABEL_86;
    }
    v43 = *(_QWORD *)(v43 + 24);
  }
LABEL_86:
  v41 = (_QWORD *)v40;
LABEL_87:
  v44 = (_QWORD *)v41[5];
  v45 = 0;
  if ( v44[6] == v6[6] && v44[7] == v6[7] )
    v45 = v6[8] == v44[8];
  v46 = s1;
  v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _BOOL8, void *))(*v6 + 80LL))(v6, v5[10], v45, s1);
  if ( !v26 )
    goto LABEL_46;
  v68 = (*(__int64 (__fastcall **)(_QWORD *, __int64, void *, void *, __int64, void *))(*v6 + 96LL))(
          v6,
          v26,
          s2,
          a4,
          4,
          v46);
  if ( v68 )
  {
    v47 = *(_QWORD **)(v26 + 184);
    *(_QWORD *)v26 = off_2BBF988;
    v48 = &v47[*(unsigned int *)(v26 + 192)];
    if ( v47 != v48 )
    {
      n = (size_t)a4;
      v49 = v47;
      do
      {
        while ( 1 )
        {
          v50 = (void *)*--v48;
          if ( !*v48 )
            break;
          sub_2191C80(*v48);
          operator delete(v50, 0x58u);
          if ( v49 == v48 )
            goto LABEL_94;
        }
      }
      while ( v49 != v48 );
LABEL_94:
      a4 = (void *)n;
      v48 = *(_QWORD **)(v26 + 184);
    }
    if ( v48 != (_QWORD *)(v26 + 200) )
      free(v48);
    *(_QWORD *)v26 = &off_2C0BEF8;
    operator delete();
    v51 = *(void **)(v26 + 8);
    if ( v51 != (void *)(v26 + 24) )
      free(v51);
    operator delete((void *)v26, 0x148u);
    v26 = v68;
  }
LABEL_47:
  v27 = *(__int64 (**)())(*v6 + 72LL);
  if ( v27 == sub_10B0540
    || (v52 = ((__int64 (__fastcall *)(_QWORD *, __int64, void *, void *, _QWORD))v27)(v6, v26, s2, a4, v66),
        (*(_QWORD *)(v9 + 64) = v52) == 0) )
  {
    *(_QWORD *)(v9 + 64) = v26;
  }
  else
  {
    v53 = *(_QWORD **)(v26 + 184);
    *(_QWORD *)v26 = off_2BBF988;
    v54 = &v53[*(unsigned int *)(v26 + 192)];
    if ( v53 != v54 )
    {
      do
      {
        while ( 1 )
        {
          v55 = (void *)*--v54;
          if ( !*v54 )
            break;
          sub_2191C80(*v54);
          operator delete(v55, 0x58u);
          if ( v53 == v54 )
            goto LABEL_104;
        }
      }
      while ( v53 != v54 );
LABEL_104:
      v54 = *(_QWORD **)(v26 + 184);
    }
    if ( v54 != (_QWORD *)(v26 + 200) )
      free(v54);
    *(_QWORD *)v26 = &off_2C0BEF8;
    operator delete();
    v56 = *(void **)(v26 + 8);
    if ( v56 != (void *)(v26 + 24) )
      free(v56);
    operator delete((void *)v26, 0x148u);
  }
LABEL_49:
  v28 = v73;
  v29 = &v73[8 * (unsigned int)v74];
  if ( v73 != v29 )
  {
    do
    {
      v30 = *(_QWORD *)v28;
      v28 += 8;
      sub_2195260(*(_QWORD *)(v9 + 64), v30);
    }
    while ( v29 != v28 );
    v29 = v73;
  }
  if ( v29 != (char *)s1 + 16 )
    free(v29);
  return *(_QWORD *)(v9 + 64);
}

