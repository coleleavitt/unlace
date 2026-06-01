__int64 __fastcall sub_92E860(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  char *v14; // rdx
  __int64 v15; // rax
  _BYTE *v17; // rcx
  size_t v18; // r15
  size_t v19; // r15
  size_t v20; // rax
  size_t v21; // rcx
  _BYTE *v22; // r8
  _BYTE *v23; // rcx
  size_t v24; // r14
  _BYTE *v25; // rdi
  size_t v26; // r15
  size_t v27; // rcx
  _BYTE *v28; // r8
  _BYTE *v29; // rdi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  char *v32; // rax
  void *v33; // rcx
  char *v34; // r8
  _BYTE *v35; // rax
  size_t v36; // rdx
  size_t v37; // r9
  _BYTE *v38; // rcx
  _BYTE *v39; // r10
  _BYTE *v40; // rax
  _BYTE *v41; // rdi
  unsigned __int64 v42; // rdi
  _BYTE *v43; // rax
  size_t v44; // rdx
  size_t v45; // r9
  _BYTE *v46; // rcx
  _BYTE *v47; // r10
  _BYTE *v48; // rax
  _BYTE *v49; // rdi
  size_t v50; // r14
  unsigned __int64 v51; // rdi
  _BYTE *v52; // rax
  __int64 v53; // rcx
  _BYTE *v54; // r8
  __int64 v55; // rax
  void *v56; // rsi
  _BYTE *v57; // rax
  unsigned __int64 v58; // rdi
  char *v59; // rax
  void *v60; // rcx
  __int64 v61; // rax
  void *v62; // rsi
  char *v63; // rax
  __int64 v64; // rax
  void *v65; // rsi
  char *v66; // rax
  _BYTE *v67; // [rsp+0h] [rbp-C8h]
  __int64 v68; // [rsp+0h] [rbp-C8h]
  size_t v69; // [rsp+10h] [rbp-B8h]
  size_t v70; // [rsp+10h] [rbp-B8h]
  size_t v71; // [rsp+10h] [rbp-B8h]
  size_t v72; // [rsp+10h] [rbp-B8h]
  _BYTE *v73; // [rsp+18h] [rbp-B0h]
  size_t v74; // [rsp+18h] [rbp-B0h]
  size_t v75; // [rsp+18h] [rbp-B0h]
  size_t v76; // [rsp+18h] [rbp-B0h]
  _BYTE *v77; // [rsp+18h] [rbp-B0h]
  size_t v78; // [rsp+18h] [rbp-B0h]
  size_t v79; // [rsp+18h] [rbp-B0h]
  size_t v80; // [rsp+18h] [rbp-B0h]
  _BYTE *v81; // [rsp+18h] [rbp-B0h]
  size_t v82; // [rsp+18h] [rbp-B0h]
  size_t v83; // [rsp+18h] [rbp-B0h]
  void *v84; // [rsp+20h] [rbp-A8h]
  _BYTE *v85; // [rsp+20h] [rbp-A8h]
  void *v86; // [rsp+20h] [rbp-A8h]
  _BYTE *v87; // [rsp+20h] [rbp-A8h]
  void *v88; // [rsp+20h] [rbp-A8h]
  size_t v89; // [rsp+28h] [rbp-A0h]
  size_t v90; // [rsp+28h] [rbp-A0h]
  size_t v91; // [rsp+28h] [rbp-A0h]
  size_t v92; // [rsp+28h] [rbp-A0h]
  void *v93; // [rsp+30h] [rbp-98h] BYREF
  size_t v94; // [rsp+38h] [rbp-90h]
  _QWORD v95[2]; // [rsp+40h] [rbp-88h] BYREF
  int v96; // [rsp+50h] [rbp-78h] BYREF
  char v97; // [rsp+54h] [rbp-74h]
  __int64 v98; // [rsp+58h] [rbp-70h]
  int v99; // [rsp+60h] [rbp-68h]
  char v100; // [rsp+64h] [rbp-64h]
  __int64 v101; // [rsp+68h] [rbp-60h]
  void *src; // [rsp+70h] [rbp-58h] BYREF
  size_t n; // [rsp+78h] [rbp-50h]

  sub_91CD00((__int64)a2, "#");
  v6 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
  v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
  LODWORD(v6) = *((_DWORD *)v7 + 6);
  LOBYTE(v6) = v6 & 0x4F;
  *((_DWORD *)v7 + 6) = v6 | 0x20;
  v8 = std::ostream::_M_insert<unsigned long>();
  sub_91CD00(v8, " - #");
  v9 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
  v10 = (char *)a2 + *(_QWORD *)(v9 - 24);
  LODWORD(v9) = *((_DWORD *)v10 + 6);
  LOBYTE(v9) = v9 & 0x4F;
  *((_DWORD *)v10 + 6) = v9 | 0x20;
  v11 = std::ostream::_M_insert<unsigned long>();
  sub_91CD00(v11, " <= ");
  v12 = *a2;
  v13 = a3[12];
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
  v14 = (char *)a2 + *(_QWORD *)(v12 - 24);
  LODWORD(v12) = *((_DWORD *)v14 + 6);
  LOBYTE(v12) = v12 & 0x4F;
  *((_DWORD *)v14 + 6) = v12 | 0x20;
  if ( v13 )
  {
    sub_91CD50((__int64 *)&v93, "(");
    sub_1850940(&src, qword_1C7F2C0, a3 + 4);
    if ( 0x7FFFFFFFFFFFFFFFLL - v94 < n )
      std::__throw_length_error("basic_string::append");
    v17 = v93;
    v18 = n + v94;
    if ( v93 == v95 )
    {
      if ( v18 <= 0xF )
      {
LABEL_7:
        if ( n )
        {
          v29 = (char *)v93 + v94;
          if ( n == 1 )
            *v29 = *(_BYTE *)src;
          else
            memcpy(v29, src, n);
          v17 = v93;
        }
        goto LABEL_8;
      }
      if ( (v18 & 0x8000000000000000LL) == 0LL )
      {
        if ( v18 <= 0x1D )
        {
          v69 = 30;
          v30 = 31;
LABEL_45:
          v89 = v94;
          v85 = src;
          v74 = n;
          v35 = (_BYTE *)operator new(v30);
          v36 = v89;
          v37 = v74;
          v38 = v35;
          v39 = v85;
          if ( v89 )
          {
            if ( v89 == 1 )
            {
              *v35 = *(_BYTE *)v93;
            }
            else
            {
              v90 = (size_t)v85;
              v86 = (void *)v74;
              v75 = v36;
              v40 = memcpy(v35, v93, v36);
              v39 = (_BYTE *)v90;
              v37 = (size_t)v86;
              v36 = v75;
              v38 = v40;
            }
          }
          if ( v39 && v37 )
          {
            v41 = &v38[v36];
            if ( v37 == 1 )
            {
              *v41 = *v39;
            }
            else
            {
              v76 = (size_t)v38;
              memcpy(v41, v39, v37);
              v38 = (_BYTE *)v76;
            }
          }
          v77 = v38;
          sub_233E40((__int64)&v93);
          v17 = v77;
          v93 = v77;
          v95[0] = v69;
LABEL_8:
          v94 = v18;
          v17[v18] = 0;
          sub_233E40((__int64)&src);
          v19 = v94;
          v20 = 0x7FFFFFFFFFFFFFFFLL - v94;
          if ( (int)a3[12] >= 0 )
          {
            if ( v20 <= 3 )
              std::__throw_length_error("basic_string::append");
            v21 = v94 + 4;
            if ( v93 == v95 )
            {
              if ( v21 <= 0xF )
                goto LABEL_12;
              v61 = operator new(0x1Fu);
              v62 = v93;
              v33 = (void *)(v19 + 4);
              v34 = (char *)v61;
              v70 = 30;
              goto LABEL_85;
            }
            if ( v95[0] >= v21 )
            {
LABEL_12:
              *(_DWORD *)((char *)v93 + v94) = 711273248;
              v22 = v93;
              goto LABEL_13;
            }
            if ( (v21 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v70 = 2LL * v95[0];
            if ( v21 < 2LL * v95[0] )
            {
              v31 = 2LL * v95[0] + 1;
              if ( (v95[0] & 0x4000000000000000LL) == 0 )
                goto LABEL_35;
            }
            else
            {
              v70 = v94 + 4;
              v31 = v94 + 5;
              if ( (__int64)(v94 + 5) >= 0 )
              {
LABEL_35:
                v32 = (char *)operator new(v31);
                v33 = (void *)(v19 + 4);
                v34 = v32;
                if ( !v19 )
                {
LABEL_36:
                  v84 = v33;
                  *(_DWORD *)&v34[v19] = 711273248;
LABEL_37:
                  v73 = v34;
                  sub_233E40((__int64)&v93);
                  v22 = v73;
                  v21 = (size_t)v84;
                  v93 = v73;
                  v95[0] = v70;
                  goto LABEL_13;
                }
                v62 = v93;
                if ( v19 == 1 )
                {
                  *v32 = *(_BYTE *)v93;
                  goto LABEL_36;
                }
LABEL_85:
                v82 = (size_t)v33;
                v63 = (char *)memcpy(v34, v62, v19);
                v33 = (void *)v82;
                v34 = v63;
                goto LABEL_36;
              }
            }
            std::__throw_bad_alloc();
          }
          if ( v20 <= 3 )
            std::__throw_length_error("basic_string::append");
          v21 = v94 + 4;
          if ( v93 == v95 )
          {
            if ( v21 <= 0xF )
              goto LABEL_41;
            v64 = operator new(0x1Fu);
            v65 = v93;
            v60 = (void *)(v19 + 4);
            v34 = (char *)v64;
            v70 = 30;
            goto LABEL_106;
          }
          if ( v95[0] >= v21 )
          {
LABEL_41:
            *(_DWORD *)((char *)v93 + v94) = 711273760;
            v22 = v93;
LABEL_13:
            v94 = v21;
            v22[v19 + 4] = 0;
            v97 &= 0xFCu;
            v100 &= 0xFCu;
            v96 = 0;
            v98 = 0;
            v99 = 1;
            v101 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v96, a3 + 12);
            sub_1831690(qword_1C7F2C0, &v96);
            sub_1850940(&src, qword_1C7F2C0, &v96);
            if ( 0x7FFFFFFFFFFFFFFFLL - v94 < n )
              std::__throw_length_error("basic_string::append");
            v23 = v93;
            v24 = n + v94;
            if ( v93 == v95 )
            {
              if ( v24 <= 0xF )
              {
LABEL_16:
                if ( n )
                {
                  v25 = (char *)v93 + v94;
                  if ( n == 1 )
                    *v25 = *(_BYTE *)src;
                  else
                    memcpy(v25, src, n);
                  v23 = v93;
                }
                goto LABEL_20;
              }
              if ( (v24 & 0x8000000000000000LL) == 0LL )
              {
                if ( v24 <= 0x1D )
                {
                  v71 = 30;
                  v42 = 31;
                  goto LABEL_56;
                }
                goto LABEL_55;
              }
            }
            else
            {
              if ( v95[0] >= v24 )
                goto LABEL_16;
              if ( (v24 & 0x8000000000000000LL) == 0LL )
              {
                v71 = 2LL * v95[0];
                if ( v24 < 2LL * v95[0] )
                {
                  v42 = 2LL * v95[0] + 1;
                  if ( (v95[0] & 0x4000000000000000LL) == 0 )
                    goto LABEL_56;
                  goto LABEL_93;
                }
LABEL_55:
                v71 = n + v94;
                v42 = v24 + 1;
                if ( (__int64)(v24 + 1) >= 0 )
                {
LABEL_56:
                  v91 = v94;
                  v87 = src;
                  v78 = n;
                  v43 = (_BYTE *)operator new(v42);
                  v44 = v91;
                  v45 = v78;
                  v46 = v43;
                  v47 = v87;
                  if ( v91 )
                  {
                    if ( v91 == 1 )
                    {
                      *v43 = *(_BYTE *)v93;
                    }
                    else
                    {
                      v92 = (size_t)v87;
                      v88 = (void *)v78;
                      v79 = v44;
                      v48 = memcpy(v43, v93, v44);
                      v47 = (_BYTE *)v92;
                      v45 = (size_t)v88;
                      v44 = v79;
                      v46 = v48;
                    }
                  }
                  if ( v47 && v45 )
                  {
                    v49 = &v46[v44];
                    if ( v45 == 1 )
                    {
                      *v49 = *v47;
                    }
                    else
                    {
                      v80 = (size_t)v46;
                      memcpy(v49, v47, v45);
                      v46 = (_BYTE *)v80;
                    }
                  }
                  v81 = v46;
                  sub_233E40((__int64)&v93);
                  v23 = v81;
                  v93 = v81;
                  v95[0] = v71;
LABEL_20:
                  v94 = v24;
                  v23[v24] = 0;
                  sub_233E40((__int64)&src);
                  sub_25A130((char *)&v96);
                  v26 = v94;
                  if ( v94 == 0x7FFFFFFFFFFFFFFFLL )
                    std::__throw_length_error("basic_string::append");
                  v27 = v94 + 1;
                  if ( v93 == v95 )
                  {
                    if ( v94 != 15 )
                      goto LABEL_23;
                    v55 = operator new(0x1Fu);
                    v56 = v93;
                    v53 = 16;
                    v54 = (_BYTE *)v55;
                    v50 = 30;
                    goto LABEL_75;
                  }
                  if ( v95[0] >= v27 )
                  {
LABEL_23:
                    *((_BYTE *)v93 + v94) = 41;
                    v28 = v93;
LABEL_24:
                    v94 = v27;
                    v28[v26 + 1] = 0;
                    sub_2333C0((char **)&src, &v93);
                    sub_233E40((__int64)&v93);
                    goto LABEL_3;
                  }
                  if ( (v27 & 0x8000000000000000LL) != 0LL )
                    std::__throw_length_error("basic_string::_M_create");
                  v50 = 2LL * v95[0];
                  if ( v27 < 2LL * v95[0] )
                  {
                    v51 = v50 + 1;
                    if ( (v95[0] & 0x4000000000000000LL) == 0 )
                      goto LABEL_67;
                  }
                  else
                  {
                    v50 = v94 + 1;
                    v51 = v94 + 2;
                    if ( (__int64)(v94 + 2) >= 0 )
                    {
LABEL_67:
                      v52 = (_BYTE *)operator new(v51);
                      v53 = v26 + 1;
                      v54 = v52;
                      if ( !v26 )
                      {
LABEL_68:
                        v54[v26] = 41;
                        v72 = v53;
                        v67 = v54;
                        sub_233E40((__int64)&v93);
                        v28 = v67;
                        v95[0] = v50;
                        v27 = v72;
                        v93 = v67;
                        goto LABEL_24;
                      }
                      v56 = v93;
                      if ( v26 == 1 )
                      {
                        *v52 = *(_BYTE *)v93;
                        goto LABEL_68;
                      }
LABEL_75:
                      v68 = v53;
                      v57 = memcpy(v54, v56, v26);
                      v53 = v68;
                      v54 = v57;
                      goto LABEL_68;
                    }
                  }
                  std::__throw_bad_alloc();
                }
LABEL_93:
                std::__throw_bad_alloc();
              }
            }
            std::__throw_length_error("basic_string::_M_create");
          }
          if ( (v21 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v70 = 2LL * v95[0];
          if ( v21 < 2LL * v95[0] )
          {
            v58 = 2LL * v95[0] + 1;
            if ( (v95[0] & 0x4000000000000000LL) == 0 )
              goto LABEL_80;
          }
          else
          {
            v70 = v94 + 4;
            v58 = v94 + 5;
            if ( (__int64)(v94 + 5) >= 0 )
            {
LABEL_80:
              v59 = (char *)operator new(v58);
              v60 = (void *)(v19 + 4);
              v34 = v59;
              if ( !v19 )
              {
LABEL_81:
                v84 = v60;
                *(_DWORD *)&v34[v19] = 711273760;
                goto LABEL_37;
              }
              v65 = v93;
              if ( v19 == 1 )
              {
                *v59 = *(_BYTE *)v93;
                goto LABEL_81;
              }
LABEL_106:
              v83 = (size_t)v60;
              v66 = (char *)memcpy(v34, v65, v19);
              v60 = (void *)v83;
              v34 = v66;
              goto LABEL_81;
            }
          }
          std::__throw_bad_alloc();
        }
        goto LABEL_44;
      }
    }
    else
    {
      if ( v95[0] >= v18 )
        goto LABEL_7;
      if ( (v18 & 0x8000000000000000LL) == 0LL )
      {
        v69 = 2LL * v95[0];
        if ( v18 < 2LL * v95[0] )
        {
          v30 = 2LL * v95[0] + 1;
          if ( (v95[0] & 0x4000000000000000LL) == 0 )
            goto LABEL_45;
          goto LABEL_89;
        }
LABEL_44:
        v69 = n + v94;
        v30 = v18 + 1;
        if ( (__int64)(v18 + 1) >= 0 )
          goto LABEL_45;
LABEL_89:
        std::__throw_bad_alloc();
      }
    }
    std::__throw_length_error("basic_string::_M_create");
  }
  sub_1850940(&src, qword_1C7F2C0, a3 + 4);
LABEL_3:
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_233E40((__int64)&src);
  std::__ostream_insert<char,std::char_traits<char>>();
  v15 = sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)(2 * *a3)));
  return sub_91CD00(v15, "\n");
}

