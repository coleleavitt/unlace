_BOOL8 __fastcall sub_FD4B80(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r12
  int v4; // ecx
  char **v5; // rbx
  char *v6; // r13
  signed __int64 v7; // r12
  signed __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 *v12; // rsi
  char v13; // al
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  unsigned int v15; // eax
  int v16; // eax
  __int64 *v17; // rsi
  char v18; // al
  void *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rbp
  char *v22; // rax
  __int64 v23; // rdi
  unsigned __int8 *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void **v31; // r12
  _BYTE *v32; // rdi
  __int64 v33; // rax
  unsigned __int8 *v34; // r12
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  void **v40; // r13
  _BYTE *v41; // rdi
  __int64 v42; // rax
  void **v43; // rbp
  unsigned __int64 v44; // rax
  void **v45; // r13
  void **v46; // r12
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // r13
  void **v50; // r12
  __int64 v51; // r9
  char *v52; // rcx
  __int64 v53; // rdx
  char *v54; // r8
  char *v55; // rbx
  char *v56; // r15
  __int64 v57; // r14
  char *i; // rax
  size_t v59; // r12
  __int64 v60; // rax
  char v61; // al
  int v62; // eax
  __int64 v63; // rbp
  __int64 *v64; // r13
  size_t v65; // rdx
  size_t v66; // rdx
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  int v69; // eax
  unsigned __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rbx
  char *v77; // r14
  signed __int64 v78; // r13
  unsigned __int8 *v79; // r12
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r13
  __int64 v83; // rdx
  __int64 v84; // r13
  char **v85; // rbp
  __int64 v86; // rbx
  void *v87; // rdi
  char *src; // [rsp+8h] [rbp-120h]
  char *srca; // [rsp+8h] [rbp-120h]
  void *v90; // [rsp+18h] [rbp-110h]
  void *v91; // [rsp+18h] [rbp-110h]
  __int64 v92; // [rsp+18h] [rbp-110h]
  char **v93; // [rsp+18h] [rbp-110h]
  char *dest; // [rsp+20h] [rbp-108h]
  bool v95; // [rsp+28h] [rbp-100h]
  __int64 v96; // [rsp+28h] [rbp-100h]
  __int64 v97; // [rsp+28h] [rbp-100h]
  void *ptr; // [rsp+40h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-E0h]
  void *v101; // [rsp+60h] [rbp-C8h]
  size_t v102; // [rsp+68h] [rbp-C0h]
  _QWORD v103[2]; // [rsp+70h] [rbp-B8h] BYREF
  void *v104; // [rsp+80h] [rbp-A8h]
  size_t n; // [rsp+88h] [rbp-A0h]
  _QWORD v106[2]; // [rsp+90h] [rbp-98h] BYREF
  void *v107; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v108; // [rsp+A8h] [rbp-80h]
  __int64 v109; // [rsp+B0h] [rbp-78h]
  void *v110; // [rsp+C0h] [rbp-68h]
  __int64 v111; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v112; // [rsp+E0h] [rbp-48h]

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 208);
  v4 = *(_DWORD *)(v3 + 316);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
  ptr = nullptr;
  if ( v4 )
  {
    sub_2220EB0(&ptr, *(unsigned int *)(v3 + 312));
    v52 = *(char **)(v3 + 304);
    dest = (char *)ptr;
    v53 = *(_QWORD *)(v3 + 316);
    *(__int64 *)((char *)si128.m128i_i64 + 4) = v53;
    if ( si128.m128i_i32[0] )
    {
      v54 = (char *)ptr;
      v55 = nullptr;
      v92 = v3;
      v56 = v52;
      v57 = 8LL * si128.m128i_u32[0] + 8;
      srca = (char *)(8LL * (unsigned int)(si128.m128i_i32[0] - 1));
      for ( i = v52; ; i = *(char **)(v92 + 304) )
      {
        v63 = *(_QWORD *)&v55[(_QWORD)i];
        v64 = (__int64 *)&v55[(_QWORD)v54];
        if ( !v63 || v63 == -8 )
        {
          *v64 = v63;
          v57 += 4;
          if ( srca == v55 )
            goto LABEL_86;
        }
        else
        {
          v59 = *(_QWORD *)v63;
          v60 = sub_220C370(*(_QWORD *)v63 + 17LL, 8, v53, v52, v54, v51);
          v51 = v60;
          if ( v59 )
          {
            v96 = v60;
            memcpy((void *)(v60 + 16), (const void *)(v63 + 16), v59);
            v51 = v96;
          }
          *(_BYTE *)(v51 + v59 + 16) = 0;
          v61 = *(_BYTE *)(v63 + 8);
          v52 = dest;
          *(_QWORD *)v51 = v59;
          *(_BYTE *)(v51 + 8) = v61;
          v62 = *(_DWORD *)&v56[v57];
          *v64 = v51;
          *(_DWORD *)&dest[v57] = v62;
          v57 += 4;
          if ( srca == v55 )
          {
LABEL_86:
            v2 = a1;
            break;
          }
        }
        v54 = (char *)ptr;
        v55 += 8;
      }
    }
  }
  v95 = 1;
  v5 = &off_2B2B280;
  do
  {
    v6 = *v5;
    v7 = (signed __int64)v5[1];
    v8 = (signed __int64)v5[3];
    src = v5[2];
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 528LL);
    if ( v9 == sub_FD4AE0 )
    {
      v10 = sub_2220DF0(v6, v7);
      v11 = sub_2221120(&ptr, v6, v7, v10);
      if ( v11 == -1 )
        v12 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
      else
        v12 = (__int64 *)((char *)ptr + 8 * v11);
      sub_E9D250((__int64 **)&v107, v12, 1);
      v90 = v107;
      sub_E9D250((__int64 **)&v107, (__int64 *)ptr + si128.m128i_u32[0], 1);
      if ( v107 == v90 )
        goto LABEL_15;
      v13 = *(_BYTE *)(*(_QWORD *)v90 + 8LL);
    }
    else
    {
      v13 = v9(v2, (__int64)&ptr, (__int64)v6, v7);
    }
    if ( !v13 )
      goto LABEL_15;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v2 + 528LL);
    if ( v14 == sub_FD4AE0 )
    {
      v15 = sub_2220DF0(src, v8);
      v16 = sub_2221120(&ptr, src, v8, v15);
      if ( v16 == -1 )
        v17 = (__int64 *)((char *)ptr + 8 * si128.m128i_u32[0]);
      else
        v17 = (__int64 *)((char *)ptr + 8 * v16);
      sub_E9D250((__int64 **)&v107, v17, 1);
      v91 = v107;
      sub_E9D250((__int64 **)&v107, (__int64 *)ptr + si128.m128i_u32[0], 1);
      if ( v107 == v91 )
        goto LABEL_27;
      v18 = *(_BYTE *)(*(_QWORD *)v91 + 8LL);
    }
    else
    {
      v18 = v14(v2, (__int64)&ptr, (__int64)src, v8);
    }
    if ( v18 )
      goto LABEL_15;
