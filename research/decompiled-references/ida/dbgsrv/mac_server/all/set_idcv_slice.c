/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x0000000100039C30

//----- (0000000100039C30) ----------------------------------------------------
__int64 __fastcall set_idcv_slice(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        char a5)
{
  unsigned __int8 *v8; // r13
  int v9; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  bool v13; // cf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // r14
  unsigned __int8 *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  bool v24; // cc
  size_t v25; // r12
  unsigned __int64 v26; // rdx
  _BYTE *v27; // rax
  void *v28; // r13
  size_t v29; // rdx
  char v30; // r13
  size_t v31; // r14
  int v32; // eax
  _QWORD *v33; // rbx
  __int64 v34; // r13
  _QWORD *v35; // rbx
  const char *v36; // r12
  int v37; // eax
  const char *v38; // rdi
  unsigned int v39; // r14d
  size_t v40; // rax
  size_t v41; // rbx
  __int64 v42; // r14
  void *v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // r14
  int v46; // esi
  __int64 *v47; // rcx
  __int64 **v48; // rbx
  __int64 **v49; // r13
  unsigned __int64 v50; // rcx
  unsigned __int8 *v51; // r12
  __int64 *v52; // rsi
  unsigned __int8 *v53; // r13
  __int64 *v54; // rbx
  int v55; // eax
  void *v56; // rdi
  _BYTE *v57; // rax
  unsigned __int64 v58; // rdx
  char *v59; // rdi
  int v60; // eax
  _BYTE *v61; // rcx
  __int64 *v62; // rcx
  __int64 **v63; // r14
  __int64 **v64; // r13
  unsigned __int64 v65; // rcx
  void *v66; // r12
  __int64 *v67; // rsi
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  bool v70; // zf
  int v71; // ecx
  int v72; // ebx
  __int64 v73; // r14
  unsigned __int8 *v74; // r12
  __int64 v75; // r15
  const char *v76; // r14
  int v77; // eax
  const char *v78; // rdi
  __int64 v79; // r14
  char *v80; // rdi
  int v81; // eax
  _BYTE *v82; // rcx
  unsigned __int8 *v83; // rax
  unsigned __int8 *v84; // rbx
  __int64 v85; // rbx
  size_t v86; // rax
  size_t v87; // r14
  __int64 v88; // r13
  void *v89; // rax
  __int64 **v90; // rax
  unsigned __int8 *v91; // rax
  unsigned __int8 *v92; // rcx
  int v93; // eax
  void *v94; // rdi
  void *v95; // rdi
  __int64 *v96; // rbx
  __int64 **v97; // r13
  __int64 **v98; // rax
  __int64 *v99; // rsi
  __int64 *v100; // rax
  __int64 *v101; // rcx
  __int64 *v102; // rax
  __int64 v103; // rbx
  unsigned __int64 v104; // r14
  unsigned __int64 v105; // r13
  size_t v106; // rax
  size_t v107; // r15
  __int64 v108; // r14
  void *v109; // rax
  __int64 **v110; // rax
  __int128 *v111; // rcx
  __int128 *v112; // rax
  __int64 **v113; // rdi
  __int64 *v114; // rax
  unsigned __int8 *v115; // rsi
  __int64 v116; // rax
  unsigned __int64 v117; // r13
  unsigned __int64 v118; // rax
  _BYTE *v119; // rax
  unsigned __int64 v120; // r12
  unsigned __int64 v121; // [rsp+8h] [rbp-E8h]
  __int64 *v122; // [rsp+10h] [rbp-E0h]
  unsigned __int8 *v123; // [rsp+10h] [rbp-E0h]
  void *v124; // [rsp+10h] [rbp-E0h]
  unsigned __int8 *v126; // [rsp+18h] [rbp-D8h]
  size_t __srca; // [rsp+20h] [rbp-D0h]
  __int64 *__srcb; // [rsp+20h] [rbp-D0h]
  unsigned __int64 v130; // [rsp+28h] [rbp-C8h]
  void *v131; // [rsp+28h] [rbp-C8h]
  int v132; // [rsp+28h] [rbp-C8h]
  unsigned __int8 *v133; // [rsp+28h] [rbp-C8h]
  const void **v134; // [rsp+30h] [rbp-C0h]
  _QWORD *v135; // [rsp+30h] [rbp-C0h]
  __int64 **v136; // [rsp+30h] [rbp-C0h]
  __m256i *v137; // [rsp+38h] [rbp-B8h] BYREF
  __int128 v138; // [rsp+40h] [rbp-B0h] BYREF
  __m256i *p_p; // [rsp+50h] [rbp-A0h] BYREF
  __int128 v140; // [rsp+58h] [rbp-98h] BYREF
  unsigned __int64 v141; // [rsp+70h] [rbp-80h] BYREF
  __m256i *v142; // [rsp+78h] [rbp-78h] BYREF
  __m256i __p; // [rsp+80h] [rbp-70h] BYREF
  char __s[32]; // [rsp+A0h] [rbp-50h] BYREF

  v134 = (const void **)(a4 + 8);
  v8 = a4 + 16;
  while ( 1 )
  {
    v9 = *a1;
    if ( v9 != 10 )
      break;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
      return get_qerrno();
  }
  if ( v9 == 5 )
  {
    if ( (a5 & 1) != 0 )
    {
      qsnprintf(__s, 32, "%llu", a2);
      if ( *a1 != 5 )
        return (unsigned int)set_qerrno();
      memset(&__p, 0, 24);
      v40 = strlen(__s);
      v41 = v40;
      v42 = v40 + 1;
      if ( v40 == -1 )
      {
        v43 = nullptr;
      }
      else
      {
        v43 = qvector_reserve((__int64)&__p, nullptr, v40 + 1, 1u);
        __p.i64[0] = (__int64)v43;
      }
      __p.i64[1] = v42;
      memmove(v43, __s, v41);
      *(_BYTE *)(__p.i64[0] + v41) = 0;
      v113 = *((__int64 ***)a1 + 1);
      p_p = &__p;
      v114 = sub_100044870(v113, (__int64)&__p, (__int64)&byte_10009086F, (__int64 *)&p_p);
      copy_idcv((unsigned __int8 *)v114 + 56, a4);
      if ( __p.i64[0] )
      {
        __p.i64[1] = 0;
        qfree((void *)__p.i64[0]);
      }
    }
    else
    {
      v140 = 0;
      p_p = (__m256i *)&v140;
      v32 = *a4;
      if ( v32 == 7 )
      {
        v44 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 >= 2u )
        {
          v45 = 0;
          v46 = 0;
          v123 = v8;
          do
          {
            v132 = v46;
            v47 = (__int64 *)v140;
            v48 = (__int64 **)&v140;
LABEL_67:
            v49 = v48;
            if ( v47 )
            {
              while ( 1 )
              {
                v48 = (__int64 **)v47;
                v50 = v47[4];
                if ( v45 < v50 )
                {
                  v47 = *v48;
                  goto LABEL_67;
                }
                if ( v45 <= v50 )
                  break;
                v47 = v48[1];
                if ( !v47 )
                {
                  v49 = v48 + 1;
                  goto LABEL_72;
                }
              }
              v51 = (unsigned __int8 *)v48;
              v53 = v123;
            }
            else
            {
LABEL_72:
              v51 = (unsigned __int8 *)operator new(0x48u);
              *((_QWORD *)v51 + 4) = v45;
              v51[40] = 2;
              *((_OWORD *)v51 + 3) = 0;
              *((_QWORD *)v51 + 8) = 0;
              *(_OWORD *)v51 = 0;
              *((_QWORD *)v51 + 2) = v48;
              *v49 = (__int64 *)v51;
              v52 = (__int64 *)v51;
              if ( p_p->i64[0] )
              {
                p_p = (__m256i *)p_p->i64[0];
                v52 = *v49;
              }
              sub_10000C830((__int64 *)v140, v52);
              ++*((_QWORD *)&v140 + 1);
              v53 = v123;
              v44 = *(_QWORD *)v123;
            }
            v54 = (__int64 *)((char *)*v134 + v45);
            if ( !(v45 | v44) )
              v54 = qword_10008FEE0;
            v55 = v51[40];
            if ( v55 == 5 )
            {
              sub_1000380B0(*((unsigned __int8 ***)v51 + 6), v51 + 40);
            }
            else if ( v55 == 7 )
            {
              v56 = *((void **)v51 + 6);
              if ( v56 )
              {
                *((_QWORD *)v51 + 7) = 0;
                qfree(v56);
                *((_QWORD *)v51 + 6) = 0;
                *((_QWORD *)v51 + 8) = 0;
              }
            }
            v51[40] = 7;
            *((_OWORD *)v51 + 3) = 0;
            *((_QWORD *)v51 + 8) = 0;
            v57 = qvector_reserve((__int64)(v51 + 48), nullptr, 2u, 1u);
            *((_QWORD *)v51 + 6) = v57;
            *((_QWORD *)v51 + 7) = 2;
            *v57 = *(_BYTE *)v54;
            *(_BYTE *)(*((_QWORD *)v51 + 6) + 1LL) = 0;
            v46 = v132 + 1;
            v45 = v132 + 1;
            v44 = *(_QWORD *)v53;
            v58 = 0;
            if ( *(_QWORD *)v53 )
              v58 = *(_QWORD *)v53 - 1LL;
          }
          while ( v58 > v46 );
        }
      }
      else
      {
        if ( v32 != 5 )
        {
          v39 = set_qerrno();
          sub_1000446B0((__int64)&p_p, (unsigned __int8 *)v140);
          return v39;
        }
        v33 = *v134;
        memset(&__p, 0, 24);
        __p.i64[0] = (__int64)qvector_reserve((__int64)&__p, nullptr, 2u, 1u);
        __p.i64[1] = 2;
        *(_BYTE *)__p.i64[0] = 48;
        *(_BYTE *)(__p.i64[0] + 1) = 0;
        v34 = v33[1];
        v35 = v33 + 1;
        v131 = (void *)__p.i64[0];
        v135 = v35;
        if ( v34 )
        {
          v36 = (const char *)__p.i64[0];
          if ( !__p.i64[1] )
            v36 = _s1;
          do
          {
            v38 = _s1;
            if ( *(_QWORD *)(v34 + 40) )
              v38 = *(const char **)(v34 + 32);
            v37 = strcmp(v38, v36);
            if ( v37 >= 0 )
              v35 = (_QWORD *)v34;
            v34 = *(_QWORD *)(v34 + 8LL * ((unsigned int)v37 >> 31));
          }
          while ( v34 );
        }
        if ( v131 )
        {
          __p.i64[1] = 0;
          qfree(v131);
        }
        if ( v35 != v135 )
        {
          while ( 1 )
          {
            v59 = (char *)_s1;
            if ( v35[5] )
              v59 = (char *)v35[4];
            v60 = (unsigned __int8)*v59;
            if ( v60 != 48 )
              break;
            if ( v59[1] )
              goto LABEL_117;
LABEL_101:
            qsscanf(v59, "%llu", &__p);
            v62 = (__int64 *)v140;
            v63 = (__int64 **)&v140;
            v64 = (__int64 **)&v140;
            if ( (_QWORD)v140 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v63 = (__int64 **)v62;
                  v65 = v62[4];
                  if ( __p.i64[0] >= v65 )
                    break;
                  v62 = *v63;
                  v64 = v63;
                  if ( !*v63 )
                    goto LABEL_108;
                }
                if ( __p.i64[0] <= v65 )
                  break;
                v62 = v63[1];
                if ( !v62 )
                {
                  v64 = v63 + 1;
                  goto LABEL_108;
                }
              }
              v66 = v63;
            }
            else
            {
LABEL_108:
              v66 = operator new(0x48u);
              *((_QWORD *)v66 + 4) = __p.i64[0];
              *((_BYTE *)v66 + 40) = 2;
              *((_OWORD *)v66 + 3) = 0;
              *((_QWORD *)v66 + 8) = 0;
              *(_OWORD *)v66 = 0;
              *((_QWORD *)v66 + 2) = v63;
              *v64 = (__int64 *)v66;
              v67 = (__int64 *)v66;
              if ( p_p->i64[0] )
              {
                p_p = (__m256i *)p_p->i64[0];
                v67 = *v64;
              }
              sub_10000C830((__int64 *)v140, v67);
              ++*((_QWORD *)&v140 + 1);
            }
            copy_idcv((unsigned __int8 *)v66 + 40, (unsigned __int8 *)v35 + 56);
            v68 = (_QWORD *)v35[1];
            if ( v68 )
            {
              do
              {
                v69 = v68;
                v68 = (_QWORD *)*v68;
              }
              while ( v68 );
            }
            else
            {
              do
              {
                v69 = (_QWORD *)v35[2];
                v70 = *v69 == (_QWORD)v35;
                v35 = v69;
              }
              while ( !v70 );
            }
            v35 = v69;
            if ( v69 == v135 )
              goto LABEL_117;
          }
          if ( *v59 )
          {
            v61 = v59 + 1;
            while ( (v60 & 0x80u) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v60] & 0x400) != 0 )
            {
              LOBYTE(v60) = *v61++;
              if ( !(_BYTE)v60 )
                goto LABEL_101;
            }
          }
        }
      }
