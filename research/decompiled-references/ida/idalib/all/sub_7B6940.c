__int64 __fastcall sub_7B6940(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, char a5, _QWORD *a6)
{
  unsigned __int64 v7; // rdi
  bool v10; // dl
  unsigned __int8 v11; // r12
  __int64 v12; // rax
  int v14; // eax
  char v15; // bl
  __int64 v16; // rax
  __int64 v17; // rbp
  char *v18; // r13
  size_t v19; // r12
  __int64 v20; // r13
  __int64 v21; // r12
  char *v22; // rbp
  void *v23; // rdi
  void *v24; // rdi
  unsigned __int16 *v26; // rax
  __int64 v27; // rdx
  unsigned __int16 *i; // r13
  __int64 v29; // rax
  char *v30; // rdi
  unsigned __int8 v31; // al
  unsigned __int64 v32; // r9
  size_t v33; // rdx
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rax
  __int64 (*v37)(); // r9
  char *v38; // rdi
  size_t v39; // rdx
  const void *v40; // rsi
  int v41; // eax
  char *v42; // rdi
  char *v43; // r13
  char *v44; // rcx
  char *v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdi
  char v48; // al
  char v49; // al
  __int64 (*v50)(); // rax
  __int64 v51; // rsi
  __int64 v52; // r13
  char *v53; // rdx
  char *v54; // rax
  void *v55; // rdi
  char *v56; // rax
  __int64 v57; // rdx
  char *v58; // rax
  char *v59; // rax
  void *v60; // rsi
  void *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  void *v64; // rdi
  __int64 v65; // rcx
  size_t v66; // r9
  char *v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __m128i v70; // xmm0
  _BYTE *src; // [rsp+0h] [rbp-108h]
  char *srcb; // [rsp+0h] [rbp-108h]
  char srcc; // [rsp+0h] [rbp-108h]
  char *srca; // [rsp+0h] [rbp-108h]
  void *srcd; // [rsp+0h] [rbp-108h]
  char *srce; // [rsp+0h] [rbp-108h]
  char v79; // [rsp+8h] [rbp-100h]
  bool v80; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v81; // [rsp+10h] [rbp-F8h]
  __int64 v82; // [rsp+18h] [rbp-F0h]
  int v84[2]; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v85; // [rsp+28h] [rbp-E0h]
  char v86; // [rsp+28h] [rbp-E0h]
  __int64 v87; // [rsp+30h] [rbp-D8h]
  size_t na; // [rsp+38h] [rbp-D0h]
  char nb; // [rsp+38h] [rbp-D0h]
  size_t n; // [rsp+38h] [rbp-D0h]
  size_t nc; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v92; // [rsp+40h] [rbp-C8h]
  char *v93; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v95; // [rsp+4Eh] [rbp-BAh]
  unsigned __int8 v96; // [rsp+4Fh] [rbp-B9h]
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v98; // [rsp+58h] [rbp-B0h]
  void *s; // [rsp+70h] [rbp-98h] BYREF
  __int128 v100; // [rsp+78h] [rbp-90h]
  void *v101; // [rsp+90h] [rbp-78h] BYREF
  __int128 v102; // [rsp+98h] [rbp-70h]
  void *v103; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v104; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v105; // [rsp+C8h] [rbp-40h]

  v7 = a2 + a3;
  v105 = __readfsqword(0x28u);
  v87 = a4 - a2;
  v10 = a2 >= a4 || a4 >= a2 + a3;
  v11 = v10;
  if ( !a6 )
  {
    ptr = nullptr;
    v98 = 0;
    v82 = a1;
    if ( v10 )
      v7 = a2;
    v86 = a5;
    goto LABEL_16;
  }
  v12 = a6[1];
  if ( v12 )
  {
    v82 = *(_QWORD *)(v12 + 1736);
    v80 = v82 != a1;
  }
  else
  {
    v82 = a1;
    v80 = 0;
  }
  ptr = nullptr;
  v98 = 0;
  v11 = v80 || v10;
  if ( !v80 && !v10 )
  {
    if ( *((_DWORD *)a6 + 6) == 1 )
    {
      v86 = a5;
      goto LABEL_16;
    }
    if ( !under_debugger )
      interr(2139);
LABEL_100:
    BUG();
  }
  v14 = *((_DWORD *)a6 + 6);
  if ( v14 == 1 )
  {
    v7 = a2;
    v86 = a5 | (2 * v80);
    goto LABEL_16;
  }
  v85 = a4 + a3;
  if ( v14 != 2 )
    goto LABEL_7;
  s = nullptr;
  v101 = nullptr;
  *(_WORD *)(v82 + 53) = 9;
  v100 = 0;
  v102 = 0;
  *(_QWORD *)(v82 + 56) = swap64(a4);
  sub_7443D0(*(_QWORD *)v82, (unsigned __int16 *)(v82 + 53));
  v95 = v11;
LABEL_39:
  sub_741460(*(_QWORD *)v82);
  for ( i = v26; v26; i = v26 )
  {
    src = (char *)v26 - 1;
    if ( v26 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      break;
    if ( *((_BYTE *)i + 2) != 46 )
      break;
    v92 = swap64(*(_QWORD *)((char *)i + 3));
    if ( v92 >= v85 )
      break;
    v29 = *(unsigned __int8 *)(*(_QWORD *)a1 + 5881LL);
    if ( *i <= (int)v29 + 1 )
    {
      if ( !under_debugger )
        interr(2095);
      goto LABEL_100;
    }
    v30 = (char *)s;
    v31 = src[v29 + 4];
    *(_QWORD *)&v100 = 0;
    v96 = v31;
    v32 = *i + 3LL;
    v33 = v32;
    if ( *((_QWORD *)&v100 + 1) < v32 )
    {
      n = *i + 3LL;
      v56 = (char *)qvector_reserve(&s, s, v32, 1);
      v32 = n;
      s = v56;
      v33 = n - v100;
      v30 = &v56[v100];
    }
    na = v32;
    memset(v30, 0, v33);
    *(_QWORD *)&v100 = na;
    memcpy(s, src, na);
    v34 = *i;
    v35 = (_DWORD)v34 + -2 - *(unsigned __int8 *)(*(_QWORD *)a1 + 5881LL) == 1
       || *(unsigned __int8 *)(*(_QWORD *)a1 + 5881LL) == (_DWORD)v34
                                                        + -2
                                                        - *(unsigned __int8 *)(*(_QWORD *)a1 + 5881LL);
    if ( v35 )
    {
      v36 = sub_7B51C0(*(_QWORD *)a1, (__int64)src);
      v35 = 0;
      v37 = *(__int64 (**)())(*a6 + 16LL);
      if ( v37 != sub_42AF90 )
        v35 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, __int64))v37)(a6, v92, v96, v36);
    }
    else
    {
      v50 = *(__int64 (**)())(*a6 + 24LL);
      if ( v50 == sub_42AFA0 )
        goto LABEL_50;
      v35 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64, _QWORD, _BYTE *))v50)(a6, v92, v96, src);
    }
    v34 = *i;
