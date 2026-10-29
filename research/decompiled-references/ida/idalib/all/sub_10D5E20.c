unsigned __int64 __fastcall sub_10D5E20(size_t a1, _QWORD *a2, void *a3, void *a4, unsigned __int32 a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  __int64 v8; // r15
  __m128 *v9; // r13
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
  _QWORD *v20; // rsi
  __int32 v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // r9
  void *v25; // rax
  _QWORD *v26; // rdx
  _DWORD *v27; // r8
  __int64 v28; // rdi
  unsigned __int64 result; // rax
  __int64 v30; // r14
  __int64 (*v31)(); // rax
  char *v32; // rbx
  char *v33; // rbp
  __int64 v34; // rsi
  __int64 (*v35)(); // rax
  unsigned __int64 v36; // rax
  void *v37; // r9
  size_t v38; // rcx
  const void *v39; // rsi
  void *v40; // r10
  size_t v41; // r11
  const void *v42; // r14
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // rsi
  int v47; // edx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _BOOL8 v50; // rdx
  void *v51; // r15
  _QWORD *v52; // rcx
  _QWORD *v53; // r12
  _QWORD *v54; // rbx
  void *v55; // r15
  __int64 v56; // rdi
  void *v57; // rdi
  __int64 v58; // rax
  _QWORD *v59; // r12
  _QWORD *v60; // rbx
  void *v61; // rbp
  __int64 v62; // rdi
  void *v63; // rdi
  void *v64; // rdi
  int v65; // eax
  void *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rax
  size_t v69; // rdx
  void *v70; // rsi
  void *v71; // rsi
  void *s2; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int32 v73; // [rsp+Ch] [rbp-9Ch]
  void *s1; // [rsp+10h] [rbp-98h]
  __int64 v75; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  void *v77; // [rsp+28h] [rbp-80h]
  size_t v78; // [rsp+30h] [rbp-78h]
  _DWORD *v79; // [rsp+38h] [rbp-70h]
  char *v80; // [rsp+40h] [rbp-68h] BYREF
  __int64 v81; // [rsp+48h] [rbp-60h]
  char v82; // [rsp+50h] [rbp-58h] BYREF

  v5 = (_QWORD *)a1;
  v6 = a2;
  s2 = a3;
  v73 = a5;
  if ( !a2 )
    v6 = *(_QWORD **)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 216);
  v75 = a1 + 208;
  v9 = (__m128 *)(a1 + 208);
  if ( !v8 )
    goto LABEL_26;
  n = a1;
  v10 = v6;
  do
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v10 > *(_QWORD *)(v8 + 32) )
        goto LABEL_35;
      if ( v10 == *(_QWORD **)(v8 + 32) )
        break;
LABEL_15:
      v9 = (__m128 *)v8;
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
          goto LABEL_35;
        v14 = memcmp(s2, s1, v12);
        if ( v14 )
          goto LABEL_38;
        if ( a4 != v11 && a4 < v11 )
          goto LABEL_15;
      }
      else
      {
        if ( a4 != v11 )
        {
          if ( a4 > v11 )
            goto LABEL_35;
          v14 = memcmp(s2, s1, v12);
          if ( !v14 )
            goto LABEL_14;
LABEL_38:
          if ( v14 < 0 )
            goto LABEL_15;
          goto LABEL_39;
        }
        v14 = memcmp(s2, s1, v12);
        if ( v14 )
          goto LABEL_38;
      }
    }
    else if ( a4 != v11 )
    {
      if ( a4 > v11 )
        goto LABEL_35;
LABEL_14:
      if ( a4 < v11 )
        goto LABEL_15;
    }
LABEL_39:
    if ( *(_DWORD *)(v8 + 56) >= (signed __int32)v73 )
    {
      v9 = (__m128 *)v8;
      v8 = *(_QWORD *)(v8 + 16);
      goto LABEL_16;
    }