LABEL_27:
    sub_FA3370((__int64)&v107, a2, 0, 48);
    v25 = (unsigned __int8 *)v107;
    if ( !v107 )
    {
      v68 = v108;
      v69 = *(_DWORD *)(v108 + 14976);
      if ( v69 )
      {
        v72 = (unsigned int)(v69 - 1);
        *(_DWORD *)(v108 + 14976) = v72;
        v25 = *(unsigned __int8 **)(v68 + 8 * v72 + 14848);
        v73 = *((unsigned int *)v25 + 134);
        *v25 = 0;
        v74 = *((_QWORD *)v25 + 66);
        *((_DWORD *)v25 + 106) = 0;
        v75 = v74 + (v73 << 6);
        if ( v74 != v75 )
        {
          v93 = v5;
          v76 = v75;
          v97 = v2;
          v77 = v6;
          v78 = v7;
          v79 = v25;
          do
          {
            while ( 1 )
            {
              v76 -= 64;
              v80 = *(void **)(v76 + 24);
              if ( v80 == (void *)(v76 + 40) )
                break;
              operator delete(v80);
              if ( v74 == v76 )
                goto LABEL_121;
            }
          }
          while ( v74 != v76 );
LABEL_121:
          v25 = v79;
          v5 = v93;
          v7 = v78;
          v6 = v77;
          v2 = v97;
        }
        *((_DWORD *)v25 + 134) = 0;
      }
      else
      {
        v25 = (unsigned __int8 *)operator new(0x3A0u);
        *v25 = 0;
        *((_QWORD *)v25 + 12) = v25 + 112;
        *((_QWORD *)v25 + 16) = v25 + 144;
        *((_QWORD *)v25 + 20) = v25 + 176;
        *((_QWORD *)v25 + 24) = v25 + 208;
        *((_QWORD *)v25 + 28) = v25 + 240;
        *((_QWORD *)v25 + 32) = v25 + 272;
        *((_QWORD *)v25 + 36) = v25 + 304;
        *((_QWORD *)v25 + 40) = v25 + 336;
        *((_QWORD *)v25 + 44) = v25 + 368;
        *((_QWORD *)v25 + 48) = v25 + 400;
        *((_QWORD *)v25 + 52) = v25 + 432;
        *((_QWORD *)v25 + 13) = 0;
        v25[112] = 0;
        *((_QWORD *)v25 + 17) = 0;
        v25[144] = 0;
        *((_QWORD *)v25 + 21) = 0;
        v25[176] = 0;
        *((_QWORD *)v25 + 25) = 0;
        v25[208] = 0;
        *((_QWORD *)v25 + 29) = 0;
        v25[240] = 0;
        *((_QWORD *)v25 + 33) = 0;
        v25[272] = 0;
        *((_QWORD *)v25 + 37) = 0;
        v25[304] = 0;
        *((_QWORD *)v25 + 41) = 0;
        v25[336] = 0;
        *((_QWORD *)v25 + 45) = 0;
        v25[368] = 0;
        *((_QWORD *)v25 + 49) = 0;
        v25[400] = 0;
        *((_QWORD *)v25 + 53) = 0x800000000LL;
        *((_QWORD *)v25 + 66) = v25 + 544;
        *((_QWORD *)v25 + 67) = 0x600000000LL;
      }
      v107 = v25;
    }
    v25[*v25 + 1] = 0;
    v104 = v106;
    if ( &v6[v7] && !v6 )
