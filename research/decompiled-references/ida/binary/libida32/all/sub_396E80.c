unsigned __int64 __fastcall sub_396E80(_QWORD *a1)
{
  int user_idadir; // eax
  int v2; // r9d
  size_t v3; // rax
  size_t v4; // rbp
  char *file_ext; // rax
  __int64 extlang; // rax
  const char *v7; // rdi
  const char *v8; // rax
  const char *v9; // r15
  size_t v10; // rax
  size_t v11; // r8
  const char *v12; // rdi
  __int64 v13; // rbp
  const char *v14; // r15
  const char *v15; // rdx
  void *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // r13
  size_t v22; // r13
  char v23; // r13
  char v24; // r15
  __int64 v25; // rax
  __int64 v26; // rsi
  void *v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  void *v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rdx
  char *v33; // rdi
  __int64 v34; // r15
  __int64 v35; // r13
  char *v36; // r12
  void *v37; // rdi
  void *v38; // rdi
  void *v39; // rdi
  size_t v40; // r15
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // r9
  __int64 v46; // r15
  const void *v47; // rdx
  char *v48; // rcx
  const void *v49; // rdx
  void *v50; // rax
  void *v51; // rax
  const void **v52; // rcx
  void *v53; // rax
  void *v54; // rax
  char *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r12
  __int64 v58; // rbp
  char *v59; // rbx
  void *v60; // rdi
  void *v61; // rdi
  void *v63; // rdi
  size_t v64; // rdx
  char v65; // [rsp+0h] [rbp-1188h]
  __int64 v66; // [rsp+8h] [rbp-1180h]
  size_t v67; // [rsp+8h] [rbp-1180h]
  size_t v68; // [rsp+8h] [rbp-1180h]
  __int64 v69; // [rsp+10h] [rbp-1178h]
  __int64 v71; // [rsp+30h] [rbp-1158h]
  size_t v72; // [rsp+30h] [rbp-1158h]
  size_t na; // [rsp+38h] [rbp-1150h]
  size_t n; // [rsp+38h] [rbp-1150h]
  const void **v75; // [rsp+40h] [rbp-1148h]
  const void **v76; // [rsp+40h] [rbp-1148h]
  __int64 v77; // [rsp+48h] [rbp-1140h]
  __int64 v78; // [rsp+48h] [rbp-1140h]
  char *endptr; // [rsp+58h] [rbp-1130h] BYREF
  char *v80; // [rsp+60h] [rbp-1128h]
  __int128 v81; // [rsp+68h] [rbp-1120h]
  void *dest; // [rsp+80h] [rbp-1108h] BYREF
  size_t v83[2]; // [rsp+88h] [rbp-1100h]
  __int64 v84; // [rsp+98h] [rbp-10F0h]
  void *src; // [rsp+A0h] [rbp-10E8h] BYREF
  size_t v86[2]; // [rsp+A8h] [rbp-10E0h]
  void *v87; // [rsp+B8h] [rbp-10D0h]
  __int128 v88; // [rsp+C0h] [rbp-10C8h]
  __int16 v89; // [rsp+D0h] [rbp-10B8h]
  void *v90; // [rsp+E0h] [rbp-10A8h]
  __m128i v91; // [rsp+E8h] [rbp-10A0h] BYREF
  __int64 v92; // [rsp+F8h] [rbp-1090h]
  void *ptr; // [rsp+100h] [rbp-1088h]
  __m128i v94; // [rsp+108h] [rbp-1080h] BYREF
  __int64 v95; // [rsp+118h] [rbp-1070h]
  __m128i v96; // [rsp+120h] [rbp-1068h] BYREF
  __int16 v97; // [rsp+130h] [rbp-1058h]
  char v98[4104]; // [rsp+140h] [rbp-1048h] BYREF
  unsigned __int64 v99; // [rsp+1148h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath((int)v98, 4096, user_idadir, (int)"proccache32.lst", 0, v2, v65);
  v69 = fopenRT(v98);
  if ( v69 )
  {
    v80 = nullptr;
    v81 = 0;
LABEL_3:
    while ( qgetline() >= 0 )
    {
      if ( (unsigned __int64)v81 > 1 )
      {
        dest = nullptr;
        v84 = -1;
        src = nullptr;
        v87 = nullptr;
        v89 = 0;
        *(_OWORD *)v83 = 0;
        *(_OWORD *)v86 = 0;
        v88 = 0;
        qstrtok(v80, ":");
        if ( getsysfile(v98, 4096, v80, "procs") )
        {
          v3 = strlen(v98);
          v4 = v3;
          if ( v3 )
          {
            v39 = dest;
            v40 = v3 + 1;
            if ( v83[1] < v3 + 1 )
            {
              dest = (void *)qvector_reserve(&dest, dest, v3 + 1, 1);
              v39 = dest;
            }
            v83[0] = v40;
            memmove(v39, v98, v4);
            *((_BYTE *)dest + v4) = 0;
          }
          else
          {
            v83[0] = 0;
          }
          file_ext = (char *)get_file_ext(v98);
          extlang = find_extlang(file_ext);
          LOBYTE(v89) = extlang != 0;
          if ( extlang )
            --*(_DWORD *)(extlang + 12);
          v7 = (const char *)qstrtok(nullptr, ":");
          if ( v7 )
          {
            v84 = strtol(v7, &endptr, 10);
            if ( !*endptr )
            {
              v8 = (const char *)qstrtok(nullptr, ":");
              v9 = v8;
              if ( v8 )
              {
                v10 = strlen(v8);
                v11 = v10;
                if ( v10 )
                {
                  v63 = src;
                  v64 = v10 + 1;
                  if ( v86[1] < v10 + 1 )
                  {
                    v72 = v10;
                    v68 = v10 + 1;
                    src = (void *)qvector_reserve(&src, src, v64, 1);
                    v11 = v72;
                    v63 = src;
                    v64 = v68;
                  }
                  v86[0] = v64;
                  v67 = v11;
                  memmove(v63, v9, v11);
                  *((_BYTE *)src + v67) = 0;
                }
                else
                {
                  v86[0] = 0;
                }
                v12 = (const char *)qstrtok(nullptr, ":");
                if ( v12 )
                {
                  v13 = strtol(v12, &endptr, 10);
                  if ( v13 )
                  {
                    if ( !*endptr )
                    {
                      while ( 1 )
                      {
                        v14 = (const char *)qstrtok(nullptr, ":");
                        if ( !v14 )
                          break;
                        v15 = (const char *)qstrtok(nullptr, ":");
                        if ( !v15 )
                          break;
                        v16 = (void *)v14;
                        sub_3963A0(&dest, v14, v15);
                        if ( !--v13 )
                        {
                          v21 = v83[0];
                          v90 = nullptr;
                          v91 = 0;
                          if ( v83[0] )
                          {
                            v54 = (void *)qalloc_or_throw(v83[0], v14, v17, v18, v19, v20);
                            v16 = dest;
                            v90 = v54;
                            v91.m128i_i64[1] = v21;
                            memcpy(v54, dest, v21);
                            v91.m128i_i64[0] = v21;
                          }
                          v22 = v86[0];
                          ptr = nullptr;
                          v94 = 0;
                          v71 = v84;
                          v92 = v84;
                          if ( v86[0] )
                          {
                            v53 = (void *)qalloc_or_throw(v86[0], v16, v17, v18, v19, v20);
                            v16 = src;
                            ptr = v53;
                            v94.m128i_i64[1] = v22;
                            memcpy(v53, src, v22);
                            v94.m128i_i64[0] = v22;
                          }
                          v95 = 0;
                          v96 = 0;
                          v66 = v88;
                          if ( (_QWORD)v88 )
                          {
                            v41 = v88;
                            v42 = qalloc_or_throw(56 * v88, v16, v17, v18, v19, v20);
                            v96.m128i_i64[1] = v41;
                            v44 = v42;
                            v45 = 0;
                            v46 = 0;
                            v95 = v42;
                            do
                            {
                              v48 = (char *)v87;
                              *(_QWORD *)v44 = 0;
                              *(_OWORD *)(v44 + 8) = 0;
                              v52 = (const void **)&v48[v45];
                              v49 = v52[1];
                              if ( v49 )
                              {
                                v77 = v45;
                                v75 = v52;
                                na = (size_t)v52[1];
                                v50 = (void *)qalloc_or_throw(na, v16, v49, v52, v43, v45);
                                *(_QWORD *)v44 = v50;
                                *(_QWORD *)(v44 + 16) = na;
                                v16 = (void *)*v75;
                                memcpy(v50, *v75, na);
                                v45 = v77;
                                v52 = v75;
                                *(_QWORD *)(v44 + 8) = na;
                              }
                              *(_QWORD *)(v44 + 24) = 0;
                              *(_OWORD *)(v44 + 32) = 0;
                              v47 = v52[4];
                              if ( v47 )
                              {
                                v78 = v45;
                                v76 = v52;
                                n = (size_t)v52[4];
                                v51 = (void *)qalloc_or_throw(n, v16, v47, v52, v43, v45);
                                *(_QWORD *)(v44 + 24) = v51;
                                *(_QWORD *)(v44 + 40) = n;
                                v16 = (void *)v76[3];
                                memcpy(v51, v16, n);
                                v45 = v78;
                                v52 = v76;
                                *(_QWORD *)(v44 + 32) = n;
                              }
                              ++v46;
                              v45 += 56;
                              v44 += 56;
                              *(_BYTE *)(v44 - 8) = *((_BYTE *)v52 + 48);
                            }
                            while ( v66 != v46 );
                            v96.m128i_i64[0] = v66;
                          }
                          v97 = v89;
                          v23 = v89 & 1;
                          v24 = HIBYTE(v89) & 1;
                          v25 = a1[2];
                          v26 = a1[1];
                          if ( a1[3] < (unsigned __int64)(v25 + 1) )
                          {
                            v26 = qvector_reserve(a1 + 1, v26, v25 + 1, 88);
                            a1[1] = v26;
                            v25 = a1[2];
                          }
                          v27 = v90;
                          v28 = v26 + 88 * v25;
                          *(__m128i *)(v28 + 8) = _mm_loadu_si128(&v91);
                          v29 = _mm_loadu_si128(&v94);
                          *(_QWORD *)v28 = v27;
                          v30 = ptr;
                          *(__m128i *)(v28 + 40) = v29;
                          v31 = _mm_load_si128(&v96);
                          *(_QWORD *)(v28 + 32) = v30;
                          v32 = v95;
                          *(_QWORD *)(v28 + 24) = v71;
                          *(_QWORD *)(v28 + 56) = v32;
                          v33 = (char *)v87;
                          *(_BYTE *)(v28 + 80) = v23;
                          *(_BYTE *)(v28 + 81) = v24;
                          *(__m128i *)(v28 + 64) = v31;
                          ++a1[2];
                          if ( v33 )
                          {
                            v34 = v88;
                            if ( (_QWORD)v88 )
                            {
                              v35 = 0;
                              do
                              {
                                v36 = &v33[v35];
                                v37 = *(void **)&v33[v35 + 24];
                                if ( v37 )
                                {
                                  *((_QWORD *)v36 + 4) = 0;
                                  qfree(v37);
                                }
                                v38 = *(void **)v36;
                                if ( *(_QWORD *)v36 )
                                {
                                  *((_QWORD *)v36 + 1) = 0;
                                  qfree(v38);
                                }
                                ++v13;
                                v33 = (char *)v87;
                                v35 += 56;
                              }
                              while ( v34 != v13 );
                            }
                            *(_QWORD *)&v88 = 0;
                            qfree(v33);
                          }
                          if ( src )
                          {
                            v86[0] = 0;
                            qfree(src);
                          }
                          if ( dest )
                          {
                            v83[0] = 0;
                            qfree(dest);
                          }
                          goto LABEL_3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v55 = (char *)v87;
        if ( v87 )
        {
          v56 = v88;
          if ( (_QWORD)v88 )
          {
            v57 = 0;
            v58 = 0;
            do
            {
              v59 = &v55[v57];
              v60 = *(void **)&v55[v57 + 24];
              if ( v60 )
              {
                *((_QWORD *)v59 + 4) = 0;
                qfree(v60);
              }
              v61 = *(void **)v59;
              if ( *(_QWORD *)v59 )
              {
                *((_QWORD *)v59 + 1) = 0;
                qfree(v61);
              }
              ++v58;
              v55 = (char *)v87;
              v57 += 56;
            }
            while ( v56 != v58 );
          }
          *(_QWORD *)&v88 = 0;
          qfree(v55);
        }
        if ( src )
        {
          v86[0] = 0;
          qfree(src);
        }
        if ( dest )
        {
          v83[0] = 0;
          qfree(dest);
        }
        break;
      }
    }
    qfclose(v69);
    if ( v80 )
    {
      *(_QWORD *)&v81 = 0;
      qfree(v80);
    }
  }
  return v99 - __readfsqword(0x28u);
}

