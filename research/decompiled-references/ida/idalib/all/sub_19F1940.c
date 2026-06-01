void __fastcall sub_19F1940(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  __int64 *p_src; // r13
  unsigned __int8 *v7; // rbp
  _BYTE *v8; // rsi
  signed __int64 v9; // r15
  unsigned __int8 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 *v14; // rbp
  unsigned __int8 *v15; // rdi
  __int64 v16; // rax
  unsigned __int8 *v17; // r14
  _BYTE *v18; // rsi
  signed __int64 v19; // rdx
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rdi
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned int v33; // esi
  unsigned int v34; // r15d
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned int v44; // esi
  unsigned int v45; // r14d
  unsigned int v46; // edi
  __int64 v47; // rcx
  __int64 v48; // rdx
  size_t v49; // rdx
  size_t v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // r15
  signed __int64 v59; // r12
  __int64 v60; // r13
  __int64 v61; // rbx
  void *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // r13
  __int64 v68; // rbx
  void *v69; // rdi
  size_t v70; // rdx
  unsigned __int8 *v71; // rdi
  size_t v72; // rdx
  unsigned __int8 *v73; // rdi
  int v74; // r11d
  __int64 *v75; // r10
  __int64 v76; // r8
  __int64 v77; // rsi
  int v78; // r10d
  __int64 *v79; // r11
  __int64 v80; // r8
  __int64 v81; // rsi
  int v82; // r8d
  int v83; // r8d
  __int64 v84; // r9
  unsigned int v85; // edi
  int v86; // r8d
  int v87; // r8d
  __int64 v88; // r9
  unsigned int v89; // edi
  int v90; // edi
  int v91; // edi
  __int64 v92; // r8
  unsigned int v93; // r15d
  int v94; // edi
  int v95; // edi
  __int64 v96; // r8
  unsigned int v97; // r14d
  __int64 *v98; // r10
  int v99; // r11d
  __int64 *v100; // r10
  int v101; // r11d
  int v102; // r14d
  unsigned int v103; // r11d
  __int64 *v104; // r9
  int v105; // r10d
  int v106; // r11d
  unsigned int v107; // r10d
  __int64 *v108; // r9
  int v109; // r10d
  __int64 *v110; // [rsp+8h] [rbp-160h]
  __int64 v111; // [rsp+10h] [rbp-158h]
  _BYTE *v114; // [rsp+28h] [rbp-140h]
  _BYTE *v115; // [rsp+28h] [rbp-140h]
  _QWORD *v116; // [rsp+28h] [rbp-140h]
  __int64 v117; // [rsp+28h] [rbp-140h]
  __int64 v118; // [rsp+28h] [rbp-140h]
  __int64 v119; // [rsp+28h] [rbp-140h]
  __int64 v120; // [rsp+28h] [rbp-140h]
  signed __int64 v121; // [rsp+30h] [rbp-138h]
  __int64 *v122; // [rsp+30h] [rbp-138h]
  __int64 *v123; // [rsp+38h] [rbp-130h]
  void *v124; // [rsp+40h] [rbp-128h] BYREF
  signed __int64 v125; // [rsp+48h] [rbp-120h]
  __int64 v126; // [rsp+50h] [rbp-118h] BYREF
  void *v127; // [rsp+60h] [rbp-108h] BYREF
  signed __int64 v128; // [rsp+68h] [rbp-100h]
  __int64 v129; // [rsp+70h] [rbp-F8h] BYREF
  void *v130; // [rsp+80h] [rbp-E8h] BYREF
  size_t n; // [rsp+88h] [rbp-E0h]
  __int64 src; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v133[16]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v134; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v135; // [rsp+C0h] [rbp-A8h]
  __int64 v136; // [rsp+C8h] [rbp-A0h]
  char v137; // [rsp+118h] [rbp-50h]
  unsigned int v138; // [rsp+120h] [rbp-48h]
  char v139; // [rsp+124h] [rbp-44h]

  v4 = *(_QWORD *)a2;
  v111 = *(_QWORD *)a2 + 32LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v111 )
  {
    v5 = v133;
    v110 = (__int64 *)(a1 + 8);
    p_src = &src;
    sub_168B9F0((__int64)v133, (__int64 *)(a1 + 8), a3, 0x1A26u, 0);
    while ( 1 )
    {
      sub_F60C70(&v124, v4);
      if ( !v137 )
      {
        if ( !v139 )
          goto LABEL_4;
        v40 = sub_168B9E0(v5);
        v43 = v134;
        if ( v134 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v134 + 32LL))(v134);
        v44 = *(_DWORD *)(v40 + 16);
        if ( !v44 )
          goto LABEL_90;
        v42 = v44 - 1;
        v45 = ((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4);
        v46 = v42 & v45;
        v38 = (__int64 *)(*(_QWORD *)v40 + 32LL * ((unsigned int)v42 & v45));
        v47 = *v38;
        if ( v43 == *v38 )
        {
LABEL_37:
          v48 = v38[1];
LABEL_38:
          sub_AEC220((unsigned __int8 **)(v48 + 32LL * v138 + 8), v124, v125);
          goto LABEL_4;
        }
        v74 = 1;
        v75 = nullptr;
        if ( v47 != -4096 )
        {
          while ( 1 )
          {
            if ( v47 == -8192 && !v75 )
              v75 = v38;
            v46 = v42 & (v74 + v46);
            v38 = (__int64 *)(*(_QWORD *)v40 + 32LL * v46);
            v47 = *v38;
            if ( v43 == *v38 )
              goto LABEL_37;
            if ( v47 == -4096 )
              break;
            ++v74;
          }
          if ( v75 )
            v38 = v75;
        }
        v39 = (unsigned int)(*(_DWORD *)(v40 + 8) + 1);
        v41 = (unsigned int)(4 * v39);
        if ( (unsigned int)v41 < 3 * v44 )
        {
          v76 = v44 >> 3;
          if ( v44 - *(_DWORD *)(v40 + 12) - (unsigned int)v39 > (unsigned int)v76 )
            goto LABEL_79;
          v120 = v43;
          sub_1587800(v40, v44, (__int64)v38, v39, v76, v42);
          v94 = *(_DWORD *)(v40 + 16);
          if ( !v94 )
          {
LABEL_165:
            ++*(_DWORD *)(v40 + 8);
            BUG();
          }
          v95 = v94 - 1;
          v96 = *(_QWORD *)v40;
          v97 = v95 & v45;
          LODWORD(v39) = *(_DWORD *)(v40 + 8) + 1;
          v43 = v120;
          v38 = (__int64 *)(*(_QWORD *)v40 + 32LL * v97);
          v77 = *v38;
          if ( v120 != *v38 )
          {
            if ( v77 == -4096 )
              goto LABEL_103;
            v104 = (__int64 *)(*(_QWORD *)v40 + 32LL * v97);
            v105 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( v77 == -8192 && !v38 )
                v38 = v104;
              v106 = v105 + 1;
              v107 = v95 & (v97 + v105);
              v97 = v107;
              v104 = (__int64 *)(v96 + 32LL * v107);
              v77 = *v104;
              if ( v120 == *v104 )
              {
                v38 = (__int64 *)(v96 + 32LL * v107);
                goto LABEL_80;
              }
              if ( v77 == -4096 )
                break;
              v105 = v106;
            }
            if ( !v38 )
            {
              v38 = (__int64 *)(v96 + 32LL * v107);
LABEL_103:
              *(_DWORD *)(v40 + 8) = v39;
LABEL_82:
              *v38 = v43;
              v38[1] = 0;
              v38[2] = 0;
              v38[3] = 0;
              v48 = 0;
              goto LABEL_38;
            }
LABEL_79:
            v77 = *v38;
          }
        }
        else
        {
LABEL_90:
          v117 = v43;
          sub_1587800(v40, 2 * v44, (__int64)v38, v39, v41, v42);
          v82 = *(_DWORD *)(v40 + 16);
          if ( !v82 )
            goto LABEL_165;
          v43 = v117;
          v83 = v82 - 1;
          v84 = *(_QWORD *)v40;
          LODWORD(v39) = *(_DWORD *)(v40 + 8) + 1;
          v85 = v83 & (((unsigned int)v117 >> 9) ^ ((unsigned int)v117 >> 4));
          v38 = (__int64 *)(*(_QWORD *)v40 + 32LL * v85);
          v77 = *v38;
          if ( *v38 != v117 )
          {
            if ( v77 == -4096 )
              goto LABEL_103;
            v100 = (__int64 *)(*(_QWORD *)v40 + 32LL * (v83 & (((unsigned int)v117 >> 9) ^ ((unsigned int)v117 >> 4))));
            v101 = 1;
            v38 = nullptr;
            while ( 1 )
            {
              if ( !v38 && v77 == -8192 )
                v38 = v100;
              v102 = v101 + 1;
              v103 = v85 + v101;
              v85 = v83 & v103;
              v100 = (__int64 *)(v84 + 32LL * (v83 & v103));
              v77 = *v100;
              if ( v117 == *v100 )
              {
                v38 = (__int64 *)(v84 + 32LL * (v83 & v103));
                goto LABEL_80;
              }
              if ( v77 == -4096 )
                break;
              v101 = v102;
            }
            if ( !v38 )
            {
              v38 = (__int64 *)(v84 + 32LL * (v83 & v103));
              goto LABEL_103;
            }
            goto LABEL_79;
          }
          v77 = v117;
        }
LABEL_80:
        *(_DWORD *)(v40 + 8) = v39;
        if ( v77 != -4096 )
          --*(_DWORD *)(v40 + 12);
        goto LABEL_82;
      }
      v7 = v135;
      v8 = v124;
      v9 = v125;
      if ( !v135 )
      {
        v53 = v136;
        v54 = *(_DWORD *)(v136 + 14976);
        if ( v54 )
        {
          v63 = (unsigned int)(v54 - 1);
          *(_DWORD *)(v136 + 14976) = v63;
          v7 = *(unsigned __int8 **)(v53 + 8 * v63 + 14848);
          v64 = *((unsigned int *)v7 + 134);
          *v7 = 0;
          v65 = *((_QWORD *)v7 + 66);
          *((_DWORD *)v7 + 106) = 0;
          v66 = v65 + (v64 << 6);
          if ( v65 != v66 )
          {
            v122 = p_src;
            v67 = v4;
            v68 = v65;
            do
            {
              while ( 1 )
              {
                v66 -= 64;
                v69 = *(void **)(v66 + 24);
                if ( v69 == (void *)(v66 + 40) )
                  break;
                operator delete(v69);
                if ( v68 == v66 )
                  goto LABEL_70;
              }
            }
            while ( v68 != v66 );
LABEL_70:
            v4 = v67;
            p_src = v122;
          }
          *((_DWORD *)v7 + 134) = 0;
        }
        else
        {
          v115 = v124;
          v7 = (unsigned __int8 *)operator new(0x3A0u);
          *v7 = 0;
          *((_QWORD *)v7 + 12) = v7 + 112;
          *((_QWORD *)v7 + 16) = v7 + 144;
          *((_QWORD *)v7 + 20) = v7 + 176;
          *((_QWORD *)v7 + 24) = v7 + 208;
          *((_QWORD *)v7 + 28) = v7 + 240;
          *((_QWORD *)v7 + 32) = v7 + 272;
          *((_QWORD *)v7 + 36) = v7 + 304;
          *((_QWORD *)v7 + 40) = v7 + 336;
          *((_QWORD *)v7 + 44) = v7 + 368;
          *((_QWORD *)v7 + 48) = v7 + 400;
          *((_QWORD *)v7 + 52) = v7 + 432;
          *((_QWORD *)v7 + 13) = 0;
          v7[112] = 0;
          *((_QWORD *)v7 + 17) = 0;
          v7[144] = 0;
          *((_QWORD *)v7 + 21) = 0;
          v7[176] = 0;
          *((_QWORD *)v7 + 25) = 0;
          v7[208] = 0;
          *((_QWORD *)v7 + 29) = 0;
          v7[240] = 0;
          *((_QWORD *)v7 + 33) = 0;
          v7[272] = 0;
          *((_QWORD *)v7 + 37) = 0;
          v7[304] = 0;
          *((_QWORD *)v7 + 41) = 0;
          v7[336] = 0;
          *((_QWORD *)v7 + 45) = 0;
          v7[368] = 0;
          *((_QWORD *)v7 + 49) = 0;
          v7[400] = 0;
          *((_QWORD *)v7 + 53) = 0x800000000LL;
          v8 = v115;
          *((_QWORD *)v7 + 66) = v7 + 544;
          *((_QWORD *)v7 + 67) = 0x600000000LL;
        }
        v135 = v7;
      }
      v7[*v7 + 1] = 0;
      v130 = p_src;
      sub_19EA730(&v130, v8, (__int64)&v8[v9]);
      v10 = v135;
      v11 = *v135;
      *v135 = v11 + 1;
      v12 = (unsigned __int8)v11;
      v13 = 32 * (v11 + 3);
      v14 = &v10[v13];
      v15 = *(unsigned __int8 **)&v10[v13];
      if ( v130 == p_src )
      {
        v49 = n;
        if ( !n )
          goto LABEL_43;
        if ( n != 1 )
        {
          memcpy(v15, p_src, n);
          v49 = n;
          v15 = *(unsigned __int8 **)v14;
LABEL_43:
          *((_QWORD *)v14 + 1) = v49;
          v15[v49] = 0;
          v15 = (unsigned __int8 *)v130;
          goto LABEL_18;
        }
        *v15 = src;
        v72 = n;
        v73 = *(unsigned __int8 **)v14;
        *((_QWORD *)v14 + 1) = n;
        v73[v72] = 0;
        v15 = (unsigned __int8 *)v130;
      }
      else
      {
        if ( v15 == &v10[v13 + 16] )
        {
          *(_QWORD *)v14 = v130;
          *((_QWORD *)v14 + 1) = n;
          *((_QWORD *)v14 + 2) = src;
        }
        else
        {
          v16 = *(_QWORD *)&v10[32 * v12 + 112];
          *(_QWORD *)v14 = v130;
          *((_QWORD *)v14 + 1) = n;
          *((_QWORD *)v14 + 2) = src;
          if ( v15 )
          {
            v130 = v15;
            src = v16;
            goto LABEL_18;
          }
        }
        v130 = p_src;
        v15 = (unsigned __int8 *)p_src;
      }
LABEL_18:
      n = 0;
      *v15 = 0;
      if ( v130 != p_src )
        operator delete(v130);
LABEL_4:
      sub_F60C70(&v127, v4 + 16);
      if ( !v137 )
      {
        if ( !v139 )
          goto LABEL_6;
        v31 = sub_168B9E0(v5);
        v32 = v134;
        if ( v134 )
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v134 + 32LL))(v134);
        v33 = *(_DWORD *)(v31 + 16);
        if ( !v33 )
          goto LABEL_93;
        v30 = v33 - 1;
        v34 = ((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4);
        v35 = v30 & v34;
        v27 = (__int64 *)(*(_QWORD *)v31 + 32LL * ((unsigned int)v30 & v34));
        v36 = *v27;
        if ( v32 == *v27 )
        {
LABEL_31:
          v37 = v27[1];
LABEL_32:
          sub_AEC220((unsigned __int8 **)(v37 + 32LL * v138 + 8), v127, v128);
          goto LABEL_6;
        }
        v78 = 1;
        v79 = nullptr;
        if ( v36 != -4096 )
        {
          while ( 1 )
          {
            if ( !v79 && v36 == -8192 )
              v79 = v27;
            v35 = v30 & (v78 + v35);
            v27 = (__int64 *)(*(_QWORD *)v31 + 32LL * v35);
            v36 = *v27;
            if ( v32 == *v27 )
              goto LABEL_31;
            if ( v36 == -4096 )
              break;
            ++v78;
          }
          if ( v79 )
            v27 = v79;
        }
        v28 = (unsigned int)(*(_DWORD *)(v31 + 8) + 1);
        v29 = (unsigned int)(4 * v28);
        if ( (unsigned int)v29 < 3 * v33 )
        {
          v80 = v33 >> 3;
          if ( v33 - *(_DWORD *)(v31 + 12) - (unsigned int)v28 > (unsigned int)v80 )
            goto LABEL_86;
          v119 = v32;
          sub_1587800(v31, v33, (__int64)v27, v28, v80, v30);
          v90 = *(_DWORD *)(v31 + 16);
          if ( !v90 )
          {
LABEL_164:
            ++*(_DWORD *)(v31 + 8);
            BUG();
          }
          v91 = v90 - 1;
          v92 = *(_QWORD *)v31;
          v93 = v91 & v34;
          LODWORD(v28) = *(_DWORD *)(v31 + 8) + 1;
          v32 = v119;
          v27 = (__int64 *)(*(_QWORD *)v31 + 32LL * v93);
          v81 = *v27;
          if ( v119 != *v27 )
          {
            if ( v81 == -4096 )
              goto LABEL_99;
            v108 = (__int64 *)(*(_QWORD *)v31 + 32LL * v93);
            v109 = 1;
            v27 = nullptr;
            while ( 1 )
            {
              if ( v81 == -8192 && !v27 )
                v27 = v108;
              v93 = v91 & (v109 + v93);
              v108 = (__int64 *)(v92 + 32LL * v93);
              v81 = *v108;
              if ( v119 == *v108 )
              {
                v27 = (__int64 *)(v92 + 32LL * v93);
                goto LABEL_87;
              }
              if ( v81 == -4096 )
                break;
              ++v109;
            }
            if ( !v27 )
            {
              v27 = (__int64 *)(v92 + 32LL * v93);
              goto LABEL_99;
            }
LABEL_86:
            v81 = *v27;
          }
LABEL_87:
          *(_DWORD *)(v31 + 8) = v28;
          if ( v81 != -4096 )
            --*(_DWORD *)(v31 + 12);
        }
        else
        {
LABEL_93:
          v118 = v32;
          sub_1587800(v31, 2 * v33, (__int64)v27, v28, v29, v30);
          v86 = *(_DWORD *)(v31 + 16);
          if ( !v86 )
            goto LABEL_164;
          v32 = v118;
          v87 = v86 - 1;
          v88 = *(_QWORD *)v31;
          LODWORD(v28) = *(_DWORD *)(v31 + 8) + 1;
          v89 = v87 & (((unsigned int)v118 >> 9) ^ ((unsigned int)v118 >> 4));
          v27 = (__int64 *)(*(_QWORD *)v31 + 32LL * v89);
          v81 = *v27;
          if ( *v27 == v118 )
          {
            v81 = v118;
            goto LABEL_87;
          }
          if ( v81 == -4096 )
            goto LABEL_99;
          v98 = (__int64 *)(*(_QWORD *)v31 + 32LL * (v87 & (((unsigned int)v118 >> 9) ^ ((unsigned int)v118 >> 4))));
          v99 = 1;
          v27 = nullptr;
          while ( 1 )
          {
            if ( !v27 && v81 == -8192 )
              v27 = v98;
            v89 = v87 & (v99 + v89);
            v98 = (__int64 *)(v88 + 32LL * v89);
            v81 = *v98;
            if ( v118 == *v98 )
            {
              v27 = (__int64 *)(v88 + 32LL * v89);
              goto LABEL_87;
            }
            if ( v81 == -4096 )
              break;
            ++v99;
          }
          if ( v27 )
            goto LABEL_86;
          v27 = (__int64 *)(v88 + 32LL * v89);
LABEL_99:
          *(_DWORD *)(v31 + 8) = v28;
        }
        *v27 = v32;
        v27[1] = 0;
        v27[2] = 0;
        v27[3] = 0;
        v37 = 0;
        goto LABEL_32;
      }
      v17 = v135;
      v18 = v127;
      v19 = v128;
      if ( !v135 )
      {
        v51 = v136;
        v52 = *(_DWORD *)(v136 + 14976);
        if ( v52 )
        {
          v55 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v136 + 14976) = v55;
          v17 = *(unsigned __int8 **)(v51 + 8 * v55 + 14848);
          v56 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v57 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v58 = v57 + (v56 << 6);
          if ( v57 != v58 )
          {
            v116 = v5;
            v59 = v19;
            v123 = p_src;
            v60 = v4;
            v61 = v57;
            do
            {
              while ( 1 )
              {
                v58 -= 64;
                v62 = *(void **)(v58 + 24);
                if ( v62 == (void *)(v58 + 40) )
                  break;
                operator delete(v62);
                if ( v61 == v58 )
                  goto LABEL_62;
              }
            }
            while ( v61 != v58 );
LABEL_62:
            v19 = v59;
            v4 = v60;
            v5 = v116;
            p_src = v123;
          }
          *((_DWORD *)v17 + 134) = 0;
        }
        else
        {
          v121 = v128;
          v114 = v127;
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
          v18 = v114;
          *((_QWORD *)v17 + 66) = v17 + 544;
          v19 = v121;
          *((_QWORD *)v17 + 67) = 0x600000000LL;
        }
        v135 = v17;
      }
      v17[*v17 + 1] = 0;
      v130 = p_src;
      sub_19EA730(&v130, v18, (__int64)&v18[v19]);
      v20 = v135;
      v21 = *v135;
      *v135 = v21 + 1;
      v22 = (unsigned __int8)v21;
      v23 = 32 * (v21 + 3);
      v24 = &v20[v23];
      v25 = *(unsigned __int8 **)&v20[v23];
      if ( v130 == p_src )
      {
        v50 = n;
        if ( !n )
          goto LABEL_47;
        if ( n != 1 )
        {
          memcpy(v25, p_src, n);
          v50 = n;
          v25 = *(unsigned __int8 **)v24;
LABEL_47:
          *((_QWORD *)v24 + 1) = v50;
          v25[v50] = 0;
          v25 = (unsigned __int8 *)v130;
          goto LABEL_25;
        }
        *v25 = src;
        v70 = n;
        v71 = *(unsigned __int8 **)v24;
        *((_QWORD *)v24 + 1) = n;
        v71[v70] = 0;
        v25 = (unsigned __int8 *)v130;
      }
      else
      {
        if ( v25 == &v20[v23 + 16] )
        {
          *(_QWORD *)v24 = v130;
          *((_QWORD *)v24 + 1) = n;
          *((_QWORD *)v24 + 2) = src;
        }
        else
        {
          v26 = *(_QWORD *)&v20[32 * v22 + 112];
          *(_QWORD *)v24 = v130;
          *((_QWORD *)v24 + 1) = n;
          *((_QWORD *)v24 + 2) = src;
          if ( v25 )
          {
            v130 = v25;
            src = v26;
            goto LABEL_25;
          }
        }
        v130 = p_src;
        v25 = (unsigned __int8 *)p_src;
      }
LABEL_25:
      n = 0;
      *v25 = 0;
      if ( v130 != p_src )
        operator delete(v130);
LABEL_6:
      if ( v127 != &v129 )
        operator delete(v127);
      if ( v124 != &v126 )
        operator delete(v124);
      v4 += 32;
      sub_15F7200(v5);
      sub_168B9F0((__int64)v5, v110, a4, 0x70u, 0);
      sub_15F7200(v5);
      if ( v111 == v4 )
        return;
      sub_168B9F0((__int64)v5, v110, a3, 0x1A26u, 0);
    }
  }
}