LABEL_50:
    v38 = (char *)s;
    v39 = v34 + 3;
    if ( (_QWORD)v100 != v39
      || (v40 = src, nb = v35, srcb = (char *)s, v41 = memcmp(s, v40, v39), v38 = srcb, v35 = nb, v41) )
    {
      srcc = v35;
      sub_7443D0(*(_QWORD *)v82, (unsigned __int16 *)(v38 + 1));
      v35 = srcc;
    }
    if ( v35 )
    {
      v57 = v102;
      if ( *((_QWORD *)&v102 + 1) < (unsigned __int64)(v102 + 1) )
      {
        srcd = *((void **)&v102 + 1);
        v63 = qvector_reserve(&v101, 0, v102 + 1, 24);
        v64 = v101;
        v65 = v63;
        v66 = *((_QWORD *)&v102 + 1);
        v67 = (char *)v101;
        *((_QWORD *)&v102 + 1) = srcd;
        v68 = v102 - 1;
        if ( (__int64)v102 - 1 >= 0 )
        {
          do
          {
            v69 = *(_QWORD *)v67;
            v70 = _mm_loadu_si128((const __m128i *)(v67 + 8));
            v65 += 24;
            v67 += 24;
            *((_QWORD *)v67 - 3) = 0;
            *(_QWORD *)(v65 - 24) = v69;
            *(__m128i *)(v65 - 16) = v70;
            *((_QWORD *)v67 - 1) = 0;
          }
          while ( v68-- != 0 );
          v64 = v101;
        }
        nc = v66;
        srce = (char *)v63;
        qfree(v64);
        v58 = srce;
        v57 = v102;
        v101 = srce;
        *((_QWORD *)&v102 + 1) = nc;
      }
      else
      {
        v58 = (char *)v101;
      }
      v59 = &v58[24 * v57];
      *(_QWORD *)v59 = 0;
      v60 = s;
      *(_OWORD *)(v59 + 8) = 0;
      *(_QWORD *)&v102 = v102 + 1;
      v61 = *(void **)v59;
      *(_QWORD *)v59 = v60;
      v62 = *((_QWORD *)v59 + 1);
      s = v61;
      *((_QWORD *)v59 + 1) = v100;
      *(_QWORD *)&v100 = v62;
      *((_QWORD *)v59 + 2) = *((_QWORD *)&v100 + 1);
      *((_QWORD *)&v100 + 1) = 0;
      goto LABEL_39;
    }
    v95 = 0;
    sub_741460(*(_QWORD *)v82);
  }
  v42 = (char *)v101;
  if ( v95 )
  {
    if ( v101 )
      goto LABEL_71;
    if ( s )
    {
      *(_QWORD *)&v100 = 0;
      qfree(s);
    }
    goto LABEL_7;
  }
  v43 = (char *)v101 + 24 * v102;
  if ( v101 == v43 )
    goto LABEL_70;
  v44 = (char *)v101;
  do
  {
    v46 = *(_QWORD *)v44;
    v47 = *(_QWORD *)v82;
    if ( !*(_BYTE *)(*(_QWORD *)v82 + 6020LL) || (v93 = v44, v48 = must_journal(v47, v46, v27), v44 = v93, !v48) )
    {
      srca = v44;
      sub_73A6B0(v47, (_WORD *)(v46 + 1), 0);
LABEL_59:
      v45 = srca;
      goto LABEL_60;
    }
    v103 = nullptr;
    v104 = 0;
    v49 = sub_73A6B0(v47, (_WORD *)(v46 + 1), (__int64)&v103);
    v45 = v93;
    if ( v49 )
    {
      add_undo_record(1, v103, v104);
      v45 = v93;
    }
    if ( v103 )
    {
      srca = v45;
      *(_QWORD *)&v104 = 0;
      qfree(v103);
      goto LABEL_59;
    }
LABEL_60:
    v44 = v45 + 24;
  }
  while ( v43 != v44 );
  v42 = (char *)v101;
