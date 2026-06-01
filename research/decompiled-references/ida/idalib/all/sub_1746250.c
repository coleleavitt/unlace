void __fastcall sub_1746250(unsigned __int8 **a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 **v3; // r13
  unsigned __int8 *v4; // rdx
  __int64 v5; // r12
  void **p_dest; // rbx
  _BYTE *v7; // r14
  signed __int64 v8; // r15
  void *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  void **v14; // rbp
  _BYTE *v15; // rdi
  __int64 *v16; // rax
  unsigned __int8 *v17; // rbp
  unsigned __int8 v18; // r14
  __int64 v19; // r15
  _QWORD *v20; // rdx
  __int64 v21; // rax
  char *v22; // r14
  char *v23; // r13
  __int64 *v24; // r12
  __int64 v25; // rbx
  char *v26; // rbp
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  void *v29; // rax
  _BYTE *v30; // r15
  signed __int64 v31; // rbp
  void **v32; // rbp
  unsigned __int64 v33; // rax
  void **v34; // r12
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  size_t v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r14
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  _QWORD *v48; // r15
  unsigned __int64 v49; // rdx
  int v50; // eax
  _BYTE *v51; // rax
  unsigned __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r13
  unsigned __int8 *v59; // r12
  __int64 v60; // rbx
  __int64 v61; // rbp
  void *v62; // rdi
  unsigned __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r13
  unsigned __int8 *v70; // r12
  __int64 v71; // rbx
  __int64 v72; // rbp
  void *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rbx
  void *v78; // rdi
  __int64 v79; // rdx
  unsigned __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rbp
  char *v84; // rbx
  char *v85; // rdi
  __int64 v86; // rax
  _DWORD *v87; // r15
  char *v88; // rbx
  __int64 v89; // rbp
  _DWORD *v90; // rdi
  int v91; // eax
  size_t v92; // rdx
  _BYTE *v93; // rdi
  __int64 v94; // rbp
  _DWORD *v95; // rdi
  int v96; // ebx
  __int64 v97; // rbx
  char *v99; // [rsp+8h] [rbp-100h]
  __int64 v100; // [rsp+8h] [rbp-100h]
  int v102; // [rsp+20h] [rbp-E8h]
  void **v103; // [rsp+28h] [rbp-E0h]
  void **v104; // [rsp+28h] [rbp-E0h]
  int v105; // [rsp+28h] [rbp-E0h]
  void *v106; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v107; // [rsp+38h] [rbp-D0h]
  __int64 v108; // [rsp+40h] [rbp-C8h]
  void *v109; // [rsp+50h] [rbp-B8h]
  _WORD v110[16]; // [rsp+60h] [rbp-A8h] BYREF
  void *v111; // [rsp+80h] [rbp-88h] BYREF
  size_t n; // [rsp+88h] [rbp-80h]
  __int64 *dest; // [rsp+90h] [rbp-78h] BYREF
  __int64 v114; // [rsp+A0h] [rbp-68h] BYREF

  v3 = a1;
  sub_FC70B0((__int64)&v106, a2, 0, *((_DWORD *)a1 + 4));
  v4 = *a1;
  if ( !*a1 )
    goto LABEL_39;
  v102 = *v4;
  if ( !*v4 )
    goto LABEL_64;
  v5 = 0;
  p_dest = (void **)&dest;
  do
  {
    v17 = (unsigned __int8 *)v106;
    v18 = v4[(unsigned int)v5 + 1];
    if ( !v18 )
    {
      v7 = *(_BYTE **)&v4[32 * v5 + 96];
      v8 = *(_QWORD *)&v4[32 * v5 + 104];
      if ( !v106 )
      {
        v63 = v107;
        v64 = *(_DWORD *)(v107 + 14976);
        if ( v64 )
        {
          v65 = (unsigned int)(v64 - 1);
          *(_DWORD *)(v107 + 14976) = v65;
          v17 = *(unsigned __int8 **)(v63 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v67 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v68 = v67 + (v66 << 6);
          if ( v67 != v68 )
          {
            v69 = v5;
            v104 = p_dest;
            v70 = v17;
            v71 = v68;
            v72 = v67;
            do
            {
              while ( 1 )
              {
                v71 -= 64;
                v73 = *(void **)(v71 + 24);
                if ( v73 == (void *)(v71 + 40) )
                  break;
                operator delete(v73);
                if ( v72 == v71 )
                  goto LABEL_88;
              }
            }
            while ( v72 != v71 );
LABEL_88:
            p_dest = v104;
            v17 = v70;
            v5 = v69;
          }
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v17 = (unsigned __int8 *)operator new(0x3A0u);
          *v17 = 0;
          *((_QWORD *)v17 + 12) = v17 + 112;
          *((_QWORD *)v17 + 16) = v17 + 144;
          *((_QWORD *)v17 + 20) = v17 + 176;
          *((_QWORD *)v17 + 24) = v17 + 208;
          *((_QWORD *)v17 + 28) = v17 + 240;
          *((_QWORD *)v17 + 32) = v17 + 272;
          *((_QWORD *)v17 + 36) = v17 + 304;
          *((_QWORD *)v17 + 40) = v17 + 336;
          *((_QWORD *)v17 + 44) = v17 + 368;
          *((_QWORD *)v17 + 48) = v17 + 400;
          *((_QWORD *)v17 + 52) = v17 + 432;
          *((_QWORD *)v17 + 13) = 0;
          v17[112] = 0;
          *((_QWORD *)v17 + 17) = 0;
          v17[144] = 0;
          *((_QWORD *)v17 + 21) = 0;
          v17[176] = 0;
          *((_QWORD *)v17 + 25) = 0;
          v17[208] = 0;
          *((_QWORD *)v17 + 29) = 0;
          v17[240] = 0;
          *((_QWORD *)v17 + 33) = 0;
          v17[272] = 0;
          *((_QWORD *)v17 + 37) = 0;
          v17[304] = 0;
          *((_QWORD *)v17 + 41) = 0;
          v17[336] = 0;
          *((_QWORD *)v17 + 45) = 0;
          v17[368] = 0;
          *((_QWORD *)v17 + 49) = 0;
          v17[400] = 0;
          *((_QWORD *)v17 + 53) = 0x800000000LL;
          *((_QWORD *)v17 + 66) = v17 + 544;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        v106 = v17;
      }
      v17[*v17 + 1] = 0;
      v111 = p_dest;
      if ( &v7[v8] && !v7 )
LABEL_138:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v8 > 0xF )
      {
        if ( v8 < 0 )
LABEL_137:
          std::__throw_length_error("basic_string::_M_create");
        v9 = (void *)operator new(v8 + 1);
        dest = (__int64 *)v8;
        v111 = v9;
      }
      else
      {
        if ( v8 == 1 )
        {
          LOBYTE(dest) = *v7;
          v9 = p_dest;
          goto LABEL_10;
        }
        v9 = p_dest;
        if ( !v8 )
        {
LABEL_10:
          n = v8;
          *((_BYTE *)v9 + v8) = 0;
          v10 = v106;
          v11 = *(unsigned __int8 *)v106;
          *(_BYTE *)v106 = v11 + 1;
          v12 = (unsigned __int8)v11;
          v13 = 4 * (v11 + 3);
          v14 = (void **)&v10[v13];
          v15 = (_BYTE *)v10[v13];
          if ( v111 != p_dest )
          {
            if ( v15 == (_BYTE *)&v10[v13 + 2] )
            {
              *v14 = v111;
              v14[1] = (void *)n;
              v14[2] = dest;
            }
            else
            {
              v16 = (__int64 *)v10[4 * v12 + 14];
              *v14 = v111;
              v14[1] = (void *)n;
              v14[2] = dest;
              if ( v15 )
              {
                v111 = v15;
                dest = v16;
                goto LABEL_14;
              }
            }
            v111 = p_dest;
            v15 = p_dest;
LABEL_14:
            n = 0;
            *v15 = 0;
            if ( v111 != p_dest )
              operator delete(v111);
            goto LABEL_16;
          }
          v40 = n;
          if ( n )
          {
            if ( n == 1 )
            {
              *v15 = (_BYTE)dest;
              v92 = n;
              v93 = *v14;
              v14[1] = (void *)n;
              v93[v92] = 0;
              v15 = v111;
              goto LABEL_14;
            }
            memcpy(v15, p_dest, n);
            v40 = n;
            v15 = *v14;
          }
          v14[1] = (void *)v40;
          v15[v40] = 0;
          v15 = v111;
          goto LABEL_14;
        }
      }
      memcpy(v9, v7, v8);
      v9 = v111;
      goto LABEL_10;
    }
    v19 = *(_QWORD *)&v4[8 * (unsigned int)v5 + 16];
    if ( !v106 )
    {
      v52 = v107;
      v53 = *(_DWORD *)(v107 + 14976);
      if ( v53 )
      {
        v54 = (unsigned int)(v53 - 1);
        *(_DWORD *)(v107 + 14976) = v54;
        v17 = *(unsigned __int8 **)(v52 + 8 * v54 + 14848);
        v55 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v56 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
        v57 = v56 + (v55 << 6);
        if ( v56 != v57 )
        {
          v58 = v5;
          v103 = p_dest;
          v59 = v17;
          v60 = v57;
          v61 = v56;
          do
          {
            while ( 1 )
            {
              v60 -= 64;
              v62 = *(void **)(v60 + 24);
              if ( v62 == (void *)(v60 + 40) )
                break;
              operator delete(v62);
              if ( v61 == v60 )
                goto LABEL_81;
            }
          }
          while ( v61 != v60 );
LABEL_81:
          p_dest = v103;
          v17 = v59;
          v5 = v58;
        }
        *((_DWORD *)v17 + 134) = 0;
      }
      else
      {
        v17 = (unsigned __int8 *)operator new(0x3A0u);
        *v17 = 0;
        *((_QWORD *)v17 + 12) = v17 + 112;
        *((_QWORD *)v17 + 16) = v17 + 144;
        *((_QWORD *)v17 + 20) = v17 + 176;
        *((_QWORD *)v17 + 24) = v17 + 208;
        *((_QWORD *)v17 + 28) = v17 + 240;
        *((_QWORD *)v17 + 32) = v17 + 272;
        *((_QWORD *)v17 + 36) = v17 + 304;
        *((_QWORD *)v17 + 40) = v17 + 336;
        *((_QWORD *)v17 + 44) = v17 + 368;
        *((_QWORD *)v17 + 48) = v17 + 400;
        *((_QWORD *)v17 + 52) = v17 + 432;
        *((_QWORD *)v17 + 13) = 0;
        v17[112] = 0;
        *((_QWORD *)v17 + 17) = 0;
        v17[144] = 0;
        *((_QWORD *)v17 + 21) = 0;
        v17[176] = 0;
        *((_QWORD *)v17 + 25) = 0;
        v17[208] = 0;
        *((_QWORD *)v17 + 29) = 0;
        v17[240] = 0;
        *((_QWORD *)v17 + 33) = 0;
        v17[272] = 0;
        *((_QWORD *)v17 + 37) = 0;
        v17[304] = 0;
        *((_QWORD *)v17 + 41) = 0;
        v17[336] = 0;
        *((_QWORD *)v17 + 45) = 0;
        v17[368] = 0;
        *((_QWORD *)v17 + 49) = 0;
        v17[400] = 0;
        *((_QWORD *)v17 + 53) = 0x800000000LL;
        *((_QWORD *)v17 + 66) = v17 + 544;
        *((_QWORD *)v17 + 67) = 0x600000000LL;
      }
      v106 = v17;
    }
    v17[*v17 + 1] = v18;
    v20 = v106;
    v21 = *(unsigned __int8 *)v106;
    *(_BYTE *)v106 = v21 + 1;
    v20[v21 + 2] = v19;
LABEL_16:
    ++v5;
    v4 = *a1;
  }
  while ( v102 != (_DWORD)v5 );
  v3 = a1;
LABEL_64:
  v41 = *((_QWORD *)v4 + 52);
  if ( v41 != v41 + 12LL * *((unsigned int *)v4 + 106) )
  {
    v42 = *((_QWORD *)v4 + 52);
    v43 = v41 + 12LL * *((unsigned int *)v4 + 106);
    do
    {
      v48 = v106;
      if ( v106 )
      {
        v44 = *((unsigned int *)v106 + 106);
        v45 = *((unsigned int *)v106 + 107);
        v46 = v44 + 1;
      }
      else
      {
        v49 = v107;
        v50 = *(_DWORD *)(v107 + 14976);
        if ( v50 )
        {
          v74 = (unsigned int)(v50 - 1);
          *(_DWORD *)(v107 + 14976) = v74;
          v48 = *(_QWORD **)(v49 + 8 * v74 + 14848);
          v75 = *((unsigned int *)v48 + 134);
          *(_BYTE *)v48 = 0;
          v76 = v48[66];
          *((_DWORD *)v48 + 106) = 0;
          v77 = v76 + (v75 << 6);
          if ( v76 == v77 )
          {
            v46 = 1;
            v44 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v77 -= 64;
                v78 = *(void **)(v77 + 24);
                if ( v78 == (void *)(v77 + 40) )
                  break;
                v100 = v76;
                operator delete(v78);
                v76 = v100;
                if ( v100 == v77 )
                  goto LABEL_93;
              }
            }
            while ( v76 != v77 );
LABEL_93:
            v44 = *((unsigned int *)v48 + 106);
            v46 = v44 + 1;
          }
          *((_DWORD *)v48 + 134) = 0;
          v45 = *((unsigned int *)v48 + 107);
        }
        else
        {
          v51 = (_BYTE *)operator new(0x3A0u);
          v45 = 8;
          v46 = 1;
          v48 = v51;
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
          *((_QWORD *)v51 + 67) = 0x600000000LL;
          *((_QWORD *)v51 + 66) = v51 + 544;
          v44 = 0;
        }
        v106 = v48;
      }
      v111 = *(void **)v42;
      LODWORD(n) = *(_DWORD *)(v42 + 8);
      if ( v46 > v45 )
      {
        sub_2237220(v48 + 52, v48 + 54, v46, 12);
        v44 = *((unsigned int *)v48 + 106);
      }
      v42 += 12;
      v47 = v48[52] + 12 * v44;
      *(_QWORD *)v47 = v111;
      *(_DWORD *)(v47 + 8) = n;
      ++*((_DWORD *)v48 + 106);
    }
    while ( v43 != v42 );
    v4 = *v3;
  }
  v22 = *((char **)v4 + 66);
  if ( v22 != &v22[64 * (unsigned __int64)*((unsigned int *)v4 + 134)] )
  {
    v99 = &v22[64 * (unsigned __int64)*((unsigned int *)v4 + 134)];
    while ( 2 )
    {
      v23 = v22;
      if ( !*(_DWORD *)v22 || !*((_DWORD *)v22 + 1) )
        goto LABEL_38;
      v24 = (__int64 *)v106;
      if ( v106 )
      {
        v25 = *((unsigned int *)v106 + 134);
        v26 = *((char **)v106 + 66);
        v27 = v25 + 1;
        v28 = (unsigned __int64)&v26[64 * v25];
        if ( v27 <= *((unsigned int *)v106 + 135) )
          goto LABEL_32;
LABEL_124:
        v87 = v24 + 68;
        if ( v26 > v22 || v28 <= (unsigned __int64)v22 )
        {
          v94 = sub_2237400(v24 + 66, v24 + 68, v27, 64, &v111);
          sub_9EF810(v24 + 66, v94);
          v95 = (_DWORD *)v24[66];
          v96 = (int)v111;
          if ( v95 != v87 )
            free(v95);
          *((_DWORD *)v24 + 135) = v96;
          v97 = *((unsigned int *)v24 + 134);
          v24[66] = v94;
          v28 = v94 + (v97 << 6);
        }
        else
        {
          v88 = (char *)(v22 - v26);
          v89 = sub_2237400(v24 + 66, v24 + 68, v27, 64, &v111);
          sub_9EF810(v24 + 66, v89);
          v90 = (_DWORD *)v24[66];
          v91 = (int)v111;
          if ( v90 == v87 )
          {
            v24[66] = v89;
            *((_DWORD *)v24 + 135) = v91;
          }
          else
          {
            v105 = (int)v111;
            free(v90);
            v24[66] = v89;
            *((_DWORD *)v24 + 135) = v105;
          }
          v23 = &v88[v89];
          v28 = v89 + ((unsigned __int64)*((unsigned int *)v24 + 134) << 6);
        }
      }
      else
      {
        v80 = v107;
        v81 = *(_DWORD *)(v107 + 14976);
        if ( v81 )
        {
          v82 = (unsigned int)(v81 - 1);
          *(_DWORD *)(v107 + 14976) = v82;
          v24 = *(__int64 **)(v80 + 8 * v82 + 14848);
          v83 = *((unsigned int *)v24 + 134);
          v84 = (char *)v24[66];
          *(_BYTE *)v24 = 0;
          *((_DWORD *)v24 + 106) = 0;
          v26 = &v84[64 * v83];
          if ( v84 != v26 )
          {
            do
            {
              while ( 1 )
              {
                v26 -= 64;
                v85 = *((char **)v26 + 3);
                if ( v85 == v26 + 40 )
                  break;
                operator delete(v85);
                if ( v84 == v26 )
                  goto LABEL_120;
              }
            }
            while ( v84 != v26 );
LABEL_120:
            v26 = (char *)v24[66];
          }
          *((_DWORD *)v24 + 134) = 0;
          v86 = *((unsigned int *)v24 + 135);
        }
        else
        {
          v24 = (__int64 *)operator new(0x3A0u);
          *(_BYTE *)v24 = 0;
          v24[12] = (__int64)(v24 + 14);
          v26 = (char *)(v24 + 68);
          v24[16] = (__int64)(v24 + 18);
          v24[20] = (__int64)(v24 + 22);
          v24[24] = (__int64)(v24 + 26);
          v24[28] = (__int64)(v24 + 30);
          v24[32] = (__int64)(v24 + 34);
          v24[36] = (__int64)(v24 + 38);
          v24[40] = (__int64)(v24 + 42);
          v24[44] = (__int64)(v24 + 46);
          v24[48] = (__int64)(v24 + 50);
          v24[52] = (__int64)(v24 + 54);
          v24[13] = 0;
          *((_BYTE *)v24 + 112) = 0;
          v24[17] = 0;
          *((_BYTE *)v24 + 144) = 0;
          v24[21] = 0;
          *((_BYTE *)v24 + 176) = 0;
          v24[25] = 0;
          *((_BYTE *)v24 + 208) = 0;
          v24[29] = 0;
          *((_BYTE *)v24 + 240) = 0;
          v24[33] = 0;
          *((_BYTE *)v24 + 272) = 0;
          v24[37] = 0;
          *((_BYTE *)v24 + 304) = 0;
          v24[41] = 0;
          *((_BYTE *)v24 + 336) = 0;
          v24[45] = 0;
          *((_BYTE *)v24 + 368) = 0;
          v24[49] = 0;
          *((_BYTE *)v24 + 400) = 0;
          v24[53] = 0x800000000LL;
          v24[66] = (__int64)(v24 + 68);
          v24[67] = 0x600000000LL;
          v86 = 6;
        }
        v27 = 1;
        v106 = v24;
        v28 = (unsigned __int64)v26;
        if ( !v86 )
          goto LABEL_124;
      }
LABEL_32:
      *(_QWORD *)v28 = *(_QWORD *)v23;
      *(_DWORD *)(v28 + 8) = *((_DWORD *)v23 + 2);
      *(_QWORD *)(v28 + 12) = *(_QWORD *)(v23 + 12);
      *(_DWORD *)(v28 + 20) = *((_DWORD *)v23 + 5);
      v29 = (void *)(v28 + 40);
      *(_QWORD *)(v28 + 24) = v28 + 40;
      v30 = *((_BYTE **)v23 + 3);
      v31 = *((_QWORD *)v23 + 4);
      if ( &v30[v31] && !v30 )
        goto LABEL_138;
      if ( (unsigned __int64)v31 <= 0xF )
      {
        if ( v31 == 1 )
        {
          *(_BYTE *)(v28 + 40) = *v30;
          goto LABEL_37;
        }
        if ( v31 )
        {
LABEL_101:
          memcpy(v29, v30, v31);
          v29 = *(void **)(v28 + 24);
        }
LABEL_37:
        *(_QWORD *)(v28 + 32) = v31;
        *((_BYTE *)v29 + v31) = 0;
        *(_BYTE *)(v28 + 56) = v23[56];
        ++*((_DWORD *)v24 + 134);
LABEL_38:
        v22 += 64;
        if ( v99 == v22 )
          goto LABEL_39;
        continue;
      }
      break;
    }
    if ( v31 < 0 )
      goto LABEL_137;
    v29 = (void *)operator new(v31 + 1);
    *(_QWORD *)(v28 + 40) = v31;
    *(_QWORD *)(v28 + 24) = v29;
    goto LABEL_101;
  }
