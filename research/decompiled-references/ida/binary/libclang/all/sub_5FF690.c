_QWORD *__fastcall sub_5FF690(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __m128i v8; // xmm0
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rbx
  int v14; // eax
  bool v16; // zf
  bool v17; // cc
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  void *v21; // r15
  size_t v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // r12
  size_t v27; // r12
  _BYTE *v28; // r13
  size_t *v29; // rax
  char *v30; // rax
  size_t v31; // r13
  char *v32; // r12
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rdx
  size_t v36; // rax
  char *v37; // rax
  size_t v38; // r12
  const char *v39; // rsi
  size_t *v40; // rdi
  _QWORD *v41; // rcx
  _QWORD *v42; // rcx
  _QWORD *v43; // rbp
  _QWORD *v44; // rdx
  _QWORD *v45; // r15
  __int64 *v46; // r14
  __int64 *v47; // r13
  __int64 v48; // rsi
  _QWORD *v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rax
  int v52; // edx
  unsigned __int16 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbp
  int v57; // eax
  size_t v58; // rax
  char *v59; // rax
  size_t v60; // rbp
  const char *v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // rsi
  __int64 v65; // rsi
  int v66; // r13d
  int v67; // eax
  __m128i v68; // [rsp+0h] [rbp-1B8h]
  _QWORD *v69; // [rsp+20h] [rbp-198h]
  _QWORD *v70; // [rsp+28h] [rbp-190h]
  _QWORD *v71; // [rsp+30h] [rbp-188h]
  _QWORD *v72; // [rsp+38h] [rbp-180h]
  _QWORD *v73; // [rsp+40h] [rbp-178h]
  _QWORD *v74; // [rsp+50h] [rbp-168h]
  char v75; // [rsp+67h] [rbp-151h] BYREF
  __int64 v76; // [rsp+68h] [rbp-150h] BYREF
  size_t v77; // [rsp+70h] [rbp-148h] BYREF
  _QWORD *v78; // [rsp+78h] [rbp-140h]
  void *v79; // [rsp+90h] [rbp-128h]
  size_t v80; // [rsp+98h] [rbp-120h]
  _QWORD v81[2]; // [rsp+A0h] [rbp-118h] BYREF
  __int16 v82; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-100h]
  unsigned int v84; // [rsp+C0h] [rbp-F8h] BYREF
  char v85; // [rsp+C4h] [rbp-F4h]
  __int64 *v86; // [rsp+C8h] [rbp-F0h] BYREF
  unsigned int v87; // [rsp+D0h] [rbp-E8h]
  char v88; // [rsp+D4h] [rbp-E4h]
  void *ptr; // [rsp+100h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+108h] [rbp-B0h] BYREF
  _BYTE v91[160]; // [rsp+118h] [rbp-A0h] BYREF

  v85 &= ~1u;
  v82 = 0;
  v68 = _mm_loadu_si128((const __m128i *)&a7);
  v8 = _mm_loadu_si128((const __m128i *)&a8);
  v83 = 0;
  v84 = 0;
  v9 = sub_63A2D0(a1, a2, a3, a4, a5, a6, v68.m128i_i32[0], v68.m128i_i32[2], v8.m128i_i32[0], v8.m128i_i64[1]);
  v10 = sub_80F230(a1);
  if ( (*(_BYTE *)(v10 + 2) & 2) != 0 )
    goto LABEL_12;
  v11 = v10;
  if ( !(unsigned __int8)sub_863720(v10, &v82, v9, 0) )
    goto LABEL_12;
  v76 = 0;
  v12 = operator new(0x18u);
  *(_DWORD *)v12 = 0;
  v13 = (_QWORD *)v12;
  *(_QWORD *)(v12 + 8) = 0;
  *(_BYTE *)(v12 + 16) = 0;
  if ( v84 == 2 )
  {
    v16 = v88 == 0;
    *(_DWORD *)v12 = 1;
    if ( v16 )
    {
      if ( v87 > 0x40 )
      {
        v19 = *v86;
      }
      else
      {
        v19 = 0;
        if ( v87 )
          v19 = (__int64)((_QWORD)v86 << (64 - (unsigned __int8)v87)) >> (64 - (unsigned __int8)v87);
      }
      *(_QWORD *)(v12 + 8) = v19;
    }
    else
    {
      v17 = v87 <= 0x40;
      *(_BYTE *)(v12 + 16) = 1;
      v18 = v86;
      if ( !v17 )
        v18 = (__int64 *)*v86;
      v13[1] = v18;
    }
    goto LABEL_19;
  }
  if ( v84 != 3 )
  {
    v14 = *(_WORD *)v11 & 0x1FF;
    if ( v14 == 80 )
    {
      v33 = sub_80C4C0(v11);
      v34 = *(_WORD *)v33 & 0x1FF;
      if ( v34 == 10 )
      {
        v51 = sub_80C4C0(v11);
        v52 = 4;
      }
      else
      {
        if ( v34 != 30 )
        {
          v14 = *(_WORD *)v11 & 0x1FF;
LABEL_8:
          if ( v14 == 88 )
          {
            v76 = *(_QWORD *)(v11 + 8);
            sub_B2ACF0(&ptr, &v76);
            if ( n[0] != 11
              || *(_QWORD *)ptr != 0x676E697274534643LL
              || *(_DWORD *)((char *)ptr + 7) != 1717916263
              || (v54 = *(_QWORD *)(v11 + 16), (*(_WORD *)v54 & 0x1FF) != 0x5A) )
            {
              if ( ptr != &n[1] )
                operator delete(ptr, n[1] + 1);
              goto LABEL_11;
            }
            if ( ptr != &n[1] )
            {
              operator delete(ptr, n[1] + 1);
              v54 = *(_QWORD *)(v11 + 16);
            }
            if ( *(_DWORD *)(v54 + 16) == 1 )
            {
              v55 = *(unsigned __int8 *)(v54 + 3);
              v56 = *(_QWORD *)(v54 + 8LL * ((*(_BYTE *)(v54 + 2) & 8) != 0) + 8 + v55);
              v57 = *(_WORD *)v56 & 0x1FF;
              if ( v57 == 80 )
              {
                if ( (*(_WORD *)sub_80C4C0(*(_QWORD *)(v54 + 8LL * ((*(_BYTE *)(v54 + 2) & 8) != 0) + 8 + v55)) & 0x1FF) != 0xA )
                  goto LABEL_11;
                v56 = sub_80C4C0(v56);
                if ( !v56 )
                  goto LABEL_11;
              }
              else if ( v57 != 10 )
              {
                goto LABEL_11;
              }
LABEL_126:
              sub_5F8A20(
                (__int64 *)&ptr,
                (_BYTE *)(v56 + 4LL * *(unsigned int *)(v56 + 4) + 20),
                *(_DWORD *)(v56 + 16) * ((*(_WORD *)(v56 + 2) >> 6) & 7u));
              v58 = n[0];
              *(_DWORD *)v13 = 5;
              v59 = (char *)operator new[](v58 + 1);
              v60 = n[0];
              v61 = (const char *)ptr;
              v13[1] = v59;
              strncpy(v59, v61, v60)[v60] = 0;
              std::string::_M_dispose();
              goto LABEL_13;
            }
          }
          else
          {
            if ( v14 != 90 )
            {
              if ( v14 == 72 )
              {
                v35 = *(_QWORD *)(v11 + 16);
                if ( (*(_BYTE *)(v35 + 28) & 0x7F) == 0x20 )
                {
                  sub_791DD0(&ptr, v35 + 40);
                  v36 = n[0];
                  *(_DWORD *)v13 = 6;
                  v37 = (char *)operator new[](v36 + 1);
                  v38 = n[0];
                  v39 = (const char *)ptr;
                  v13[1] = v37;
                  strncpy(v37, v39, v38)[v38] = 0;
                  std::string::_M_dispose();
                  goto LABEL_13;
                }
              }
              goto LABEL_11;
            }
            v76 = sub_80ED30(v11, v9);
            v50 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 56 > 1
              && *(_DWORD *)(v11 + 16) <= 1u )
            {
              if ( (unsigned __int8)sub_B07CE0(v50, v9)
                || (unsigned __int8)sub_B080B0(*(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL)) )
              {
                if ( *(_DWORD *)(v11 + 16) == 1 )
                  sub_B07CE0(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11
                                                      + 8LL * ((*(_BYTE *)(v11 + 2) & 8) != 0)
                                                      + 8
                                                      + *(unsigned __int8 *)(v11 + 3))
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL),
                    v9);
                goto LABEL_11;
              }
              sub_B2ACF0(&ptr, &v76);
              if ( n[0] != 11 )
              {
                std::string::_M_dispose();
                goto LABEL_11;
              }
              v66 = memcmp(ptr, "CFStringRef", 0xBu);
              std::string::_M_dispose();
              if ( v66 || *(_DWORD *)(v11 + 16) != 1 )
                goto LABEL_11;
              v56 = *(_QWORD *)(v11 + 8LL * ((*(_BYTE *)(v11 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v11 + 3));
              v67 = *(_WORD *)v56 & 0x1FF;
              if ( v67 == 80 )
              {
                if ( (*(_WORD *)sub_80C4C0(v56) & 0x1FF) != 0xA )
                  goto LABEL_11;
                v56 = sub_80C4C0(v56);
              }
              else if ( v67 != 10 )
              {
                goto LABEL_11;
              }
              if ( !v56 )
                goto LABEL_11;
              goto LABEL_126;
            }
          }
LABEL_11:
          operator delete(v13, 0x18u);
LABEL_12:
          v13 = nullptr;
          goto LABEL_13;
        }
        v51 = *(_QWORD *)(v33 + 16);
        v52 = 3;
      }
      v53 = *(_WORD *)(v51 + 2);
      *(_DWORD *)v13 = v52;
      v27 = *(_DWORD *)(v51 + 16) * ((v53 >> 6) & 7u);
      v28 = (_BYTE *)(v51 + 4LL * *(unsigned int *)(v51 + 4) + 20);
    }
    else
    {
      if ( v14 == 30 )
      {
        v11 = *(_QWORD *)(v11 + 16);
        v25 = 3;
      }
      else
      {
        if ( v14 != 10 )
          goto LABEL_8;
        v25 = 4;
      }
      v26 = *(_WORD *)(v11 + 2);
      *(_DWORD *)v13 = v25;
      v27 = *(_DWORD *)(v11 + 16) * ((v26 >> 6) & 7u);
      v28 = (_BYTE *)(v11 + 4LL * *(unsigned int *)(v11 + 4) + 20);
    }
    v79 = (void *)v27;
    ptr = &n[1];
    if ( v27 > 0xF )
    {
      ptr = (void *)std::string::_M_create();
      v40 = (size_t *)ptr;
      n[1] = (size_t)v79;
    }
    else
    {
      if ( v27 == 1 )
      {
        LOBYTE(n[1]) = *v28;
        goto LABEL_44;
      }
      if ( !v27 )
      {
LABEL_44:
        v29 = &n[1];
        goto LABEL_45;
      }
      v40 = &n[1];
    }
    memcpy(v40, v28, v27);
    v27 = (size_t)v79;
    v29 = (size_t *)ptr;
