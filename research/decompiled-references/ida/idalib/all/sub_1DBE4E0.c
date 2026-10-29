unsigned __int64 __fastcall sub_1DBE4E0(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64 (__fastcall ***)()),
        __int64 a4)
{
  bool v4; // zf
  __int64 v5; // r9
  size_t v6; // r8
  void *v7; // r10
  size_t v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  void *v17; // rcx
  __int64 v18; // rax
  size_t v19; // rdx
  void *v20; // rcx
  int *v22; // rax
  unsigned __int8 *v23; // r12
  int v24; // ecx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rax
  _QWORD *v29; // r14
  _QWORD *v30; // r13
  _QWORD *v31; // rdi
  void *v32; // rdi
  void **v33; // r13
  void **v34; // r14
  signed __int64 *v35; // r14
  __int64 v36; // rbx
  __int8 *v37; // rsi
  signed __int64 v38; // rbp
  __int8 *v39; // rax
  __int64 (__fastcall **v40)(); // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 (__fastcall **v43)(); // rbp
  __int8 *v44; // rdi
  __int64 (__fastcall *v45)(); // rax
  unsigned __int8 v46; // si
  __int64 (__fastcall **v47)(); // r15
  __int64 (__fastcall *v48)(); // rbp
  __int64 (__fastcall **v49)(); // rdx
  __int64 v50; // rax
  void **p_ptr; // rbx
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 (__fastcall **v57)(); // r13
  unsigned __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 (__fastcall *v62)(); // rax
  __int64 (__fastcall *v63)(); // r15
  __int64 (__fastcall *v64)(); // rbx
  char *v65; // rdi
  __int64 v66; // rdx
  void *v67; // rax
  char *v68; // rbx
  char *v69; // r14
  char *v70; // rbp
  __int64 (__fastcall **v71)(); // r15
  __int64 v72; // r13
  __int64 (__fastcall **v73)(); // r12
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r13
  _BYTE *v77; // rax
  _BYTE *v78; // rsi
  signed __int64 v79; // r12
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  int v83; // eax
  unsigned __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 (__fastcall *v90)(); // r8
  __int64 (__fastcall *v91)(); // rdx
  signed __int64 v92; // r14
  __int64 (__fastcall *v93)(); // rbp
  __int64 (__fastcall *v94)(); // rbx
  char *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 (__fastcall *v98)(); // r8
  __int64 (__fastcall *v99)(); // rdx
  __int64 (__fastcall *v100)(); // r14
  __int64 (__fastcall *v101)(); // rbp
  __int64 (__fastcall *v102)(); // rbx
  char *v103; // rdi
  unsigned __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 (__fastcall *v108)(); // r13
  __int64 (__fastcall **v109)(); // rdi
  __int64 (__fastcall *v110)(); // rax
  __int64 (__fastcall **v111)(); // rdi
  int v112; // edx
  __int64 v113; // r13
  __int64 (__fastcall **v114)(); // rdi
  __int64 v115; // rax
  const void *v117; // [rsp+8h] [rbp-230h]
  int v118; // [rsp+1Ch] [rbp-21Ch]
  size_t v120; // [rsp+20h] [rbp-218h]
  size_t v121; // [rsp+20h] [rbp-218h]
  size_t v122; // [rsp+20h] [rbp-218h]
  void *v124; // [rsp+28h] [rbp-210h]
  void *v125; // [rsp+28h] [rbp-210h]
  __int64 v126; // [rsp+30h] [rbp-208h]
  int v127; // [rsp+30h] [rbp-208h]
  __int64 i; // [rsp+30h] [rbp-208h]
  unsigned __int8 *v129; // [rsp+30h] [rbp-208h]
  int src; // [rsp+38h] [rbp-200h]
  void **srca; // [rsp+38h] [rbp-200h]
  unsigned __int8 srcd; // [rsp+38h] [rbp-200h]
  __int8 *srce; // [rsp+38h] [rbp-200h]
  signed __int64 *srcb; // [rsp+38h] [rbp-200h]
  signed __int64 *srcc; // [rsp+38h] [rbp-200h]
  __int64 v136; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v137; // [rsp+48h] [rbp-1F0h]
  _BYTE *v138; // [rsp+50h] [rbp-1E8h]
  __int64 (__fastcall *v139)(); // [rsp+50h] [rbp-1E8h]
  int v140; // [rsp+50h] [rbp-1E8h]
  __int64 v141; // [rsp+58h] [rbp-1E0h]
  __int64 v142; // [rsp+58h] [rbp-1E0h]
  int v143; // [rsp+60h] [rbp-1D8h]
  __int64 (__fastcall **v144)(); // [rsp+70h] [rbp-1C8h] BYREF
  unsigned __int64 v145; // [rsp+78h] [rbp-1C0h]
  __int128 v146; // [rsp+80h] [rbp-1B8h]
  void *v147; // [rsp+90h] [rbp-1A8h]
  char v148; // [rsp+98h] [rbp-1A0h]
  int v149; // [rsp+9Ch] [rbp-19Ch]
  void **v150; // [rsp+A0h] [rbp-198h] BYREF
  __int16 v151; // [rsp+B0h] [rbp-188h]
  void *v152; // [rsp+C0h] [rbp-178h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-170h]
  _BYTE v154[136]; // [rsp+D8h] [rbp-160h] BYREF
  void *ptr; // [rsp+160h] [rbp-D8h] BYREF
  __m128i dest; // [rsp+168h] [rbp-D0h] BYREF
  __int64 v157; // [rsp+178h] [rbp-C0h] BYREF
  __int64 v158; // [rsp+180h] [rbp-B8h] BYREF

  v4 = *(_BYTE *)(a2 + 20) == 0;
  v152 = v154;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v4 )
  {
    v118 = *(_DWORD *)(a2 + 16);
    goto LABEL_3;
  }
  v22 = *(int **)(a2 + 32);
  v23 = *((unsigned __int8 **)v22 + 1);
  v118 = *v22;
  v24 = v22[6];
  v22[6] = 0;
  src = v24;
  v25 = *((_QWORD *)v22 + 2);
  *(_OWORD *)(v22 + 2) = 0;
  v137 = v25;
  v126 = *(_QWORD *)(a2 + 32);
  v26 = v126 + 32LL * *(unsigned int *)(a2 + 40);
  while ( v126 != v26 )
  {
    v26 -= 32;
    v27 = *(_QWORD *)(v26 + 8);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v26 + 16);
      if ( v28 )
      {
        if ( v27 < v28 || v27 > v28 + 14848 )
        {
          v29 = *(_QWORD **)(v27 + 528);
          v30 = &v29[8 * (unsigned __int64)*(unsigned int *)(v27 + 536)];
          if ( v29 != v30 )
          {
            do
            {
              while ( 1 )
              {
                v30 -= 8;
                v31 = (_QWORD *)v30[3];
                if ( v31 == v30 + 5 )
                  break;
                operator delete(v31);
                if ( v29 == v30 )
                  goto LABEL_28;
              }
            }
            while ( v29 != v30 );
LABEL_28:
            v30 = *(_QWORD **)(v27 + 528);
          }
          if ( v30 != (_QWORD *)(v27 + 544) )
            free(v30);
          v32 = *(void **)(v27 + 416);
          if ( v32 != (void *)(v27 + 432) )
            free(v32);
          v33 = (void **)(v27 + 384);
          v34 = (void **)(v27 + 64);
          do
          {
            while ( *v33 != v33 + 2 )
            {
              operator delete(*v33);
              v33 -= 4;
              if ( v33 == v34 )
                goto LABEL_36;
            }
            v33 -= 4;
          }
          while ( v34 != v33 );
LABEL_36:
          operator delete((void *)v27, 0x3A0u);
        }
        else
        {
          v66 = *(unsigned int *)(v28 + 14976);
          *(_DWORD *)(v28 + 14976) = v66 + 1;
          *(_QWORD *)(v28 + 8 * v66 + 14848) = v27;
        }
      }
    }
  }
  *(_BYTE *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  v136 = *(_QWORD *)(a1 + 264);
  sub_FC70B0((__int64)&v144, v136, 0, src);
  if ( !v23 )
    goto LABEL_97;
  v35 = (signed __int64 *)(v23 + 96);
  v36 = 0;
  v127 = *v23;
  if ( *v23 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v46 = v23[v36 + 1];
        v47 = v144;
        if ( !v46 )
          break;
        v48 = *(__int64 (__fastcall **)())&v23[8 * v36 + 16];
        if ( !v144 )
        {
          v82 = v145;
          v83 = *(_DWORD *)(v145 + 14976);
          if ( v83 )
          {
            v96 = (unsigned int)(v83 - 1);
            *(_DWORD *)(v145 + 14976) = v96;
            v47 = *(__int64 (__fastcall ***)())(v82 + 8 * v96 + 14848);
            v97 = *((unsigned int *)v47 + 134);
            *(_BYTE *)v47 = 0;
            v98 = v47[66];
            *((_DWORD *)v47 + 106) = 0;
            v99 = (__int64 (__fastcall *)())((char *)v98 + 64 * v97);
            if ( v98 != v99 )
            {
              srcc = v35;
              v100 = v48;
              v101 = v98;
              v142 = v36;
              v102 = v99;
              do
              {
                while ( 1 )
                {
                  v102 = (__int64 (__fastcall *)())((char *)v102 - 64);
                  v103 = *((char **)v102 + 3);
                  if ( v103 == (char *)v102 + 40 )
                    break;
                  operator delete(v103);
                  if ( v101 == v102 )
                    goto LABEL_144;
                }
              }
              while ( v101 != v102 );
LABEL_144:
              v48 = v100;
              v36 = v142;
              v35 = srcc;
            }
            *((_DWORD *)v47 + 134) = 0;
          }
          else
          {
            srcd = v23[v36 + 1];
            v47 = (__int64 (__fastcall **)())operator new(0x3A0u);
            *(_BYTE *)v47 = 0;
            v47[12] = (__int64 (__fastcall *)())(v47 + 14);
            v47[16] = (__int64 (__fastcall *)())(v47 + 18);
            v47[20] = (__int64 (__fastcall *)())(v47 + 22);
            v47[24] = (__int64 (__fastcall *)())(v47 + 26);
            v47[28] = (__int64 (__fastcall *)())(v47 + 30);
            v47[32] = (__int64 (__fastcall *)())(v47 + 34);
            v47[36] = (__int64 (__fastcall *)())(v47 + 38);
            v47[40] = (__int64 (__fastcall *)())(v47 + 42);
            v47[44] = (__int64 (__fastcall *)())(v47 + 46);
            v47[48] = (__int64 (__fastcall *)())(v47 + 50);
            v47[52] = (__int64 (__fastcall *)())(v47 + 54);
            v47[13] = nullptr;
            *((_BYTE *)v47 + 112) = 0;
            v47[17] = nullptr;
            *((_BYTE *)v47 + 144) = 0;
            v47[21] = nullptr;
            *((_BYTE *)v47 + 176) = 0;
            v47[25] = nullptr;
            *((_BYTE *)v47 + 208) = 0;
            v47[29] = nullptr;
            *((_BYTE *)v47 + 240) = 0;
            v47[33] = nullptr;
            *((_BYTE *)v47 + 272) = 0;
            v47[37] = nullptr;
            *((_BYTE *)v47 + 304) = 0;
            v47[41] = nullptr;
            *((_BYTE *)v47 + 336) = 0;
            v47[45] = nullptr;
            *((_BYTE *)v47 + 368) = 0;
            v47[49] = nullptr;
            *((_BYTE *)v47 + 400) = 0;
            v47[53] = (__int64 (__fastcall *)())0x800000000LL;
            v46 = srcd;
            v47[66] = (__int64 (__fastcall *)())(v47 + 68);
            v47[67] = (__int64 (__fastcall *)())0x600000000LL;
          }
          v144 = v47;
        }
        ++v36;
        v35 += 4;
        *((_BYTE *)v47 + *(unsigned __int8 *)v47 + 1) = v46;
        v49 = v144;
        v50 = *(unsigned __int8 *)v144;
        *(_BYTE *)v144 = v50 + 1;
        v49[v50 + 2] = v48;
        if ( v127 == (_DWORD)v36 )
          goto LABEL_57;
      }
      v37 = (__int8 *)*v35;
      v38 = v35[1];
      if ( !v144 )
      {
        v84 = v145;
        v85 = *(_DWORD *)(v145 + 14976);
        if ( v85 )
        {
          v88 = (unsigned int)(v85 - 1);
          *(_DWORD *)(v145 + 14976) = v88;
          v47 = *(__int64 (__fastcall ***)())(v84 + 8 * v88 + 14848);
          v89 = *((unsigned int *)v47 + 134);
          *(_BYTE *)v47 = 0;
          v90 = v47[66];
          *((_DWORD *)v47 + 106) = 0;
          v91 = (__int64 (__fastcall *)())((char *)v90 + 64 * v89);
          if ( v90 != v91 )
          {
            srcb = v35;
            v92 = v38;
            v93 = v90;
            v141 = v36;
            v94 = v91;
            do
            {
              while ( 1 )
              {
                v94 = (__int64 (__fastcall *)())((char *)v94 - 64);
                v95 = *((char **)v94 + 3);
                if ( v95 == (char *)v94 + 40 )
                  break;
                operator delete(v95);
                if ( v93 == v94 )
                  goto LABEL_136;
              }
            }
            while ( v93 != v94 );
LABEL_136:
            v38 = v92;
            v36 = v141;
            v35 = srcb;
          }
          *((_DWORD *)v47 + 134) = 0;
        }
        else
        {
          srce = (__int8 *)*v35;
          v47 = (__int64 (__fastcall **)())operator new(0x3A0u);
          *(_BYTE *)v47 = 0;
          v47[12] = (__int64 (__fastcall *)())(v47 + 14);
          v47[16] = (__int64 (__fastcall *)())(v47 + 18);
          v47[20] = (__int64 (__fastcall *)())(v47 + 22);
          v47[24] = (__int64 (__fastcall *)())(v47 + 26);
          v47[28] = (__int64 (__fastcall *)())(v47 + 30);
          v47[32] = (__int64 (__fastcall *)())(v47 + 34);
          v47[36] = (__int64 (__fastcall *)())(v47 + 38);
          v47[40] = (__int64 (__fastcall *)())(v47 + 42);
          v47[44] = (__int64 (__fastcall *)())(v47 + 46);
          v47[48] = (__int64 (__fastcall *)())(v47 + 50);
          v47[52] = (__int64 (__fastcall *)())(v47 + 54);
          v47[13] = nullptr;
          *((_BYTE *)v47 + 112) = 0;
          v47[17] = nullptr;
          *((_BYTE *)v47 + 144) = 0;
          v47[21] = nullptr;
          *((_BYTE *)v47 + 176) = 0;
          v47[25] = nullptr;
          *((_BYTE *)v47 + 208) = 0;
          v47[29] = nullptr;
          *((_BYTE *)v47 + 240) = 0;
          v47[33] = nullptr;
          *((_BYTE *)v47 + 272) = 0;
          v47[37] = nullptr;
          *((_BYTE *)v47 + 304) = 0;
          v47[41] = nullptr;
          *((_BYTE *)v47 + 336) = 0;
          v47[45] = nullptr;
          *((_BYTE *)v47 + 368) = 0;
          v47[49] = nullptr;
          *((_BYTE *)v47 + 400) = 0;
          v47[53] = (__int64 (__fastcall *)())0x800000000LL;
          v37 = srce;
          v47[66] = (__int64 (__fastcall *)())(v47 + 68);
          v47[67] = (__int64 (__fastcall *)())0x600000000LL;
        }
        v144 = v47;
      }
      *((_BYTE *)v47 + *(unsigned __int8 *)v47 + 1) = 0;
      ptr = &dest.m128i_u64[1];
      if ( &v37[v38] && !v37 )
LABEL_169:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v38 > 0xF )
        break;
      if ( v38 == 1 )
      {
        dest.m128i_i8[8] = *v37;
        v39 = &dest.m128i_i8[8];
        goto LABEL_47;
      }
      v39 = &dest.m128i_i8[8];
      if ( v38 )
        goto LABEL_81;
