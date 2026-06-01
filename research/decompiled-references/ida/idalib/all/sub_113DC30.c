__int64 __fastcall sub_113DC30(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v22; // r15
  __int64 v23; // rax
  const char **v24; // rax
  const char *v25; // rbx
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbp
  _BYTE *v30; // r15
  signed __int64 v31; // r12
  unsigned __int8 *v32; // rbp
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  void **v38; // r12
  _BYTE *v39; // rdi
  __int64 v40; // rax
  void **v41; // rbp
  unsigned __int64 v42; // rax
  void **v43; // r12
  void **v44; // rbx
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // rbx
  void **v48; // r12
  _BYTE *v49; // r15
  signed __int64 v50; // r13
  unsigned __int8 *v51; // r12
  _QWORD *v52; // rax
  void **v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  void **v57; // r13
  unsigned __int8 *v58; // rdi
  void *v59; // rax
  void **v60; // r12
  void **v61; // rbx
  void **v62; // rdi
  void **v63; // rdi
  void **v64; // rbx
  void **v65; // r12
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // r12d
  __int64 v70; // rax
  __int64 v71; // rdx
  _BYTE *v72; // rax
  signed __int64 v73; // rdx
  size_t v74; // rdx
  size_t v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rdx
  int v80; // eax
  unsigned __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // r14
  __int64 v85; // rdx
  __int64 v86; // r14
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r14
  __int64 v90; // rdx
  __int64 v91; // r14
  void *v92; // rdi
  __int64 v93; // [rsp+0h] [rbp-168h]
  __int64 v94; // [rsp+0h] [rbp-168h]
  void *src[2]; // [rsp+10h] [rbp-158h] BYREF
  __int64 v97; // [rsp+20h] [rbp-148h] BYREF
  void *v98[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v99; // [rsp+40h] [rbp-128h] BYREF
  void *v100; // [rsp+50h] [rbp-118h]
  size_t v101; // [rsp+58h] [rbp-110h]
  _QWORD v102[2]; // [rsp+60h] [rbp-108h] BYREF
  void *v103; // [rsp+70h] [rbp-F8h]
  size_t v104; // [rsp+78h] [rbp-F0h]
  _QWORD v105[2]; // [rsp+80h] [rbp-E8h] BYREF
  void **v106; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v107; // [rsp+98h] [rbp-D0h]
  __int64 v108; // [rsp+A0h] [rbp-C8h]
  void *v109; // [rsp+B0h] [rbp-B8h]
  __int64 v110; // [rsp+C0h] [rbp-A8h] BYREF
  __int16 v111; // [rsp+D0h] [rbp-98h]
  void *v112; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v113; // [rsp+E8h] [rbp-80h]
  __int64 v114; // [rsp+F0h] [rbp-78h]
  void *v115; // [rsp+100h] [rbp-68h]
  __int64 v116; // [rsp+110h] [rbp-58h] BYREF
  __int16 v117; // [rsp+120h] [rbp-48h]

  LODWORD(v112) = 2912;
  v5 = sub_21B6DA0(a2, &v112, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2912) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
    goto LABEL_5;
  do
  {
    v22 = *v7;
    v23 = *(_QWORD *)(*v7 + 16LL);
    if ( !v23 )
      v23 = *v7;
    ++v7;
    *(_BYTE *)(v23 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2912) )
    {
      if ( v8 == ++v7 )
        goto LABEL_18;
    }
  }
  while ( v7 != v8 );
LABEL_18:
  v24 = *(const char ***)(v22 + 48);
  v25 = *v24;
  if ( !*v24 )
  {
    v29 = *a1;
    goto LABEL_69;
  }
  v26 = strlen(*v24);
  if ( v26 == 4 )
  {
    if ( *(_DWORD *)v25 != 1869903201 )
    {
      if ( *(_DWORD *)v25 == 892432483 )
      {
LABEL_105:
        v14 = 3;
        goto LABEL_106;
      }
      if ( *(_DWORD *)v25 != 1952870259 )
        goto LABEL_33;
      return 1;
    }
LABEL_5:
    v9 = sub_22B7480(a3);
    v11 = sub_229CB60(v9, v10);
    v12 = sub_22B7480(a3);
    if ( (((unsigned int)sub_229CAC0(v12, v13) - 7) & 0xFFFFFFFD) == 0
      || v11 > 6 && (v27 = sub_22B7480(a3), (unsigned int)sub_229CC10(v27, v28) != 3) )
    {
      v14 = 3;
      v15 = sub_22B7480(a3);
      v17 = sub_229CB60(v15, v16);
      v18 = sub_22B7480(a3);
      v20 = sub_229CAC0(v18, v19);
      if ( v20 == 8 || v17 > 6 && v20 != 34 )
        return v14;
    }
    return 1;
  }
  if ( v26 != 8 )
    goto LABEL_33;
  if ( *(_QWORD *)v25 != 0x7772757264697074LL )
  {
    if ( *(_QWORD *)v25 != 0x6F72757264697074LL )
    {
      if ( *(_QWORD *)v25 == 0x7772707264697074LL )
      {
        v14 = 4;
        goto LABEL_106;
      }
LABEL_33:
      v29 = *a1;
      if ( strlen(v25) )
      {
        sub_FC70B0((__int64)&v112, v29, 0, 386);
        sub_21B5FF0(v98, v22, a2);
        v30 = v98[0];
        v31 = (signed __int64)v98[1];
        v32 = (unsigned __int8 *)v112;
        if ( !v112 )
        {
          v81 = v113;
          v82 = *(_DWORD *)(v113 + 14976);
          if ( v82 )
          {
            v88 = (unsigned int)(v82 - 1);
            *(_DWORD *)(v113 + 14976) = v88;
            v32 = *(unsigned __int8 **)(v81 + 8 * v88 + 14848);
            v89 = *((unsigned int *)v32 + 134);
            *v32 = 0;
            v90 = *((_QWORD *)v32 + 66);
            *((_DWORD *)v32 + 106) = 0;
            v91 = v90 + (v89 << 6);
            while ( v90 != v91 )
            {
              while ( 1 )
              {
                v91 -= 64;
                v92 = *(void **)(v91 + 24);
                if ( v92 == (void *)(v91 + 40) )
                  break;
                v94 = v90;
                operator delete(v92);
                v90 = v94;
                if ( v94 == v91 )
                  goto LABEL_160;
              }
            }
LABEL_160:
            *((_DWORD *)v32 + 134) = 0;
          }
          else
          {
            v32 = (unsigned __int8 *)operator new(0x3A0u);
            *v32 = 0;
            *((_QWORD *)v32 + 12) = v32 + 112;
            *((_QWORD *)v32 + 16) = v32 + 144;
            *((_QWORD *)v32 + 20) = v32 + 176;
            *((_QWORD *)v32 + 24) = v32 + 208;
            *((_QWORD *)v32 + 28) = v32 + 240;
            *((_QWORD *)v32 + 32) = v32 + 272;
            *((_QWORD *)v32 + 36) = v32 + 304;
            *((_QWORD *)v32 + 40) = v32 + 336;
            *((_QWORD *)v32 + 44) = v32 + 368;
            *((_QWORD *)v32 + 48) = v32 + 400;
            *((_QWORD *)v32 + 52) = v32 + 432;
            *((_QWORD *)v32 + 13) = 0;
            v32[112] = 0;
            *((_QWORD *)v32 + 17) = 0;
            v32[144] = 0;
            *((_QWORD *)v32 + 21) = 0;
            v32[176] = 0;
            *((_QWORD *)v32 + 25) = 0;
            v32[208] = 0;
            *((_QWORD *)v32 + 29) = 0;
            v32[240] = 0;
            *((_QWORD *)v32 + 33) = 0;
            v32[272] = 0;
            *((_QWORD *)v32 + 37) = 0;
            v32[304] = 0;
            *((_QWORD *)v32 + 41) = 0;
            v32[336] = 0;
            *((_QWORD *)v32 + 45) = 0;
            v32[368] = 0;
            *((_QWORD *)v32 + 49) = 0;
            v32[400] = 0;
            *((_QWORD *)v32 + 53) = 0x800000000LL;
            *((_QWORD *)v32 + 66) = v32 + 544;
            *((_QWORD *)v32 + 67) = 0x600000000LL;
          }
          v112 = v32;
        }
        v32[*v32 + 1] = 0;
        v103 = v105;
        if ( !&v30[v31] || v30 )
        {
          if ( (unsigned __int64)v31 <= 0xF )
          {
            if ( v31 == 1 )
            {
              LOBYTE(v105[0]) = *v30;
              v33 = v105;
              goto LABEL_40;
            }
            v33 = v105;
            if ( !v31 )
            {
LABEL_40:
              v104 = v31;
              *((_BYTE *)v33 + v31) = 0;
              v34 = v112;
              v35 = *(unsigned __int8 *)v112;
              *(_BYTE *)v112 = v35 + 1;
              v36 = (unsigned __int8)v35;
              v37 = 4 * (v35 + 3);
              v38 = (void **)&v34[v37];
              v39 = (_BYTE *)v34[v37];
              if ( v103 == v105 )
              {
                v75 = v104;
                if ( v104 )
                {
                  if ( v104 == 1 )
                    *v39 = v105[0];
                  else
                    memcpy(v39, v103, v104);
                  v75 = v104;
                  v39 = *v38;
                }
                v38[1] = (void *)v75;
                v39[v75] = 0;
                v39 = v103;
                goto LABEL_44;
              }
              if ( v39 == (_BYTE *)&v34[v37 + 2] )
              {
                *v38 = v103;
                v38[1] = (void *)v104;
                v38[2] = (void *)v105[0];
              }
              else
              {
                v40 = v34[4 * v36 + 14];
                *v38 = v103;
                v38[1] = (void *)v104;
                v38[2] = (void *)v105[0];
                if ( v39 )
                {
                  v103 = v39;
                  v105[0] = v40;
LABEL_44:
                  v104 = 0;
                  *v39 = 0;
                  if ( v103 != v105 )
                    operator delete(v103);
                  if ( v98[0] != &v99 )
                    operator delete(v98[0]);
                  if ( (_BYTE)v117 )
                  {
                    sub_FC7790(v114, (__int64 *)&v112, SHIBYTE(v117));
                    v114 = 0;
                    v117 = 0;
                  }
                  if ( v115 != &v116 )
                    operator delete(v115);
                  v41 = (void **)v112;
                  if ( !v112 )
                    return 0;
                  v42 = v113;
                  if ( !v113 )
                    return 0;
                  if ( (unsigned __int64)v112 >= v113 && (unsigned __int64)v112 <= v113 + 14848 )
                  {
LABEL_136:
                    v76 = *(unsigned int *)(v42 + 14976);
                    v14 = 0;
                    *(_DWORD *)(v42 + 14976) = v76 + 1;
                    *(_QWORD *)(v42 + 8 * v76 + 14848) = v41;
                    return v14;
                  }
                  v43 = *((void ***)v112 + 66);
                  v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v112 + 134)];
                  if ( v43 != v44 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v44 -= 8;
                        v45 = (void **)v44[3];
                        if ( v45 == v44 + 5 )
                          break;
                        operator delete(v45);
                        if ( v43 == v44 )
                          goto LABEL_58;
                      }
                    }
                    while ( v43 != v44 );
LABEL_58:
                    v44 = (void **)v41[66];
                  }
                  if ( v44 != v41 + 68 )
                    free(v44);
                  v46 = (void **)v41[52];
                  if ( v46 != v41 + 54 )
                    free(v46);
                  v47 = v41 + 48;
                  v48 = v41 + 8;
                  do
                  {
                    while ( *v47 != v47 + 2 )
                    {
                      operator delete(*v47);
                      v47 -= 4;
                      if ( v48 == v47 )
                        goto LABEL_66;
                    }
                    v47 -= 4;
                  }
                  while ( v47 != v48 );
LABEL_66:
                  operator delete(v41, 0x3A0u);
                  return 0;
                }
              }
              v39 = v105;
              v103 = v105;
              goto LABEL_44;
            }
LABEL_114:
            memcpy(v33, v30, v31);
            v33 = v103;
            goto LABEL_40;
          }
          if ( v31 >= 0 )
          {
            v33 = (_QWORD *)operator new(v31 + 1);
            v105[0] = v31;
            v103 = v33;
            goto LABEL_114;
          }
LABEL_164:
          std::__throw_length_error("basic_string::_M_create");
        }
