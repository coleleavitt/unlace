/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x00000001000332A4

//----- (00000001000332A4) ----------------------------------------------------
__int64 __fastcall set_idcv_slice(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // w23
  const void **v12; // x24
  unsigned __int8 *v13; // x25
  int v14; // w8
  __int64 result; // x0
  __int64 v16; // x8
  bool v17; // cf
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x9
  unsigned __int64 v20; // x20
  __int64 v21; // x10
  unsigned __int64 v22; // x23
  unsigned __int64 v23; // x26
  unsigned __int64 v24; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x8
  size_t v27; // x19
  unsigned __int64 v28; // x27
  unsigned __int64 v29; // x19
  int v30; // w8
  _QWORD *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x20
  unsigned __int8 *v34; // x24
  __int64 v35; // t1
  void *v36; // x22
  const char *v37; // x23
  unsigned __int8 *v38; // x25
  const char *v39; // x0
  int v40; // w0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  char v48; // w19
  size_t v49; // x19
  void *v50; // x0
  __int64 **v51; // x0
  __int64 *v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x23
  int v55; // w26
  __int64 *v56; // x9
  __int64 **v57; // x20
  __int64 **v58; // x28
  unsigned __int64 v59; // x9
  unsigned __int8 *v60; // x22
  __int64 *v61; // x1
  int v62; // w9
  char *v63; // x20
  void *v64; // x0
  _BYTE *v65; // x0
  unsigned __int64 v66; // x9
  __int64 v67; // x19
  _QWORD *v68; // x1
  size_t v69; // x2
  size_t v70; // x19
  char *v71; // x20
  _QWORD *v72; // x1
  __int64 v73; // x8
  unsigned __int64 v74; // x8
  unsigned __int64 v75; // x24
  unsigned __int64 v76; // x22
  __int64 v77; // x20
  __int64 v78; // x20
  char *v79; // x0
  __int64 v80; // x8
  unsigned __int8 *v81; // x9
  unsigned int v82; // t1
  __int64 *v83; // x9
  __int64 **v84; // x20
  __int64 **v85; // x28
  unsigned __int64 v86; // x9
  void *v87; // x23
  __int64 *v88; // x1
  unsigned __int8 *v89; // x9
  unsigned __int8 *v90; // x8
  bool v91; // zf
  __int64 **v92; // x21
  int v93; // w20
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  __int64 v97; // x5
  __int64 v98; // x6
  __int64 v99; // x7
  unsigned __int8 *v100; // x22
  __int64 *v101; // x26
  void *v102; // x24
  unsigned __int8 *v103; // x23
  const char *v104; // x25
  const char *v105; // x0
  int v106; // w0
  char v107; // w28
  char *v108; // x0
  __int64 v109; // x8
  unsigned __int8 *v110; // x9
  unsigned int v111; // t1
  unsigned __int8 *v112; // x8
  unsigned __int8 *v113; // x20
  size_t v114; // x26
  void *v115; // x0
  __int64 **v116; // x0
  unsigned __int8 *v117; // x8
  unsigned __int8 *v118; // x9
  __int64 *v119; // x0
  int v120; // w8
  _QWORD *v121; // x0
  _QWORD *v122; // x0
  __int64 *v123; // x23
  __int64 v124; // x26
  size_t v125; // x23
  void *v126; // x0
  __int64 **v127; // x0
  __int64 *v128; // x9
  __int64 **v129; // x8
  __int64 **v130; // x20
  unsigned __int8 *v131; // x9
  __int64 *v132; // x1
  void **v133; // x8
  __int64 *v134; // x8
  unsigned __int8 **v135; // x8
  void **v137; // [xsp+18h] [xbp-E8h] BYREF
  unsigned __int8 *v138[2]; // [xsp+20h] [xbp-E0h] BYREF
  __int64 **v139; // [xsp+30h] [xbp-D0h] BYREF
  __int64 *v140; // [xsp+38h] [xbp-C8h] BYREF
  __int64 v141; // [xsp+40h] [xbp-C0h]
  unsigned __int64 v142; // [xsp+50h] [xbp-B0h] BYREF
  void **v143; // [xsp+58h] [xbp-A8h] BYREF
  void *v144; // [xsp+60h] [xbp-A0h] BYREF
  void *v145; // [xsp+68h] [xbp-98h] BYREF
  _QWORD v146[2]; // [xsp+70h] [xbp-90h] BYREF
  char __s[32]; // [xsp+80h] [xbp-80h] BYREF
  int8x16x2_t v148; // 0:q0.32

  v8 = a5;
  v12 = (const void **)(a4 + 8);
  v13 = a4 + 16;
  while ( 1 )
  {
    v14 = *a1;
    if ( v14 != 10 )
      break;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
      return get_qerrno();
  }
  if ( v14 == 5 )
  {
    if ( (v8 & 1) != 0 )
    {
      qsnprintf(__s, 0x20u, "%llu", (__int64)a4, a5, a6, a7, a8, a2);
      if ( *a1 != 5 )
        return set_qerrno();
      v144 = nullptr;
      v145 = nullptr;
      v146[0] = 0;
      v49 = strlen(__s);
      v50 = nullptr;
      if ( v49 != -1 )
      {
        v50 = qvector_reserve(&v144, nullptr, v49 + 1, 1u);
        v144 = v50;
      }
      v145 = (void *)(v49 + 1);
      memmove(v50, __s, v49);
      *((_BYTE *)v144 + v49) = 0;
      v51 = *((__int64 ***)a1 + 1);
      v139 = (__int64 **)&v144;
      v52 = sub_10003D200(v51, (__int64)&v144, (__int64)&byte_1000763D7, (__int64 *)&v139);
      copy_idcv((unsigned __int8 *)v52 + 56, a4);
      if ( v144 )
      {
        v145 = nullptr;
        qfree(v144);
      }
      return 0;
    }
    v140 = nullptr;
    v141 = 0;
    v139 = &v140;
    v30 = *a4;
    if ( v30 == 7 )
    {
      v53 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 >= 2u )
      {
        v54 = 0;
        v55 = 0;
        do
        {
          v56 = v140;
          v57 = &v140;
LABEL_63:
          v58 = v57;
          if ( v56 )
          {
            while ( 1 )
            {
              v57 = (__int64 **)v56;
              v59 = v56[4];
              if ( v54 < v59 )
              {
                v56 = *v57;
                goto LABEL_63;
              }
              if ( v59 >= v54 )
                break;
              v56 = v57[1];
              if ( !v56 )
              {
                v58 = v57 + 1;
                goto LABEL_68;
              }
            }
            v60 = (unsigned __int8 *)v57;
          }
          else
          {
LABEL_68:
            v60 = (unsigned __int8 *)operator new(0x48u);
            *((_QWORD *)v60 + 4) = v54;
            v60[40] = 2;
            *((_QWORD *)v60 + 7) = 0;
            *((_QWORD *)v60 + 8) = 0;
            *((_QWORD *)v60 + 6) = 0;
            *(_QWORD *)v60 = 0;
            *((_QWORD *)v60 + 1) = 0;
            *((_QWORD *)v60 + 2) = v57;
            *v58 = (__int64 *)v60;
            v61 = (__int64 *)v60;
            if ( *v139 )
            {
              v139 = (__int64 **)*v139;
              v61 = *v58;
            }
            sub_10000B394(v140, v61);
            ++v141;
            v53 = *(_QWORD *)v13;
          }
          v62 = v60[40];
          if ( v53 | v54 )
            v63 = (char *)*v12 + v54;
          else
            v63 = &byte_1000757BC;
          if ( v62 == 5 )
          {
            sub_100031978(*((_QWORD *)v60 + 6), v60 + 40);
          }
          else if ( v62 == 7 )
          {
            v64 = *((void **)v60 + 6);
            if ( v64 )
            {
              *((_QWORD *)v60 + 7) = 0;
              qfree(v64);
              *((_QWORD *)v60 + 6) = 0;
              *((_QWORD *)v60 + 8) = 0;
            }
          }
          *((_QWORD *)v60 + 6) = 0;
          v60[40] = 7;
          *((_QWORD *)v60 + 7) = 0;
          *((_QWORD *)v60 + 8) = 0;
          v65 = qvector_reserve((_QWORD *)v60 + 6, nullptr, 2u, 1u);
          *((_QWORD *)v60 + 6) = v65;
          *((_QWORD *)v60 + 7) = 2;
          *v65 = *v63;
          *(_BYTE *)(*((_QWORD *)v60 + 6) + 1LL) = 0;
          v54 = ++v55;
          v53 = *(_QWORD *)v13;
          v66 = *(_QWORD *)v13 - 1LL;
          if ( !*(_QWORD *)v13 )
            v66 = 0;
        }
        while ( v66 > v55 );
      }
      goto LABEL_143;
    }
    if ( v30 != 5 )
    {
      v67 = set_qerrno();
      sub_10003D044((__int64)&v139, (unsigned __int8 *)v140);
      return v67;
    }
    v31 = *v12;
    v144 = nullptr;
    v145 = nullptr;
    v146[0] = 0;
    v144 = qvector_reserve(&v144, nullptr, 2u, 1u);
    v145 = (void *)2;
    *(_BYTE *)v144 = 48;
    *((_BYTE *)v144 + 1) = 0;
    v35 = v31[1];
    v34 = (unsigned __int8 *)(v31 + 1);
    v33 = v35;
    v36 = v144;
    if ( v35 )
    {
      if ( v145 )
        v37 = (const char *)v144;
      else
        v37 = &byte_100075A30;
      v38 = v34;
      do
      {
        if ( *(_QWORD *)(v33 + 40) )
          v39 = *(const char **)(v33 + 32);
        else
          v39 = &byte_100075A30;
        v40 = strcmp(v39, v37);
        if ( v40 >= 0 )
          v38 = (unsigned __int8 *)v33;
        v33 = *(_QWORD *)(v33 + (((unsigned int)v40 >> 28) & 8));
      }
      while ( v33 );
      if ( !v36 )
      {
LABEL_114:
        if ( v38 != v34 )
        {
          while ( 1 )
          {
            v79 = *((_QWORD *)v38 + 5) ? *((char **)v38 + 4) : &byte_100075A30;
            v80 = (unsigned __int8)*v79;
            if ( (_DWORD)v80 != 48 )
              break;
            if ( v79[1] )
              goto LABEL_143;
LABEL_126:
            qsscanf(v79, "%llu", v32, (__int64)a4, a5, a6, a7, a8, (char)&v144);
            v83 = v140;
            v84 = &v140;
            v85 = &v140;
            if ( v140 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v84 = (__int64 **)v83;
                  v86 = v83[4];
                  if ( (unsigned __int64)v144 >= v86 )
                    break;
                  v83 = *v84;
                  v85 = v84;
                  if ( !*v84 )
                    goto LABEL_133;
                }
                if ( v86 >= (unsigned __int64)v144 )
                  break;
                v83 = v84[1];
                if ( !v83 )
                {
                  v85 = v84 + 1;
                  goto LABEL_133;
                }
              }
              v87 = v84;
            }
            else
            {
LABEL_133:
              v87 = operator new(0x48u);
              *((_QWORD *)v87 + 4) = v144;
              *((_BYTE *)v87 + 40) = 2;
              *((_QWORD *)v87 + 7) = 0;
              *((_QWORD *)v87 + 8) = 0;
              *((_QWORD *)v87 + 6) = 0;
              *(_QWORD *)v87 = 0;
              *((_QWORD *)v87 + 1) = 0;
              *((_QWORD *)v87 + 2) = v84;
              *v85 = (__int64 *)v87;
              v88 = (__int64 *)v87;
              if ( *v139 )
              {
                v139 = (__int64 **)*v139;
                v88 = *v85;
              }
              sub_10000B394(v140, v88);
              ++v141;
            }
            copy_idcv((unsigned __int8 *)v87 + 40, v38 + 56);
            v89 = *((unsigned __int8 **)v38 + 1);
            if ( v89 )
            {
              do
              {
                v90 = v89;
                v89 = *(unsigned __int8 **)v89;
              }
              while ( v89 );
            }
            else
            {
              do
              {
                v90 = *((unsigned __int8 **)v38 + 2);
                v91 = *(_QWORD *)v90 == (_QWORD)v38;
                v38 = v90;
              }
              while ( !v91 );
            }
            v38 = v90;
            if ( v90 == v34 )
              goto LABEL_143;
          }
          if ( *v79 )
          {
            v81 = (unsigned __int8 *)(v79 + 1);
            while ( (v80 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v80] & 0x400) != 0 )
            {
              v82 = *v81++;
              v80 = v82;
              if ( !v82 )
                goto LABEL_126;
            }
          }
        }
