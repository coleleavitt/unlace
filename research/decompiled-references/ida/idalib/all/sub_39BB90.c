unsigned __int64 __fastcall sub_39BB90(_QWORD *a1)
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
  size_t v16; // r13
  size_t v17; // r13
  char v18; // r13
  char v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  void *v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  void *v25; // rdx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  char *v28; // rdi
  __int64 v29; // r15
  __int64 v30; // r13
  char *v31; // r12
  void *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  size_t v35; // r15
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // r9
  __int64 v40; // r15
  char *v41; // rcx
  void *v42; // rax
  void *v43; // rax
  const void **v44; // rcx
  char *v45; // rdi
  __int64 v46; // r13
  __int64 v47; // r12
  __int64 v48; // rbp
  char *v49; // rbx
  void *v50; // rdi
  void *v51; // rdi
  void *v53; // rdi
  size_t v54; // rdx
  __int64 v55; // [rsp+8h] [rbp-1180h]
  size_t v56; // [rsp+8h] [rbp-1180h]
  size_t v57; // [rsp+8h] [rbp-1180h]
  __int64 v58; // [rsp+10h] [rbp-1178h]
  __int64 v60; // [rsp+30h] [rbp-1158h]
  size_t v61; // [rsp+30h] [rbp-1158h]
  size_t na; // [rsp+38h] [rbp-1150h]
  size_t n; // [rsp+38h] [rbp-1150h]
  const void **v64; // [rsp+40h] [rbp-1148h]
  const void **v65; // [rsp+40h] [rbp-1148h]
  __int64 v66; // [rsp+48h] [rbp-1140h]
  __int64 v67; // [rsp+48h] [rbp-1140h]
  char *endptr; // [rsp+58h] [rbp-1130h] BYREF
  char *v69; // [rsp+60h] [rbp-1128h] BYREF
  __int128 v70; // [rsp+68h] [rbp-1120h]
  void *dest; // [rsp+80h] [rbp-1108h] BYREF
  size_t v72[2]; // [rsp+88h] [rbp-1100h]
  __int64 v73; // [rsp+98h] [rbp-10F0h]
  void *src; // [rsp+A0h] [rbp-10E8h] BYREF
  size_t v75[2]; // [rsp+A8h] [rbp-10E0h]
  void *v76; // [rsp+B8h] [rbp-10D0h]
  __int128 v77; // [rsp+C0h] [rbp-10C8h]
  __int16 v78; // [rsp+D0h] [rbp-10B8h]
  void *v79; // [rsp+E0h] [rbp-10A8h]
  __m128i v80; // [rsp+E8h] [rbp-10A0h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-1090h]
  void *ptr; // [rsp+100h] [rbp-1088h]
  __m128i v83; // [rsp+108h] [rbp-1080h] BYREF
  __int64 v84; // [rsp+118h] [rbp-1070h]
  __m128i v85; // [rsp+120h] [rbp-1068h] BYREF
  __int16 v86; // [rsp+130h] [rbp-1058h]
  char v87[4104]; // [rsp+140h] [rbp-1048h] BYREF
  unsigned __int64 v88; // [rsp+1148h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  user_idadir = get_user_idadir();
  qmakepath((unsigned int)v87, 4096, user_idadir, (unsigned int)"proccache.lst", 0, v2);
  v58 = fopenRT(v87);
  if ( v58 )
  {
    v69 = nullptr;
    v70 = 0;
LABEL_3:
    while ( qgetline(&v69) >= 0 )
    {
      if ( (unsigned __int64)v70 > 1 )
      {
        dest = nullptr;
        v73 = -1;
        src = nullptr;
        v76 = nullptr;
        v78 = 0;
        *(_OWORD *)v72 = 0;
        *(_OWORD *)v75 = 0;
        v77 = 0;
        qstrtok(v69, ":");
        if ( getsysfile(v87, 4096, v69, "procs") )
        {
          v3 = strlen(v87);
          v4 = v3;
          if ( v3 )
          {
            v34 = dest;
            v35 = v3 + 1;
            if ( v72[1] < v3 + 1 )
            {
              dest = (void *)qvector_reserve(&dest, dest, v3 + 1, 1);
              v34 = dest;
            }
            v72[0] = v35;
            memmove(v34, v87, v4);
            *((_BYTE *)dest + v4) = 0;
          }
          else
          {
            v72[0] = 0;
          }
          file_ext = (char *)get_file_ext(v87);
          extlang = find_extlang(file_ext);
          LOBYTE(v78) = extlang != 0;
          if ( extlang )
            --*(_DWORD *)(extlang + 12);
          v7 = (const char *)qstrtok(nullptr, ":");
          if ( v7 )
          {
            v73 = strtol(v7, &endptr, 10);
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
                  v53 = src;
                  v54 = v10 + 1;
                  if ( v75[1] < v10 + 1 )
                  {
                    v61 = v10;
                    v57 = v10 + 1;
                    src = (void *)qvector_reserve(&src, src, v54, 1);
                    v11 = v61;
                    v53 = src;
                    v54 = v57;
                  }
                  v75[0] = v54;
                  v56 = v11;
                  memmove(v53, v9, v11);
                  *((_BYTE *)src + v56) = 0;
                }
                else
                {
                  v75[0] = 0;
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
                        sub_39B0B0(&dest, v14, v15);
                        if ( !--v13 )
                        {
                          v16 = v72[0];
                          v79 = nullptr;
                          v80 = 0;
                          if ( v72[0] )
                          {
                            v79 = (void *)qalloc_or_throw(v72[0]);
                            v80.m128i_i64[1] = v16;
                            memcpy(v79, dest, v16);
                            v80.m128i_i64[0] = v16;
                          }
                          v17 = v75[0];
                          ptr = nullptr;
                          v83 = 0;
                          v60 = v73;
                          v81 = v73;
                          if ( v75[0] )
                          {
                            ptr = (void *)qalloc_or_throw(v75[0]);
                            v83.m128i_i64[1] = v17;
                            memcpy(ptr, src, v17);
                            v83.m128i_i64[0] = v17;
                          }
                          v84 = 0;
                          v85 = 0;
                          v55 = v77;
                          if ( (_QWORD)v77 )
                          {
                            v36 = v77;
                            v37 = qalloc_or_throw(56 * v77);
                            v85.m128i_i64[1] = v36;
                            v38 = v37;
                            v39 = 0;
                            v40 = 0;
                            v84 = v37;
                            do
                            {
                              v41 = (char *)v76;
                              *(_QWORD *)v38 = 0;
                              *(_OWORD *)(v38 + 8) = 0;
                              v44 = (const void **)&v41[v39];
                              if ( v44[1] )
                              {
                                v66 = v39;
                                v64 = v44;
                                na = (size_t)v44[1];
                                v42 = (void *)qalloc_or_throw(na);
                                *(_QWORD *)v38 = v42;
                                *(_QWORD *)(v38 + 16) = na;
                                memcpy(v42, *v64, na);
                                v39 = v66;
                                v44 = v64;
                                *(_QWORD *)(v38 + 8) = na;
                              }
                              *(_QWORD *)(v38 + 24) = 0;
                              *(_OWORD *)(v38 + 32) = 0;
                              if ( v44[4] )
                              {
                                v67 = v39;
                                v65 = v44;
                                n = (size_t)v44[4];
                                v43 = (void *)qalloc_or_throw(n);
                                *(_QWORD *)(v38 + 24) = v43;
                                *(_QWORD *)(v38 + 40) = n;
                                memcpy(v43, v65[3], n);
                                v39 = v67;
                                v44 = v65;
                                *(_QWORD *)(v38 + 32) = n;
                              }
                              ++v40;
                              v39 += 56;
                              v38 += 56;
                              *(_BYTE *)(v38 - 8) = *((_BYTE *)v44 + 48);
                            }
                            while ( v55 != v40 );
                            v85.m128i_i64[0] = v55;
                          }
                          v86 = v78;
                          v18 = v78 & 1;
                          v19 = HIBYTE(v78) & 1;
                          v20 = a1[2];
                          v21 = a1[1];
                          if ( a1[3] < (unsigned __int64)(v20 + 1) )
                          {
                            v21 = qvector_reserve(a1 + 1, v21, v20 + 1, 88);
                            a1[1] = v21;
                            v20 = a1[2];
                          }
                          v22 = v79;
                          v23 = v21 + 88 * v20;
                          *(__m128i *)(v23 + 8) = _mm_loadu_si128(&v80);
                          v24 = _mm_loadu_si128(&v83);
                          *(_QWORD *)v23 = v22;
                          v25 = ptr;
                          *(__m128i *)(v23 + 40) = v24;
                          v26 = _mm_load_si128(&v85);
                          *(_QWORD *)(v23 + 32) = v25;
                          v27 = v84;
                          *(_QWORD *)(v23 + 24) = v60;
                          *(_QWORD *)(v23 + 56) = v27;
                          v28 = (char *)v76;
                          *(_BYTE *)(v23 + 80) = v18;
                          *(_BYTE *)(v23 + 81) = v19;
                          *(__m128i *)(v23 + 64) = v26;
                          ++a1[2];
                          if ( v28 )
                          {
                            v29 = v77;
                            if ( (_QWORD)v77 )
                            {
                              v30 = 0;
                              do
                              {
                                v31 = &v28[v30];
                                v32 = *(void **)&v28[v30 + 24];
                                if ( v32 )
                                {
                                  *((_QWORD *)v31 + 4) = 0;
                                  qfree(v32);
                                }
                                v33 = *(void **)v31;
                                if ( *(_QWORD *)v31 )
                                {
                                  *((_QWORD *)v31 + 1) = 0;
                                  qfree(v33);
                                }
                                ++v13;
                                v28 = (char *)v76;
                                v30 += 56;
                              }
                              while ( v29 != v13 );
                            }
                            *(_QWORD *)&v77 = 0;
                            qfree(v28);
                          }
                          if ( src )
                          {
                            v75[0] = 0;
                            qfree(src);
                          }
                          if ( dest )
                          {
                            v72[0] = 0;
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
        v45 = (char *)v76;
        if ( v76 )
        {
          v46 = v77;
          if ( (_QWORD)v77 )
          {
            v47 = 0;
            v48 = 0;
            do
            {
              v49 = &v45[v47];
              v50 = *(void **)&v45[v47 + 24];
              if ( v50 )
              {
                *((_QWORD *)v49 + 4) = 0;
                qfree(v50);
              }
              v51 = *(void **)v49;
              if ( *(_QWORD *)v49 )
              {
                *((_QWORD *)v49 + 1) = 0;
                qfree(v51);
              }
              ++v48;
              v45 = (char *)v76;
              v47 += 56;
            }
            while ( v46 != v48 );
          }
          *(_QWORD *)&v77 = 0;
          qfree(v45);
        }
        if ( src )
        {
          v75[0] = 0;
          qfree(src);
        }
        if ( dest )
        {
          v72[0] = 0;
          qfree(dest);
        }
        break;
      }
    }
    qfclose(v58);
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(v69);
    }
  }
  return v88 - __readfsqword(0x28u);
}
