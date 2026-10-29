unsigned __int64 __fastcall sub_6A25A0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  unsigned int i; // eax
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r12
  const char *v8; // rsi
  __int64 v9; // rdi
  void *v10; // rdi
  int v11; // ebx
  const char *v12; // rax
  const char *v13; // r15
  __int64 v14; // rdx
  char *v15; // rsi
  char *v16; // rax
  __int64 v17; // r13
  __int64 v18; // r12
  unsigned int v19; // ebx
  char *v20; // rdx
  char *v21; // rax
  unsigned int v22; // r12d
  const char *v23; // rax
  const char *v24; // r13
  size_t v25; // rax
  size_t v26; // r14
  size_t v27; // rbx
  char *v28; // rdx
  const char *v29; // r15
  char *v30; // rdi
  __int64 v31; // r13
  __int64 v32; // rbx
  char *v33; // r15
  void *v34; // rdi
  void *v35; // rdi
  _QWORD *v36; // rbx
  void *v37; // rdi
  char *v38; // rdx
  __int64 v39; // r13
  __int64 v40; // rbx
  char *v41; // rax
  void *v42; // rdi
  char *v43; // rdi
  __int64 v44; // rbx
  __int64 v45; // r15
  __int64 v46; // r14
  char *v47; // r13
  void *v48; // rdi
  void *v49; // rdi
  _QWORD *std_dirtree; // rax
  char *v51; // rdx
  __int64 v52; // rbp
  __int64 v53; // rbx
  char *v54; // rax
  void *v55; // rdi
  __int64 v57; // [rsp+8h] [rbp-190h]
  void *ptr; // [rsp+10h] [rbp-188h] BYREF
  __int128 v59; // [rsp+18h] [rbp-180h]
  void *v60; // [rsp+30h] [rbp-168h] BYREF
  __int128 v61; // [rsp+38h] [rbp-160h]
  void *v62; // [rsp+50h] [rbp-148h] BYREF
  __int128 v63; // [rsp+58h] [rbp-140h]
  void *v64; // [rsp+70h] [rbp-128h] BYREF
  __int128 v65; // [rsp+78h] [rbp-120h]
  void *v66; // [rsp+88h] [rbp-110h]
  __int128 v67; // [rsp+90h] [rbp-108h]
  int v68; // [rsp+A0h] [rbp-F8h]
  char v69; // [rsp+A4h] [rbp-F4h]
  void *v70; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+B8h] [rbp-E0h]
  int v72; // [rsp+C8h] [rbp-D0h]
  __int16 v73; // [rsp+CCh] [rbp-CCh]
  char v74; // [rsp+CEh] [rbp-CAh]
  void *v75; // [rsp+D0h] [rbp-C8h]
  __int128 v76; // [rsp+D8h] [rbp-C0h]
  void *s; // [rsp+E8h] [rbp-B0h]
  __int64 v78; // [rsp+F0h] [rbp-A8h]
  void *v79; // [rsp+F8h] [rbp-A0h]
  __int64 v80; // [rsp+100h] [rbp-98h]
  int v81; // [rsp+108h] [rbp-90h]
  __int64 v82; // [rsp+110h] [rbp-88h]
  void *v83[2]; // [rsp+118h] [rbp-80h] BYREF
  __int128 v84; // [rsp+128h] [rbp-70h]
  void *v85; // [rsp+138h] [rbp-60h]
  __int128 v86; // [rsp+140h] [rbp-58h]
  unsigned __int64 v87; // [rsp+158h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  ptr = nullptr;
  v2 = *(_QWORD *)(*a1 + 1672);
  *(_BYTE *)(v2 + 8) = 1;
  v57 = v2;
  v59 = 0;
  sub_6A1BD0((__int64)a1, (__int64 *)&ptr);
  v3 = sub_6A9610(*(_QWORD *)(*a1 + 1680));
  v60 = nullptr;
  v61 = 0;
  for ( i = sub_699FB0((__int64)a1, 0); ; i = sub_699FB0((__int64)a1, v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v12 = (const char *)sub_6309B0((__int64)a1, a1[1], i, nullptr);
    v13 = v12;
    v70 = nullptr;
    v71 = 0;
    if ( v12 )
    {
      v5 = strlen(v12);
      v6 = v5 + 1;
      v7 = v5;
      v70 = (void *)qvector_reserve(&v70, 0, v5 + 1, 1);
      *(_QWORD *)&v71 = v6;
      memmove(v70, v13, v7);
      *((_BYTE *)v70 + v7) = 0;
      if ( !v3 )
        goto LABEL_14;
      v8 = haystack;
      v9 = *(_QWORD *)(*a1 + 1680);
      if ( (_QWORD)v71 )
        v8 = (const char *)v70;
    }
    else
    {
      if ( !v3 )
        goto LABEL_14;
      v8 = haystack;
      v9 = *(_QWORD *)(*a1 + 1680);
    }
    if ( (unsigned int)sub_6A9640(v9, v8) != -1 )
    {
      v10 = v70;
      goto LABEL_7;
    }
LABEL_14:
    v14 = v61;
    v15 = (char *)v60;
    if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
    {
      v60 = (void *)qvector_reserve(&v60, v60, v61 + 1, 24);
      v14 = v61;
      v15 = (char *)v60;
    }
    v16 = &v15[24 * v14];
    *(_QWORD *)v16 = 0;
    *(_OWORD *)(v16 + 8) = 0;
    *(_QWORD *)&v61 = v61 + 1;
    v10 = *(void **)v16;
    *(_QWORD *)v16 = v70;
    *(_OWORD *)(v16 + 8) = v71;
    v70 = v10;
    *((_QWORD *)&v71 + 1) = 0;
LABEL_7:
    if ( v10 )
    {
      *(_QWORD *)&v71 = 0;
      qfree(v10);
    }
  }
  v17 = sub_6A9610(*(_QWORD *)(*a1 + 1680));
  v18 = 0;
  if ( v17 )
  {
    do
    {
      v19 = sub_6A9730(*(_QWORD *)(*a1 + 1680), v18);
      if ( v19 != -1 )
      {
        v20 = (char *)ptr;
        v21 = (char *)ptr + 4 * v59;
        if ( ptr == v21 )
          goto LABEL_82;
        while ( v19 != *(_DWORD *)v20 )
        {
          v20 += 4;
          if ( v21 == v20 )
            goto LABEL_82;
        }
        if ( v21 == v20 )
LABEL_82:
          sub_5F3EC0(*(__int64 **)(*a1 + 1680), v19, nullptr);
        sub_69B340(a1, v19);
      }
      ++v18;
    }
    while ( v17 != v18 );
  }
  v22 = sub_699FB0((__int64)a1, 0);
  if ( v22 )
  {
    while ( 2 )
    {
      v23 = (const char *)sub_6309B0((__int64)a1, 0, v22, nullptr);
      v62 = nullptr;
      v24 = v23;
      v63 = 0;
      if ( v23 )
      {
        v25 = strlen(v23);
        v26 = v25 + 1;
        v27 = v25;
        v62 = (void *)qvector_reserve(&v62, 0, v25 + 1, 1);
        *(_QWORD *)&v63 = v26;
        memmove(v62, v24, v27);
        *((_BYTE *)v62 + v27) = 0;
        v64 = nullptr;
        v28 = (char *)v62;
        v66 = nullptr;
        v68 = 0;
        v69 = 0x80;
        v65 = 0;
        v67 = 0;
        if ( (_QWORD)v63 )
          goto LABEL_29;
      }
      else
      {
        v64 = nullptr;
        v66 = nullptr;
        v68 = 0;
        v69 = 0x80;
        v65 = 0;
        v67 = 0;
      }
      v28 = (char *)haystack;
LABEL_29:
      if ( (unsigned __int8)sub_69AFD0((__int64)a1, (__int64)&v64, v28) )
      {
        v29 = haystack;
        if ( (_QWORD)v63 )
          v29 = (const char *)v62;
        v73 = 0;
        v70 = nullptr;
        v72 = -1;
        v74 = 0;
        v75 = nullptr;
        s = v83;
        v78 = 1;
        v79 = nullptr;
        v80 = 0;
        v81 = 1065353216;
        v82 = 0;
        v85 = nullptr;
        v71 = 0;
        v76 = 0;
        *(_OWORD *)v83 = 0;
        v84 = 0;
        v86 = 0;
        sub_699100((__int64)&v70, a1, v29, (__int64 *)&v64, 0);
        sub_6999E0(a1, v29, (__int64)&v70);
        v30 = (char *)v85;
        if ( v85 )
        {
          v31 = v86;
          if ( (_QWORD)v86 )
          {
            v32 = 0;
            do
            {
              v33 = &v30[128 * v32];
              clear_tinfo_t(v33 + 64);
              v34 = *((void **)v33 + 5);
              if ( v34 )
              {
                *((_QWORD *)v33 + 6) = 0;
                qfree(v34);
              }
              v35 = *((void **)v33 + 2);
              if ( v35 )
              {
                *((_QWORD *)v33 + 3) = 0;
                qfree(v35);
              }
              ++v32;
              v30 = (char *)v85;
            }
            while ( v31 != v32 );
          }
          *(_QWORD *)&v86 = 0;
          qfree(v30);
        }
        if ( v83[1] )
        {
          *(_QWORD *)&v84 = 0;
          qfree(v83[1]);
        }
        v36 = v79;
        if ( v79 )
        {
          do
          {
            v37 = v36;
            v36 = (_QWORD *)*v36;
            operator delete(v37, 0x20u);
          }
          while ( v36 );
        }
        memset(s, 0, 8 * v78);
        v80 = 0;
        v79 = nullptr;
        if ( s != v83 )
          operator delete(s, 8 * v78);
        v38 = (char *)v75;
        if ( v75 )
        {
          v39 = v76;
          if ( (_QWORD)v76 )
          {
            v40 = 0;
            do
            {
              v41 = &v38[32 * v40];
              v42 = *(void **)v41;
              if ( *(_QWORD *)v41 )
              {
                *((_QWORD *)v41 + 1) = 0;
                qfree(v42);
                v38 = (char *)v75;
              }
              ++v40;
            }
            while ( v39 != v40 );
          }
          *(_QWORD *)&v76 = 0;
          qfree(v38);
        }
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree(v66);
      }
      v43 = (char *)v64;
      if ( v64 )
      {
        v44 = v65;
        if ( (_QWORD)v65 )
        {
          v45 = 0;
          v46 = 0;
          do
          {
            v47 = &v43[v45];
            v48 = *(void **)&v43[v45 + 24];
            if ( v48 )
            {
              *((_QWORD *)v47 + 4) = 0;
              qfree(v48);
            }
            v49 = *(void **)v47;
            if ( *(_QWORD *)v47 )
            {
              *((_QWORD *)v47 + 1) = 0;
              qfree(v49);
            }
            ++v46;
            v43 = (char *)v64;
            v45 += 56;
          }
          while ( v44 != v46 );
        }
        *(_QWORD *)&v65 = 0;
        qfree(v43);
      }
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree(v62);
      }
      v22 = sub_699FB0((__int64)a1, v22);
      if ( !v22 )
        break;
      continue;
    }
  }
  *(_BYTE *)(v57 + 9) = 1;
  sub_79BCF0((_DWORD)a1 + 2348);
  *((_DWORD *)a1 + 587) = -1;
  std_dirtree = (_QWORD *)get_std_dirtree(0);
  save_dirtree(*std_dirtree);
  v51 = (char *)v60;
  *(_BYTE *)(v57 + 8) = 0;
  if ( v51 )
  {
    v52 = v61;
    if ( (_QWORD)v61 )
    {
      v53 = 0;
      do
      {
        v54 = &v51[24 * v53];
        v55 = *(void **)v54;
        if ( *(_QWORD *)v54 )
        {
          *((_QWORD *)v54 + 1) = 0;
          qfree(v55);
          v51 = (char *)v60;
        }
        ++v53;
      }
      while ( v52 != v53 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v51);
  }
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    qfree(ptr);
  }
  return v87 - __readfsqword(0x28u);
}