LABEL_117:
      v71 = 0;
      if ( (__int64)(a3 - a2) > 0 )
        v71 = a3 - a2;
      v72 = DWORD2(v140) - v71;
      v73 = *((_QWORD *)a1 + 1);
      v136 = (__int64 **)v73;
      if ( DWORD2(v140) != v71 )
      {
        v138 = 0;
        v137 = (__m256i *)&v138;
        memset(&__p, 0, 24);
        __p.i64[0] = (__int64)qvector_reserve((__int64)&__p, nullptr, 2u, 1u);
        __p.i64[1] = 2;
        *(_BYTE *)__p.i64[0] = 48;
        *(_BYTE *)(__p.i64[0] + 1) = 0;
        v74 = (unsigned __int8 *)(v73 + 8);
        v75 = *(_QWORD *)(v73 + 8);
        v124 = (void *)__p.i64[0];
        v133 = (unsigned __int8 *)(v73 + 8);
        if ( v75 )
        {
          v76 = (const char *)__p.i64[0];
          if ( !__p.i64[1] )
            v76 = _s1;
          v74 = v133;
          do
          {
            v78 = _s1;
            if ( *(_QWORD *)(v75 + 40) )
              v78 = *(const char **)(v75 + 32);
            v77 = strcmp(v78, v76);
            if ( v77 >= 0 )
              v74 = (unsigned __int8 *)v75;
            v75 = *(_QWORD *)(v75 + 8LL * ((unsigned int)v77 >> 31));
          }
          while ( v75 );
        }
        if ( v124 )
        {
          __p.i64[1] = 0;
          qfree(v124);
        }
        if ( v74 != v133 )
        {
          v79 = v72;
          while ( 1 )
          {
            v80 = (char *)_s1;
            if ( *((_QWORD *)v74 + 5) )
              v80 = *((char **)v74 + 4);
            v81 = (unsigned __int8)*v80;
            if ( v81 != 48 )
              break;
            if ( v80[1] )
              goto LABEL_170;
LABEL_143:
            qsscanf(v80, "%llu", &v141);
            if ( v141 >= a2 )
            {
              if ( v141 >= a3 )
              {
                qsnprintf(__s, 32, "%llu", v79 + v141);
                v85 = v79;
                memset(&__p, 0, 24);
                v86 = strlen(__s);
                v87 = v86;
                v88 = v86 + 1;
                if ( v86 == -1 )
                {
                  v89 = nullptr;
                }
                else
                {
                  v89 = qvector_reserve((__int64)&__p, nullptr, v86 + 1, 1u);
                  __p.i64[0] = (__int64)v89;
                }
                __p.i64[1] = v88;
                memmove(v89, __s, v87);
                *(_BYTE *)(__p.i64[0] + v87) = 0;
                v142 = &__p;
                v90 = sub_100044730((__int64 **)&v137, (__int64)&__p, (__int64)&byte_10009086F, (__int64 ***)&v142);
                copy_idcv((unsigned __int8 *)v90 + 56, v74 + 56);
                v79 = v85;
                if ( __p.i64[0] )
                {
                  __p.i64[1] = 0;
                  qfree((void *)__p.i64[0]);
                }
              }
              v91 = *((unsigned __int8 **)v74 + 1);
              v92 = v74;
              if ( v91 )
              {
                do
                {
                  v84 = v91;
                  v91 = *(unsigned __int8 **)v91;
                }
                while ( v91 );
              }
              else
              {
                do
                {
                  v84 = *((unsigned __int8 **)v92 + 2);
                  v70 = *(_QWORD *)v84 == (_QWORD)v92;
                  v92 = v84;
                }
                while ( !v70 );
              }
              if ( *v136 == (__int64 *)v74 )
                *v136 = (__int64 *)v84;
              v136[2] = (__int64 *)((char *)v136[2] - 1);
              sub_10000C9E0(v136[1], (__int64 *)v74);
              v93 = v74[56];
              if ( v93 == 5 )
              {
                sub_1000380B0(*((unsigned __int8 ***)v74 + 8), v74 + 56);
              }
              else if ( v93 == 7 )
              {
                v94 = *((void **)v74 + 8);
                if ( v94 )
                {
                  *((_QWORD *)v74 + 9) = 0;
                  qfree(v94);
                  *((_QWORD *)v74 + 8) = 0;
                  *((_QWORD *)v74 + 10) = 0;
                }
              }
              v74[56] = 2;
              *((_QWORD *)v74 + 8) = 0;
              v95 = *((void **)v74 + 4);
              if ( v95 )
              {
                *((_QWORD *)v74 + 5) = 0;
                qfree(v95);
                *((_QWORD *)v74 + 4) = 0;
                *((_QWORD *)v74 + 6) = 0;
              }
              operator delete(v74);
            }
            else
            {
              v83 = *((unsigned __int8 **)v74 + 1);
              if ( v83 )
              {
                do
                {
                  v84 = v83;
                  v83 = *(unsigned __int8 **)v83;
                }
                while ( v83 );
              }
              else
              {
                do
                {
                  v84 = *((unsigned __int8 **)v74 + 2);
                  v70 = *(_QWORD *)v84 == (_QWORD)v74;
                  v74 = v84;
                }
                while ( !v70 );
              }
            }
            v74 = v84;
            if ( v84 == v133 )
              goto LABEL_170;
          }
          if ( *v80 )
          {
            v82 = v80 + 1;
            while ( (v81 & 0x80u) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v81] & 0x400) != 0 )
            {
              LOBYTE(v81) = *v82++;
              if ( !(_BYTE)v81 )
                goto LABEL_143;
            }
          }
        }