LABEL_143:
        v92 = *((__int64 ***)a1 + 1);
        v93 = v141 - ((a3 - a2) & ~(unsigned int)((__int64)(a3 - a2) >> 63));
        if ( !v93 )
        {
LABEL_200:
          v124 = (__int64)v139;
          if ( v139 != &v140 )
          {
            do
            {
              qsnprintf(__s, 0x20u, "%llu", (__int64)a4, a5, a6, a7, a8, a2);
              v144 = nullptr;
              v145 = nullptr;
              v146[0] = 0;
              v125 = strlen(__s);
              v126 = nullptr;
              if ( v125 != -1 )
              {
                v126 = qvector_reserve(&v144, nullptr, v125 + 1, 1u);
                v144 = v126;
              }
              v145 = (void *)(v125 + 1);
              memmove(v126, __s, v125);
              *((_BYTE *)v144 + v125) = 0;
              v137 = &v144;
              v127 = sub_10003D0C8(v92, (__int64)&v144, (__int64)&byte_1000763D7, (__int64 ***)&v137);
              copy_idcv((unsigned __int8 *)v127 + 56, (unsigned __int8 *)(v124 + 40));
              if ( v144 )
              {
                v145 = nullptr;
                qfree(v144);
              }
              v128 = *(__int64 **)(v124 + 8);
              if ( v128 )
              {
                do
                {
                  v129 = (__int64 **)v128;
                  v128 = (__int64 *)*v128;
                }
                while ( v128 );
              }
              else
              {
                do
                {
                  v129 = *(__int64 ***)(v124 + 16);
                  v91 = *v129 == (__int64 *)v124;
                  v124 = (__int64)v129;
                }
                while ( !v91 );
              }
              LOBYTE(a2) = a2 + 1;
              v124 = (__int64)v129;
            }
            while ( v129 != &v140 );
          }
          sub_10003D044((__int64)&v139, (unsigned __int8 *)v140);
          return 0;
        }
        v138[0] = nullptr;
        v138[1] = nullptr;
        v137 = (void **)v138;
        v144 = nullptr;
        v145 = nullptr;
        v146[0] = 0;
        v144 = qvector_reserve(&v144, nullptr, 2u, 1u);
        v145 = (void *)2;
        *(_BYTE *)v144 = 48;
        *((_BYTE *)v144 + 1) = 0;
        v100 = (unsigned __int8 *)(v92 + 1);
        v101 = v92[1];
        v102 = v144;
        v103 = (unsigned __int8 *)(v92 + 1);
        if ( v101 )
        {
          if ( v145 )
            v104 = (const char *)v144;
          else
            v104 = &byte_100075A30;
          v103 = (unsigned __int8 *)(v92 + 1);
          do
          {
            if ( v101[5] )
              v105 = (const char *)v101[4];
            else
              v105 = &byte_100075A30;
            v106 = strcmp(v105, v104);
            if ( v106 >= 0 )
              v103 = (unsigned __int8 *)v101;
            v101 = *(__int64 **)((char *)v101 + (((unsigned int)v106 >> 28) & 8));
          }
          while ( v101 );
        }
        if ( v102 )
        {
          v145 = nullptr;
          qfree(v102);
        }
        if ( v103 != v100 )
        {
          v107 = v93;
          while ( 1 )
          {
            v108 = *((_QWORD *)v103 + 5) ? *((char **)v103 + 4) : &byte_100075A30;
            v109 = (unsigned __int8)*v108;
            if ( (_DWORD)v109 != 48 )
              break;
            if ( v108[1] )
              goto LABEL_198;
LABEL_170:
            qsscanf(v108, "%llu", v94, v95, v96, v97, v98, v99, (char)&v142);
            if ( v142 >= a2 )
            {
              if ( v142 >= a3 )
              {
                qsnprintf(__s, 0x20u, "%llu", v95, v96, v97, v98, v99, v142 + v107);
                v144 = nullptr;
                v145 = nullptr;
                v146[0] = 0;
                v114 = strlen(__s);
                v115 = nullptr;
                if ( v114 != -1 )
                {
                  v115 = qvector_reserve(&v144, nullptr, v114 + 1, 1u);
                  v144 = v115;
                }
                v145 = (void *)(v114 + 1);
                memmove(v115, __s, v114);
                *((_BYTE *)v144 + v114) = 0;
                v143 = &v144;
                v116 = sub_10003D0C8((__int64 **)&v137, (__int64)&v144, (__int64)&byte_1000763D7, (__int64 ***)&v143);
                copy_idcv((unsigned __int8 *)v116 + 56, v103 + 56);
                if ( v144 )
                {
                  v145 = nullptr;
                  qfree(v144);
                }
              }
              v117 = *((unsigned __int8 **)v103 + 1);
              v118 = v103;
              if ( v117 )
              {
                do
                {
                  v113 = v117;
                  v117 = *(unsigned __int8 **)v117;
                }
                while ( v117 );
              }
              else
              {
                do
                {
                  v113 = *((unsigned __int8 **)v118 + 2);
                  v91 = *(_QWORD *)v113 == (_QWORD)v118;
                  v118 = v113;
                }
                while ( !v91 );
              }
              if ( *v92 == (__int64 *)v103 )
                *v92 = (__int64 *)v113;
              v119 = v92[1];
              v92[2] = (__int64 *)((char *)v92[2] - 1);
              sub_10000B570(v119, (__int64 *)v103);
              v120 = v103[56];
              if ( v120 == 5 )
              {
                sub_100031978(*((_QWORD *)v103 + 8), v103 + 56);
              }
              else if ( v120 == 7 )
              {
                v121 = *((_QWORD **)v103 + 8);
                if ( v121 )
                {
                  *((_QWORD *)v103 + 9) = 0;
                  qfree(v121);
                  *((_QWORD *)v103 + 8) = 0;
                  *((_QWORD *)v103 + 10) = 0;
                }
              }
              v103[56] = 2;
              *((_QWORD *)v103 + 8) = 0;
              v122 = *((_QWORD **)v103 + 4);
              if ( v122 )
              {
                *((_QWORD *)v103 + 5) = 0;
                qfree(v122);
                *((_QWORD *)v103 + 4) = 0;
                *((_QWORD *)v103 + 6) = 0;
              }
              operator delete(v103);
            }
            else
            {
              v112 = *((unsigned __int8 **)v103 + 1);
              if ( v112 )
              {
                do
                {
                  v113 = v112;
                  v112 = *(unsigned __int8 **)v112;
                }
                while ( v112 );
              }
              else
              {
                do
                {
                  v113 = *((unsigned __int8 **)v103 + 2);
                  v91 = *(_QWORD *)v113 == (_QWORD)v103;
                  v103 = v113;
                }
                while ( !v91 );
              }
            }
            v103 = v113;
            if ( v113 == v100 )
              goto LABEL_198;
          }
          if ( *v108 )
          {
            v110 = (unsigned __int8 *)(v108 + 1);
            while ( (v109 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[v109] & 0x400) != 0 )
            {
              v111 = *v110++;
              v109 = v111;
              if ( !v111 )
                goto LABEL_170;
            }
          }
        }