LABEL_135:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v7 > 0xF )
    {
      if ( v7 < 0 )
LABEL_136:
        std::__throw_length_error("basic_string::_M_create");
      v26 = (_QWORD *)operator new(v7 + 1);
      v106[0] = v7;
      v104 = v26;
LABEL_94:
      memcpy(v26, v6, v7);
      v26 = v104;
      goto LABEL_33;
    }
    if ( v7 == 1 )
    {
      LOBYTE(v106[0]) = *v6;
      v26 = v106;
      goto LABEL_33;
    }
    v26 = v106;
    if ( v7 )
      goto LABEL_94;
LABEL_33:
    n = v7;
    *((_BYTE *)v26 + v7) = 0;
    v27 = v107;
    v28 = *(unsigned __int8 *)v107;
    *(_BYTE *)v107 = v28 + 1;
    v29 = (unsigned __int8)v28;
    v30 = 4 * (v28 + 3);
    v31 = (void **)&v27[v30];
    v32 = (_BYTE *)v27[v30];
    if ( v104 == v106 )
    {
      v65 = n;
      if ( n )
      {
        if ( n == 1 )
          *v32 = v106[0];
        else
          memcpy(v32, v106, n);
        v65 = n;
        v32 = *v31;
      }
      v31[1] = (void *)v65;
      v32[v65] = 0;
      v32 = v104;
    }
    else
    {
      if ( v32 == (_BYTE *)&v27[v30 + 2] )
      {
        *v31 = v104;
        v31[1] = (void *)n;
        v31[2] = (void *)v106[0];
      }
      else
      {
        v33 = v27[4 * v29 + 14];
        *v31 = v104;
        v31[1] = (void *)n;
        v31[2] = (void *)v106[0];
        if ( v32 )
        {
          v104 = v32;
          v106[0] = v33;
          goto LABEL_37;
        }
      }
      v104 = v106;
      v32 = v106;
    }