LABEL_47:
      dest.m128i_i64[0] = v38;
      v39[v38] = 0;
      v40 = v144;
      v41 = *(unsigned __int8 *)v144;
      *(_BYTE *)v144 = v41 + 1;
      v42 = 4 * (v41 + 3);
      v43 = &v40[v42];
      v44 = (__int8 *)v40[v42];
      if ( ptr == &dest.m128i_u64[1] )
      {
        v80 = dest.m128i_i64[0];
        if ( dest.m128i_i64[0] )
        {
          if ( dest.m128i_i64[0] == 1 )
            *v44 = dest.m128i_i8[8];
          else
            memcpy(v44, &dest.m128i_u64[1], dest.m128i_u64[0]);
          v80 = dest.m128i_i64[0];
          v44 = (__int8 *)*v43;
        }
        v43[1] = (__int64 (__fastcall *)())v80;
        v44[v80] = 0;
        v44 = (__int8 *)ptr;
        goto LABEL_51;
      }
      if ( v44 == (__int8 *)&v40[v42 + 2] )
      {
        *v43 = (__int64 (__fastcall *)())ptr;
        *(__m128i *)(v43 + 1) = dest;
LABEL_113:
        ptr = &dest.m128i_u64[1];
        v44 = &dest.m128i_i8[8];
        goto LABEL_51;
      }
      v45 = v40[4 * (int)v41 + 14];
      *v43 = (__int64 (__fastcall *)())ptr;
      *(__m128i *)(v43 + 1) = dest;
      if ( !v44 )
        goto LABEL_113;
      ptr = v44;
      dest.m128i_i64[1] = (__int64)v45;
