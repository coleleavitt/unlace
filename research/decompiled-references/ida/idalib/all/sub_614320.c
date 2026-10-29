__int64 __fastcall sub_614320(__int64 *a1, void *a2, char a3, __int64 a4, __int64 *a5, double a6, double a7)
{
  __int64 v9; // rdi
  _QWORD *v10; // r15
  unsigned int v12; // ebp
  char *v13; // rax
  unsigned __int64 qword; // r15
  __int64 v15; // rax
  char *v17; // rbx
  int flags; // eax
  unsigned int v19; // edx
  bool v20; // zf
  char v21; // al
  unsigned __int64 v22; // rbx
  void *v23; // rbp
  size_t v24; // rbx
  size_t v25; // rbx
  char *v26; // rbx
  void *v27; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // r15
  _QWORD *v30; // r12
  void *v31; // rdi
  void *v32; // rdi
  int v33; // ebx
  __int64 v34; // rbp
  char *v35; // rdi
  void *v36; // r12
  void *v37; // rbp
  char *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  __int64 v41; // rbp
  char *v42; // r12
  void *v43; // rax
  void *v44; // rax
  void *v45; // rax
  unsigned int v47; // [rsp+8h] [rbp-180h]
  size_t v48; // [rsp+10h] [rbp-178h]
  size_t v49; // [rsp+10h] [rbp-178h]
  void *v50; // [rsp+18h] [rbp-170h]
  size_t na; // [rsp+28h] [rbp-160h]
  size_t n; // [rsp+28h] [rbp-160h]
  char *endptr; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v54[2]; // [rsp+40h] [rbp-148h] BYREF
  void *v55; // [rsp+50h] [rbp-138h]
  size_t v56[2]; // [rsp+58h] [rbp-130h]
  void *v57; // [rsp+68h] [rbp-120h]
  size_t v58[2]; // [rsp+70h] [rbp-118h]
  __int64 v59; // [rsp+80h] [rbp-108h] BYREF
  __int64 v60; // [rsp+88h] [rbp-100h]
  _QWORD v61[2]; // [rsp+90h] [rbp-F8h] BYREF
  void *src; // [rsp+A0h] [rbp-E8h]
  __int128 v63; // [rsp+A8h] [rbp-E0h]
  void *ptr; // [rsp+B8h] [rbp-D0h]
  __int128 v65; // [rsp+C0h] [rbp-C8h]
  __int64 v66; // [rsp+D0h] [rbp-B8h] BYREF
  int v67; // [rsp+D8h] [rbp-B0h]
  void *v68[3]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-90h]
  __int64 v70; // [rsp+100h] [rbp-88h] BYREF
  _QWORD v71[3]; // [rsp+108h] [rbp-80h] BYREF
  void *v72; // [rsp+120h] [rbp-68h]
  __int128 v73; // [rsp+128h] [rbp-60h]
  char v74; // [rsp+138h] [rbp-50h]
  int v75[2]; // [rsp+148h] [rbp-40h]

  v9 = *a1;
  v10 = *(_QWORD **)(v9 + 1672);
  *(_QWORD *)v75 = __readfsqword(0x28u);
  if ( (unsigned int)sub_60AA20(v9, a2, (const char *)a4, a5, 0) )
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
          memset(v68, 0, sizeof(v68));
          v71[2] = v19;
          v21 = 80;
          v69 = 0;
          v70 = 0;
          v71[0] = 0;
          v71[1] = 0;
          v72 = nullptr;
          v73 = 0;
          if ( v20 )
            v21 = 112;
          v47 = v19;
          v74 = v21;
          v61[0] = 33 - (unsigned __int8)getinf_flag(3, 4);
          copy_tinfo_t(&v70);
          clear_tinfo_t(v61);
          v22 = (unsigned __int64)v68[1];
          v23 = (void *)(v47 >> 2);
          if ( v23 != v68[1] )
          {
            v60 = 0;
            LODWORD(v54[0]) = 0;
            v54[1] = 0;
            v55 = nullptr;
            v57 = nullptr;
            v59 = 0;
            *(_OWORD *)v56 = 0;
            *(_OWORD *)v58 = 0;
            if ( v23 < v68[1] )
            {
              v29 = v47 >> 2;
              do
              {
                v30 = (char *)v68[0] + 80 * v29;
                clear_tinfo_t(v30 + 8);
                v31 = (void *)v30[5];
                if ( v31 )
                {
                  v30[6] = 0;
                  qfree(v31);
                }
                v32 = (void *)v30[2];
                if ( v32 )
                {
                  v30[3] = 0;
                  qfree(v32);
                }
                ++v29;
                cleanup_argloc(v30);
              }
              while ( v29 < v22 );
              v68[1] = (void *)(v47 >> 2);
            }
            else if ( v54 < v68[0] || v54 >= (_QWORD *)((char *)v68[0] + 80 * (__int64)v68[2]) )
            {
              if ( v68[2] < v23 )
              {
                v68[0] = (void *)qvector_reserve(v68, v68[0], v23, 80);
                v22 = (unsigned __int64)v68[1];
              }
              for ( ; v22 < (unsigned __int64)v23; *((_DWORD *)v42 + 18) = v60 )
              {
                v42 = (char *)v68[0] + 80 * v22;
                *(_DWORD *)v42 = 0;
                copy_argloc(v42, v54);
                *((_QWORD *)v42 + 2) = 0;
                *(_OWORD *)(v42 + 24) = 0;
                if ( v56[0] )
                {
                  v48 = v56[0];
                  v43 = (void *)qalloc_or_throw(v56[0]);
                  *((_QWORD *)v42 + 2) = v43;
                  *((_QWORD *)v42 + 4) = v48;
                  memcpy(v43, v55, v48);
                  *((_QWORD *)v42 + 3) = v48;
                }
                *((_QWORD *)v42 + 5) = 0;
                *((_OWORD *)v42 + 3) = 0;
                if ( v58[0] )
                {
                  v49 = v58[0];
                  v44 = (void *)qalloc_or_throw(v58[0]);
                  *((_QWORD *)v42 + 5) = v44;
                  *((_QWORD *)v42 + 7) = v49;
                  memcpy(v44, v57, v49);
                  *((_QWORD *)v42 + 6) = v49;
                }
                *((_QWORD *)v42 + 8) = 0;
                copy_tinfo_t(v42 + 64);
                ++v22;
              }
              v68[1] = (void *)(v47 >> 2);
            }
            else
            {
              LODWORD(v61[0]) = 0;
              copy_argloc(v61, v54);
              v24 = v56[0];
              src = nullptr;
              v63 = 0;
              if ( v56[0] )
              {
                src = (void *)qalloc_or_throw(v56[0]);
                *((_QWORD *)&v63 + 1) = v24;
                memcpy(src, v55, v24);
                *(_QWORD *)&v63 = v24;
              }
              v25 = v58[0];
              ptr = nullptr;
              v65 = 0;
              if ( v58[0] )
              {
                ptr = (void *)qalloc_or_throw(v58[0]);
                *((_QWORD *)&v65 + 1) = v25;
                memcpy(ptr, v57, v25);
                *(_QWORD *)&v65 = v25;
              }
              v66 = 0;
              copy_tinfo_t(&v66);
              v67 = v60;
              if ( v68[2] < v23 )
                v68[0] = (void *)qvector_reserve(v68, v68[0], v23, 80);
              v50 = v68[1];
              if ( v68[1] < v23 )
              {
                do
                {
                  v26 = (char *)v68[0] + 80 * (_QWORD)v50;
                  *(_DWORD *)v26 = 0;
                  copy_argloc(v26, v61);
                  *((_QWORD *)v26 + 2) = 0;
                  *(_OWORD *)(v26 + 24) = 0;
                  if ( (_QWORD)v63 )
                  {
                    na = v63;
                    v27 = (void *)qalloc_or_throw(v63);
                    *((_QWORD *)v26 + 2) = v27;
                    *((_QWORD *)v26 + 4) = na;
                    memcpy(v27, src, na);
                    *((_QWORD *)v26 + 3) = na;
                  }
                  *((_QWORD *)v26 + 5) = 0;
                  *((_OWORD *)v26 + 3) = 0;
                  if ( (_QWORD)v65 )
                  {
                    n = v65;
                    v45 = (void *)qalloc_or_throw(v65);
                    *((_QWORD *)v26 + 5) = v45;
                    *((_QWORD *)v26 + 7) = n;
                    memcpy(v45, ptr, n);
                    *((_QWORD *)v26 + 6) = n;
                  }
                  *((_QWORD *)v26 + 8) = 0;
                  copy_tinfo_t(v26 + 64);
                  v50 = (char *)v50 + 1;
                  *((_DWORD *)v26 + 18) = v67;
                }
                while ( v23 != v50 );
              }
              v68[1] = (void *)(v47 >> 2);
              clear_tinfo_t(&v66);
              if ( ptr )
              {
                *(_QWORD *)&v65 = 0;
                qfree(ptr);
              }
              if ( src )
              {
                *(_QWORD *)&v63 = 0;
                qfree(src);
              }
              cleanup_argloc(v61);
            }
            clear_tinfo_t(&v59);
            if ( v57 )
            {
              v58[0] = 0;
              qfree(v57);
            }
            if ( v55 )
            {
              v56[0] = 0;
              qfree(v55);
            }
            cleanup_argloc(v54);
            LODWORD(v22) = v68[1];
          }
          v33 = v22 - 1;
          if ( v33 >= 0 )
          {
            v34 = 80LL * (unsigned int)v33;
            do
            {
              copy_tinfo_t((char *)v68[0] + v34 + 64);
              --v33;
              v34 -= 80;
            }
            while ( v33 != -1 );
          }
          create_tinfo(a5, 12, 12, v68);
          if ( v72 )
          {
            *(_QWORD *)&v73 = 0;
            qfree(v72);
          }
          cleanup_argloc(v71);
          clear_tinfo_t(&v70);
          v35 = (char *)v68[0];
          if ( v68[0] )
          {
            v36 = v68[1];
            if ( v68[1] )
            {
              v37 = nullptr;
              do
              {
                v38 = &v35[80 * (_QWORD)v37];
                clear_tinfo_t(v38 + 64);
                v39 = *((void **)v38 + 5);
                if ( v39 )
                {
                  *((_QWORD *)v38 + 6) = 0;
                  qfree(v39);
                }
                v40 = *((void **)v38 + 2);
                if ( v40 )
                {
                  *((_QWORD *)v38 + 3) = 0;
                  qfree(v40);
                }
                v37 = (char *)v37 + 1;
                cleanup_argloc(v38);
                v35 = (char *)v68[0];
              }
              while ( v36 != v37 );
            }
            v68[1] = nullptr;
            qfree(v35);
          }
          return 2;
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_631AD0(*v10, 9) )
    return v12;
  if ( a3 == 10 )
  {
    v17 = (char *)(unsigned int)sub_3BEEF0(v10, (unsigned __int64)a2);
    if ( sub_3BD540((__int64)v10, (__int64)a2) )
    {
      flags = get_flags_ex(v17, 4);
      if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      {
        v41 = *a1;
        if ( (unsigned __int8)get_tinfo(a5, v17) || (unsigned int)sub_6119A0(v41, v17, nullptr, a5, 0) )
        {
          v54[0] = 0;
          v61[0] = 0;
          *(_OWORD *)v68 = 0;
          copy_tinfo_t(&v68[1]);
          v68[2] = nullptr;
          copy_tinfo_t(&v68[2]);
          LODWORD(v69) = 0;
          WORD2(v69) = 0;
          clear_tinfo_t(v61);
          clear_tinfo_t(v54);
          copy_tinfo_t(v68);
          create_tinfo(a5, 10, 10, v68);
          clear_tinfo_t(&v68[2]);
          clear_tinfo_t(&v68[1]);
          clear_tinfo_t(v68);
          return 2;
        }
      }
    }
    else
    {
      v28 = sub_505D70((__int64)(v10 + 203), (unsigned __int64)a2 - 1);
      if ( !v28 || (void *)v28[1] != a2 )
        return v12;
    }
    get_stock_tinfo(a5, 7);
    return 2;
  }
  if ( (unsigned __int8)getinf(9) == 8 )
    qword = get_qword(a2);
  else
    qword = (unsigned int)get_dword(a2);
  if ( !qword )
    return v12;
  if ( *(_QWORD *)(*a1 + 1504) == qword )
    return v12;
  v15 = get_flags_ex(a2, 4);
  if ( !a5 || (v15 & 0x600) != 0x400 )
    return v12;
  return sub_614250(a1, a2, v15, qword, (const char *)a4, a5, a6, a7);
}
