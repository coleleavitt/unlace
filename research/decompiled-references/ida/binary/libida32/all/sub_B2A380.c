void __fastcall sub_B2A380(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  char v8; // al
  unsigned __int8 *v9; // r14
  _BOOL8 v10; // r15
  _QWORD *v11; // rdx
  __int64 v12; // rax
  const char **v13; // rax
  size_t v14; // rdx
  char *v15; // rbx
  unsigned __int8 *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  void **v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  void *v29; // rdi
  void **v30; // rdi
  void **v31; // rdi
  void **v32; // rbx
  void **v33; // r12
  unsigned __int8 *v34; // r14
  bool v35; // r13
  _QWORD *v36; // rdx
  __int64 v37; // rax
  const char **v38; // rax
  const char *v39; // r15
  size_t v40; // r13
  const char *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // r13
  _BYTE *v48; // rdi
  __int64 v49; // rax
  _QWORD *v50; // rbx
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  void **v56; // r12
  void **v57; // rbx
  void **v58; // rdi
  void **v59; // rdi
  void **v60; // rbx
  void **v61; // r12
  void *v62; // rdi
  unsigned __int64 v63; // rcx
  int v64; // eax
  unsigned __int8 *v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r14
  __int64 v75; // rcx
  __int64 v76; // r14
  void *v77; // rdi
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 v80; // rdx
  __int64 v81; // r15
  void *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rbp
  __int64 v85; // r14
  __int64 v86; // rbp
  void *v87; // rdi
  unsigned __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  int v92; // eax
  unsigned __int64 v93; // rdx
  int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rbp
  __int64 v97; // r14
  __int64 v98; // rbp
  void *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r14
  __int64 v102; // r15
  __int64 v103; // r14
  void *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  void *v109; // rdi
  const char *v110; // [rsp+0h] [rbp-B8h]
  const char *v111; // [rsp+0h] [rbp-B8h]
  __int64 v112; // [rsp+0h] [rbp-B8h]
  __int64 v113; // [rsp+0h] [rbp-B8h]
  __int64 v114; // [rsp+8h] [rbp-B0h]
  __int64 v115; // [rsp+8h] [rbp-B0h]
  _QWORD *src; // [rsp+10h] [rbp-A8h]
  int n; // [rsp+18h] [rbp-A0h]
  size_t na; // [rsp+18h] [rbp-A0h]
  int nb; // [rsp+18h] [rbp-A0h]
  _QWORD v120[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v121; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v122; // [rsp+38h] [rbp-80h]
  __int64 v123; // [rsp+40h] [rbp-78h]
  void *v124; // [rsp+50h] [rbp-68h]
  _BYTE v125[16]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v126; // [rsp+70h] [rbp-48h]

  v4 = (a2[3] >> 8) & 0xFFFFF;
  if ( (*((_BYTE *)sub_B1A550(a1[3], v4) + 19) & 8) == 0 )
    return;
  v5 = a1[5];
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 8) + 28LL) & 0x7F) == 0x4B )
        return;
    }
    else
    {
      sub_B169D0((__int64 *)v5, v4);
      v5 = a1[5];
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 8) + 28LL) & 0x7F) == 0x4B )
        return;
      if ( (*(_BYTE *)(v5 + 48) & 1) == 0 )
      {
        sub_B169D0((__int64 *)v5, v4);
        v5 = a1[5];
      }
    }
    if ( (*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v6 + 16) == 13 && ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        v7 = 2;
        v8 = *(_BYTE *)(*(_QWORD *)v5 + 28LL) & 0x7F;
        if ( v8 != 36 )
        {
          v7 = 1;
          if ( v8 != 38 )
            v7 = (*(unsigned __int8 *)(v5 + 48) << 25 >> 31) & 3;
        }
        sub_FA3370(&v121, a1[2], *a2, 2649);
        v9 = (unsigned __int8 *)v121;
        v10 = (*((_BYTE *)a2 + 15) & 0x10) != 0;
        if ( !v121 )
        {
          v93 = v122;
          v94 = *(_DWORD *)(v122 + 14976);
          if ( v94 )
          {
            v105 = (unsigned int)(v94 - 1);
            *(_DWORD *)(v122 + 14976) = v105;
            v9 = *(unsigned __int8 **)(v93 + 8 * v105 + 14848);
            v106 = *((unsigned int *)v9 + 134);
            *v9 = 0;
            v107 = *((_QWORD *)v9 + 66);
            *((_DWORD *)v9 + 106) = 0;
            v108 = v107 + (v106 << 6);
            while ( v107 != v108 )
            {
              while ( 1 )
              {
                v108 -= 64;
                v109 = *(void **)(v108 + 24);
                if ( v109 == (void *)(v108 + 40) )
                  break;
                v115 = v108;
                v113 = v107;
                operator delete(v109);
                v107 = v113;
                v108 = v115;
                if ( v113 == v115 )
                  goto LABEL_154;
              }
            }
LABEL_154:
            *((_DWORD *)v9 + 134) = 0;
          }
          else
          {
            v9 = (unsigned __int8 *)operator new(0x3A0u);
            *v9 = 0;
            *((_QWORD *)v9 + 12) = v9 + 112;
            *((_QWORD *)v9 + 16) = v9 + 144;
            *((_QWORD *)v9 + 20) = v9 + 176;
            *((_QWORD *)v9 + 24) = v9 + 208;
            *((_QWORD *)v9 + 28) = v9 + 240;
            *((_QWORD *)v9 + 32) = v9 + 272;
            *((_QWORD *)v9 + 36) = v9 + 304;
            *((_QWORD *)v9 + 40) = v9 + 336;
            *((_QWORD *)v9 + 44) = v9 + 368;
            *((_QWORD *)v9 + 48) = v9 + 400;
            *((_QWORD *)v9 + 52) = v9 + 432;
            *((_QWORD *)v9 + 13) = 0;
            v9[112] = 0;
            *((_QWORD *)v9 + 17) = 0;
            v9[144] = 0;
            *((_QWORD *)v9 + 21) = 0;
            v9[176] = 0;
            *((_QWORD *)v9 + 25) = 0;
            v9[208] = 0;
            *((_QWORD *)v9 + 29) = 0;
            v9[240] = 0;
            *((_QWORD *)v9 + 33) = 0;
            v9[272] = 0;
            *((_QWORD *)v9 + 37) = 0;
            v9[304] = 0;
            *((_QWORD *)v9 + 41) = 0;
            v9[336] = 0;
            *((_QWORD *)v9 + 45) = 0;
            v9[368] = 0;
            *((_QWORD *)v9 + 49) = 0;
            v9[400] = 0;
            *((_QWORD *)v9 + 53) = 0x800000000LL;
            *((_QWORD *)v9 + 66) = v9 + 544;
            *((_QWORD *)v9 + 67) = 0x600000000LL;
          }
          v121 = v9;
        }
        v9[*v9 + 1] = 2;
        v11 = v121;
        v12 = *(unsigned __int8 *)v121;
        *(_BYTE *)v121 = v12 + 1;
        v11[v12 + 2] = v10;
        v13 = (const char **)sub_B1A550(a1[3], (a2[3] >> 8) & 0xFFFFF);
        v14 = 0;
        v15 = (char *)*v13;
        if ( *v13 )
          v14 = strlen(*v13);
        sub_AC84E0((unsigned __int8 **)&v121, v15, v14);
        v16 = (unsigned __int8 *)v121;
        if ( !v121 )
        {
          v91 = v122;
          v92 = *(_DWORD *)(v122 + 14976);
          if ( v92 )
          {
            v100 = (unsigned int)(v92 - 1);
            *(_DWORD *)(v122 + 14976) = v100;
            v16 = *(unsigned __int8 **)(v91 + 8 * v100 + 14848);
            v101 = *((unsigned int *)v16 + 134);
            *v16 = 0;
            v102 = *((_QWORD *)v16 + 66);
            *((_DWORD *)v16 + 106) = 0;
            v103 = v102 + (v101 << 6);
            while ( v102 != v103 )
            {
              while ( 1 )
              {
                v103 -= 64;
                v104 = *(void **)(v103 + 24);
                if ( v104 == (void *)(v103 + 40) )
                  break;
                operator delete(v104);
                if ( v102 == v103 )
                  goto LABEL_149;
              }
            }
LABEL_149:
            *((_DWORD *)v16 + 134) = 0;
          }
          else
          {
            v16 = (unsigned __int8 *)operator new(0x3A0u);
            *v16 = 0;
            *((_QWORD *)v16 + 12) = v16 + 112;
            *((_QWORD *)v16 + 16) = v16 + 144;
            *((_QWORD *)v16 + 20) = v16 + 176;
            *((_QWORD *)v16 + 24) = v16 + 208;
            *((_QWORD *)v16 + 28) = v16 + 240;
            *((_QWORD *)v16 + 32) = v16 + 272;
            *((_QWORD *)v16 + 36) = v16 + 304;
            *((_QWORD *)v16 + 40) = v16 + 336;
            *((_QWORD *)v16 + 44) = v16 + 368;
            *((_QWORD *)v16 + 48) = v16 + 400;
            *((_QWORD *)v16 + 52) = v16 + 432;
            *((_QWORD *)v16 + 13) = 0;
            v16[112] = 0;
            *((_QWORD *)v16 + 17) = 0;
            v16[144] = 0;
            *((_QWORD *)v16 + 21) = 0;
            v16[176] = 0;
            *((_QWORD *)v16 + 25) = 0;
            v16[208] = 0;
            *((_QWORD *)v16 + 29) = 0;
            v16[240] = 0;
            *((_QWORD *)v16 + 33) = 0;
            v16[272] = 0;
            *((_QWORD *)v16 + 37) = 0;
            v16[304] = 0;
            *((_QWORD *)v16 + 41) = 0;
            v16[336] = 0;
            *((_QWORD *)v16 + 45) = 0;
            v16[368] = 0;
            *((_QWORD *)v16 + 49) = 0;
            v16[400] = 0;
            *((_QWORD *)v16 + 53) = 0x800000000LL;
            *((_QWORD *)v16 + 66) = v16 + 544;
            *((_QWORD *)v16 + 67) = 0x600000000LL;
          }
          v121 = v16;
        }
        v16[*v16 + 1] = 3;
        v17 = v121;
        v18 = *(unsigned __int8 *)v121;
        *(_BYTE *)v121 = v18 + 1;
        v17[v18 + 2] = v7;
        v19 = v121;
        v20 = *(_QWORD *)(a2 + 1);
        if ( v121 )
        {
          v21 = *((unsigned int *)v121 + 106);
          v22 = *((unsigned int *)v121 + 107);
          v23 = v21 + 1;
        }
        else
        {
          v88 = v122;
          v89 = *(_DWORD *)(v122 + 14976);
          if ( v89 )
          {
            v95 = (unsigned int)(v89 - 1);
            *(_DWORD *)(v122 + 14976) = v95;
            v19 = *(_QWORD **)(v88 + 8 * v95 + 14848);
            v96 = *((unsigned int *)v19 + 134);
            *(_BYTE *)v19 = 0;
            v97 = v19[66];
            *((_DWORD *)v19 + 106) = 0;
            v98 = v97 + (v96 << 6);
            while ( v97 != v98 )
            {
              while ( 1 )
              {
                v98 -= 64;
                v99 = *(void **)(v98 + 24);
                if ( v99 == (void *)(v98 + 40) )
                  break;
                operator delete(v99);
                if ( v97 == v98 )
                  goto LABEL_144;
              }
            }
LABEL_144:
            v21 = *((unsigned int *)v19 + 106);
            v22 = *((unsigned int *)v19 + 107);
            *((_DWORD *)v19 + 134) = 0;
            v23 = v21 + 1;
          }
          else
          {
            v90 = operator new(0x3A0u);
            v22 = 8;
            v23 = 1;
            v19 = (_QWORD *)v90;
            *(_BYTE *)v90 = 0;
            *(_QWORD *)(v90 + 96) = v90 + 112;
            *(_QWORD *)(v90 + 128) = v90 + 144;
            *(_QWORD *)(v90 + 160) = v90 + 176;
            *(_QWORD *)(v90 + 192) = v90 + 208;
            *(_QWORD *)(v90 + 224) = v90 + 240;
            *(_QWORD *)(v90 + 256) = v90 + 272;
            *(_QWORD *)(v90 + 288) = v90 + 304;
            *(_QWORD *)(v90 + 320) = v90 + 336;
            *(_QWORD *)(v90 + 352) = v90 + 368;
            *(_QWORD *)(v90 + 384) = v90 + 400;
            *(_QWORD *)(v90 + 416) = v90 + 432;
            *(_QWORD *)(v90 + 104) = 0;
            *(_BYTE *)(v90 + 112) = 0;
            *(_QWORD *)(v90 + 136) = 0;
            *(_BYTE *)(v90 + 144) = 0;
            *(_QWORD *)(v90 + 168) = 0;
            *(_BYTE *)(v90 + 176) = 0;
            *(_QWORD *)(v90 + 200) = 0;
            *(_BYTE *)(v90 + 208) = 0;
            *(_QWORD *)(v90 + 232) = 0;
            *(_BYTE *)(v90 + 240) = 0;
            *(_QWORD *)(v90 + 264) = 0;
            *(_BYTE *)(v90 + 272) = 0;
            *(_QWORD *)(v90 + 296) = 0;
            *(_BYTE *)(v90 + 304) = 0;
            *(_QWORD *)(v90 + 328) = 0;
            *(_BYTE *)(v90 + 336) = 0;
            *(_QWORD *)(v90 + 360) = 0;
            *(_BYTE *)(v90 + 368) = 0;
            *(_QWORD *)(v90 + 392) = 0;
            *(_BYTE *)(v90 + 400) = 0;
            *(_QWORD *)(v90 + 424) = 0x800000000LL;
            *(_QWORD *)(v90 + 528) = v90 + 544;
            *(_QWORD *)(v90 + 536) = 0x600000000LL;
            v21 = 0;
          }
          v121 = v19;
        }
        LOBYTE(n) = 1;
        if ( v23 > v22 )
        {
          sub_22134E0(v19 + 52, v19 + 54, v23, 12);
          v21 = *((unsigned int *)v19 + 106);
        }
        v24 = v19[52] + 12 * v21;
        *(_QWORD *)v24 = v20;
        *(_DWORD *)(v24 + 8) = n;
        ++*((_DWORD *)v19 + 106);
        if ( (_BYTE)v126 )
        {
          sub_FA3A50(v123, &v121, HIBYTE(v126));
          v123 = 0;
          v126 = 0;
        }
        if ( v124 != v125 )
          operator delete(v124);
        v25 = (void **)v121;
        if ( v121 )
        {
          v26 = v122;
          if ( v122 )
          {
            if ( (unsigned __int64)v121 >= v122 && (unsigned __int64)v121 <= v122 + 14848 )
            {
LABEL_100:
              v67 = *(unsigned int *)(v26 + 14976);
              *(_DWORD *)(v26 + 14976) = v67 + 1;
              *(_QWORD *)(v26 + 8 * v67 + 14848) = v25;
              return;
            }
            v27 = *((_QWORD *)v121 + 66);
            v28 = v27 + ((unsigned __int64)*((unsigned int *)v121 + 134) << 6);
            while ( v27 != v28 )
            {
              while ( 1 )
              {
                v28 -= 64;
                v29 = *(void **)(v28 + 24);
                if ( v29 == (void *)(v28 + 40) )
                  break;
                operator delete(v29);
                if ( v27 == v28 )
                  goto LABEL_31;
              }
            }
LABEL_31:
            v30 = (void **)v25[66];
            if ( v30 != v25 + 68 )
              free(v30);
            v31 = (void **)v25[52];
            if ( v31 != v25 + 54 )
              free(v31);
            v32 = v25 + 48;
            v33 = v25 + 8;
            do
            {
              while ( *v32 != v32 + 2 )
              {
                operator delete(*v32);
                v32 -= 4;
                if ( v32 == v33 )
                  goto LABEL_38;
              }
              v32 -= 4;
            }
            while ( v32 != v33 );
LABEL_38:
            operator delete(v25, 0x3A0u);
            return;
          }
        }
      }
      return;
    }
  }
  sub_FA3370(&v121, a1[2], *a2, 2650);
  v34 = (unsigned __int8 *)v121;
  v35 = (*((_BYTE *)a2 + 15) & 0x10) != 0;
  if ( !v121 )
  {
    v71 = v122;
    v72 = *(_DWORD *)(v122 + 14976);
    if ( v72 )
    {
      v78 = (unsigned int)(v72 - 1);
      *(_DWORD *)(v122 + 14976) = v78;
      v34 = *(unsigned __int8 **)(v71 + 8 * v78 + 14848);
      v79 = *((unsigned int *)v34 + 134);
      *v34 = 0;
      v80 = *((_QWORD *)v34 + 66);
      *((_DWORD *)v34 + 106) = 0;
      v81 = v80 + (v79 << 6);
      while ( v80 != v81 )
      {
        while ( 1 )
        {
          v81 -= 64;
          v82 = *(void **)(v81 + 24);
          if ( v82 == (void *)(v81 + 40) )
            break;
          v112 = v80;
          operator delete(v82);
          v80 = v112;
          if ( v112 == v81 )
            goto LABEL_118;
        }
      }
LABEL_118:
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
    v121 = v34;
  }
  v34[*v34 + 1] = 2;
  v36 = v121;
  v37 = *(unsigned __int8 *)v121;
  *(_BYTE *)v121 = v37 + 1;
  v36[v37 + 2] = v35;
  v38 = (const char **)sub_B1A550(a1[3], (a2[3] >> 8) & 0xFFFFF);
  v39 = *v38;
  if ( *v38 )
  {
    v40 = strlen(*v38);
    v41 = &v39[v40];
    if ( v121 )
    {
      *((_BYTE *)v121 + *(unsigned __int8 *)v121 + 1) = 0;
      src = v120;
      goto LABEL_43;
    }
  }
  else
  {
    v41 = (const char *)v121;
    if ( v121 )
    {
      v40 = 0;
      *((_BYTE *)v121 + *(unsigned __int8 *)v121 + 1) = 0;
      v42 = v120;
      src = v120;
      goto LABEL_46;
    }
    v40 = 0;
  }
  v63 = v122;
  v64 = *(_DWORD *)(v122 + 14976);
  if ( v64 )
  {
    v73 = (unsigned int)(v64 - 1);
    *(_DWORD *)(v122 + 14976) = v73;
    v65 = *(unsigned __int8 **)(v63 + 8 * v73 + 14848);
    v74 = *((unsigned int *)v65 + 134);
    *v65 = 0;
    v75 = *((_QWORD *)v65 + 66);
    *((_DWORD *)v65 + 106) = 0;
    v76 = v75 + (v74 << 6);
    while ( v75 != v76 )
    {
      while ( 1 )
      {
        v76 -= 64;
        v77 = *(void **)(v76 + 24);
        if ( v77 == (void *)(v76 + 40) )
          break;
        v114 = v75;
        v111 = v41;
        operator delete(v77);
        v75 = v114;
        v41 = v111;
        if ( v114 == v76 )
          goto LABEL_113;
      }
    }
LABEL_113:
    *((_DWORD *)v65 + 134) = 0;
  }
  else
  {
    v110 = v41;
    v65 = (unsigned __int8 *)operator new(0x3A0u);
    *v65 = 0;
    *((_QWORD *)v65 + 12) = v65 + 112;
    *((_QWORD *)v65 + 16) = v65 + 144;
    *((_QWORD *)v65 + 20) = v65 + 176;
    *((_QWORD *)v65 + 24) = v65 + 208;
    *((_QWORD *)v65 + 28) = v65 + 240;
    *((_QWORD *)v65 + 32) = v65 + 272;
    *((_QWORD *)v65 + 36) = v65 + 304;
    *((_QWORD *)v65 + 40) = v65 + 336;
    *((_QWORD *)v65 + 44) = v65 + 368;
    *((_QWORD *)v65 + 48) = v65 + 400;
    *((_QWORD *)v65 + 52) = v65 + 432;
    *((_QWORD *)v65 + 13) = 0;
    v65[112] = 0;
    *((_QWORD *)v65 + 17) = 0;
    v65[144] = 0;
    *((_QWORD *)v65 + 21) = 0;
    v65[176] = 0;
    *((_QWORD *)v65 + 25) = 0;
    v65[208] = 0;
    *((_QWORD *)v65 + 29) = 0;
    v65[240] = 0;
    *((_QWORD *)v65 + 33) = 0;
    v65[272] = 0;
    *((_QWORD *)v65 + 37) = 0;
    v65[304] = 0;
    *((_QWORD *)v65 + 41) = 0;
    v65[336] = 0;
    *((_QWORD *)v65 + 45) = 0;
    v65[368] = 0;
    *((_QWORD *)v65 + 49) = 0;
    v65[400] = 0;
    *((_QWORD *)v65 + 53) = 0x800000000LL;
    v41 = v110;
    *((_QWORD *)v65 + 66) = v65 + 544;
    *((_QWORD *)v65 + 67) = 0x600000000LL;
  }
  v121 = v65;
  v65[*v65 + 1] = 0;
  src = v120;
  if ( !v39 && v41 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
LABEL_43:
  if ( v40 > 0xF )
  {
    v42 = (_QWORD *)operator new(v40 + 1);
    v120[0] = v40;
    src = v42;
LABEL_83:
    memcpy(v42, v39, v40);
    v42 = src;
    goto LABEL_46;
  }
  if ( v40 == 1 )
  {
    LOBYTE(v120[0]) = *v39;
    v42 = v120;
    goto LABEL_46;
  }
  v42 = v120;
  if ( v40 )
    goto LABEL_83;
LABEL_46:
  na = v40;
  *((_BYTE *)v42 + v40) = 0;
  v43 = v121;
  v44 = *(unsigned __int8 *)v121;
  *(_BYTE *)v121 = v44 + 1;
  v45 = (unsigned __int8)v44;
  v46 = 4 * (v44 + 3);
  v47 = &v43[v46];
  v48 = (_BYTE *)v43[v46];
  if ( src == v120 )
  {
    v66 = na;
    if ( na )
    {
      if ( na == 1 )
      {
        *v48 = v120[0];
        v66 = 1;
      }
      else
      {
        memcpy(v48, src, na);
        v66 = na;
      }
      v48 = (_BYTE *)*v47;
    }
    v47[1] = v66;
    v48[v66] = 0;
    v48 = src;
  }
  else
  {
    if ( v48 == (_BYTE *)&v43[v46 + 2] )
    {
      *v47 = src;
      v47[1] = na;
      v47[2] = v120[0];
    }
    else
    {
      v49 = v43[4 * v45 + 14];
      *v47 = src;
      v47[1] = na;
      v47[2] = v120[0];
      if ( v48 )
      {
        src = v48;
        v120[0] = v49;
        goto LABEL_50;
      }
    }
    v48 = v120;
    src = v120;
  }
LABEL_50:
  nb = 0;
  *v48 = 0;
  if ( src != v120 )
    operator delete(src);
  v50 = v121;
  v51 = *(_QWORD *)(a2 + 1);
  if ( v121 )
  {
    v52 = *((unsigned int *)v121 + 106);
    v53 = *((unsigned int *)v121 + 107);
    v54 = v52 + 1;
  }
  else
  {
    v68 = v122;
    v69 = *(_DWORD *)(v122 + 14976);
    if ( v69 )
    {
      v83 = (unsigned int)(v69 - 1);
      *(_DWORD *)(v122 + 14976) = v83;
      v50 = *(_QWORD **)(v68 + 8 * v83 + 14848);
      v84 = *((unsigned int *)v50 + 134);
      *(_BYTE *)v50 = 0;
      v85 = v50[66];
      *((_DWORD *)v50 + 106) = 0;
      v86 = v85 + (v84 << 6);
      if ( v85 == v86 )
      {
        v54 = 1;
        v52 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v86 -= 64;
            v87 = *(void **)(v86 + 24);
            if ( v87 == (void *)(v86 + 40) )
              break;
            operator delete(v87);
            if ( v85 == v86 )
              goto LABEL_122;
          }
        }
        while ( v85 != v86 );
LABEL_122:
        v52 = *((unsigned int *)v50 + 106);
        v54 = v52 + 1;
      }
      *((_DWORD *)v50 + 134) = 0;
      v53 = *((unsigned int *)v50 + 107);
    }
    else
    {
      v70 = operator new(0x3A0u);
      v53 = 8;
      v54 = 1;
      v50 = (_QWORD *)v70;
      *(_BYTE *)v70 = 0;
      *(_QWORD *)(v70 + 96) = v70 + 112;
      *(_QWORD *)(v70 + 128) = v70 + 144;
      *(_QWORD *)(v70 + 160) = v70 + 176;
      *(_QWORD *)(v70 + 192) = v70 + 208;
      *(_QWORD *)(v70 + 224) = v70 + 240;
      *(_QWORD *)(v70 + 256) = v70 + 272;
      *(_QWORD *)(v70 + 288) = v70 + 304;
      *(_QWORD *)(v70 + 320) = v70 + 336;
      *(_QWORD *)(v70 + 352) = v70 + 368;
      *(_QWORD *)(v70 + 384) = v70 + 400;
      *(_QWORD *)(v70 + 416) = v70 + 432;
      *(_QWORD *)(v70 + 104) = 0;
      *(_BYTE *)(v70 + 112) = 0;
      *(_QWORD *)(v70 + 136) = 0;
      *(_BYTE *)(v70 + 144) = 0;
      *(_QWORD *)(v70 + 168) = 0;
      *(_BYTE *)(v70 + 176) = 0;
      *(_QWORD *)(v70 + 200) = 0;
      *(_BYTE *)(v70 + 208) = 0;
      *(_QWORD *)(v70 + 232) = 0;
      *(_BYTE *)(v70 + 240) = 0;
      *(_QWORD *)(v70 + 264) = 0;
      *(_BYTE *)(v70 + 272) = 0;
      *(_QWORD *)(v70 + 296) = 0;
      *(_BYTE *)(v70 + 304) = 0;
      *(_QWORD *)(v70 + 328) = 0;
      *(_BYTE *)(v70 + 336) = 0;
      *(_QWORD *)(v70 + 360) = 0;
      *(_BYTE *)(v70 + 368) = 0;
      *(_QWORD *)(v70 + 392) = 0;
      *(_BYTE *)(v70 + 400) = 0;
      *(_QWORD *)(v70 + 424) = 0x800000000LL;
      *(_QWORD *)(v70 + 528) = v70 + 544;
      *(_QWORD *)(v70 + 536) = 0x600000000LL;
      v52 = 0;
    }
    v121 = v50;
  }
  LOBYTE(nb) = 1;
  if ( v53 < v54 )
  {
    sub_22134E0(v50 + 52, v50 + 54, v54, 12);
    v52 = *((unsigned int *)v50 + 106);
  }
  v55 = v50[52] + 12 * v52;
  *(_QWORD *)v55 = v51;
  *(_DWORD *)(v55 + 8) = nb;
  ++*((_DWORD *)v50 + 106);
  if ( (_BYTE)v126 )
  {
    sub_FA3A50(v123, &v121, HIBYTE(v126));
    v123 = 0;
    v126 = 0;
  }
  if ( v124 != v125 )
    operator delete(v124);
  v25 = (void **)v121;
  if ( v121 )
  {
    v26 = v122;
    if ( v122 )
    {
      if ( (unsigned __int64)v121 >= v122 && (unsigned __int64)v121 <= v122 + 14848 )
        goto LABEL_100;
      v56 = *((void ***)v121 + 66);
      v57 = &v56[8 * (unsigned __int64)*((unsigned int *)v121 + 134)];
      if ( v56 != v57 )
      {
        do
        {
          while ( 1 )
          {
            v57 -= 8;
            v58 = (void **)v57[3];
            if ( v58 == v57 + 5 )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_66;
          }
        }
        while ( v56 != v57 );
LABEL_66:
        v57 = (void **)v25[66];
      }
      if ( v57 != v25 + 68 )
        free(v57);
      v59 = (void **)v25[52];
      if ( v59 != v25 + 54 )
        free(v59);
      v60 = v25 + 48;
      v61 = v25 + 8;
      while ( 1 )
      {
        v62 = *v60;
        if ( *v60 != v60 + 2 )
          break;
LABEL_75:
        v60 -= 4;
        if ( v61 == v60 )
          goto LABEL_38;
      }
      while ( 1 )
      {
        operator delete(v62);
        v60 -= 4;
        if ( v61 == v60 )
          goto LABEL_38;
        v62 = *v60;
        if ( *v60 == v60 + 2 )
          goto LABEL_75;
      }
    }
  }
}