LABEL_39:
  sub_FC7230((__int64)&v111, a2, (__int64 *)&v106);
  sub_FCA320((__int64)&v111, a3);
  if ( dest != &v114 )
    operator delete(dest);
  v108 = 0;
  v110[8] = 0;
  if ( v109 != v110 )
    operator delete(v109);
  v32 = (void **)v106;
  if ( v106 )
  {
    v33 = v107;
    if ( v107 )
    {
      if ( (unsigned __int64)v106 < v107 || (unsigned __int64)v106 > v107 + 14848 )
      {
        v34 = *((void ***)v106 + 66);
        v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v106 + 134)];
        if ( v34 != v35 )
        {
          do
          {
            while ( 1 )
            {
              v35 -= 8;
              v36 = (void **)v35[3];
              if ( v36 == v35 + 5 )
                break;
              operator delete(v36);
              if ( v34 == v35 )
                goto LABEL_49;
            }
          }
          while ( v34 != v35 );
LABEL_49:
          v35 = (void **)v32[66];
        }
        if ( v35 != v32 + 68 )
          free(v35);
        v37 = (void **)v32[52];
        if ( v37 != v32 + 54 )
          free(v37);
        v38 = v32 + 48;
        v39 = v32 + 8;
        do
        {
          while ( *v38 != v38 + 2 )
          {
            operator delete(*v38);
            v38 -= 4;
            if ( v38 == v39 )
            {
              operator delete(v32, 0x3A0u);
              return;
            }
          }
          v38 -= 4;
        }
        while ( v39 != v38 );
        operator delete(v32, 0x3A0u);
      }
      else
      {
        v79 = *(unsigned int *)(v107 + 14976);
        *(_DWORD *)(v107 + 14976) = v79 + 1;
        *(_QWORD *)(v33 + 8 * v79 + 14848) = v32;
      }
    }
  }
}