LABEL_163:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      }
LABEL_69:
      sub_FC70B0((__int64)&v106, v29, 0, 417);
      sub_21B5FF0(src, v22, a2);
      v49 = src[0];
      v50 = (signed __int64)src[1];
      v51 = (unsigned __int8 *)v106;
      if ( !v106 )
      {
        v79 = v107;
        v80 = *(_DWORD *)(v107 + 14976);
        if ( v80 )
        {
          v83 = (unsigned int)(v80 - 1);
          *(_DWORD *)(v107 + 14976) = v83;
          v51 = *(unsigned __int8 **)(v79 + 8 * v83 + 14848);
          v84 = *((unsigned int *)v51 + 134);
          v85 = *((_QWORD *)v51 + 66);
          *v51 = 0;
          *((_DWORD *)v51 + 106) = 0;
          v86 = v85 + (v84 << 6);
          while ( v85 != v86 )
          {
            while ( 1 )
            {
              v86 -= 64;
              v87 = *(void **)(v86 + 24);
              if ( v87 == (void *)(v86 + 40) )
                break;
              v93 = v85;
              operator delete(v87);
              v85 = v93;
              if ( v93 == v86 )
                goto LABEL_155;
            }
          }
LABEL_155:
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          *((_QWORD *)v51 + 66) = v51 + 544;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        v106 = (void **)v51;
      }
      v51[*v51 + 1] = 0;
      v100 = v102;
      if ( &v49[v50] && !v49 )
        goto LABEL_163;
      if ( (unsigned __int64)v50 > 0xF )
      {
        if ( v50 < 0 )
          goto LABEL_164;
        v52 = (_QWORD *)operator new(v50 + 1);
        v102[0] = v50;
        v100 = v52;
      }
      else
      {
        if ( v50 == 1 )
        {
          LOBYTE(v102[0]) = *v49;
          v52 = v102;
          goto LABEL_75;
        }
        v52 = v102;
        if ( !v50 )
        {
LABEL_75:
          v101 = v50;
          *((_BYTE *)v52 + v50) = 0;
          v53 = v106;
          v54 = *(unsigned __int8 *)v106;
          *(_BYTE *)v106 = v54 + 1;
          v55 = (unsigned __int8)v54;
          v56 = 4 * (v54 + 3);
          v57 = &v53[v56];
          v58 = (unsigned __int8 *)v53[v56];
          if ( v100 == v102 )
          {
            v74 = v101;
            if ( v101 )
            {
              if ( v101 == 1 )
                *v58 = v102[0];
              else
                memcpy(v58, v100, v101);
              v74 = v101;
              v58 = (unsigned __int8 *)*v57;
            }
            v57[1] = (void *)v74;
            v58[v74] = 0;
            v58 = (unsigned __int8 *)v100;
            goto LABEL_79;
          }
          if ( v58 == (unsigned __int8 *)&v53[v56 + 2] )
          {
            *v57 = v100;
            v57[1] = (void *)v101;
            v57[2] = (void *)v102[0];
          }
          else
          {
            v59 = v53[4 * v55 + 14];
            *v57 = v100;
            v57[1] = (void *)v101;
            v57[2] = (void *)v102[0];
            if ( v58 )
            {
              v100 = v58;
              v102[0] = v59;
LABEL_79:
              v101 = 0;
              *v58 = 0;
              if ( v100 != v102 )
                operator delete(v100);
              if ( src[0] != &v97 )
                operator delete(src[0]);
              if ( (_BYTE)v111 )
              {
                sub_FC7790(v108, (__int64 *)&v106, SHIBYTE(v111));
                v108 = 0;
                v111 = 0;
              }
              if ( v109 != &v110 )
                operator delete(v109);
              v41 = v106;
              if ( !v106 )
                return 0;
              v42 = v107;
              if ( !v107 )
                return 0;
              if ( (unsigned __int64)v106 >= v107 && (unsigned __int64)v106 <= v107 + 14848 )
                goto LABEL_136;
              v60 = (void **)v106[66];
              v61 = &v60[8 * (unsigned __int64)*((unsigned int *)v106 + 134)];
              if ( v60 != v61 )
              {
                do
                {
                  while ( 1 )
                  {
                    v61 -= 8;
                    v62 = (void **)v61[3];
                    if ( v62 == v61 + 5 )
                      break;
                    operator delete(v62);
                    if ( v60 == v61 )
                      goto LABEL_93;
                  }
                }
                while ( v60 != v61 );
LABEL_93:
                v61 = (void **)v41[66];
              }
              if ( v61 != v41 + 68 )
                free(v61);
              v63 = (void **)v41[52];
              v64 = v41 + 52;
              if ( v63 != v41 + 54 )
                free(v63);
              v65 = v41 + 12;
              while ( 1 )
              {
                v64 -= 4;
                v66 = *v64;
                if ( *v64 != v64 + 2 )
                  break;
LABEL_102:
                if ( v64 == v65 )
                  goto LABEL_66;
              }
              while ( 1 )
              {
                operator delete(v66);
                if ( v64 == v65 )
                  goto LABEL_66;
                v64 -= 4;
                v66 = *v64;
                if ( *v64 == v64 + 2 )
                  goto LABEL_102;
              }
            }
          }
          v58 = (unsigned __int8 *)v102;
          v100 = v102;
          goto LABEL_79;
        }
      }
      memcpy(v52, v49, v50);
      v52 = v100;
      goto LABEL_75;
    }
    goto LABEL_105;
  }
  v14 = 2;
LABEL_106:
  v67 = sub_22B7480(a3);
  v69 = sub_229CB60(v67, v68);
  v70 = sub_22B7480(a3);
  if ( (((unsigned int)sub_229CAC0(v70, v71) - 7) & 0xFFFFFFFD) != 0 )
  {
    if ( v69 <= 6 || (v77 = sub_22B7480(a3), (unsigned int)sub_229CC10(v77, v78) == 3) )
    {
      if ( !a4 )
      {
        v14 = 0;
        sub_FC70B0((__int64)&v112, *a1, 0, 75);
        v72 = (_BYTE *)sub_22B7480(a3);
        sub_AEC220((unsigned __int8 **)&v112, v72, v73);
        sub_AEA040((__int64)&v112);
      }
    }
  }
  return v14;
}