LABEL_170:
        v96 = (__int64 *)v137;
        if ( v137 != (__m256i *)&v138 )
        {
          do
          {
            v97 = (__int64 **)sub_100043D50(v136, v133, &v142, &v141, (char *)v96 + 32);
            if ( !*v97 )
            {
              sub_100044010((__int64)&__p, (__int64)v136, (__int64)(v96 + 4));
              v98 = (__int64 **)v142;
              v99 = (__int64 *)__p.i64[0];
              *(_OWORD *)__p.i64[0] = 0;
              v99[2] = (__int64)v98;
              *v97 = v99;
              v100 = (__int64 *)**v136;
              if ( v100 )
              {
                *v136 = v100;
                v99 = *v97;
              }
              sub_10000C830(v136[1], v99);
              v136[2] = (__int64 *)((char *)v136[2] + 1);
            }
            v101 = (__int64 *)v96[1];
            if ( v101 )
            {
              do
              {
                v102 = v101;
                v101 = (__int64 *)*v101;
              }
              while ( v101 );
            }
            else
            {
              do
              {
                v102 = (__int64 *)v96[2];
                v70 = *v102 == (_QWORD)v96;
                v96 = v102;
              }
              while ( !v70 );
            }
            v96 = v102;
          }
          while ( v102 != (__int64 *)&v138 );
        }
        sub_100036070((__int64)&v137, (unsigned __int8 *)v138);
      }
      v103 = (__int64)p_p;
      v104 = a2;
      if ( p_p != (__m256i *)&v140 )
      {
        do
        {
          v105 = v104;
          qsnprintf(__s, 32, "%llu", v104);
          memset(&__p, 0, 24);
          v106 = strlen(__s);
          v107 = v106;
          v108 = v106 + 1;
          if ( v106 == -1 )
          {
            v109 = nullptr;
          }
          else
          {
            v109 = qvector_reserve((__int64)&__p, nullptr, v106 + 1, 1u);
            __p.i64[0] = (__int64)v109;
          }
          __p.i64[1] = v108;
          memmove(v109, __s, v107);
          *(_BYTE *)(__p.i64[0] + v107) = 0;
          v137 = &__p;
          v110 = sub_100044730(v136, (__int64)&__p, (__int64)&byte_10009086F, (__int64 ***)&v137);
          copy_idcv((unsigned __int8 *)v110 + 56, (unsigned __int8 *)(v103 + 40));
          if ( __p.i64[0] )
          {
            __p.i64[1] = 0;
            qfree((void *)__p.i64[0]);
          }
          v111 = *(__int128 **)(v103 + 8);
          if ( v111 )
          {
            do
            {
              v112 = v111;
              v111 = *(__int128 **)v111;
            }
            while ( v111 );
          }
          else
          {
            do
            {
              v112 = *(__int128 **)(v103 + 16);
              v70 = *(_QWORD *)v112 == v103;
              v103 = (__int64)v112;
            }
            while ( !v70 );
          }
          v104 = v105 + 1;
          v103 = (__int64)v112;
        }
        while ( v112 != &v140 );
      }
      sub_1000446B0((__int64)&p_p, (unsigned __int8 *)v140);
    }
    return 0;
  }
  if ( v9 != 7 )
    return set_qerrno();
  v122 = (__int64 *)v8;
  v11 = *((_QWORD *)a1 + 2);
  v12 = 0;
  v13 = v11 == 0;
  v14 = v11 - 1;
  if ( v13 )
    v14 = 0;
  v15 = v14 + a2;
  if ( (__int64)(v14 + a2) <= 0 )
    v15 = 0;
  if ( (a2 & 0x8000000000000000LL) == 0LL )
    v15 = a2;
  v16 = v14;
  if ( v15 < v14 )
    v16 = v15;
  v17 = a3;
  if ( (a5 & 1) != 0 )
    v17 = v16 + 1;
  if ( (__int64)(v17 + v14) > 0 )
    v12 = v17 + v14;
  if ( v17 >= 0 )
    v12 = v17;
  if ( v12 < v16 )
    v12 = v15;
  if ( v12 >= v14 )
    v12 = v14;
  __p.i8[0] = 2;
  memset(&__p.u32[2], 0, 24);
  if ( *a4 != 7
    && ((v39 = copy_idcv((unsigned __int8 *)&__p, a4)) != 0
     || (v39 = idcv_string((__int64)&__p), v134 = (const void **)&__p.i64[1], v122 = &__p.i64[2], v39)) )
  {
    v30 = 0;
  }
  else
  {
    v18 = 0;
    if ( *v122 )
      v18 = *v122 - 1;
    v19 = a1 + 8;
    __srca = v12 - v16;
    v126 = a1 + 8;
    if ( v18 < v12 - v16 )
    {
      v20 = *((_QWORD *)a1 + 2);
      v21 = 0;
      v13 = v20 == 0;
      v22 = v20 - 1;
      if ( !v13 )
        v21 = v22;
      if ( v21 > v16 )
      {
        v23 = v16;
        v24 = v21 <= v12 - v18;
        v25 = v21 - (v12 - v18);
        v26 = v16 + 1;
        if ( !v24 )
        {
          memmove((void *)(v16 + *(_QWORD *)v126), (const void *)(*(_QWORD *)v126 + v12 - v18), v25);
          v19 = a1 + 8;
          v26 = v25 + v16 + 1;
          v23 = v16 + v25;
        }
        v121 = v23;
        v27 = *((_BYTE **)a1 + 1);
        if ( *((_QWORD *)a1 + 3) < v26 )
        {
          v130 = v26;
          v27 = qvector_reserve((__int64)v19, *((void **)a1 + 1), v26, 1u);
          *(_QWORD *)v19 = v27;
          v26 = v130;
        }
        *((_QWORD *)a1 + 2) = v26;
        v27[v121] = 0;
      }
    }
    v28 = (void *)(*(_QWORD *)v19 + v16);
    v29 = __srca;
    if ( v18 < __srca )
      v29 = v18;
    memcpy(v28, *v134, v29);
    v30 = 1;
    v24 = v18 <= __srca;
    v31 = v18 - __srca;
    if ( v24 )
    {
      v39 = 0;
    }
    else
    {
      if ( __srca | *v122 )
        __srcb = (__int64 *)((char *)*v134 + __srca);
      else
        __srcb = qword_10008FEE0;
      v115 = a1 + 8;
      v116 = *((_QWORD *)a1 + 2);
      v117 = 0;
      v13 = v116 == 0;
      v118 = v116 - 1;
      if ( !v13 )
        v117 = v118;
      v119 = *((_BYTE **)a1 + 1);
      v120 = v31 + v117 + 1;
      if ( *((_QWORD *)a1 + 3) < v120 )
      {
        v119 = qvector_reserve((__int64)v126, *((void **)a1 + 1), v31 + v117 + 1, 1u);
        v115 = a1 + 8;
        *(_QWORD *)v126 = v119;
      }
      *((_QWORD *)a1 + 2) = v120;
      v119[v31 + v117] = 0;
      if ( v117 > v12 )
      {
        memmove((void *)(v12 + *(_QWORD *)v115 + v31), (const void *)(v12 + *(_QWORD *)v115), v117 - v12);
        v115 = a1 + 8;
        v117 = v12;
      }
      memmove((void *)(*(_QWORD *)v115 + v117), __srcb, v31);
      v39 = 0;
      v30 = 1;
    }
  }
  if ( __p.u8[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p.i64[1], (unsigned __int8 *)&__p);
  }
  else if ( __p.u8[0] == 7 )
  {
    if ( __p.i64[1] )
    {
      __p.i64[2] = 0;
      qfree((void *)__p.i64[1]);
    }
  }
  if ( v30 )
    return 0;
  return v39;
}
// 10008FEE0: using guessed type __int64 qword_10008FEE0[2];
// 10009086F: using guessed type char byte_10009086F;