LABEL_37:
    n = 0;
    *v32 = 0;
    if ( v104 != v106 )
      operator delete(v104);
    v34 = (unsigned __int8 *)v107;
    if ( !v107 )
    {
      v70 = v108;
      v71 = *(_DWORD *)(v108 + 14976);
      if ( v71 )
      {
        v81 = (unsigned int)(v71 - 1);
        *(_DWORD *)(v108 + 14976) = v81;
        v34 = *(unsigned __int8 **)(v70 + 8 * v81 + 14848);
        v82 = *((unsigned int *)v34 + 134);
        v83 = *((_QWORD *)v34 + 66);
        *v34 = 0;
        *((_DWORD *)v34 + 106) = 0;
        v84 = v83 + (v82 << 6);
        if ( v83 != v84 )
        {
          v85 = v5;
          v86 = v83;
          do
          {
            while ( 1 )
            {
              v84 -= 64;
              v87 = *(void **)(v84 + 24);
              if ( v87 == (void *)(v84 + 40) )
                break;
              operator delete(v87);
              if ( v86 == v84 )
                goto LABEL_129;
            }
          }
          while ( v86 != v84 );
LABEL_129:
          v5 = v85;
        }
        *((_DWORD *)v34 + 134) = 0;
      }
      else
      {
        v34 = (unsigned __int8 *)operator new(0x3A0u);
        *v34 = 0;
        *((_QWORD *)v34 + 12) = v34 + 112;
        *((_QWORD *)v34 + 16) = v34 + 144;
        *((_QWORD *)v34 + 20) = v34 + 176;
        *((_QWORD *)v34 + 24) = v34 + 208;
        *((_QWORD *)v34 + 28) = v34 + 240;
        *((_QWORD *)v34 + 32) = v34 + 272;
        *((_QWORD *)v34 + 36) = v34 + 304;
        *((_QWORD *)v34 + 40) = v34 + 336;
        *((_QWORD *)v34 + 44) = v34 + 368;
        *((_QWORD *)v34 + 48) = v34 + 400;
        *((_QWORD *)v34 + 52) = v34 + 432;
        *((_QWORD *)v34 + 13) = 0;
        v34[112] = 0;
        *((_QWORD *)v34 + 17) = 0;
        v34[144] = 0;
        *((_QWORD *)v34 + 21) = 0;
        v34[176] = 0;
        *((_QWORD *)v34 + 25) = 0;
        v34[208] = 0;
        *((_QWORD *)v34 + 29) = 0;
        v34[240] = 0;
        *((_QWORD *)v34 + 33) = 0;
        v34[272] = 0;
        *((_QWORD *)v34 + 37) = 0;
        v34[304] = 0;
        *((_QWORD *)v34 + 41) = 0;
        v34[336] = 0;
        *((_QWORD *)v34 + 45) = 0;
        v34[368] = 0;
        *((_QWORD *)v34 + 49) = 0;
        v34[400] = 0;
        *((_QWORD *)v34 + 53) = 0x800000000LL;
        *((_QWORD *)v34 + 66) = v34 + 544;
        *((_QWORD *)v34 + 67) = 0x600000000LL;
      }
      v107 = v34;
    }
    v34[*v34 + 1] = 0;
    v35 = v103;
    v101 = v103;
    v95 = src == nullptr && &src[v8] != nullptr;
    if ( v95 )
      goto LABEL_135;
    if ( (unsigned __int64)v8 > 0xF )
    {
      if ( v8 < 0 )
        goto LABEL_136;
      v35 = (_QWORD *)operator new(v8 + 1);
      v103[0] = v8;
      v101 = v35;
LABEL_91:
      memcpy(v35, src, v8);
      v35 = v101;
      goto LABEL_44;
    }
    if ( v8 == 1 )
    {
      LOBYTE(v103[0]) = *src;
      goto LABEL_44;
    }
    if ( v8 )
      goto LABEL_91;