LABEL_35:
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v8 );
LABEL_17:
  v6 = v10;
  v5 = (_QWORD *)n;
  if ( (__m128 *)v75 == v9 || (unsigned __int64)v6 < v9[2].m128_u64[0] )
    goto LABEL_26;
  if ( v6 != (_QWORD *)v9[2].m128_u64[0] )
    goto LABEL_31;
  v15 = (void *)v9[3].m128_u64[0];
  v16 = (void *)v9[2].m128_u64[1];
  v17 = (size_t)v15;
  if ( a4 <= v15 )
    v17 = (size_t)a4;
  if ( !v17 )
  {
    if ( a4 == v15 )
      goto LABEL_76;
    if ( a4 < v15 )
      goto LABEL_26;
    goto LABEL_75;
  }
  v18 = (const void *)v9[2].m128_u64[1];
  v77 = (void *)v9[3].m128_u64[0];
  n = v17;
  s1 = v16;
  v19 = memcmp(s2, v18, v17);
  if ( v19 )
  {
    if ( v19 < 0 )
      goto LABEL_26;
    v66 = s1;
    s1 = v77;
    v65 = memcmp(v66, s2, n);
    v15 = v77;
    if ( v65 )
      goto LABEL_114;
    if ( a4 == s1 )
      goto LABEL_76;
    goto LABEL_75;
  }
  if ( a4 == v77 )
  {
    v65 = memcmp(s1, s2, n);
    if ( v65 )
      goto LABEL_114;
    goto LABEL_76;
  }
  if ( a4 < v77 )
    goto LABEL_26;
  v64 = s1;
  s1 = v77;
  v65 = memcmp(v64, s2, n);
  v15 = v77;
  if ( !v65 )
  {
LABEL_75:
    if ( a4 > v15 )
      goto LABEL_31;
LABEL_76:
    if ( (signed __int32)v73 >= v9[3].m128_i32[2] )
      goto LABEL_31;
LABEL_26:
    n = (size_t)v9;
    s1 = v6;
    v9 = (__m128 *)operator new(0x48u);
    v9[3].m128_u64[0] = (unsigned __int64)a4;
    v20 = (_QWORD *)n;
    v9[2] = _mm_loadh_ps((const double *)&s2);
    v21 = v73;
    v9[4].m128_u64[0] = 0;
    v9[3].m128_i32[2] = v21;
    v25 = (void *)sub_10D57D0(v5 + 25, v20, (__int64)&v9[2], v22, v23, v24);
    v27 = v26;
    if ( !v26 )
    {
      s1 = v25;
      operator delete(v9);
      v9 = (__m128 *)s1;
      goto LABEL_31;
    }
    if ( v25 )
      goto LABEL_29;
    if ( (_QWORD *)v75 == v26 )
      goto LABEL_29;
    v36 = v26[4];
    if ( v9[2].m128_u64[0] < v36 )
      goto LABEL_29;
    if ( v9[2].m128_u64[0] != v36 )
      goto LABEL_72;
    v37 = (void *)v9[3].m128_u64[0];
    v38 = v26[6];
    v39 = (const void *)v26[5];
    v40 = (void *)v9[2].m128_u64[1];
    v41 = v38;
    if ( (unsigned __int64)v37 <= v38 )
      v41 = v9[3].m128_u64[0];
    v42 = (const void *)v26[5];
    if ( v41 )
    {
      v79 = v26;
      v78 = v38;
      v77 = v37;
      n = v41;
      s1 = v40;
      v43 = memcmp(v40, v39, v41);
      v40 = s1;
      v41 = n;
      v37 = v77;
      v38 = v78;
      v27 = v79;
      if ( v43 )
      {
        if ( v43 < 0 )
          goto LABEL_29;
        v69 = n;
        v70 = s1;
        v77 = v79;
        n = v78;
        s1 = v37;
        v44 = memcmp(v42, v70, v69);
        v37 = s1;
        v38 = n;
        v27 = v77;
        if ( !v44 )
        {
          if ( s1 != (void *)n )
            goto LABEL_70;
LABEL_71:
          if ( v9[3].m128_i32[2] >= v27[14] )
            goto LABEL_72;
LABEL_29:
          v28 = 1;
LABEL_30:
          std::_Rb_tree_insert_and_rebalance(v28, v9, v27, v75);
          ++v5[30];
          goto LABEL_31;
        }
LABEL_143:
        if ( v44 < 0 )
        {
          v28 = 0;
          goto LABEL_30;
        }
        goto LABEL_71;
      }
      if ( v77 == (void *)v78 )
      {
        v71 = s1;
        s1 = v79;
        v44 = memcmp(v42, v71, n);
        v27 = s1;
        if ( !v44 )
          goto LABEL_71;
        goto LABEL_143;
      }
    }
    else if ( v37 == (void *)v38 )
    {
      goto LABEL_71;
    }
    if ( (unsigned __int64)v37 < v38 )
      goto LABEL_29;
    if ( !v41 || (v77 = v27, n = v38, s1 = v37, v44 = memcmp(v42, v40, v41), v37 = s1, v38 = n, v27 = v77, !v44) )
    {
LABEL_70:
      if ( (unsigned __int64)v37 <= v38 )
        goto LABEL_71;
LABEL_72:
      v28 = 0;
      goto LABEL_30;
    }
    goto LABEL_143;
  }
LABEL_114:
  if ( v65 >= 0 )
    goto LABEL_76;