LABEL_51:
      dest.m128i_i64[0] = 0;
      *v44 = 0;
      if ( ptr != &dest.m128i_u64[1] )
        operator delete(ptr);
      ++v36;
      v35 += 4;
      if ( v127 == (_DWORD)v36 )
        goto LABEL_57;
    }
    if ( v38 < 0 )
LABEL_170:
      std::__throw_length_error("basic_string::_M_create");
    v39 = (__int8 *)operator new(v38 + 1);
    dest.m128i_i64[1] = v38;
    ptr = v39;
LABEL_81:
    memcpy(v39, v37, v38);
    v39 = (__int8 *)ptr;
    goto LABEL_47;
  }
LABEL_57:
  p_ptr = &ptr;
  v52 = *((_QWORD *)v23 + 52);
  for ( i = v52 + 12LL * *((unsigned int *)v23 + 106); i != v52; ++*((_DWORD *)v57 + 106) )
  {
    v57 = v144;
    if ( v144 )
    {
      v53 = *((unsigned int *)v144 + 106);
      v54 = *((unsigned int *)v144 + 107);
      v55 = v53 + 1;
    }
    else
    {
      v58 = v145;
      v59 = *(_DWORD *)(v145 + 14976);
      if ( v59 )
      {
        v60 = (unsigned int)(v59 - 1);
        *(_DWORD *)(v145 + 14976) = v60;
        v57 = *(__int64 (__fastcall ***)())(v58 + 8 * v60 + 14848);
        v61 = *((unsigned int *)v57 + 134);
        *(_BYTE *)v57 = 0;
        v62 = v57[66];
        *((_DWORD *)v57 + 106) = 0;
        v63 = (__int64 (__fastcall *)())((char *)v62 + 64 * v61);
        if ( v62 == v63 )
        {
          v55 = 1;
          v53 = 0;
        }
        else
        {
          srca = p_ptr;
          v64 = v62;
          do
          {
            while ( 1 )
            {
              v63 = (__int64 (__fastcall *)())((char *)v63 - 64);
              v65 = *((char **)v63 + 3);
              if ( v65 == (char *)v63 + 40 )
                break;
              operator delete(v65);
              if ( v64 == v63 )
                goto LABEL_69;
            }
          }
          while ( v64 != v63 );
LABEL_69:
          v53 = *((unsigned int *)v57 + 106);
          p_ptr = srca;
          v55 = v53 + 1;
        }
        *((_DWORD *)v57 + 134) = 0;
        v54 = *((unsigned int *)v57 + 107);
      }
      else
      {
        v81 = operator new(0x3A0u);
        v54 = 8;
        v55 = 1;
        v57 = (__int64 (__fastcall **)())v81;
        *(_BYTE *)v81 = 0;
        *(_QWORD *)(v81 + 96) = v81 + 112;
        *(_QWORD *)(v81 + 128) = v81 + 144;
        *(_QWORD *)(v81 + 160) = v81 + 176;
        *(_QWORD *)(v81 + 192) = v81 + 208;
        *(_QWORD *)(v81 + 224) = v81 + 240;
        *(_QWORD *)(v81 + 256) = v81 + 272;
        *(_QWORD *)(v81 + 288) = v81 + 304;
        *(_QWORD *)(v81 + 320) = v81 + 336;
        *(_QWORD *)(v81 + 352) = v81 + 368;
        *(_QWORD *)(v81 + 384) = v81 + 400;
        *(_QWORD *)(v81 + 416) = v81 + 432;
        *(_QWORD *)(v81 + 104) = 0;
        *(_BYTE *)(v81 + 112) = 0;
        *(_QWORD *)(v81 + 136) = 0;
        *(_BYTE *)(v81 + 144) = 0;
        *(_QWORD *)(v81 + 168) = 0;
        *(_BYTE *)(v81 + 176) = 0;
        *(_QWORD *)(v81 + 200) = 0;
        *(_BYTE *)(v81 + 208) = 0;
        *(_QWORD *)(v81 + 232) = 0;
        *(_BYTE *)(v81 + 240) = 0;
        *(_QWORD *)(v81 + 264) = 0;
        *(_BYTE *)(v81 + 272) = 0;
        *(_QWORD *)(v81 + 296) = 0;
        *(_BYTE *)(v81 + 304) = 0;
        *(_QWORD *)(v81 + 328) = 0;
        *(_BYTE *)(v81 + 336) = 0;
        *(_QWORD *)(v81 + 360) = 0;
        *(_BYTE *)(v81 + 368) = 0;
        *(_QWORD *)(v81 + 392) = 0;
        *(_BYTE *)(v81 + 400) = 0;
        *(_QWORD *)(v81 + 424) = 0x800000000LL;
        *(_QWORD *)(v81 + 528) = v81 + 544;
        *(_QWORD *)(v81 + 536) = 0x600000000LL;
        v53 = 0;
      }
      v144 = v57;
    }
    ptr = *(void **)v52;
    dest.m128i_i32[0] = *(_DWORD *)(v52 + 8);
    if ( v55 > v54 )
    {
      sub_2237220(v57 + 52, v57 + 54, v55, 12);
      v53 = *((unsigned int *)v57 + 106);
    }
    v52 += 12;
    v56 = (__int64)v57[52] + 12 * v53;
    *(_QWORD *)v56 = *p_ptr;
    *(_DWORD *)(v56 + 8) = *((_DWORD *)p_ptr + 2);
  }
  v68 = *((char **)v23 + 66);
  v69 = &v68[64 * (unsigned __int64)*((unsigned int *)v23 + 134)];
  if ( v68 == v69 )
    goto LABEL_97;
  v129 = v23;
  do
  {
    v70 = v68;
    if ( *(_DWORD *)v68 && *((_DWORD *)v68 + 1) )
    {
      v71 = v144;
      if ( v144 )
      {
        v72 = *((unsigned int *)v144 + 134);
        v73 = (__int64 (__fastcall **)())v144[66];
        v74 = *((unsigned int *)v144 + 135);
        v75 = v72 + 1;
        v76 = (unsigned __int64)&v73[8 * v72];
      }
      else
      {
        v104 = v145;
        v105 = *(_DWORD *)(v145 + 14976);
        if ( v105 )
        {
          v106 = (unsigned int)(v105 - 1);
          *(_DWORD *)(v145 + 14976) = v106;
          v71 = *(__int64 (__fastcall ***)())(v104 + 8 * v106 + 14848);
          v107 = *((unsigned int *)v71 + 134);
          *(_BYTE *)v71 = 0;
          v108 = v71[66];
          *((_DWORD *)v71 + 106) = 0;
          v107 <<= 6;
          v73 = (__int64 (__fastcall **)())((char *)v108 + v107);
          if ( v108 != (__int64 (__fastcall *)())((char *)v108 + v107) )
          {
            do
            {
              while ( 1 )
              {
                v73 -= 8;
                v109 = (__int64 (__fastcall **)())v73[3];
                if ( v109 == v73 + 5 )
                  break;
                operator delete(v109);
                if ( (char *)v108 == (char *)v73 )
                  goto LABEL_152;
              }
            }
            while ( (char *)v108 != (char *)v73 );
LABEL_152:
            v73 = (__int64 (__fastcall **)())v71[66];
          }
          *((_DWORD *)v71 + 134) = 0;
          v74 = *((unsigned int *)v71 + 135);
        }
        else
        {
          v71 = (__int64 (__fastcall **)())operator new(0x3A0u);
          *(_BYTE *)v71 = 0;
          v71[12] = (__int64 (__fastcall *)())(v71 + 14);
          v73 = v71 + 68;
          v71[16] = (__int64 (__fastcall *)())(v71 + 18);
          v71[20] = (__int64 (__fastcall *)())(v71 + 22);
          v71[24] = (__int64 (__fastcall *)())(v71 + 26);
          v71[28] = (__int64 (__fastcall *)())(v71 + 30);
          v71[32] = (__int64 (__fastcall *)())(v71 + 34);
          v71[36] = (__int64 (__fastcall *)())(v71 + 38);
          v71[40] = (__int64 (__fastcall *)())(v71 + 42);
          v71[44] = (__int64 (__fastcall *)())(v71 + 46);
          v71[48] = (__int64 (__fastcall *)())(v71 + 50);
          v71[52] = (__int64 (__fastcall *)())(v71 + 54);
          v71[13] = nullptr;
          *((_BYTE *)v71 + 112) = 0;
          v71[17] = nullptr;
          *((_BYTE *)v71 + 144) = 0;
          v71[21] = nullptr;
          *((_BYTE *)v71 + 176) = 0;
          v71[25] = nullptr;
          *((_BYTE *)v71 + 208) = 0;
          v71[29] = nullptr;
          *((_BYTE *)v71 + 240) = 0;
          v71[33] = nullptr;
          *((_BYTE *)v71 + 272) = 0;
          v71[37] = nullptr;
          *((_BYTE *)v71 + 304) = 0;
          v71[41] = nullptr;
          *((_BYTE *)v71 + 336) = 0;
          v71[45] = nullptr;
          *((_BYTE *)v71 + 368) = 0;
          v71[49] = nullptr;
          *((_BYTE *)v71 + 400) = 0;
          v71[53] = (__int64 (__fastcall *)())0x800000000LL;
          v71[66] = (__int64 (__fastcall *)())(v71 + 68);
          v71[67] = (__int64 (__fastcall *)())0x600000000LL;
          v74 = 6;
        }
        v144 = v71;
        v76 = (unsigned __int64)v73;
        v75 = 1;
      }
      if ( v75 > v74 )
      {
        if ( v73 > (__int64 (__fastcall **)())v68 || v76 <= (unsigned __int64)v68 )
        {
          v113 = sub_2237400(v71 + 66, v71 + 68, v75, 64, &ptr);
          sub_9EF810((__int64 *)v71 + 66, v113);
          v114 = (__int64 (__fastcall **)())v71[66];
          if ( v114 == v71 + 68 )
          {
            *((_DWORD *)v71 + 135) = (_DWORD)ptr;
            v115 = *((unsigned int *)v71 + 134);
            v71[66] = (__int64 (__fastcall *)())v113;
            v76 = (v115 << 6) + v113;
          }
          else
          {
            v140 = (int)ptr;
            free(v114);
            v71[66] = (__int64 (__fastcall *)())v113;
            *((_DWORD *)v71 + 135) = v140;
            v76 = ((unsigned __int64)*((unsigned int *)v71 + 134) << 6) + v113;
          }
        }
        else
        {
          v139 = (__int64 (__fastcall *)())sub_2237400(v71 + 66, v71 + 68, v75, 64, &ptr);
          sub_9EF810((__int64 *)v71 + 66, (__int64)v139);
          v110 = v139;
          v111 = (__int64 (__fastcall **)())v71[66];
          v112 = (int)ptr;
          if ( v111 == v71 + 68 )
          {
            v71[66] = v139;
            *((_DWORD *)v71 + 135) = v112;
          }
          else
          {
            v143 = (int)ptr;
            free(v111);
            v110 = v139;
            v71[66] = v139;
            *((_DWORD *)v71 + 135) = v143;
          }
          v70 = (char *)v110 + v68 - (char *)v73;
          v76 = (unsigned __int64)v110 + 64 * (unsigned __int64)*((unsigned int *)v71 + 134);
        }
      }
      *(_QWORD *)v76 = *(_QWORD *)v70;
      *(_DWORD *)(v76 + 8) = *((_DWORD *)v70 + 2);
      *(_QWORD *)(v76 + 12) = *(_QWORD *)(v70 + 12);
      *(_DWORD *)(v76 + 20) = *((_DWORD *)v70 + 5);
      v77 = (_BYTE *)(v76 + 40);
      *(_QWORD *)(v76 + 24) = v76 + 40;
      v78 = *((_BYTE **)v70 + 3);
      v79 = *((_QWORD *)v70 + 4);
      if ( &v78[v79] && !v78 )
        goto LABEL_169;
      if ( (unsigned __int64)v79 > 0xF )
      {
        v138 = *((_BYTE **)v70 + 3);
        if ( v79 < 0 )
          goto LABEL_170;
        v77 = (_BYTE *)operator new(v79 + 1);
        *(_QWORD *)(v76 + 40) = v79;
        v78 = v138;
        *(_QWORD *)(v76 + 24) = v77;
      }
      else
      {
        if ( v79 == 1 )
        {
          *(_BYTE *)(v76 + 40) = *v78;
LABEL_94:
          *(_QWORD *)(v76 + 32) = v79;
          v77[v79] = 0;
          *(_BYTE *)(v76 + 56) = v70[56];
          ++*((_DWORD *)v71 + 134);
          goto LABEL_95;
        }
        if ( !v79 )
          goto LABEL_94;
      }
      memcpy(v77, v78, v79);
      v77 = *(_BYTE **)(v76 + 24);
      goto LABEL_94;
    }
LABEL_95:
    v68 += 64;
  }
  while ( v69 != v68 );
  v23 = v129;
