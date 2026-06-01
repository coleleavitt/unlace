__int64 __fastcall sub_14F2230(const __m128i *a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // eax
  bool v8; // zf
  __int8 v9; // al
  unsigned __int8 *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void **v13; // r12
  unsigned __int64 v14; // rax
  void **v15; // r13
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r13
  unsigned __int8 *v21; // rbx
  __int64 v22; // r14
  _QWORD *v23; // rdx
  __int64 v24; // rax
  void **v25; // r12
  unsigned __int64 v26; // rax
  void **v27; // r13
  void **v28; // rbx
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // rbx
  void **v32; // r13
  unsigned __int64 v33; // r15
  __int16 v34; // ax
  __int16 v35; // dx
  __int16 v36; // ax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  const __m128i *v40; // rbx
  __int64 *v41; // rdi
  int *m128i_i32; // rsi
  unsigned int v43; // r13d
  unsigned __int8 *v44; // rbx
  __int64 v45; // r15
  _QWORD *v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // rbx
  __int64 v49; // r13
  unsigned __int64 v50; // rax
  char *v51; // r14
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r13
  _BYTE *v54; // rax
  _BYTE *v55; // rsi
  signed __int64 v56; // rcx
  _BYTE *v57; // rdi
  void **v58; // r12
  unsigned __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // rbx
  void *v62; // rdi
  void **v63; // rdi
  void **v64; // rdi
  void **v65; // rbx
  void **v66; // r13
  __int64 (__fastcall *v67)(_QWORD); // rax
  _QWORD *v68; // rdi
  __int64 (__fastcall *v69)(__int64); // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rdx
  int v74; // eax
  unsigned __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // r15
  __int64 v81; // r13
  void *v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r14
  __int64 v87; // r13
  void *v88; // rdi
  char v89; // al
  __int64 v90; // rdi
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  __int64 *v93; // rdi
  __int64 v94; // rbp
  __int64 *v95; // rdi
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // rdx
  __int64 v102; // r14
  void *v103; // rdi
  unsigned __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // r13
  int v107; // eax
  char *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 v111; // r14
  __int64 v112; // r13
  void *v113; // rdi
  __int64 v114; // r13
  char *v115; // rdi
  int v116; // r14d
  __int64 v117; // rax
  __int64 v118; // [rsp+0h] [rbp-188h]
  unsigned __int64 v119; // [rsp+0h] [rbp-188h]
  signed __int64 v120; // [rsp+0h] [rbp-188h]
  signed __int64 v121; // [rsp+0h] [rbp-188h]
  __int64 v122; // [rsp+0h] [rbp-188h]
  char *v123; // [rsp+0h] [rbp-188h]
  _BYTE *v124; // [rsp+8h] [rbp-180h]
  int v125; // [rsp+8h] [rbp-180h]
  __int64 v126; // [rsp+18h] [rbp-170h] BYREF
  __m128i *v127; // [rsp+20h] [rbp-168h] BYREF
  __int8 v128; // [rsp+28h] [rbp-160h]
  const __m128i *v129; // [rsp+30h] [rbp-158h]
  int v130; // [rsp+38h] [rbp-150h]
  __int16 v131; // [rsp+3Ch] [rbp-14Ch]
  __int64 (__fastcall *v132)(__int64); // [rsp+40h] [rbp-148h]
  __int64 v133; // [rsp+48h] [rbp-140h]
  __int64 v134; // [rsp+50h] [rbp-138h]
  _DWORD v135[2]; // [rsp+60h] [rbp-128h] BYREF
  char v136; // [rsp+68h] [rbp-120h]
  __int64 v137; // [rsp+6Ch] [rbp-11Ch]
  char v138; // [rsp+74h] [rbp-114h]
  void *v139; // [rsp+78h] [rbp-110h]
  __int64 v140; // [rsp+80h] [rbp-108h]
  _BYTE v141[24]; // [rsp+88h] [rbp-100h] BYREF
  void *v142; // [rsp+A0h] [rbp-E8h] BYREF
  unsigned __int64 v143; // [rsp+A8h] [rbp-E0h]
  __int64 v144; // [rsp+B0h] [rbp-D8h]
  void *v145; // [rsp+C0h] [rbp-C8h]
  _BYTE v146[16]; // [rsp+D0h] [rbp-B8h] BYREF
  __int16 v147; // [rsp+E0h] [rbp-A8h]
  unsigned int v148; // [rsp+F0h] [rbp-98h] BYREF
  unsigned __int8 v149; // [rsp+F4h] [rbp-94h]
  __int64 v150; // [rsp+F8h] [rbp-90h]
  void *ptr[2]; // [rsp+100h] [rbp-88h]
  __int64 v152; // [rsp+110h] [rbp-78h]
  __int64 v153; // [rsp+118h] [rbp-70h]
  __int64 v154; // [rsp+120h] [rbp-68h]
  int v155; // [rsp+128h] [rbp-60h]
  __int64 v156; // [rsp+130h] [rbp-58h]
  __int64 v157; // [rsp+140h] [rbp-48h]
  int v158; // [rsp+148h] [rbp-40h]

  v4 = 0;
  *(_OWORD *)ptr = 0;
  v148 = 0;
  v150 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v6 = sub_156E250(a1, &v148);
  if ( !(_BYTE)v6 )
  {
    v4 = v6;
    v8 = a1[2].m128i_i16[0] == 24;
    v129 = a1;
    v131 = 63;
    v127 = (__m128i *)&a1[122];
    v9 = a1[122].m128i_i8[0];
    v130 = 1638424;
    v128 = v9;
    a1[122].m128i_i8[0] = 1;
    v132 = sub_1478A90;
    v133 = 0;
    v134 = 0;
    if ( !v8 )
    {
LABEL_5:
      sub_1564840(&v142, a1, &a1[1], 14);
      v10 = (unsigned __int8 *)v142;
      if ( !v142 )
      {
        v75 = v143;
        v76 = *(_DWORD *)(v143 + 14976);
        if ( v76 )
        {
          v84 = (unsigned int)(v76 - 1);
          *(_DWORD *)(v143 + 14976) = v84;
          v10 = *(unsigned __int8 **)(v75 + 8 * v84 + 14848);
          v85 = *((unsigned int *)v10 + 134);
          *v10 = 0;
          v86 = *((_QWORD *)v10 + 66);
          *((_DWORD *)v10 + 106) = 0;
          v87 = v86 + (v85 << 6);
          while ( v86 != v87 )
          {
            while ( 1 )
            {
              v87 -= 64;
              v88 = *(void **)(v87 + 24);
              if ( v88 == (void *)(v87 + 40) )
                break;
              operator delete(v88);
              if ( v86 == v87 )
                goto LABEL_152;
            }
          }
LABEL_152:
          *((_DWORD *)v10 + 134) = 0;
        }
        else
        {
          v10 = (unsigned __int8 *)operator new(0x3A0u);
          *v10 = 0;
          *((_QWORD *)v10 + 12) = v10 + 112;
          *((_QWORD *)v10 + 16) = v10 + 144;
          *((_QWORD *)v10 + 20) = v10 + 176;
          *((_QWORD *)v10 + 24) = v10 + 208;
          *((_QWORD *)v10 + 28) = v10 + 240;
          *((_QWORD *)v10 + 32) = v10 + 272;
          *((_QWORD *)v10 + 36) = v10 + 304;
          *((_QWORD *)v10 + 40) = v10 + 336;
          *((_QWORD *)v10 + 44) = v10 + 368;
          *((_QWORD *)v10 + 48) = v10 + 400;
          *((_QWORD *)v10 + 52) = v10 + 432;
          *((_QWORD *)v10 + 13) = 0;
          v10[112] = 0;
          *((_QWORD *)v10 + 17) = 0;
          v10[144] = 0;
          *((_QWORD *)v10 + 21) = 0;
          v10[176] = 0;
          *((_QWORD *)v10 + 25) = 0;
          v10[208] = 0;
          *((_QWORD *)v10 + 29) = 0;
          v10[240] = 0;
          *((_QWORD *)v10 + 33) = 0;
          v10[272] = 0;
          *((_QWORD *)v10 + 37) = 0;
          v10[304] = 0;
          *((_QWORD *)v10 + 41) = 0;
          v10[336] = 0;
          *((_QWORD *)v10 + 45) = 0;
          v10[368] = 0;
          *((_QWORD *)v10 + 49) = 0;
          v10[400] = 0;
          *((_QWORD *)v10 + 53) = 0x800000000LL;
          *((_QWORD *)v10 + 66) = v10 + 544;
          *((_QWORD *)v10 + 67) = 0x600000000LL;
        }
        v142 = v10;
      }
      v10[*v10 + 1] = 4;
      v11 = v142;
      v12 = *(unsigned __int8 *)v142;
      *(_BYTE *)v142 = v12 + 1;
      v11[v12 + 2] = 24;
      if ( (_BYTE)v147 )
      {
        sub_FC7790(v144, (__int64 *)&v142, SHIBYTE(v147));
        v144 = 0;
        v147 = 0;
      }
      if ( v145 != v146 )
        operator delete(v145);
      v13 = (void **)v142;
      if ( v142 )
      {
        v14 = v143;
        if ( v143 )
        {
          if ( (unsigned __int64)v142 >= v143 && (unsigned __int64)v142 <= v143 + 14848 )
          {
            v83 = *(unsigned int *)(v143 + 14976);
            *(_DWORD *)(v143 + 14976) = v83 + 1;
            *(_QWORD *)(v14 + 8 * v83 + 14848) = v13;
          }
          else
          {
            v15 = *((void ***)v142 + 66);
            v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v142 + 134)];
            if ( v15 != v16 )
            {
              do
              {
                while ( 1 )
                {
                  v16 -= 8;
                  v17 = (void **)v16[3];
                  if ( v17 == v16 + 5 )
                    break;
                  operator delete(v17);
                  if ( v15 == v16 )
                    goto LABEL_17;
                }
              }
              while ( v15 != v16 );
LABEL_17:
              v16 = (void **)v13[66];
            }
            if ( v16 != v13 + 68 )
              free(v16);
            v18 = (void **)v13[52];
            if ( v18 != v13 + 54 )
              free(v18);
            v19 = v13 + 48;
            v20 = v13 + 8;
            do
            {
              while ( *v19 != v19 + 2 )
              {
                operator delete(*v19);
                v19 -= 4;
                if ( v19 == v20 )
                  goto LABEL_25;
              }
              v19 -= 4;
            }
            while ( v19 != v20 );
LABEL_25:
            operator delete(v13, 0x3A0u);
          }
        }
      }
      v127->m128i_i8[0] = v128;
LABEL_27:
      if ( !HIDWORD(v152) )
        return v4;
LABEL_28:
      free(ptr[1]);
      return v4;
    }
    if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
    {
      if ( (unsigned __int8)sub_1568800(&v127) )
        goto LABEL_5;
    }
    else
    {
      LODWORD(v134) = sub_1478A90((__int64)a1);
    }
    if ( v158 == 1 )
    {
LABEL_54:
      sub_156E210(&v127);
      v127->m128i_i8[0] = v128;
      goto LABEL_27;
    }
    if ( v158 == 2 )
    {
      sub_1564820(&v142, a1, v148, 2149);
      v21 = (unsigned __int8 *)v142;
      v22 = v149;
      if ( !v142 )
      {
        v73 = v143;
        v74 = *(_DWORD *)(v143 + 14976);
        if ( v74 )
        {
          v78 = (unsigned int)(v74 - 1);
          *(_DWORD *)(v143 + 14976) = v78;
          v21 = *(unsigned __int8 **)(v73 + 8 * v78 + 14848);
          v79 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v80 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v81 = v80 + (v79 << 6);
          while ( v80 != v81 )
          {
            while ( 1 )
            {
              v81 -= 64;
              v82 = *(void **)(v81 + 24);
              if ( v82 == (void *)(v81 + 40) )
                break;
              operator delete(v82);
              if ( v80 == v81 )
                goto LABEL_146;
            }
          }
LABEL_146:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
          v21 = (unsigned __int8 *)operator new(0x3A0u);
          *v21 = 0;
          *((_QWORD *)v21 + 12) = v21 + 112;
          *((_QWORD *)v21 + 16) = v21 + 144;
          *((_QWORD *)v21 + 20) = v21 + 176;
          *((_QWORD *)v21 + 24) = v21 + 208;
          *((_QWORD *)v21 + 28) = v21 + 240;
          *((_QWORD *)v21 + 32) = v21 + 272;
          *((_QWORD *)v21 + 36) = v21 + 304;
          *((_QWORD *)v21 + 40) = v21 + 336;
          *((_QWORD *)v21 + 44) = v21 + 368;
          *((_QWORD *)v21 + 48) = v21 + 400;
          *((_QWORD *)v21 + 52) = v21 + 432;
          *((_QWORD *)v21 + 13) = 0;
          v21[112] = 0;
          *((_QWORD *)v21 + 17) = 0;
          v21[144] = 0;
          *((_QWORD *)v21 + 21) = 0;
          v21[176] = 0;
          *((_QWORD *)v21 + 25) = 0;
          v21[208] = 0;
          *((_QWORD *)v21 + 29) = 0;
          v21[240] = 0;
          *((_QWORD *)v21 + 33) = 0;
          v21[272] = 0;
          *((_QWORD *)v21 + 37) = 0;
          v21[304] = 0;
          *((_QWORD *)v21 + 41) = 0;
          v21[336] = 0;
          *((_QWORD *)v21 + 45) = 0;
          v21[368] = 0;
          *((_QWORD *)v21 + 49) = 0;
          v21[400] = 0;
          *((_QWORD *)v21 + 53) = 0x800000000LL;
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        v142 = v21;
      }
      v21[*v21 + 1] = 2;
      v23 = v142;
      v24 = *(unsigned __int8 *)v142;
      *(_BYTE *)v142 = v24 + 1;
      v23[v24 + 2] = v22;
      if ( (_BYTE)v147 )
      {
        sub_FC7790(v144, (__int64 *)&v142, SHIBYTE(v147));
        v144 = 0;
        v147 = 0;
      }
      if ( v145 != v146 )
        operator delete(v145);
      v25 = (void **)v142;
      if ( v142 )
      {
        v26 = v143;
        if ( v143 )
        {
          if ( (unsigned __int64)v142 >= v143 && (unsigned __int64)v142 <= v143 + 14848 )
          {
            v77 = *(unsigned int *)(v143 + 14976);
            *(_DWORD *)(v143 + 14976) = v77 + 1;
            *(_QWORD *)(v26 + 8 * v77 + 14848) = v25;
          }
          else
          {
            v27 = *((void ***)v142 + 66);
            v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v142 + 134)];
            if ( v27 != v28 )
            {
              do
              {
                while ( 1 )
                {
                  v28 -= 8;
                  v29 = (void **)v28[3];
                  if ( v29 == v28 + 5 )
                    break;
                  operator delete(v29);
                  if ( v27 == v28 )
                    goto LABEL_45;
                }
              }
              while ( v27 != v28 );
LABEL_45:
              v28 = (void **)v25[66];
            }
            if ( v28 != v25 + 68 )
              free(v28);
            v30 = (void **)v25[52];
            if ( v30 != v25 + 54 )
              free(v30);
            v31 = v25 + 48;
            v32 = v25 + 8;
            do
            {
              while ( *v31 != v31 + 2 )
              {
                operator delete(*v31);
                v31 -= 4;
                if ( v32 == v31 )
                  goto LABEL_53;
              }
              v31 -= 4;
            }
            while ( v31 != v32 );
LABEL_53:
            operator delete(v25, 0x3A0u);
          }
        }
      }
      goto LABEL_54;
    }
    v33 = 0;
    if ( a1[3].m128i_i8[8] )
    {
      if ( (_DWORD)v134 == a1[3].m128i_i32[3] )
      {
        v33 = a1[4].m128i_u64[0];
        if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v69 = (__int64 (__fastcall *)(__int64))a1[4].m128i_i64[1];
          v33 = 0;
          if ( v69 )
            v33 = v69(a1[5].m128i_i64[0]);
        }
      }
    }
    v34 = a1[2].m128i_i16[0];
    if ( v34 == 1 || v34 == 460 || (unsigned __int16)(v34 - 456) <= 2u )
    {
LABEL_61:
      v35 = HIWORD(v130);
      v36 = v129[2].m128i_i16[0];
      if ( HIWORD(v130) == v36 )
      {
        v67 = v132;
        v68 = (__int64 *)((char *)v129->m128i_i64 + v133);
        if ( ((unsigned __int8)v132 & 1) == 0 )
          goto LABEL_98;
        goto LABEL_97;
      }
      if ( v36 != 63
        || ((v37 = v129->m128i_i64[1], v38 = *(_QWORD *)(v37 + 2944), v38 >= *(unsigned int *)(v37 + 2912))
          ? (v39 = sub_14180A0(v37, 1u), v35 = HIWORD(v130))
          : (v39 = *(_QWORD *)(v37 + 2904) + 24 * v38),
            *(_WORD *)(v39 + 16) != v35) )
      {
        sub_15688B0(&v127);
        goto LABEL_100;
      }
      v40 = v129;
      v41 = (__int64 *)v129->m128i_i64[1];
      m128i_i32 = v129[1].m128i_i32;
      v129[2].m128i_i32[2] = v129[1].m128i_i32[0];
      sub_14634E0(v41, m128i_i32);
      v43 = v40[2].m128i_u32[2];
      sub_1564820(&v142, v129, v43, 1917);
      v44 = (unsigned __int8 *)v142;
      v45 = HIWORD(v130);
      if ( !v142 )
      {
        v97 = v143;
        v98 = *(_DWORD *)(v143 + 14976);
        if ( v98 )
        {
          v99 = (unsigned int)(v98 - 1);
          *(_DWORD *)(v143 + 14976) = v99;
          v44 = *(unsigned __int8 **)(v97 + 8 * v99 + 14848);
          v100 = *((unsigned int *)v44 + 134);
          *v44 = 0;
          v101 = *((_QWORD *)v44 + 66);
          *((_DWORD *)v44 + 106) = 0;
          v102 = v101 + (v100 << 6);
          while ( v101 != v102 )
          {
            while ( 1 )
            {
              v102 -= 64;
              v103 = *(void **)(v102 + 24);
              if ( v103 == (void *)(v102 + 40) )
                break;
              v122 = v101;
              operator delete(v103);
              v101 = v122;
              if ( v122 == v102 )
                goto LABEL_176;
            }
          }
LABEL_176:
          *((_DWORD *)v44 + 134) = 0;
        }
        else
        {
          v44 = (unsigned __int8 *)operator new(0x3A0u);
          *v44 = 0;
          *((_QWORD *)v44 + 12) = v44 + 112;
          *((_QWORD *)v44 + 16) = v44 + 144;
          *((_QWORD *)v44 + 20) = v44 + 176;
          *((_QWORD *)v44 + 24) = v44 + 208;
          *((_QWORD *)v44 + 28) = v44 + 240;
          *((_QWORD *)v44 + 32) = v44 + 272;
          *((_QWORD *)v44 + 36) = v44 + 304;
          *((_QWORD *)v44 + 40) = v44 + 336;
          *((_QWORD *)v44 + 44) = v44 + 368;
          *((_QWORD *)v44 + 48) = v44 + 400;
          *((_QWORD *)v44 + 52) = v44 + 432;
          v44[112] = 0;
          *((_QWORD *)v44 + 13) = 0;
          *((_QWORD *)v44 + 17) = 0;
          v44[144] = 0;
          *((_QWORD *)v44 + 21) = 0;
          v44[176] = 0;
          *((_QWORD *)v44 + 25) = 0;
          v44[208] = 0;
          *((_QWORD *)v44 + 29) = 0;
          v44[240] = 0;
          *((_QWORD *)v44 + 33) = 0;
          v44[272] = 0;
          *((_QWORD *)v44 + 37) = 0;
          v44[304] = 0;
          *((_QWORD *)v44 + 41) = 0;
          v44[336] = 0;
          *((_QWORD *)v44 + 45) = 0;
          v44[368] = 0;
          *((_QWORD *)v44 + 49) = 0;
          v44[400] = 0;
          *((_QWORD *)v44 + 53) = 0x800000000LL;
          *((_QWORD *)v44 + 66) = v44 + 544;
          *((_QWORD *)v44 + 67) = 0x600000000LL;
        }
        v142 = v44;
      }
      v44[*v44 + 1] = 4;
      v46 = v142;
      v47 = *(unsigned __int8 *)v142;
      *(_BYTE *)v142 = v47 + 1;
      v46[v47 + 2] = v45;
      v137 = 0;
      v138 = 0;
      v139 = v141;
      v140 = 0;
      v141[0] = 0;
      v141[16] = 0;
      v135[0] = v43;
      v135[1] = v43;
      v136 = 1;
      if ( !v43 )
      {
LABEL_77:
        if ( (_BYTE)v147 )
        {
          sub_FC7790(v144, (__int64 *)&v142, SHIBYTE(v147));
          v144 = 0;
          v147 = 0;
        }
        if ( v145 != v146 )
          operator delete(v145);
        v58 = (void **)v142;
        if ( v142 )
        {
          v59 = v143;
          if ( v143 )
          {
            if ( (unsigned __int64)v142 < v143 || (unsigned __int64)v142 > v143 + 14848 )
            {
              v60 = *((_QWORD *)v142 + 66);
              v61 = v60 + ((unsigned __int64)*((unsigned int *)v142 + 134) << 6);
              while ( v60 != v61 )
              {
                while ( 1 )
                {
                  v61 -= 64;
                  v62 = *(void **)(v61 + 24);
                  if ( v62 == (void *)(v61 + 40) )
                    break;
                  operator delete(v62);
                  if ( v60 == v61 )
                    goto LABEL_88;
                }
              }
LABEL_88:
              v63 = (void **)v58[66];
              if ( v63 != v58 + 68 )
                free(v63);
              v64 = (void **)v58[52];
              if ( v64 != v58 + 54 )
                free(v64);
              v65 = v58 + 48;
              v66 = v58 + 8;
              do
              {
                while ( *v65 != v65 + 2 )
                {
                  operator delete(*v65);
                  v65 -= 4;
                  if ( v65 == v66 )
                    goto LABEL_95;
                }
                v65 -= 4;
              }
              while ( v65 != v66 );
LABEL_95:
              operator delete(v58, 0x3A0u);
            }
            else
            {
              v96 = *(unsigned int *)(v143 + 14976);
              *(_DWORD *)(v143 + 14976) = v96 + 1;
              *(_QWORD *)(v59 + 8 * v96 + 14848) = v58;
            }
          }
        }
        v67 = v132;
        v68 = (__int64 *)((char *)v129->m128i_i64 + v133);
        if ( ((unsigned __int8)v132 & 1) == 0 )
          goto LABEL_98;
LABEL_97:
        v67 = *(__int64 (__fastcall **)(_QWORD))((char *)v67 + *v68 - 1);
LABEL_98:
        HIDWORD(v134) = v67(v68);
LABEL_100:
        v4 ^= 1u;
        v127->m128i_i8[0] = v128;
        goto LABEL_27;
      }
      v48 = v142;
      if ( !v142 )
      {
        v104 = v143;
        v105 = *(_DWORD *)(v143 + 14976);
        if ( v105 )
        {
          v109 = (unsigned int)(v105 - 1);
          *(_DWORD *)(v143 + 14976) = v109;
          v48 = *(_QWORD **)(v104 + 8 * v109 + 14848);
          v110 = *((unsigned int *)v48 + 134);
          *(_BYTE *)v48 = 0;
          v111 = v48[66];
          *((_DWORD *)v48 + 106) = 0;
          v112 = v111 + (v110 << 6);
          while ( v111 != v112 )
          {
            while ( 1 )
            {
              v112 -= 64;
              v113 = *(void **)(v112 + 24);
              if ( v113 == (void *)(v112 + 40) )
                break;
              operator delete(v113);
              if ( v111 == v112 )
                goto LABEL_189;
            }
          }
LABEL_189:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (_QWORD *)operator new(0x3A0u);
          *(_BYTE *)v48 = 0;
          v48[12] = v48 + 14;
          v48[16] = v48 + 18;
          v48[20] = v48 + 22;
          v48[24] = v48 + 26;
          v48[28] = v48 + 30;
          v48[32] = v48 + 34;
          v48[36] = v48 + 38;
          v48[40] = v48 + 42;
          v48[44] = v48 + 46;
          v48[48] = v48 + 50;
          v48[52] = v48 + 54;
          *((_BYTE *)v48 + 112) = 0;
          v48[13] = 0;
          v48[17] = 0;
          *((_BYTE *)v48 + 144) = 0;
          v48[21] = 0;
          *((_BYTE *)v48 + 176) = 0;
          v48[25] = 0;
          *((_BYTE *)v48 + 208) = 0;
          v48[29] = 0;
          *((_BYTE *)v48 + 240) = 0;
          v48[33] = 0;
          *((_BYTE *)v48 + 272) = 0;
          v48[37] = 0;
          *((_BYTE *)v48 + 304) = 0;
          v48[41] = 0;
          *((_BYTE *)v48 + 336) = 0;
          v48[45] = 0;
          *((_BYTE *)v48 + 368) = 0;
          v48[49] = 0;
          *((_BYTE *)v48 + 400) = 0;
          v48[53] = 0x800000000LL;
          v48[66] = v48 + 68;
          v48[67] = 0x600000000LL;
        }
        v142 = v48;
      }
      v49 = *((unsigned int *)v48 + 134);
      v50 = v48[66];
      v51 = (char *)v135;
      v52 = v49 + 1;
      v53 = v50 + (v49 << 6);
      if ( v52 > *((unsigned int *)v48 + 135) )
      {
        if ( v50 > (unsigned __int64)v135 || v53 <= (unsigned __int64)v135 )
        {
          v114 = sub_2237400(v48 + 66, v48 + 68, v52, 64, &v126);
          sub_9EF810(v48 + 66, v114);
          v115 = (char *)v48[66];
          v116 = v126;
          if ( v115 != (char *)(v48 + 68) )
            free(v115);
          v117 = *((unsigned int *)v48 + 134);
          v48[66] = v114;
          *((_DWORD *)v48 + 135) = v116;
          v51 = (char *)v135;
          v53 = (v117 << 6) + v114;
        }
        else
        {
          v123 = (char *)v135 - v50;
          v106 = sub_2237400(v48 + 66, v48 + 68, v52, 64, &v126);
          sub_9EF810(v48 + 66, v106);
          v107 = v126;
          v108 = (char *)v48[66];
          if ( v108 == (char *)(v48 + 68) )
          {
            v48[66] = v106;
            *((_DWORD *)v48 + 135) = v107;
          }
          else
          {
            v125 = v126;
            free(v108);
            v48[66] = v106;
            *((_DWORD *)v48 + 135) = v125;
          }
          v51 = &v123[v106];
          v53 = ((unsigned __int64)*((unsigned int *)v48 + 134) << 6) + v106;
        }
      }
      *(_QWORD *)v53 = *(_QWORD *)v51;
      *(_DWORD *)(v53 + 8) = *((_DWORD *)v51 + 2);
      *(_QWORD *)(v53 + 12) = *(_QWORD *)(v51 + 12);
      *(_DWORD *)(v53 + 20) = *((_DWORD *)v51 + 5);
      v54 = (_BYTE *)(v53 + 40);
      *(_QWORD *)(v53 + 24) = v53 + 40;
      v55 = *((_BYTE **)v51 + 3);
      v56 = *((_QWORD *)v51 + 4);
      if ( &v55[v56] && !v55 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v56 > 0xF )
      {
        if ( v56 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v124 = *((_BYTE **)v51 + 3);
        v121 = *((_QWORD *)v51 + 4);
        v54 = (_BYTE *)operator new(v56 + 1);
        v56 = v121;
        v55 = v124;
        *(_QWORD *)(v53 + 24) = v54;
        *(_QWORD *)(v53 + 40) = v121;
      }
      else
      {
        if ( v56 == 1 )
        {
          *(_BYTE *)(v53 + 40) = *v55;
          goto LABEL_75;
        }
        if ( !v56 )
        {
LABEL_75:
          *(_QWORD *)(v53 + 32) = v56;
          v54[v56] = 0;
          v57 = v139;
          *(_BYTE *)(v53 + 56) = v51[56];
          ++*((_DWORD *)v48 + 134);
          if ( v57 != v141 )
            operator delete(v57);
          goto LABEL_77;
        }
      }
      v120 = v56;
      memcpy(v54, v55, v56);
      v54 = *(_BYTE **)(v53 + 24);
      v56 = v120;
      goto LABEL_75;
    }
    while ( 1 )
    {
      switch ( v34 )
      {
        case 20:
          v89 = sub_14EDA40(a1);
          break;
        case 26:
          goto LABEL_140;
        case 5:
          v90 = a1->m128i_i64[1];
          v91 = *(_QWORD *)(v90 + 2944);
          if ( v91 >= *(unsigned int *)(v90 + 2912) )
            v92 = sub_14180A0(v90, 1u);
          else
            v92 = *(_QWORD *)(v90 + 2904) + 24 * v91;
          v89 = *(_WORD *)(v92 + 16) == 62;
          break;
        default:
          goto LABEL_107;
      }
      if ( !v89 )
      {
        v34 = a1[2].m128i_i16[0];
LABEL_107:
        if ( v34 == 24 )
          v70 = sub_14EE310((__int64)a1, (__m128i)0LL);
        else
          v70 = sub_14BDAD0((__int64)a1, 0, (__m128i)0LL);
        goto LABEL_109;
      }
LABEL_140:
      v70 = sub_14EF570(a1, (__int64 *)a2, (__int64 *)v33, (__m128i)0LL);
LABEL_109:
      if ( a1[2].m128i_i16[0] == 27 )
      {
        v93 = (__int64 *)a1->m128i_i64[1];
        v118 = v70;
        v94 = a1[6].m128i_i64[0];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v93, a1[1].m128i_i32);
        v70 = sub_1E53840(v94, v118 & 0xFFFFFFFFFFFFFFFELL, a1[2].m128i_u32[2]);
      }
      if ( v70 == 1 )
      {
        *a3 = 0;
      }
      else
      {
        v71 = *(unsigned int *)(a2 + 8);
        v72 = v70 & 0xFFFFFFFFFFFFFFFELL;
        if ( v71 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          v119 = v72;
          sub_2237220(a2, a2 + 16, v71 + 1, 8);
          v71 = *(unsigned int *)(a2 + 8);
          v72 = v119;
        }
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v71) = v72;
        ++*(_DWORD *)(a2 + 8);
      }
      v34 = a1[2].m128i_i16[0];
      v4 = 0;
      if ( v34 == 66 )
      {
        v95 = (__int64 *)a1->m128i_i64[1];
        v4 = 1;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v95, a1[1].m128i_i32);
        v34 = a1[2].m128i_i16[0];
      }
      if ( v34 == 25 || v34 == 1 || (unsigned __int16)(v34 - 456) <= 2u || v34 == 460 )
        goto LABEL_61;
    }
  }
  if ( HIDWORD(v152) )
    goto LABEL_28;
  return v4;
}
