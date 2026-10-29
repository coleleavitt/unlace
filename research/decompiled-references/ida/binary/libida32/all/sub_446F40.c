unsigned __int64 __fastcall sub_446F40(__int64 **a1, _QWORD *a2, _QWORD *a3)
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
  unsigned int v24; // r12d
  __int64 rank; // rbx
  const char *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  char *v29; // r12
  __int64 v30; // rbp
  __int64 v31; // rbx
  char *v32; // rax
  void *v33; // rdi
  char *v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  char *v37; // rax
  void *v38; // rdi
  __int64 v40; // rbp
  char *v41; // rax
  void *v42; // rdi
  unsigned __int64 v43; // rbx
  char *v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  char *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  char *v50; // rdx
  __int64 v51; // rdx
  __int64 i; // rbx
  char *v53; // rax
  void *v54; // rdi
  char *v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rbx
  char *v58; // rax
  void *v59; // rdi
  char *v60; // [rsp+0h] [rbp-138h]
  int v62; // [rsp+21h] [rbp-117h] BYREF
  char v63; // [rsp+25h] [rbp-113h]
  int v64; // [rsp+26h] [rbp-112h] BYREF
  char v65; // [rsp+2Ah] [rbp-10Eh]
  int v66; // [rsp+2Bh] [rbp-10Dh] BYREF
  char v67; // [rsp+2Fh] [rbp-109h]
  _QWORD v68[2]; // [rsp+30h] [rbp-108h] BYREF
  void *v69; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v70; // [rsp+48h] [rbp-F0h]
  void *v71; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v72; // [rsp+68h] [rbp-D0h]
  void *v73; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v74; // [rsp+88h] [rbp-B0h]
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-90h]
  __int64 v77; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v78; // [rsp+C8h] [rbp-70h]
  __int64 v79; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v80; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+F8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v69 = nullptr;
  v70 = 0;
  sub_4431C0(a2, (__int64 *)&v69, "/", 0);
  v4 = v70;
  v71 = nullptr;
  v72 = 0;
  sub_4431C0(a3, (__int64 *)&v71, "/", 0);
  v5 = v72;
  v6 = (char *)v71;
  if ( (unsigned __int64)v72 <= v4 )
    v4 = v72;
  if ( !v4 )
    goto LABEL_81;
  v7 = (char *)v71 + 8;
  v8 = 0;
  v60 = (char *)v69;
  v9 = (__int64 *)((char *)v69 + 8);
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
      goto LABEL_81;
  }
  if ( v4 == v8 )
  {
LABEL_81:
    if ( v6 )
    {
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v53 = &v6[24 * i];
          v54 = *(void **)v53;
          if ( *(_QWORD *)v53 )
          {
            *((_QWORD *)v53 + 1) = 0;
            qfree(v54);
            v6 = (char *)v71;
          }
        }
      }
      *(_QWORD *)&v72 = 0;
      qfree(v6);
    }
    v55 = (char *)v69;
    if ( v69 )
    {
      v56 = v70;
      if ( (_QWORD)v70 )
      {
        v57 = 0;
        do
        {
          v58 = &v55[24 * v57];
          v59 = *(void **)v58;
          if ( *(_QWORD *)v58 )
          {
            *((_QWORD *)v58 + 1) = 0;
            qfree(v59);
            v55 = (char *)v69;
          }
          ++v57;
        }
        while ( v56 != v57 );
      }
      *(_QWORD *)&v70 = 0;
      qfree(v55);
    }
    return v81 - __readfsqword(0x28u);
  }
  v13 = v70;
  v14 = v8 + 1;
  if ( v8 + 1 != (_QWORD)v70 )
  {
    v77 = 0;
    v78 = 0;
    if ( v8 + 1 < (unsigned __int64)v70 )
    {
      v40 = v8 + 1;
      while ( 1 )
      {
        v41 = &v60[24 * v40];
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42);
        }
        if ( ++v40 >= v13 )
          break;
        v60 = (char *)v69;
      }
      *(_QWORD *)&v70 = v8 + 1;
      v5 = v72;
    }
    else
    {
      if ( &v77 >= (__int64 *)v60 && &v77 < (__int64 *)&v60[24 * *((_QWORD *)&v70 + 1)] )
      {
        if ( *((_QWORD *)&v70 + 1) < v14 )
        {
          v69 = (void *)qvector_reserve(&v69, v60, v8 + 1, 24);
          v13 = v70;
        }
        if ( v13 < v14 )
        {
          v15 = 24 * v13;
          do
          {
            v16 = (char *)v69 + v15;
            v15 += 24;
            *(_QWORD *)v16 = 0;
            *(_OWORD *)(v16 + 8) = 0;
            v17 = v13++;
          }
          while ( v17 != v8 );
        }
        goto LABEL_22;
      }
      if ( *((_QWORD *)&v70 + 1) < v14 )
      {
        v69 = (void *)qvector_reserve(&v69, v60, v8 + 1, 24);
        v13 = v70;
      }
      if ( v13 >= v14 )
      {
LABEL_22:
        *(_QWORD *)&v70 = v8 + 1;
        v5 = v72;
      }
      else
      {
        v49 = 24 * v13;
        do
        {
          v50 = (char *)v69 + v49;
          v49 += 24;
          *(_QWORD *)v50 = 0;
          *(_OWORD *)(v50 + 8) = 0;
          v51 = v13++;
        }
        while ( v8 != v51 );
        *(_QWORD *)&v70 = v8 + 1;
        v5 = v72;
      }
    }
  }
  if ( v14 != v5 )
  {
    v79 = 0;
    v80 = 0;
    if ( v14 < v5 )
    {
      v43 = v8 + 1;
      do
      {
        v44 = (char *)v71 + 24 * v43;
        v45 = *(void **)v44;
        if ( *(_QWORD *)v44 )
        {
          *((_QWORD *)v44 + 1) = 0;
          qfree(v45);
        }
        ++v43;
      }
      while ( v43 < v5 );
      *(_QWORD *)&v72 = v8 + 1;
    }
    else
    {
      if ( &v79 >= v71 && &v79 < (__int64 *)((char *)v71 + 24 * *((_QWORD *)&v72 + 1)) )
      {
        if ( *((_QWORD *)&v72 + 1) < v14 )
        {
          v71 = (void *)qvector_reserve(&v71, v71, v8 + 1, 24);
          v5 = v72;
        }
        if ( v5 < v14 )
        {
          v18 = 24 * v5;
          do
          {
            v19 = (char *)v71 + v18;
            v18 += 24;
            *(_QWORD *)v19 = 0;
            *(_OWORD *)(v19 + 8) = 0;
            v20 = v5++;
          }
          while ( v20 != v8 );
        }
        goto LABEL_32;
      }
      if ( *((_QWORD *)&v72 + 1) < v14 )
      {
        v71 = (void *)qvector_reserve(&v71, v71, v8 + 1, 24);
        v5 = v72;
      }
      if ( v5 >= v14 )
      {
LABEL_32:
        *(_QWORD *)&v72 = v8 + 1;
      }
      else
      {
        v46 = 24 * v5;
        do
        {
          v47 = (char *)v71 + v46;
          v46 += 24;
          *(_QWORD *)v47 = 0;
          *(_OWORD *)(v47 + 8) = 0;
          v48 = v5++;
        }
        while ( v48 != v8 );
        *(_QWORD *)&v72 = v8 + 1;
      }
    }
  }
  sub_40E680((__int64 *)&v73, (__int64 *)&v69, "/");
  sub_40E680((__int64 *)&ptr, (__int64 *)&v71, "/");
  v21 = haystack;
  if ( v74 )
    v21 = (const char *)v73;
  v22 = **a1;
  v65 = 0;
  v64 = -1;
  dirtree_resolve_path(&v64, v22, v21);
  v68[1] = -1;
  v62 = v64;
  v23 = *a1;
  v63 = v65;
  v68[0] = 0xFFFFFFFFLL;
  dirtree_find_entry(v68, v23, &v62);
  v24 = v68[0];
  rank = dirtree_get_rank(**a1, LODWORD(v68[0]), &v62);
  v26 = haystack;
  if ( v76 )
    v26 = (const char *)ptr;
  v27 = **a1;
  v67 = 0;
  v66 = -1;
  dirtree_resolve_path(&v66, v27, v26);
  v62 = v66;
  v63 = v67;
  v28 = dirtree_get_rank(**a1, v24, &v62);
  if ( ((unsigned __int64)(v28 - rank) >> 63) + v28 - rank )
    dirtree_change_rank();
  if ( ptr )
  {
    v76 = 0;
    qfree(ptr);
  }
  if ( v73 )
  {
    v74 = 0;
    qfree(v73);
  }
  v29 = (char *)v71;
  if ( v71 )
  {
    v30 = v72;
    if ( (_QWORD)v72 )
    {
      v31 = 0;
      do
      {
        v32 = &v29[24 * v31];
        v33 = *(void **)v32;
        if ( *(_QWORD *)v32 )
        {
          *((_QWORD *)v32 + 1) = 0;
          qfree(v33);
          v29 = (char *)v71;
        }
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v72 = 0;
    qfree(v29);
  }
  v34 = (char *)v69;
  if ( v69 )
  {
    v35 = v70;
    if ( (_QWORD)v70 )
    {
      v36 = 0;
      do
      {
        v37 = &v34[24 * v36];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v34 = (char *)v69;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v34);
  }
  return v81 - __readfsqword(0x28u);
}