LABEL_44:
    v102 = v8;
    *((_BYTE *)v35 + v8) = 0;
    v36 = v107;
    v37 = *(unsigned __int8 *)v107;
    *(_BYTE *)v107 = v37 + 1;
    v38 = (unsigned __int8)v37;
    v39 = 4 * (v37 + 3);
    v40 = (void **)&v36[v39];
    v41 = (_BYTE *)v36[v39];
    if ( v101 == v103 )
    {
      v66 = v102;
      if ( v102 )
      {
        if ( v102 == 1 )
          *v41 = v103[0];
        else
          memcpy(v41, v101, v102);
        v66 = v102;
        v41 = *v40;
      }
      v40[1] = (void *)v66;
      v41[v66] = 0;
      v41 = v101;
    }
    else
    {
      if ( v41 == (_BYTE *)&v36[v39 + 2] )
      {
        *v40 = v101;
        v40[1] = (void *)v102;
        v40[2] = (void *)v103[0];
      }
      else
      {
        v42 = v36[4 * v38 + 14];
        *v40 = v101;
        v40[1] = (void *)v102;
        v40[2] = (void *)v103[0];
        if ( v41 )
        {
          v101 = v41;
          v103[0] = v42;
          goto LABEL_48;
        }
      }
      v41 = v103;
      v101 = v103;
    }
LABEL_48:
    v102 = 0;
    *v41 = 0;
    if ( v101 != v103 )
      operator delete(v101);
    if ( (_BYTE)v112 )
    {
      sub_FA3A50(v109, (__int64)&v107, SHIBYTE(v112));
      v109 = 0;
      v112 = 0;
    }
    if ( v110 != &v111 )
      operator delete(v110);
    v43 = (void **)v107;
    if ( v107 )
    {
      v44 = v108;
      if ( v108 )
      {
        if ( (unsigned __int64)v107 < v108 || (unsigned __int64)v107 > v108 + 14848 )
        {
          v45 = *((void ***)v107 + 66);
          v46 = &v45[8 * (unsigned __int64)*((unsigned int *)v107 + 134)];
          if ( v45 != v46 )
          {
            do
            {
              while ( 1 )
              {
                v46 -= 8;
                v47 = (void **)v46[3];
                if ( v47 == v46 + 5 )
                  break;
                operator delete(v47);
                if ( v45 == v46 )
                  goto LABEL_60;
              }
            }
            while ( v45 != v46 );
LABEL_60:
            v46 = (void **)v43[66];
          }
          if ( v46 != v43 + 68 )
            free(v46);
          v48 = (void **)v43[52];
          v49 = v43 + 52;
          if ( v48 != v43 + 54 )
            free(v48);
          v50 = v43 + 12;
          do
          {
            while ( 1 )
            {
              v49 -= 4;
              if ( *v49 == v49 + 2 )
                break;
              operator delete(*v49);
              if ( v49 == v50 )
                goto LABEL_68;
            }
          }
          while ( v49 != v50 );
LABEL_68:
          operator delete(v43, 0x3A0u);
        }
        else
        {
          v67 = *(unsigned int *)(v108 + 14976);
          *(_DWORD *)(v108 + 14976) = v67 + 1;
          *(_QWORD *)(v44 + 8 * v67 + 14848) = v43;
        }
      }
    }
LABEL_15:
    v5 += 4;
  }
  while ( &unk_2B2B320 != (_UNKNOWN *)v5 );
  v19 = ptr;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v20 = 0;
    v21 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v22 = (char *)ptr;
    do
    {
      v23 = *(_QWORD *)&v22[v20];
      if ( v23 && v23 != -8 )
      {
        operator delete();
        v22 = (char *)ptr;
      }
      v20 += 8;
    }
    while ( v20 != v21 );
    v19 = v22;
  }
  free(v19);
  return v95;
}