LABEL_45:
    n[0] = v27;
    *((_BYTE *)v29 + v27) = 0;
    v30 = (char *)operator new[](n[0] + 1);
    v31 = n[0];
    v32 = (char *)ptr;
    v13[1] = v30;
    strncpy(v30, v32, v31)[v31] = 0;
    if ( v32 != (char *)&n[1] )
      operator delete(v32, n[1] + 1);
    goto LABEL_13;
  }
  ptr = v91;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E270);
  v20 = sub_2575D20();
  if ( v86 == (__int64 *)v20 )
    sub_2584F50(&v86, &ptr, 0, 3, 1);
  else
    sub_2584B70(&v86, &ptr, 0, 3, 1);
  v21 = ptr;
  v22 = n[0];
  v79 = v81;
  if ( !ptr && n[0] )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v77 = n[0];
  if ( n[0] > 0xF )
  {
    v79 = (void *)std::string::_M_create();
    v49 = v79;
    v81[0] = v77;
    goto LABEL_107;
  }
  if ( n[0] != 1 )
  {
    if ( !n[0] )
      goto LABEL_30;
    v49 = v81;
LABEL_107:
    memcpy(v49, v21, v22);
    v22 = v77;
    v23 = v79;
    goto LABEL_31;
  }
  LOBYTE(v81[0]) = *(_BYTE *)ptr;