LABEL_70:
  if ( v42 )
  {
LABEL_71:
    v51 = v102;
    if ( (_QWORD)v102 )
    {
      v52 = 0;
      v53 = v42;
      do
      {
        v54 = &v53[24 * v52];
        v55 = *(void **)v54;
        if ( *(_QWORD *)v54 )
        {
          *((_QWORD *)v54 + 1) = 0;
          qfree(v55);
          v53 = (char *)v101;
        }
        ++v52;
      }
      while ( v51 != v52 );
      v42 = v53;
    }
    *(_QWORD *)&v102 = 0;
    qfree(v42);
    if ( s )
    {
      *(_QWORD *)&v100 = 0;
      qfree(s);
    }
    if ( !v95 )
      goto LABEL_8;
LABEL_7:
    sub_7B5570((__int64 *)v82, a4, v85);
    goto LABEL_8;
  }
  if ( s )
  {
    *(_QWORD *)&v100 = 0;
    qfree(s);
  }
LABEL_8:
  if ( a5 )
  {
    if ( v80 )
    {
      v86 = 3;
      v11 = v80;
    }
    else
    {
      v86 = 1;
    }
    v7 = a2;
  }
  else
  {
    v7 = a2;
    v86 = 2 * v80;
  }
LABEL_16:
  *(_WORD *)(a1 + 53) = 9;
  *(_QWORD *)(a1 + 56) = swap64(v7);
  sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 53));
  *(_QWORD *)v84 = 0;
  v81 = a2 + (a3 & -(__int64)v11);
  v79 = v11;
  do
  {
    v15 = sub_7B5850(a1, &ptr, v81, v79, (__int64)a6);
    v16 = v98;
    if ( (_QWORD)v98 )
    {
      if ( a5 )
      {
        sub_7B5740((__int64 *)a1, &ptr);
        v16 = v98;
      }
      v17 = 0;
      v18 = (char *)ptr + 48 * v16 - 48;
      v19 = *((_QWORD *)v18 + 1);
      if ( v19 )
      {
        v17 = qalloc_or_throw(*((_QWORD *)v18 + 1));
        memcpy((void *)v17, *(const void **)v18, v19);
      }
      sub_7B62C0(v82, (__int64)&ptr, v87, v86, a6);
      *(_QWORD *)v84 += v98;
      sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(v17 + 1));
      if ( v17 )
        qfree((void *)v17);
      v20 = v98;
      if ( (_QWORD)v98 )
      {
        v21 = 0;
        do
        {
          v22 = (char *)ptr + 48 * v21;
          v23 = *((void **)v22 + 3);
          if ( v23 )
          {
            *((_QWORD *)v22 + 4) = 0;
            qfree(v23);
          }
          v24 = *(void **)v22;
          if ( *(_QWORD *)v22 )
          {
            *((_QWORD *)v22 + 1) = 0;
            qfree(v24);
          }
          ++v21;
        }
        while ( v20 != v21 );
      }
    }
    *(_QWORD *)&v98 = 0;
  }
  while ( v15 );
  if ( ptr )
    qfree(ptr);
  return *(_QWORD *)v84;
}
