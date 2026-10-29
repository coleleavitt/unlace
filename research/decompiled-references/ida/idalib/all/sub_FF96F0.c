_BOOL8 __fastcall sub_FF96F0(_QWORD *a1, __int64 a2)
{
  void *v2; // r12
  __int64 v3; // r15
  int v4; // ecx
  char **v5; // rbx
  signed __int64 *p_dest; // r14
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64); // rax
  char *v8; // r13
  char *v9; // rbp
  unsigned int v10; // eax
  int v11; // eax
  __int64 *v12; // rsi
  char v13; // r13
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  char *v15; // rbp
  unsigned int v16; // eax
  int v17; // eax
  __int64 *v18; // rsi
  char v19; // al
  unsigned __int8 *v20; // r13
  char *v21; // rsi
  signed __int64 v22; // rcx
  void *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  char *v28; // r13
  _BYTE *v29; // rdi
  signed __int64 v30; // rax
  unsigned __int8 *v31; // r13
  char *v32; // rsi
  signed __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rax
  void **v38; // rcx
  _BYTE *v39; // rdi
  __int64 v40; // rax
  void **v41; // rbp
  unsigned __int64 v42; // rax
  void **v43; // rdx
  void **v44; // r13
  void *v45; // r14
  void **v46; // r12
  char **v47; // rbp
  void **v48; // rbx
  void **v49; // rdi
  void **v50; // rdi
  void **v51; // r13
  void *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rbp
  char *v55; // rax
  _QWORD *v56; // rdi
  __int64 v58; // r9
  char *v59; // r8
  char *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rbp
  __int64 v63; // r12
  char *v64; // r13
  char *i; // rax
  size_t v66; // r15
  __int64 v67; // rax
  char v68; // al
  int v69; // eax
  __int64 v70; // rbx
  __int64 *v71; // r14
  size_t v72; // rdx
  size_t v73; // rdx
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  signed __int64 v83; // r12
  __int64 v84; // rbp
  char **v85; // r14
  __int64 v86; // rbx
  void *v87; // rdi
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  signed __int64 v92; // r13
  __int64 v93; // rbp
  char **v94; // r14
  __int64 v95; // rbx
  void *v96; // rdi
  void *v97; // [rsp+10h] [rbp-118h]
  char *v98; // [rsp+10h] [rbp-118h]
  void *v99; // [rsp+10h] [rbp-118h]
  signed __int64 *v100; // [rsp+10h] [rbp-118h]
  void **v101; // [rsp+10h] [rbp-118h]
  __int64 v102; // [rsp+10h] [rbp-118h]
  signed __int64 v103; // [rsp+10h] [rbp-118h]
  signed __int64 v104; // [rsp+10h] [rbp-118h]
  signed __int64 v105; // [rsp+10h] [rbp-118h]
  signed __int64 v106; // [rsp+10h] [rbp-118h]
  void **v107; // [rsp+10h] [rbp-118h]
  char *v108; // [rsp+10h] [rbp-118h]
  unsigned __int8 *v109; // [rsp+10h] [rbp-118h]
  bool src; // [rsp+18h] [rbp-110h]
  _QWORD *srca; // [rsp+18h] [rbp-110h]
  char *srcc; // [rsp+18h] [rbp-110h]
  char *srcd; // [rsp+18h] [rbp-110h]
  void *srcb; // [rsp+18h] [rbp-110h]
  char *v115; // [rsp+20h] [rbp-108h]
  __int64 v117; // [rsp+30h] [rbp-F8h]
  signed __int64 *v118; // [rsp+30h] [rbp-F8h]
  signed __int64 *v119; // [rsp+30h] [rbp-F8h]
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-E0h]
  void *v122; // [rsp+60h] [rbp-C8h]
  size_t n; // [rsp+68h] [rbp-C0h]
  _QWORD v124[2]; // [rsp+70h] [rbp-B8h] BYREF
  void *v125; // [rsp+80h] [rbp-A8h]
  size_t v126; // [rsp+88h] [rbp-A0h]
  signed __int64 dest; // [rsp+90h] [rbp-98h] BYREF
  void *v128; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v129; // [rsp+A8h] [rbp-80h]
  __int64 v130; // [rsp+B0h] [rbp-78h]
  void *v131; // [rsp+C0h] [rbp-68h]
  __int64 v132; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v133; // [rsp+E0h] [rbp-48h]

  v2 = a1;
  v3 = a1[26];
  v4 = *(_DWORD *)(v3 + 316);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  ptr = nullptr;
  if ( v4 )
  {
    sub_2244BF0(&ptr, *(unsigned int *)(v3 + 312));
    v59 = (char *)ptr;
    v60 = *(char **)(v3 + 304);
    v115 = (char *)ptr;
    v61 = *(_QWORD *)(v3 + 316);
    *(__int64 *)((char *)si128.m128i_i64 + 4) = v61;
    if ( si128.m128i_i32[0] )
    {
      v62 = 0;
      v63 = 8LL * si128.m128i_u32[0] + 8;
      srca = (_QWORD *)v3;
      v64 = v60;
      v102 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1);
      for ( i = v60; ; i = (char *)srca[38] )
      {
        v70 = *(_QWORD *)&i[v62];
        v71 = (__int64 *)&v59[v62];
        if ( v70 == -8 || !v70 )
        {
          *v71 = v70;
          v63 += 4;
          if ( v102 == v62 )
            goto LABEL_84;
        }
        else
        {
          v66 = *(_QWORD *)v70;
          v67 = sub_22300B0(*(_QWORD *)v70 + 17LL, 8, v61, v60, v59, v58);
          v58 = v67;
          if ( v66 )
          {
            v117 = v67;
            memcpy((void *)(v67 + 16), (const void *)(v70 + 16), v66);
            v58 = v117;
          }
          *(_BYTE *)(v58 + v66 + 16) = 0;
          v68 = *(_BYTE *)(v70 + 8);
          v60 = v115;
          *(_QWORD *)v58 = v66;
          *(_BYTE *)(v58 + 8) = v68;
          v69 = *(_DWORD *)&v64[v63];
          *v71 = v58;
          *(_DWORD *)&v115[v63] = v69;
          v63 += 4;
          if ( v102 == v62 )
          {
LABEL_84:
            v2 = a1;
            break;
          }
        }
        v59 = (char *)ptr;
        v62 += 8;
      }
    }
  }
  src = 1;
  v5 = &off_2B551E0;
  p_dest = &dest;
  do
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 528LL);
    if ( v7 == sub_FF8820 )
    {
      v8 = *v5;
      v9 = v5[1];
      v10 = sub_2244B30(*v5, v9);
      v11 = sub_2244E60(&ptr, v8, v9, v10);
      if ( v11 == -1 )
        v12 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
      else
        v12 = (__int64 *)((char *)ptr + 8 * v11);
      v13 = 0;
      sub_EC0F90((__int64 **)&v128, v12, 1);
      v97 = v128;
      sub_EC0F90((__int64 **)&v128, (__int64 *)ptr + si128.m128i_u32[0], 1);
      if ( v128 != v97 )
        v13 = *(_BYTE *)(*(_QWORD *)v97 + 8LL);
    }
    else
    {
      v13 = v7((__int64)v2, (__int64)&ptr, (__int64)*v5, (__int64)v5[1]);
    }
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 528LL);
    if ( v14 == sub_FF8820 )
    {
      v15 = v5[3];
      v98 = v5[2];
      v16 = sub_2244B30(v98, v15);
      v17 = sub_2244E60(&ptr, v98, v15, v16);
      if ( v17 == -1 )
        v18 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
      else
        v18 = (__int64 *)((char *)ptr + 8 * v17);
      sub_EC0F90((__int64 **)&v128, v18, 1);
      v99 = v128;
      sub_EC0F90((__int64 **)&v128, (__int64 *)ptr + si128.m128i_u32[0], 1);
      v19 = 0;
      if ( v128 != v99 )
        v19 = *(_BYTE *)(*(_QWORD *)v99 + 8LL);
    }
    else
    {
      v19 = v14((__int64)v2, (__int64)&ptr, (__int64)v5[2], (__int64)v5[3]);
    }
    if ( v13 == v19 )
      goto LABEL_57;
    sub_FC70B0((__int64)&v128, a2, 0, 47);
    v20 = (unsigned __int8 *)v128;
    v21 = *v5;
    v22 = (signed __int64)v5[1];
    if ( !v128 )
    {
      v75 = v129;
      v76 = *(_DWORD *)(v129 + 14976);
      if ( v76 )
      {
        v79 = (unsigned int)(v76 - 1);
        *(_DWORD *)(v129 + 14976) = v79;
        v20 = *(unsigned __int8 **)(v75 + 8 * v79 + 14848);
        v80 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v81 = *((_QWORD *)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v82 = v81 + (v80 << 6);
        if ( v81 != v82 )
        {
          srcb = v2;
          v83 = v22;
          v84 = v81;
          v118 = p_dest;
          v85 = v5;
          v86 = v82;
          do
          {
            while ( 1 )
            {
              v86 -= 64;
              v87 = *(void **)(v86 + 24);
              if ( v87 == (void *)(v86 + 40) )
                break;
              operator delete(v87);
              if ( v84 == v86 )
                goto LABEL_120;
            }
          }
          while ( v84 != v86 );
LABEL_120:
          v22 = v83;
          v5 = v85;
          v2 = srcb;
          p_dest = v118;
        }
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        srcc = *v5;
        v108 = v5[1];
        v20 = (unsigned __int8 *)operator new(0x3A0u);
        *v20 = 0;
        *((_QWORD *)v20 + 12) = v20 + 112;
        *((_QWORD *)v20 + 16) = v20 + 144;
        *((_QWORD *)v20 + 20) = v20 + 176;
        *((_QWORD *)v20 + 24) = v20 + 208;
        *((_QWORD *)v20 + 28) = v20 + 240;
        *((_QWORD *)v20 + 32) = v20 + 272;
        *((_QWORD *)v20 + 36) = v20 + 304;
        *((_QWORD *)v20 + 40) = v20 + 336;
        *((_QWORD *)v20 + 44) = v20 + 368;
        *((_QWORD *)v20 + 48) = v20 + 400;
        *((_QWORD *)v20 + 52) = v20 + 432;
        *((_QWORD *)v20 + 13) = 0;
        v20[112] = 0;
        *((_QWORD *)v20 + 17) = 0;
        v20[144] = 0;
        *((_QWORD *)v20 + 21) = 0;
        v20[176] = 0;
        *((_QWORD *)v20 + 25) = 0;
        v20[208] = 0;
        *((_QWORD *)v20 + 29) = 0;
        v20[240] = 0;
        *((_QWORD *)v20 + 33) = 0;
        v20[272] = 0;
        *((_QWORD *)v20 + 37) = 0;
        v20[304] = 0;
        *((_QWORD *)v20 + 41) = 0;
        v20[336] = 0;
        *((_QWORD *)v20 + 45) = 0;
        v20[368] = 0;
        *((_QWORD *)v20 + 49) = 0;
        v20[400] = 0;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        v22 = (signed __int64)v108;
        *((_QWORD *)v20 + 66) = v20 + 544;
        v21 = srcc;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      v128 = v20;
    }
    v20[*v20 + 1] = 0;
    v125 = p_dest;
    if ( &v21[v22] && !v21 )
LABEL_134:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v22 > 0xF )
    {
      if ( v22 < 0 )
        goto LABEL_135;
      v103 = v22;
      v23 = (void *)operator new(v22 + 1);
      v22 = v103;
      v125 = v23;
      dest = v103;
LABEL_91:
      v104 = v22;
      memcpy(v23, v21, v22);
      v23 = v125;
      v22 = v104;
      goto LABEL_20;
    }
    if ( v22 == 1 )
    {
      LOBYTE(dest) = *v21;
      v23 = p_dest;
      goto LABEL_20;
    }
    v23 = p_dest;
    if ( v22 )
      goto LABEL_91;
LABEL_20:
    v126 = v22;
    *((_BYTE *)v23 + v22) = 0;
    v24 = v128;
    v25 = *(unsigned __int8 *)v128;
    *(_BYTE *)v128 = v25 + 1;
    v26 = (unsigned __int8)v25;
    v27 = 4 * (v25 + 3);
    v28 = (char *)&v24[v27];
    v29 = (_BYTE *)v24[v27];
    if ( v125 == p_dest )
    {
      v73 = v126;
      if ( v126 )
      {
        if ( v126 == 1 )
          *v29 = dest;
        else
          memcpy(v29, p_dest, v126);
        v73 = v126;
        v29 = *(_BYTE **)v28;
      }
      *((_QWORD *)v28 + 1) = v73;
      v29[v73] = 0;
      v29 = v125;
    }
    else
    {
      if ( v29 == (_BYTE *)&v24[v27 + 2] )
      {
        *(_QWORD *)v28 = v125;
        *((_QWORD *)v28 + 1) = v126;
        *((_QWORD *)v28 + 2) = dest;
      }
      else
      {
        v30 = v24[4 * v26 + 14];
        *(_QWORD *)v28 = v125;
        *((_QWORD *)v28 + 1) = v126;
        *((_QWORD *)v28 + 2) = dest;
        if ( v29 )
        {
          v125 = v29;
          dest = v30;
          goto LABEL_24;
        }
      }
      v125 = p_dest;
      v29 = p_dest;
    }
LABEL_24:
    v126 = 0;
    *v29 = 0;
    if ( v125 != p_dest )
      operator delete(v125);
    v31 = (unsigned __int8 *)v128;
    v32 = v5[2];
    v33 = (signed __int64)v5[3];
    if ( !v128 )
    {
      v77 = v129;
      v78 = *(_DWORD *)(v129 + 14976);
      if ( v78 )
      {
        v88 = (unsigned int)(v78 - 1);
        *(_DWORD *)(v129 + 14976) = v88;
        v31 = *(unsigned __int8 **)(v77 + 8 * v88 + 14848);
        v89 = *((unsigned int *)v31 + 134);
        *v31 = 0;
        v90 = *((_QWORD *)v31 + 66);
        *((_DWORD *)v31 + 106) = 0;
        v91 = v90 + (v89 << 6);
        if ( v90 != v91 )
        {
          v109 = v31;
          v92 = v33;
          v93 = v90;
          v119 = p_dest;
          v94 = v5;
          v95 = v91;
          do
          {
            while ( 1 )
            {
              v95 -= 64;
              v96 = *(void **)(v95 + 24);
              if ( v96 == (void *)(v95 + 40) )
                break;
              operator delete(v96);
              if ( v93 == v95 )
                goto LABEL_128;
            }
          }
          while ( v93 != v95 );
LABEL_128:
          v33 = v92;
          v5 = v94;
          v31 = v109;
          p_dest = v119;
        }
        *((_DWORD *)v31 + 134) = 0;
      }
      else
      {
        srcd = v5[3];
        v31 = (unsigned __int8 *)operator new(0x3A0u);
        *v31 = 0;
        *((_QWORD *)v31 + 12) = v31 + 112;
        *((_QWORD *)v31 + 16) = v31 + 144;
        *((_QWORD *)v31 + 20) = v31 + 176;
        *((_QWORD *)v31 + 24) = v31 + 208;
        *((_QWORD *)v31 + 28) = v31 + 240;
        *((_QWORD *)v31 + 32) = v31 + 272;
        *((_QWORD *)v31 + 36) = v31 + 304;
        *((_QWORD *)v31 + 40) = v31 + 336;
        *((_QWORD *)v31 + 44) = v31 + 368;
        *((_QWORD *)v31 + 48) = v31 + 400;
        *((_QWORD *)v31 + 52) = v31 + 432;
        *((_QWORD *)v31 + 13) = 0;
        v31[112] = 0;
        *((_QWORD *)v31 + 17) = 0;
        v31[144] = 0;
        *((_QWORD *)v31 + 21) = 0;
        v31[176] = 0;
        *((_QWORD *)v31 + 25) = 0;
        v31[208] = 0;
        *((_QWORD *)v31 + 29) = 0;
        v31[240] = 0;
        *((_QWORD *)v31 + 33) = 0;
        v31[272] = 0;
        *((_QWORD *)v31 + 37) = 0;
        v31[304] = 0;
        *((_QWORD *)v31 + 41) = 0;
        v31[336] = 0;
        *((_QWORD *)v31 + 45) = 0;
        v31[368] = 0;
        *((_QWORD *)v31 + 49) = 0;
        v31[400] = 0;
        *((_QWORD *)v31 + 53) = 0x800000000LL;
        *((_QWORD *)v31 + 66) = v31 + 544;
        v33 = (signed __int64)srcd;
        *((_QWORD *)v31 + 67) = 0x600000000LL;
      }
      v128 = v31;
    }
    v31[*v31 + 1] = 0;
    v34 = v124;
    v122 = v124;
    src = v32 == nullptr && &v32[v33] != nullptr;
    if ( src )
      goto LABEL_134;
    if ( (unsigned __int64)v33 > 0xF )
    {
      if ( v33 < 0 )
LABEL_135:
        std::__throw_length_error("basic_string::_M_create");
      v105 = v33;
      v34 = (_QWORD *)operator new(v33 + 1);
      v33 = v105;
      v122 = v34;
      v124[0] = v105;
LABEL_94:
      v106 = v33;
      memcpy(v34, v32, v33);
      v34 = v122;
      v33 = v106;
      goto LABEL_31;
    }
    if ( v33 == 1 )
    {
      LOBYTE(v124[0]) = *v32;
      goto LABEL_31;
    }
    if ( v33 )
      goto LABEL_94;
LABEL_31:
    n = v33;
    *((_BYTE *)v34 + v33) = 0;
    v35 = v128;
    v36 = *(unsigned __int8 *)v128;
    *(_BYTE *)v128 = v36 + 1;
    v37 = 4 * (v36 + 3);
    v38 = (void **)&v35[v37];
    v39 = (_BYTE *)v35[v37];
    if ( v122 == v124 )
    {
      v72 = n;
      if ( n )
      {
        if ( n == 1 )
        {
          *v39 = v124[0];
          v72 = n;
          v39 = *v38;
        }
        else
        {
          v107 = v38;
          memcpy(v39, v122, n);
          v38 = v107;
          v72 = n;
          v39 = *v107;
        }
      }
      v38[1] = (void *)v72;
      v39[v72] = 0;
      v39 = v122;
    }
    else
    {
      if ( v39 == (_BYTE *)&v35[v37 + 2] )
      {
        *v38 = v122;
        v38[1] = (void *)n;
        v38[2] = (void *)v124[0];
      }
      else
      {
        v40 = v35[4 * (int)v36 + 14];
        *v38 = v122;
        v38[1] = (void *)n;
        v38[2] = (void *)v124[0];
        if ( v39 )
        {
          v122 = v39;
          v124[0] = v40;
          goto LABEL_35;
        }
      }
      v39 = v124;
      v122 = v124;
    }
LABEL_35:
    n = 0;
    *v39 = 0;
    if ( v122 != v124 )
      operator delete(v122);
    if ( (_BYTE)v133 )
    {
      sub_FC7790(v130, (__int64 *)&v128, SHIBYTE(v133));
      v130 = 0;
      v133 = 0;
    }
    if ( v131 != &v132 )
      operator delete(v131);
    v41 = (void **)v128;
    if ( v128 )
    {
      v42 = v129;
      if ( v129 )
      {
        if ( (unsigned __int64)v128 < v129 || (unsigned __int64)v128 > v129 + 14848 )
        {
          v43 = *((void ***)v128 + 66);
          v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v128 + 134)];
          if ( v43 != v44 )
          {
            v100 = p_dest;
            v45 = v2;
            v46 = (void **)v128;
            v47 = v5;
            v48 = *((void ***)v128 + 66);
            do
            {
              while ( 1 )
              {
                v44 -= 8;
                v49 = (void **)v44[3];
                if ( v49 == v44 + 5 )
                  break;
                operator delete(v49);
                if ( v48 == v44 )
                  goto LABEL_48;
              }
            }
            while ( v48 != v44 );
LABEL_48:
            v5 = v47;
            v41 = v46;
            v2 = v45;
            p_dest = v100;
            v44 = (void **)v41[66];
          }
          if ( v44 != v41 + 68 )
            free(v44);
          v50 = (void **)v41[52];
          v51 = v41 + 52;
          if ( v50 != v41 + 54 )
            free(v50);
          v101 = v41 + 12;
          do
          {
            while ( 1 )
            {
              v51 -= 4;
              if ( *v51 == v51 + 2 )
                break;
              operator delete(*v51);
              if ( v51 == v101 )
                goto LABEL_56;
            }
          }
          while ( v51 != v101 );
LABEL_56:
          operator delete(v41, 0x3A0u);
        }
        else
        {
          v74 = *(unsigned int *)(v129 + 14976);
          *(_DWORD *)(v129 + 14976) = v74 + 1;
          *(_QWORD *)(v42 + 8 * v74 + 14848) = v41;
        }
      }
    }
LABEL_57:
    v5 += 4;
  }
  while ( v5 != &off_2B55220 );
  v52 = ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v53 = 0;
    v54 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v55 = (char *)ptr;
    do
    {
      v56 = *(_QWORD **)&v55[v53];
      if ( v56 && v56 != (_QWORD *)-8LL )
      {
        operator delete(v56, *v56 + 17LL, 8);
        v55 = (char *)ptr;
      }
      v53 += 8;
    }
    while ( v53 != v54 );
    v52 = v55;
  }
  free(v52);
  return src;
}