LABEL_30:
  v23 = v81;
LABEL_31:
  v80 = v22;
  *((_BYTE *)v23 + v22) = 0;
  *(_DWORD *)v13 = 2;
  if ( v86 == (__int64 *)v20 )
    sub_257CF50(&v77, &v86);
  else
    sub_25768A0(&v77, &v86);
  v24 = sub_2575D00();
  sub_2582620(&v77, v24, 1, &v75);
  *((double *)v13 + 1) = sub_2582900(&v77);
  if ( v77 == v20 )
  {
    v74 = v78;
    if ( v78 )
    {
      v70 = &v78[3 * *(v78 - 1)];
      if ( v78 == v70 )
      {
        v65 = 0;
      }
      else
      {
        do
        {
          v70 -= 3;
          if ( v20 == *v70 )
          {
            v41 = (_QWORD *)v70[1];
            v73 = v41;
            if ( v41 )
            {
              v69 = &v41[3 * *(v41 - 1)];
              if ( v41 == v69 )
              {
                v64 = 0;
              }
              else
              {
                do
                {
                  v69 -= 3;
                  if ( v20 == *v69 )
                  {
                    v42 = (_QWORD *)v69[1];
                    v72 = v42;
                    if ( v42 )
                    {
                      v43 = &v42[3 * *(v42 - 1)];
                      if ( v42 == v43 )
                      {
                        v63 = 0;
                      }
                      else
                      {
                        do
                        {
                          v43 -= 3;
                          if ( v20 == *v43 )
                          {
                            v44 = (_QWORD *)v43[1];
                            v71 = v44;
                            if ( v44 )
                            {
                              v45 = &v44[3 * *(v44 - 1)];
                              if ( v44 == v45 )
                              {
                                v62 = 0;
                              }
                              else
                              {
                                do
                                {
                                  v45 -= 3;
                                  if ( v20 == *v45 )
                                  {
                                    v46 = (__int64 *)v45[1];
                                    if ( v46 )
                                    {
                                      v47 = &v46[3 * *(v46 - 1)];
                                      if ( v46 == v47 )
                                      {
                                        v48 = 0;
                                      }
                                      else
                                      {
                                        do
                                        {
                                          v47 -= 3;
                                          sub_5FF3B0(v47);
                                        }
                                        while ( v46 != v47 );
                                        v48 = 24 * *(v46 - 1);
                                      }
                                      operator delete[](v46 - 1, v48 + 8);
                                    }
                                    v45[1] = 0;
                                  }
                                  else
                                  {
                                    sub_25769A0(v45);
                                  }
                                }
                                while ( v71 != v45 );
                                v62 = 24LL * *(v71 - 1);
                              }
                              operator delete[](v71 - 1, v62 + 8);
                            }
                            v43[1] = 0;
                          }
                          else
                          {
                            sub_25769A0(v43);
                          }
                        }
                        while ( v72 != v43 );
                        v63 = 24LL * *(v72 - 1);
                      }
                      operator delete[](v72 - 1, v63 + 8);
                    }
                    v69[1] = 0;
                  }
                  else
                  {
                    sub_25769A0(v69);
                  }
                }
                while ( v73 != v69 );
                v64 = 24LL * *(v73 - 1);
              }
              operator delete[](v73 - 1, v64 + 8);
            }
            v70[1] = 0;
          }
          else
          {
            sub_25769A0(v70);
          }
        }
        while ( v74 != v70 );
        v65 = 24LL * *(v74 - 1);
      }
      operator delete[](v74 - 1, v65 + 8);
    }
    v78 = nullptr;
  }
  else
  {
    sub_25769A0(&v77);
  }
  if ( v79 != v81 )
    operator delete(v79, v81[0] + 1LL);
  if ( ptr != v91 )
    free(ptr);
LABEL_13:
  if ( v84 > 1 )
LABEL_19:
    sub_69F740(&v84);
  return v13;
}