LABEL_31:
  result = v9[4].m128_u64[0];
  if ( result )
    return result;
  s1 = &v80;
  v80 = &v82;
  v81 = 0x400000000LL;
  if ( v73 != 4 )
  {
LABEL_47:
    v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, void *, void *, _QWORD, void *))(*v6 + 96LL))(
            v6,
            v5[10],
            s2,
            a4,
            v73,
            s1);
    if ( v30 )
      goto LABEL_48;
    v35 = *(__int64 (**)())(*v6 + 72LL);
    if ( v35 == sub_10D4280 )
    {
      v9[4].m128_u64[0] = 0;
    }
    else
    {
      v68 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, void *, void *, _QWORD))v35)(v6, v5[10], s2, a4, v73);
      v9[4].m128_u64[0] = v68;
      if ( v68 )
        goto LABEL_50;
    }
    v9[4].m128_u64[0] = v5[10];
    goto LABEL_50;
  }
  v45 = v5[5];
  v46 = v5 + 4;
  if ( !v45 )
    goto LABEL_90;
  while ( 2 )
  {
    v47 = *(_DWORD *)(v45 + 32);
    if ( v47 <= 0 )
    {
      v45 = *(_QWORD *)(v45 + 24);
      goto LABEL_81;
    }
    v48 = *(_QWORD *)(v45 + 16);
    if ( v47 != 1 )
    {
      v46 = (_QWORD *)v45;
      v45 = *(_QWORD *)(v45 + 16);
LABEL_81:
      if ( !v45 )
        goto LABEL_90;
      continue;
    }
    break;
  }
  v67 = *(_QWORD *)(v45 + 24);
  while ( v67 )
  {
    if ( *(int *)(v67 + 32) > 1 )
      v67 = *(_QWORD *)(v67 + 16);
    else
      v67 = *(_QWORD *)(v67 + 24);
  }
  while ( v48 )
  {
    while ( *(int *)(v48 + 32) > 0 )
    {
      v45 = v48;
      v48 = *(_QWORD *)(v48 + 16);
      if ( !v48 )
        goto LABEL_89;
    }
    v48 = *(_QWORD *)(v48 + 24);
  }
LABEL_89:
  v46 = (_QWORD *)v45;
LABEL_90:
  v49 = (_QWORD *)v46[5];
  v50 = 0;
  if ( v49[6] == v6[6] && v49[7] == v6[7] )
    v50 = v6[8] == v49[8];
  v51 = s1;
  v30 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _BOOL8, void *))(*v6 + 80LL))(v6, v5[10], v50, s1);
  if ( !v30 )
    goto LABEL_47;
  v75 = (*(__int64 (__fastcall **)(_QWORD *, __int64, void *, void *, __int64, void *))(*v6 + 96LL))(
          v6,
          v30,
          s2,
          a4,
          4,
          v51);
  if ( v75 )
  {
    v52 = *(_QWORD **)(v30 + 184);
    *(_QWORD *)v30 = off_2BE9928;
    v53 = &v52[*(unsigned int *)(v30 + 192)];
    if ( v52 != v53 )
    {
      n = (size_t)a4;
      v54 = v52;
      do
      {
        while ( 1 )
        {
          v55 = (void *)*--v53;
          if ( !*v53 )
            break;
          sub_21B59C0(*v53);
          operator delete(v55, 0x58u);
          if ( v54 == v53 )
            goto LABEL_97;
        }
      }
      while ( v54 != v53 );
LABEL_97:
      a4 = (void *)n;
      v53 = *(_QWORD **)(v30 + 184);
    }
    if ( v53 != (_QWORD *)(v30 + 200) )
      free(v53);
    v56 = *(_QWORD *)(v30 + 152);
    *(_QWORD *)v30 = &off_2C35EF8;
    operator delete(v56, 12LL * *(unsigned int *)(v30 + 168), 4);
    v57 = *(void **)(v30 + 8);
    if ( v57 != (void *)(v30 + 24) )
      free(v57);
    operator delete((void *)v30, 0x148u);
    v30 = v75;
  }
LABEL_48:
  v31 = *(__int64 (**)())(*v6 + 72LL);
  if ( v31 == sub_10D4280
    || (v58 = ((__int64 (__fastcall *)(_QWORD *, __int64, void *, void *, _QWORD))v31)(v6, v30, s2, a4, v73),
        (v9[4].m128_u64[0] = v58) == 0) )
  {
    v9[4].m128_u64[0] = v30;
  }
  else
  {
    v59 = *(_QWORD **)(v30 + 184);
    *(_QWORD *)v30 = off_2BE9928;
    v60 = &v59[*(unsigned int *)(v30 + 192)];
    if ( v59 != v60 )
    {
      do
      {
        while ( 1 )
        {
          v61 = (void *)*--v60;
          if ( !*v60 )
            break;
          sub_21B59C0(*v60);
          operator delete(v61, 0x58u);
          if ( v59 == v60 )
            goto LABEL_107;
        }
      }
      while ( v59 != v60 );
LABEL_107:
      v60 = *(_QWORD **)(v30 + 184);
    }
    if ( v60 != (_QWORD *)(v30 + 200) )
      free(v60);
    v62 = *(_QWORD *)(v30 + 152);
    *(_QWORD *)v30 = &off_2C35EF8;
    operator delete(v62, 12LL * *(unsigned int *)(v30 + 168), 4);
    v63 = *(void **)(v30 + 8);
    if ( v63 != (void *)(v30 + 24) )
      free(v63);
    operator delete((void *)v30, 0x148u);
  }
LABEL_50:
  v32 = v80;
  v33 = &v80[8 * (unsigned int)v81];
  if ( v80 != v33 )
  {
    do
    {
      v34 = *(_QWORD *)v32;
      v32 += 8;
      sub_21B8FA0(v9[4].m128_u64[0], v34);
    }
    while ( v33 != v32 );
    v33 = v80;
  }
  if ( v33 != (char *)s1 + 16 )
    free(v33);
  return v9[4].m128_u64[0];
}