LABEL_198:
        v123 = (__int64 *)v137;
        if ( v137 == (void **)v138 )
        {
LABEL_199:
          sub_10002FA40((__int64)&v137, v138[0]);
          goto LABEL_200;
        }
        while ( 1 )
        {
          v130 = (__int64 **)sub_10003C74C(v92, v92 + 1, &v143, &v142, (__int64)(v123 + 4));
          if ( *v130 )
          {
            v131 = (unsigned __int8 *)v123[1];
            if ( v131 )
              goto LABEL_220;
          }
          else
          {
            sub_10003C9AC((__int64)v92, (__int64)(v123 + 4), (__int64)&v144);
            v133 = v143;
            v132 = (__int64 *)v144;
            *(_QWORD *)v144 = 0;
            v132[1] = 0;
            v132[2] = (__int64)v133;
            *v130 = v132;
            v134 = (__int64 *)**v92;
            if ( v134 )
            {
              *v92 = v134;
              v132 = *v130;
            }
            sub_10000B394(v92[1], v132);
            v92[2] = (__int64 *)((char *)v92[2] + 1);
            v131 = (unsigned __int8 *)v123[1];
            if ( v131 )
            {
              do
              {
LABEL_220:
                v135 = (unsigned __int8 **)v131;
                v131 = *(unsigned __int8 **)v131;
              }
              while ( v131 );
              goto LABEL_213;
            }
          }
          do
          {
            v135 = (unsigned __int8 **)v123[2];
            v91 = *v135 == (unsigned __int8 *)v123;
            v123 = (__int64 *)v135;
          }
          while ( !v91 );
LABEL_213:
          v123 = (__int64 *)v135;
          if ( v135 == v138 )
            goto LABEL_199;
        }
      }
    }
    else
    {
      v38 = v34;
      if ( !v144 )
        goto LABEL_114;
    }
    v145 = nullptr;
    qfree(v36);
    goto LABEL_114;
  }
  if ( v14 != 7 )
    return set_qerrno();
  v16 = *((_QWORD *)a1 + 2);
  v17 = v16 != 0;
  v18 = v16 - 1;
  if ( !v17 )
    v18 = 0;
  v19 = (v18 + a2) & ~((__int64)(v18 + a2) >> 63);
  if ( a2 >= 0 )
    v19 = a2;
  if ( v19 >= v18 )
    v20 = v18;
  else
    v20 = v19;
  v21 = a3;
  if ( (v8 & 1) != 0 )
    v21 = v20 + 1;
  if ( v21 < 0 )
    v21 = (v21 + v18) & ~((__int64)(v21 + v18) >> 63);
  if ( v21 >= v20 )
    v19 = v21;
  if ( v19 >= v18 )
    v22 = v18;
  else
    v22 = v19;
  LOBYTE(v144) = 2;
  v146[0] = 0;
  v146[1] = 0;
  v145 = nullptr;
  if ( *a4 != 7
    && ((result = copy_idcv((unsigned __int8 *)&v144, a4), (_DWORD)result)
     || (result = idcv_string((unsigned __int8 *)&v144, v148, v41, v42, v43, v44, v45, v46, v47),
         v12 = (const void **)&v145,
         v13 = (unsigned __int8 *)v146,
         (_DWORD)result)) )
  {
    v48 = 0;
  }
  else
  {
    if ( *(_QWORD *)v13 )
      v23 = *(_QWORD *)v13 - 1LL;
    else
      v23 = 0;
    v24 = v22 - v20;
    if ( v23 < v22 - v20 )
    {
      v25 = *((_QWORD *)a1 + 2);
      v17 = v25 != 0;
      v26 = v25 - 1;
      if ( !v17 )
        v26 = 0;
      if ( v26 > v20 )
      {
        v27 = v26 - (v22 - v23);
        if ( v26 <= v22 - v23 )
        {
          v29 = v20 + 1;
          v28 = v20;
        }
        else
        {
          memmove((void *)(*((_QWORD *)a1 + 1) + v20), (const void *)(*((_QWORD *)a1 + 1) + v22 - v23), v27);
          v28 = v27 + v20;
          v29 = v27 + v20 + 1;
        }
        v68 = *((_QWORD **)a1 + 1);
        if ( *((_QWORD *)a1 + 3) < v29 )
        {
          v68 = qvector_reserve((_QWORD *)a1 + 1, v68, v29, 1u);
          *((_QWORD *)a1 + 1) = v68;
        }
        *((_QWORD *)a1 + 2) = v29;
        *((_BYTE *)v68 + v28) = 0;
      }
    }
    if ( v23 >= v24 )
      v69 = v22 - v20;
    else
      v69 = v23;
    memcpy((void *)(*((_QWORD *)a1 + 1) + v20), *v12, v69);
    v70 = v23 - v24;
    if ( v23 > v24 )
    {
      if ( *(_QWORD *)v13 | v24 )
        v71 = (char *)*v12 + v24;
      else
        v71 = &byte_1000757BC;
      v72 = *((_QWORD **)a1 + 1);
      v73 = *((_QWORD *)a1 + 2);
      v17 = v73 != 0;
      v74 = v73 - 1;
      if ( v17 )
        v75 = v74;
      else
        v75 = 0;
      v76 = v75 + v70 + 1;
      if ( *((_QWORD *)a1 + 3) < v76 )
      {
        v72 = qvector_reserve((_QWORD *)a1 + 1, v72, v75 + v70 + 1, 1u);
        *((_QWORD *)a1 + 1) = v72;
      }
      *((_QWORD *)a1 + 2) = v76;
      *((_BYTE *)v72 + v75 + v70) = 0;
      if ( v75 > v22 )
      {
        memmove((void *)(*((_QWORD *)a1 + 1) + v22 + v70), (const void *)(*((_QWORD *)a1 + 1) + v22), v75 - v22);
        v75 = v22;
      }
      memmove((void *)(*((_QWORD *)a1 + 1) + v75), v71, v70);
    }
    result = 0;
    v48 = 1;
  }
  if ( (unsigned __int8)v144 == 5 )
  {
    v78 = result;
    sub_100031978((__int64)v145, (unsigned __int8 *)&v144);
    result = v78;
  }
  else if ( (unsigned __int8)v144 == 7 )
  {
    if ( v145 )
    {
      v146[0] = 0;
      v77 = result;
      qfree(v145);
      result = v77;
    }
  }
  if ( (v48 & 1) != 0 )
    return 0;
  return result;
}
// 100033538: variable 'v148' is possibly undefined
// 100033538: variable 'v41' is possibly undefined
// 100033538: variable 'v42' is possibly undefined
// 100033538: variable 'v43' is possibly undefined
// 100033538: variable 'v44' is possibly undefined
// 100033538: variable 'v45' is possibly undefined
// 100033538: variable 'v46' is possibly undefined
// 100033538: variable 'v47' is possibly undefined
// 100033564: variable 'a4' is possibly undefined
// 100033564: variable 'a5' is possibly undefined
// 100033564: variable 'a6' is possibly undefined
// 100033564: variable 'a7' is possibly undefined
// 100033564: variable 'a8' is possibly undefined
// 100033968: variable 'v32' is possibly undefined
// 100033B9C: variable 'v94' is possibly undefined
// 100033B9C: variable 'v95' is possibly undefined
// 100033B9C: variable 'v96' is possibly undefined
// 100033B9C: variable 'v97' is possibly undefined
// 100033B9C: variable 'v98' is possibly undefined
// 100033B9C: variable 'v99' is possibly undefined
// 1000757BC: using guessed type char byte_1000757BC;
// 100075A30: using guessed type char byte_100075A30;
// 1000763D7: using guessed type char byte_1000763D7;
