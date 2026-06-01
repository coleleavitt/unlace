unsigned __int64 __fastcall sub_45AE00(__int64 **a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  char *v6; // r12
  _QWORD *v7; // r13
  __int64 v8; // r15
  __int64 *v9; // r14
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rdx
  __int64 v20; // rdx
  const char *v21; // rdx
  __int64 v22; // rsi
  __int64 *v23; // rsi
  __int64 v24; // r12
  __int64 rank; // rbx
  const char *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  const char *v29; // rsi
  char *v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rbx
  char *v33; // rax
  void *v34; // rdi
  char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  char *v38; // rax
  void *v39; // rdi
  __int64 v41; // rbp
  char *v42; // rax
  void *v43; // rdi
  unsigned __int64 v44; // rbx
  char *v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  char *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  char *v51; // rdx
  __int64 v52; // rdx
  __int64 i; // rbx
  char *v54; // rax
  void *v55; // rdi
  char *v56; // rdx
  __int64 v57; // rbp
  __int64 v58; // rbx
  char *v59; // rax
  void *v60; // rdi
  char *v61; // [rsp+0h] [rbp-148h]
  __int64 v63; // [rsp+25h] [rbp-123h] BYREF
  char v64; // [rsp+2Dh] [rbp-11Bh]
  __int64 v65; // [rsp+2Eh] [rbp-11Ah] BYREF
  char v66; // [rsp+36h] [rbp-112h]
  __int64 v67; // [rsp+37h] [rbp-111h] BYREF
  char v68; // [rsp+3Fh] [rbp-109h]
  __int128 v69; // [rsp+40h] [rbp-108h] BYREF
  void *v70; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v71; // [rsp+58h] [rbp-F0h]
  void *v72; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v73; // [rsp+78h] [rbp-D0h]
  void *v74; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v75; // [rsp+98h] [rbp-B0h]
  void *ptr; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-90h]
  __int64 v78; // [rsp+D0h] [rbp-78h] BYREF
  __int128 v79; // [rsp+D8h] [rbp-70h]
  __int64 v80; // [rsp+F0h] [rbp-58h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+108h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  v70 = nullptr;
  v71 = 0;
  sub_456FB0(a2, (__int64 *)&v70, "/", 0);
  v4 = v71;
  v72 = nullptr;
  v73 = 0;
  sub_456FB0(a3, (__int64 *)&v72, "/", 0);
  v5 = v73;
  v6 = (char *)v72;
  if ( (unsigned __int64)v73 <= v4 )
    v4 = v73;
  if ( !v4 )
    goto LABEL_83;
  v7 = (char *)v72 + 8;
  v8 = 0;
  v61 = (char *)v70;
  v9 = (__int64 *)((char *)v70 + 8);
  while ( 1 )
  {
    v12 = *v9;
    if ( *v7 )
    {
      v10 = (const char *)*(v7 - 1);
      v11 = haystack;
      if ( !v12 )
        goto LABEL_7;
    }
    else
    {
      v10 = haystack;
      if ( !v12 )
        goto LABEL_8;
    }
    v11 = (const char *)*(v9 - 1);
LABEL_7:
    if ( strcmp(v11, v10) )
      break;
LABEL_8:
    ++v8;
    v7 += 3;
    v9 += 3;
    if ( v4 == v8 )
      goto LABEL_83;
  }
  if ( v4 == v8 )
  {
LABEL_83:
    if ( v6 )
    {
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v54 = &v6[24 * i];
          v55 = *(void **)v54;
          if ( *(_QWORD *)v54 )
          {
            *((_QWORD *)v54 + 1) = 0;
            qfree(v55);
            v6 = (char *)v72;
          }
        }
      }
      *(_QWORD *)&v73 = 0;
      qfree(v6);
    }
    v56 = (char *)v70;
    if ( v70 )
    {
      v57 = v71;
      if ( (_QWORD)v71 )
      {
        v58 = 0;
        do
        {
          v59 = &v56[24 * v58];
          v60 = *(void **)v59;
          if ( *(_QWORD *)v59 )
          {
            *((_QWORD *)v59 + 1) = 0;
            qfree(v60);
            v56 = (char *)v70;
          }
          ++v58;
        }
        while ( v57 != v58 );
      }
      *(_QWORD *)&v71 = 0;
      qfree(v56);
    }
    return v82 - __readfsqword(0x28u);
  }
  v13 = v71;
  v14 = v8 + 1;
  if ( v8 + 1 != (_QWORD)v71 )
  {
    v78 = 0;
    v79 = 0;
    if ( v8 + 1 < (unsigned __int64)v71 )
    {
      v41 = v8 + 1;
      while ( 1 )
      {
        v42 = &v61[24 * v41];
        v43 = *(void **)v42;
        if ( *(_QWORD *)v42 )
        {
          *((_QWORD *)v42 + 1) = 0;
          qfree(v43);
        }
        if ( ++v41 >= v13 )
          break;
        v61 = (char *)v70;
      }
      *(_QWORD *)&v71 = v8 + 1;
      v5 = v73;
    }
    else
    {
      if ( &v78 >= (__int64 *)v61 && &v78 < (__int64 *)&v61[24 * *((_QWORD *)&v71 + 1)] )
      {
        if ( *((_QWORD *)&v71 + 1) < v14 )
        {
          v70 = (void *)qvector_reserve(&v70, v61, v8 + 1, 24);
          v13 = v71;
        }
        if ( v13 < v14 )
        {
          v15 = 24 * v13;
          do
          {
            v16 = (char *)v70 + v15;
            v15 += 24;
            *(_QWORD *)v16 = 0;
            *(_OWORD *)(v16 + 8) = 0;
            v17 = v13++;
          }
          while ( v17 != v8 );
        }
        goto LABEL_22;
      }
      if ( *((_QWORD *)&v71 + 1) < v14 )
      {
        v70 = (void *)qvector_reserve(&v70, v61, v8 + 1, 24);
        v13 = v71;
      }
      if ( v13 >= v14 )
      {
LABEL_22:
        *(_QWORD *)&v71 = v8 + 1;
        v5 = v73;
      }
      else
      {
        v50 = 24 * v13;
        do
        {
          v51 = (char *)v70 + v50;
          v50 += 24;
          *(_QWORD *)v51 = 0;
          *(_OWORD *)(v51 + 8) = 0;
          v52 = v13++;
        }
        while ( v8 != v52 );
        *(_QWORD *)&v71 = v8 + 1;
        v5 = v73;
      }
    }
  }
  if ( v14 != v5 )
  {
    v80 = 0;
    v81 = 0;
    if ( v14 < v5 )
    {
      v44 = v8 + 1;
      do
      {
        v45 = (char *)v72 + 24 * v44;
        v46 = *(void **)v45;
        if ( *(_QWORD *)v45 )
        {
          *((_QWORD *)v45 + 1) = 0;
          qfree(v46);
        }
        ++v44;
      }
      while ( v44 < v5 );
      *(_QWORD *)&v73 = v8 + 1;
    }
    else
    {
      if ( &v80 >= v72 && &v80 < (__int64 *)((char *)v72 + 24 * *((_QWORD *)&v73 + 1)) )
      {
        if ( *((_QWORD *)&v73 + 1) < v14 )
        {
          v72 = (void *)qvector_reserve(&v72, v72, v8 + 1, 24);
          v5 = v73;
        }
        if ( v5 < v14 )
        {
          v18 = 24 * v5;
          do
          {
            v19 = (char *)v72 + v18;
            v18 += 24;
            *(_QWORD *)v19 = 0;
            *(_OWORD *)(v19 + 8) = 0;
            v20 = v5++;
          }
          while ( v20 != v8 );
        }
        goto LABEL_32;
      }
      if ( *((_QWORD *)&v73 + 1) < v14 )
      {
        v72 = (void *)qvector_reserve(&v72, v72, v8 + 1, 24);
        v5 = v73;
      }
      if ( v5 >= v14 )
      {
LABEL_32:
        *(_QWORD *)&v73 = v8 + 1;
      }
      else
      {
        v47 = 24 * v5;
        do
        {
          v48 = (char *)v72 + v47;
          v47 += 24;
          *(_QWORD *)v48 = 0;
          *(_OWORD *)(v48 + 8) = 0;
          v49 = v5++;
        }
        while ( v49 != v8 );
        *(_QWORD *)&v73 = v8 + 1;
      }
    }
  }
  sub_421D60((__int64 *)&v74, (__int64 *)&v70, "/");
  sub_421D60((__int64 *)&ptr, (__int64 *)&v72, "/");
  v21 = haystack;
  if ( v75 )
    v21 = (const char *)v74;
  v22 = **a1;
  v66 = 0;
  v65 = -1;
  dirtree_resolve_path(&v65, v22, v21);
  v69 = -1;
  v63 = v65;
  v23 = *a1;
  v64 = v66;
  dirtree_find_entry(&v69, v23, &v63);
  v24 = v69;
  rank = dirtree_get_rank(**a1, v69, &v63);
  v26 = haystack;
  if ( v77 )
    v26 = (const char *)ptr;
  v27 = **a1;
  v68 = 0;
  v67 = -1;
  dirtree_resolve_path(&v67, v27, v26);
  v63 = v67;
  v64 = v68;
  v28 = dirtree_get_rank(**a1, v24, &v63);
  if ( ((unsigned __int64)(v28 - rank) >> 63) + v28 - rank )
  {
    v29 = haystack;
    if ( v75 )
      v29 = (const char *)v74;
    dirtree_change_rank(**a1, v29);
  }
  if ( ptr )
  {
    v77 = 0;
    qfree(ptr);
  }
  if ( v74 )
  {
    v75 = 0;
    qfree(v74);
  }
  v30 = (char *)v72;
  if ( v72 )
  {
    v31 = v73;
    if ( (_QWORD)v73 )
    {
      v32 = 0;
      do
      {
        v33 = &v30[24 * v32];
        v34 = *(void **)v33;
        if ( *(_QWORD *)v33 )
        {
          *((_QWORD *)v33 + 1) = 0;
          qfree(v34);
          v30 = (char *)v72;
        }
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v73 = 0;
    qfree(v30);
  }
  v35 = (char *)v70;
  if ( v70 )
  {
    v36 = v71;
    if ( (_QWORD)v71 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39);
          v35 = (char *)v70;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v71 = 0;
    qfree(v35);
  }
  return v82 - __readfsqword(0x28u);
}
