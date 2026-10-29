__int64 __fastcall sub_5F8290(__int64 *a1, unsigned int a2, char a3, __int64 a4, __int64 *a5, double a6, double a7)
{
  __int64 v9; // rdi
  _QWORD *v10; // r15
  unsigned int v12; // ebp
  char *v13; // rax
  unsigned int qword; // r15d
  __int64 flags; // rdx
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // edx
  bool v20; // zf
  char v21; // al
  unsigned __int64 v22; // rbx
  void *v23; // rbp
  const char *v24; // rsi
  size_t v25; // rbx
  size_t v26; // rbx
  const char *v27; // rsi
  char *v28; // rbx
  void *v29; // rax
  unsigned int *v30; // rax
  unsigned __int64 v31; // r15
  _QWORD *v32; // r12
  void *v33; // rdi
  void *v34; // rdi
  int v35; // ebx
  __int64 v36; // rbp
  char *v37; // rdi
  void *v38; // r12
  void *v39; // rbp
  char *v40; // rbx
  void *v41; // rdi
  void *v42; // rdi
  __int64 v43; // rbp
  const char *v44; // rsi
  char *v45; // r12
  void *v46; // rax
  void *v47; // rax
  void *v48; // rax
  void *v49; // rax
  unsigned int v51; // [rsp+8h] [rbp-180h]
  size_t v52; // [rsp+10h] [rbp-178h]
  size_t v53; // [rsp+10h] [rbp-178h]
  void *v54; // [rsp+18h] [rbp-170h]
  size_t na; // [rsp+28h] [rbp-160h]
  size_t n; // [rsp+28h] [rbp-160h]
  char *endptr; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v58[2]; // [rsp+40h] [rbp-148h] BYREF
  void *v59; // [rsp+50h] [rbp-138h]
  size_t v60[2]; // [rsp+58h] [rbp-130h]
  void *v61; // [rsp+68h] [rbp-120h]
  size_t v62[2]; // [rsp+70h] [rbp-118h]
  __int64 v63; // [rsp+80h] [rbp-108h] BYREF
  __int64 v64; // [rsp+88h] [rbp-100h]
  char v65[16]; // [rsp+90h] [rbp-F8h] BYREF
  void *src; // [rsp+A0h] [rbp-E8h]
  __int128 v67; // [rsp+A8h] [rbp-E0h]
  void *ptr; // [rsp+B8h] [rbp-D0h]
  __int128 v69; // [rsp+C0h] [rbp-C8h]
  __int64 v70; // [rsp+D0h] [rbp-B8h] BYREF
  int v71; // [rsp+D8h] [rbp-B0h]
  void *v72[3]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+F8h] [rbp-90h]
  __int64 v74; // [rsp+100h] [rbp-88h] BYREF
  _QWORD v75[2]; // [rsp+108h] [rbp-80h] BYREF
  unsigned int v76; // [rsp+118h] [rbp-70h]
  void *v77; // [rsp+120h] [rbp-68h]
  __int128 v78; // [rsp+128h] [rbp-60h]
  char v79; // [rsp+138h] [rbp-50h]
  int v80[2]; // [rsp+148h] [rbp-40h]

  v9 = *a1;
  v10 = *(_QWORD **)(v9 + 1480);
  *(_QWORD *)v80 = __readfsqword(0x28u);
  if ( (unsigned int)sub_5EEAE0(v9, a2, (const char *)a4, a5, 0) )
    return 2;
  v12 = 0;
  if ( !strncmp((const char *)a4, "__imp_", 6u) )
  {
    v13 = strrchr((const char *)a4, 64);
    if ( v13 )
    {
      if ( v13[1] )
      {
        v19 = strtoul(v13 + 1, &endptr, 10);
        if ( !*endptr && (v19 & 3) == 0 )
        {
          v20 = *(_BYTE *)(a4 + 6) == 64;
          memset(v72, 0, sizeof(v72));
          v21 = 80;
          v73 = 0;
          v74 = 0;
          v75[0] = 0;
          v75[1] = 0;
          v77 = nullptr;
          v76 = v19;
          v78 = 0;
          if ( v20 )
            v21 = 112;
          v51 = v19;
          v79 = v21;
          *(_QWORD *)v65 = 33 - (unsigned __int8)getinf_flag(3, 4);
          copy_tinfo_t(&v74);
          clear_tinfo_t(v65);
          v22 = (unsigned __int64)v72[1];
          v23 = (void *)(v51 >> 2);
          if ( v23 != v72[1] )
          {
            v64 = 0;
            LODWORD(v58[0]) = 0;
            v58[1] = 0;
            v59 = nullptr;
            v61 = nullptr;
            v63 = 0;
            *(_OWORD *)v60 = 0;
            *(_OWORD *)v62 = 0;
            if ( v23 < v72[1] )
            {
              v31 = v51 >> 2;
              do
              {
                v32 = (char *)v72[0] + 80 * v31;
                clear_tinfo_t(v32 + 8);
                v33 = (void *)v32[5];
                if ( v33 )
                {
                  v32[6] = 0;
                  qfree(v33);
                }
                v34 = (void *)v32[2];
                if ( v34 )
                {
                  v32[3] = 0;
                  qfree(v34);
                }
                ++v31;
                cleanup_argloc(v32);
              }
              while ( v31 < v22 );
              v72[1] = (void *)(v51 >> 2);
            }
            else if ( v58 < v72[0] || v58 >= (_QWORD *)((char *)v72[0] + 80 * (__int64)v72[2]) )
            {
              if ( v72[2] < v23 )
              {
                v72[0] = (void *)qvector_reserve(v72, v72[0], v23, 80);
                v22 = (unsigned __int64)v72[1];
              }
              for ( ; v22 < (unsigned __int64)v23; *((_DWORD *)v45 + 18) = v64 )
              {
                v44 = (const char *)v58;
                v45 = (char *)v72[0] + 80 * v22;
                *(_DWORD *)v45 = 0;
                copy_argloc(v45, v58);
                *((_QWORD *)v45 + 2) = 0;
                *(_OWORD *)(v45 + 24) = 0;
                if ( v60[0] )
                {
                  v52 = v60[0];
                  v46 = (void *)qalloc_or_throw(v60[0], (const char *)v58);
                  *((_QWORD *)v45 + 2) = v46;
                  *((_QWORD *)v45 + 4) = v52;
                  v44 = (const char *)v59;
                  memcpy(v46, v59, v52);
                  *((_QWORD *)v45 + 3) = v52;
                }
                *((_QWORD *)v45 + 5) = 0;
                *((_OWORD *)v45 + 3) = 0;
                if ( v62[0] )
                {
                  v53 = v62[0];
                  v47 = (void *)qalloc_or_throw(v62[0], v44);
                  *((_QWORD *)v45 + 5) = v47;
                  *((_QWORD *)v45 + 7) = v53;
                  memcpy(v47, v61, v53);
                  *((_QWORD *)v45 + 6) = v53;
                }
                *((_QWORD *)v45 + 8) = 0;
                copy_tinfo_t(v45 + 64);
                ++v22;
              }
              v72[1] = (void *)(v51 >> 2);
            }
            else
            {
              v24 = (const char *)v58;
              *(_DWORD *)v65 = 0;
              copy_argloc(v65, v58);
              v25 = v60[0];
              src = nullptr;
              v67 = 0;
              if ( v60[0] )
              {
                v49 = (void *)qalloc_or_throw(v60[0], (const char *)v58);
                v24 = (const char *)v59;
                src = v49;
                *((_QWORD *)&v67 + 1) = v25;
                memcpy(v49, v59, v25);
                *(_QWORD *)&v67 = v25;
              }
              v26 = v62[0];
              ptr = nullptr;
              v69 = 0;
              if ( v62[0] )
              {
                ptr = (void *)qalloc_or_throw(v62[0], v24);
                *((_QWORD *)&v69 + 1) = v26;
                memcpy(ptr, v61, v26);
                *(_QWORD *)&v69 = v26;
              }
              v70 = 0;
              copy_tinfo_t(&v70);
              v71 = v64;
              if ( v72[2] < v23 )
                v72[0] = (void *)qvector_reserve(v72, v72[0], v23, 80);
              v54 = v72[1];
              if ( v72[1] < v23 )
              {
                do
                {
                  v27 = v65;
                  v28 = (char *)v72[0] + 80 * (_QWORD)v54;
                  *(_DWORD *)v28 = 0;
                  copy_argloc(v28, v65);
                  *((_QWORD *)v28 + 2) = 0;
                  *(_OWORD *)(v28 + 24) = 0;
                  if ( (_QWORD)v67 )
                  {
                    na = v67;
                    v29 = (void *)qalloc_or_throw(v67, v65);
                    *((_QWORD *)v28 + 2) = v29;
                    *((_QWORD *)v28 + 4) = na;
                    v27 = (const char *)src;
                    memcpy(v29, src, na);
                    *((_QWORD *)v28 + 3) = na;
                  }
                  *((_QWORD *)v28 + 5) = 0;
                  *((_OWORD *)v28 + 3) = 0;
                  if ( (_QWORD)v69 )
                  {
                    n = v69;
                    v48 = (void *)qalloc_or_throw(v69, v27);
                    *((_QWORD *)v28 + 5) = v48;
                    *((_QWORD *)v28 + 7) = n;
                    memcpy(v48, ptr, n);
                    *((_QWORD *)v28 + 6) = n;
                  }
                  *((_QWORD *)v28 + 8) = 0;
                  copy_tinfo_t(v28 + 64);
                  v54 = (char *)v54 + 1;
                  *((_DWORD *)v28 + 18) = v71;
                }
                while ( v23 != v54 );
              }
              v72[1] = (void *)(v51 >> 2);
              clear_tinfo_t(&v70);
              if ( ptr )
              {
                *(_QWORD *)&v69 = 0;
                qfree(ptr);
              }
              if ( src )
              {
                *(_QWORD *)&v67 = 0;
                qfree(src);
              }
              cleanup_argloc(v65);
            }
            clear_tinfo_t(&v63);
            if ( v61 )
            {
              v62[0] = 0;
              qfree(v61);
            }
            if ( v59 )
            {
              v60[0] = 0;
              qfree(v59);
            }
            cleanup_argloc(v58);
            LODWORD(v22) = v72[1];
          }
          v35 = v22 - 1;
          if ( v35 >= 0 )
          {
            v36 = 80LL * (unsigned int)v35;
            do
            {
              copy_tinfo_t((char *)v72[0] + v36 + 64);
              --v35;
              v36 -= 80;
            }
            while ( v35 != -1 );
          }
          create_tinfo(a5, 12, 12, v72);
          if ( v77 )
          {
            *(_QWORD *)&v78 = 0;
            qfree(v77);
          }
          cleanup_argloc(v75);
          clear_tinfo_t(&v74);
          v37 = (char *)v72[0];
          if ( v72[0] )
          {
            v38 = v72[1];
            if ( v72[1] )
            {
              v39 = nullptr;
              do
              {
                v40 = &v37[80 * (_QWORD)v39];
                clear_tinfo_t(v40 + 64);
                v41 = *((void **)v40 + 5);
                if ( v41 )
                {
                  *((_QWORD *)v40 + 6) = 0;
                  qfree(v41);
                }
                v42 = *((void **)v40 + 2);
                if ( v42 )
                {
                  *((_QWORD *)v40 + 3) = 0;
                  qfree(v42);
                }
                v39 = (char *)v39 + 1;
                cleanup_argloc(v40);
                v37 = (char *)v72[0];
              }
              while ( v38 != v39 );
            }
            v72[1] = nullptr;
            qfree(v37);
          }
          return 2;
        }
      }
    }
  }
  if ( (unsigned __int8)sub_614FB0(*v10, 9) )
  {
    if ( a3 != 10 )
    {
      if ( (unsigned __int8)getinf(9) == 8 )
        qword = get_qword(a2);
      else
        qword = get_dword(a2);
      if ( qword && *(_DWORD *)(*a1 + 1324) != qword )
      {
        flags = get_flags_ex(a2, 4);
        return sub_5F8190(a1, a2, flags, qword, (const char *)a4, a5, a6, a7);
      }
      return v12;
    }
    v17 = sub_3BA060(v10, a2);
    if ( sub_3B8910((__int64)v10, a2) )
    {
      v18 = get_flags_ex(v17, 4);
      if ( (~(_WORD)v18 & 0x600) == 0 && (v18 & 0x10000000) != 0 && v17 != -1 )
      {
        v43 = *a1;
        if ( (unsigned __int8)get_tinfo(a5, v17) || (unsigned int)sub_5F5920(v43, v17, nullptr, a5, 0) )
        {
          v58[0] = 0;
          *(_QWORD *)v65 = 0;
          *(_OWORD *)v72 = 0;
          copy_tinfo_t(&v72[1]);
          v72[2] = nullptr;
          copy_tinfo_t(&v72[2]);
          LODWORD(v73) = 0;
          WORD2(v73) = 0;
          clear_tinfo_t(v65);
          clear_tinfo_t(v58);
          copy_tinfo_t(v72);
          create_tinfo(a5, 10, 10, v72);
          clear_tinfo_t(&v72[2]);
          clear_tinfo_t(&v72[1]);
          clear_tinfo_t(v72);
          return 2;
        }
      }
    }
    else
    {
      v30 = sub_4EE820((__int64)(v10 + 194), a2 - 1);
      if ( !v30 || v30[1] != a2 )
        return v12;
    }
    get_stock_tinfo(a5, 7);
    return 2;
  }
  return v12;
}