LABEL_97:
  sub_FC7230((__int64)&ptr, v136, (__int64 *)&v144);
  sub_FCA320((__int64)&ptr, &v152);
  if ( (__int64 *)dest.m128i_i64[1] != &v158 )
    operator delete((void *)dest.m128i_i64[1]);
  *(_QWORD *)&v146 = 0;
  v151 = 0;
  if ( v147 != &v150 )
    operator delete(v147);
  if ( v144 && v145 )
    sub_1580C40(v145, (unsigned __int64)v144);
  if ( v23 && v137 )
    sub_1580C40(v137, (unsigned __int64)v23);
LABEL_3:
  ptr = &v157;
  dest = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v146 = 0;
  v144 = &off_2BEBEE0;
  LODWORD(v145) = 2;
  v148 = 0;
  v149 = 1;
  v147 = nullptr;
  v150 = &ptr;
  sub_227B8B0(&v144, 0, 0, 0);
  a3(a4, &v144);
  v6 = dest.m128i_i64[0];
  v7 = ptr;
  v8 = n[0];
  v9 = *(_QWORD **)(a1 + 248);
  v10 = v9[294];
  v117 = v152;
  v11 = v9[304] + 40LL;
  v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v9[295];
  v14 = v12 + 40;
  v9[304] = v11;
  if ( v12 + 40 <= v13 && v10 )
  {
    v9[294] = v14;
    v15 = v12 + 40;
  }
  else
  {
    v124 = v7;
    v121 = v6;
    v86 = sub_986170((__int64)(v9 + 294), 40, 40, 3, v6, v5);
    v7 = v124;
    v6 = v121;
    v15 = v9[294];
    v12 = v86;
    v11 = v9[304];
    v13 = v9[295];
    v14 = v15;
  }
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9[304] = v6 + v11;
  if ( v6 + v16 <= v13 && v15 )
  {
    v9[294] = v6 + v16;
    v17 = (void *)v16;
  }
  else
  {
    v125 = v7;
    v122 = v6;
    v87 = sub_986170((__int64)(v9 + 294), v6, v6, 3, v6, v5);
    v7 = v125;
    v6 = v122;
    v17 = (void *)v87;
  }
  if ( v6 )
  {
    v120 = v6;
    v67 = memmove(v17, v7, v6);
    v6 = v120;
    v17 = v67;
  }
  *(_QWORD *)v12 = v17;
  *(_QWORD *)(v12 + 8) = v6;
  *(_DWORD *)(v12 + 16) = v118;
  v18 = v9[294];
  v9[304] += v8;
  v19 = v8 + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= v19 && v18 )
  {
    v9[294] = v19;
    v20 = (void *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v20 = (void *)sub_986170((__int64)(v9 + 294), v8, v8, 3, v6, v5);
  }
  if ( v8 )
    v20 = memmove(v20, v117, v8);
  *(_QWORD *)(v12 + 24) = v20;
  *(_QWORD *)(v12 + 32) = v8;
  v144 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v144);
  if ( ptr != &v157 )
    free(ptr);
  if ( v152 != v154 )
    free(v152);
  return v12;
}
