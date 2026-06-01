void **__fastcall sub_7AC880(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 *v4; // rbp
  __int64 v5; // r12
  __int64 *v6; // rsi
  __int64 *i; // rcx
  __int64 v8; // rax
  __int64 v9; // rbp
  void **result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rax
  unsigned __int8 *v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // r14
  _QWORD *v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int8 *v28; // r14
  unsigned __int64 v29; // r12
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // r14
  unsigned __int64 v33; // rax
  _QWORD *v34; // r15
  unsigned __int64 v35; // rax
  _QWORD *v36; // r12
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  _QWORD *v39; // r12
  _QWORD *v40; // rdi
  unsigned __int64 v41; // r13
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int8 *v48; // r12
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int8 *v52; // r14
  unsigned __int64 v53; // r12
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // r14
  unsigned __int64 v57; // rax
  _QWORD *v58; // r15
  unsigned __int64 v59; // rax
  _QWORD *v60; // r12
  _QWORD *v61; // rdi
  _QWORD *v62; // rdi
  _QWORD *v63; // r12
  _QWORD *v64; // rdi
  unsigned __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r15
  void *v71; // rdi
  unsigned __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r15
  void *v78; // rdi
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r15
  void *v88; // rdi
  unsigned __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // r12
  void *v95; // rdi
  unsigned __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // r15
  void *v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // [rsp+8h] [rbp-90h]
  __int64 v106; // [rsp+8h] [rbp-90h]
  __int64 v107; // [rsp+8h] [rbp-90h]
  __int64 v108; // [rsp+8h] [rbp-90h]
  void *v109; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v110; // [rsp+18h] [rbp-80h]
  __int64 v111; // [rsp+20h] [rbp-78h]
  void *v112; // [rsp+30h] [rbp-68h]
  _QWORD v113[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v114; // [rsp+50h] [rbp-48h]

  sub_779550(a1);
  if ( (unsigned __int8)sub_7AB1D0(a1) && (unsigned __int8)sub_7A0D80(a1, a2) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 8u;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v3 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v3 + 56) & 4) != 0 )
  {
    v12 = sub_798D40(a1);
    sub_7A2D50(v3 + 40, v12);
  }
  v4 = *(__int64 **)(v3 + 40);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v5 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v5 + 56) & 4) != 0 )
  {
    v11 = sub_798D40(a1);
    sub_7A2D50(v5 + 40, v11);
  }
  v6 = *(__int64 **)(v5 + 48);
  for ( i = v4; v6 != i; *(i - 1) = (*(_BYTE *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 29) >> 5) & 3 | v8 & 0xFFFFFFFFFFFFFFF8LL )
    v8 = *i++;
  v9 = sub_798D40(a1);
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( **(char **)(a1 + 128) < 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 1) != 0 && *(char *)(*(_QWORD *)(v9 + 2160) + 1LL) >= 0 )
    {
      v13 = sub_7868A0(a1);
      if ( v13 )
      {
LABEL_17:
        if ( (*(_BYTE *)(v13 + 29) & 1) == 0 )
          goto LABEL_109;
        v14 = sub_79A2B0(v13);
        v15 = (_QWORD *)*v14;
        v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
        if ( (unsigned __int64)v15 >= v16 )
        {
          if ( v15 == (_QWORD *)v16 )
            goto LABEL_109;
          while ( *(_WORD *)(*(_QWORD *)v16 + 32LL) != 207 )
          {
            v16 += 8LL;
            if ( v15 == (_QWORD *)v16 )
              goto LABEL_109;
          }
          v17 = v15;
        }
        else
        {
          v17 = v15;
          while ( *(_WORD *)(*v17 + 32LL) != 207 )
          {
            if ( (_QWORD *)v16 == ++v17 )
              goto LABEL_109;
          }
        }
        if ( v17 == (_QWORD *)v16 )
          goto LABEL_109;
        v18 = *v15;
        if ( *(_WORD *)(*v15 + 32LL) != 207 )
        {
          v19 = v15 + 1;
          do
            v18 = *v19++;
          while ( *(_WORD *)(v18 + 32) != 207 );
        }
        v20 = sub_6BB140(v9);
        sub_C6CF40(&v109, v20, *(unsigned int *)(v18 + 16), 2351);
        v21 = (unsigned __int8 *)v109;
        if ( !v109 )
        {
          v96 = v110;
          v97 = *(_DWORD *)(v110 + 14976);
          if ( v97 )
          {
            v98 = (unsigned int)(v97 - 1);
            *(_DWORD *)(v110 + 14976) = v98;
            v21 = *(unsigned __int8 **)(v96 + 8 * v98 + 14848);
            v99 = *((unsigned int *)v21 + 134);
            v100 = *((_QWORD *)v21 + 66);
            *v21 = 0;
            *((_DWORD *)v21 + 106) = 0;
            v99 <<= 6;
            v108 = v100;
            v101 = v100 + v99;
            while ( v108 != v101 )
            {
              v101 -= 64;
              v102 = *(void **)(v101 + 24);
              if ( v102 != (void *)(v101 + 40) )
                operator delete(v102, *(_QWORD *)(v101 + 40) + 1LL);
            }
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
            v104 = operator new(0x3A0u);
            *(_BYTE *)v104 = 0;
            v21 = (unsigned __int8 *)v104;
            *(_QWORD *)(v104 + 96) = v104 + 112;
            *(_QWORD *)(v104 + 128) = v104 + 144;
            *(_QWORD *)(v104 + 160) = v104 + 176;
            *(_QWORD *)(v104 + 192) = v104 + 208;
            *(_QWORD *)(v104 + 224) = v104 + 240;
            *(_QWORD *)(v104 + 256) = v104 + 272;
            *(_QWORD *)(v104 + 288) = v104 + 304;
            *(_QWORD *)(v104 + 320) = v104 + 336;
            *(_QWORD *)(v104 + 352) = v104 + 368;
            *(_QWORD *)(v104 + 384) = v104 + 400;
            *(_QWORD *)(v104 + 104) = 0;
            *(_BYTE *)(v104 + 112) = 0;
            *(_QWORD *)(v104 + 136) = 0;
            *(_BYTE *)(v104 + 144) = 0;
            *(_QWORD *)(v104 + 168) = 0;
            *(_BYTE *)(v104 + 176) = 0;
            *(_QWORD *)(v104 + 200) = 0;
            *(_BYTE *)(v104 + 208) = 0;
            *(_QWORD *)(v104 + 232) = 0;
            *(_BYTE *)(v104 + 240) = 0;
            *(_QWORD *)(v104 + 264) = 0;
            *(_BYTE *)(v104 + 272) = 0;
            *(_QWORD *)(v104 + 296) = 0;
            *(_BYTE *)(v104 + 304) = 0;
            *(_QWORD *)(v104 + 328) = 0;
            *(_BYTE *)(v104 + 336) = 0;
            *(_QWORD *)(v104 + 360) = 0;
            *(_BYTE *)(v104 + 368) = 0;
            *(_QWORD *)(v104 + 392) = 0;
            *(_BYTE *)(v104 + 400) = 0;
            *(_QWORD *)(v104 + 416) = v104 + 432;
            *(_QWORD *)(v104 + 424) = 0x800000000LL;
            *(_QWORD *)(v104 + 528) = v104 + 544;
            *(_QWORD *)(v104 + 536) = 0x600000000LL;
          }
          v109 = v21;
        }
        v21[*v21 + 1] = 14;
        v22 = v109;
        v23 = *(unsigned __int8 *)v109;
        *(_BYTE *)v109 = v23 + 1;
        v22[v23 + 2] = v18;
        v24 = (unsigned __int8 *)v109;
        if ( !v109 )
        {
          v89 = v110;
          v90 = *(_DWORD *)(v110 + 14976);
          if ( v90 )
          {
            v91 = (unsigned int)(v90 - 1);
            *(_DWORD *)(v110 + 14976) = v91;
            v24 = *(unsigned __int8 **)(v89 + 8 * v91 + 14848);
            v92 = *((unsigned int *)v24 + 134);
            *v24 = 0;
            v93 = *((_QWORD *)v24 + 66);
            *((_DWORD *)v24 + 106) = 0;
            v94 = v93 + (v92 << 6);
            while ( v93 != v94 )
            {
              while ( 1 )
              {
                v94 -= 64;
                v95 = *(void **)(v94 + 24);
                if ( v95 == (void *)(v94 + 40) )
                  break;
                operator delete(v95, *(_QWORD *)(v94 + 40) + 1LL);
                if ( v93 == v94 )
                  goto LABEL_130;
              }
            }
LABEL_130:
            *((_DWORD *)v24 + 134) = 0;
          }
          else
          {
            v24 = (unsigned __int8 *)operator new(0x3A0u);
            *v24 = 0;
            *((_QWORD *)v24 + 12) = v24 + 112;
            *((_QWORD *)v24 + 16) = v24 + 144;
            *((_QWORD *)v24 + 20) = v24 + 176;
            *((_QWORD *)v24 + 24) = v24 + 208;
            *((_QWORD *)v24 + 28) = v24 + 240;
            *((_QWORD *)v24 + 32) = v24 + 272;
            *((_QWORD *)v24 + 36) = v24 + 304;
            *((_QWORD *)v24 + 40) = v24 + 336;
            *((_QWORD *)v24 + 44) = v24 + 368;
            *((_QWORD *)v24 + 48) = v24 + 400;
            *((_QWORD *)v24 + 13) = 0;
            v24[112] = 0;
            *((_QWORD *)v24 + 17) = 0;
            v24[144] = 0;
            *((_QWORD *)v24 + 21) = 0;
            v24[176] = 0;
            *((_QWORD *)v24 + 25) = 0;
            v24[208] = 0;
            *((_QWORD *)v24 + 29) = 0;
            v24[240] = 0;
            *((_QWORD *)v24 + 33) = 0;
            v24[272] = 0;
            *((_QWORD *)v24 + 37) = 0;
            v24[304] = 0;
            *((_QWORD *)v24 + 41) = 0;
            v24[336] = 0;
            *((_QWORD *)v24 + 45) = 0;
            v24[368] = 0;
            *((_QWORD *)v24 + 49) = 0;
            v24[400] = 0;
            *((_QWORD *)v24 + 52) = v24 + 432;
            *((_QWORD *)v24 + 53) = 0x800000000LL;
            *((_QWORD *)v24 + 66) = v24 + 544;
            *((_QWORD *)v24 + 67) = 0x600000000LL;
          }
          v109 = v24;
        }
        v24[*v24 + 1] = 10;
        v25 = v109;
        v26 = *(unsigned __int8 *)v109;
        *(_BYTE *)v109 = v26 + 1;
        v25[v26 + 2] = v13;
        v27 = sub_6E8B00(v9, a1);
        v28 = (unsigned __int8 *)v109;
        v29 = v27;
        if ( !v109 )
        {
          v82 = v110;
          v83 = *(_DWORD *)(v110 + 14976);
          if ( v83 )
          {
            v84 = (unsigned int)(v83 - 1);
            *(_DWORD *)(v110 + 14976) = v84;
            v28 = *(unsigned __int8 **)(v82 + 8 * v84 + 14848);
            v85 = *((unsigned int *)v28 + 134);
            *v28 = 0;
            v86 = *((_QWORD *)v28 + 66);
            *((_DWORD *)v28 + 106) = 0;
            v85 <<= 6;
            v87 = v86 + v85;
            v107 = v86;
            while ( v107 != v87 )
            {
              v87 -= 64;
              v88 = *(void **)(v87 + 24);
              if ( v88 != (void *)(v87 + 40) )
                operator delete(v88, *(_QWORD *)(v87 + 40) + 1LL);
            }
            *((_DWORD *)v28 + 134) = 0;
          }
          else
          {
            v28 = (unsigned __int8 *)operator new(0x3A0u);
            *v28 = 0;
            *((_QWORD *)v28 + 12) = v28 + 112;
            *((_QWORD *)v28 + 16) = v28 + 144;
            *((_QWORD *)v28 + 20) = v28 + 176;
            *((_QWORD *)v28 + 24) = v28 + 208;
            *((_QWORD *)v28 + 28) = v28 + 240;
            *((_QWORD *)v28 + 32) = v28 + 272;
            *((_QWORD *)v28 + 36) = v28 + 304;
            *((_QWORD *)v28 + 40) = v28 + 336;
            *((_QWORD *)v28 + 44) = v28 + 368;
            *((_QWORD *)v28 + 48) = v28 + 400;
            *((_QWORD *)v28 + 13) = 0;
            v28[112] = 0;
            *((_QWORD *)v28 + 17) = 0;
            v28[144] = 0;
            *((_QWORD *)v28 + 21) = 0;
            v28[176] = 0;
            *((_QWORD *)v28 + 25) = 0;
            v28[208] = 0;
            *((_QWORD *)v28 + 29) = 0;
            v28[240] = 0;
            *((_QWORD *)v28 + 33) = 0;
            v28[272] = 0;
            *((_QWORD *)v28 + 37) = 0;
            v28[304] = 0;
            *((_QWORD *)v28 + 41) = 0;
            v28[336] = 0;
            *((_QWORD *)v28 + 45) = 0;
            v28[368] = 0;
            *((_QWORD *)v28 + 49) = 0;
            v28[400] = 0;
            *((_QWORD *)v28 + 52) = v28 + 432;
            *((_QWORD *)v28 + 53) = 0x800000000LL;
            *((_QWORD *)v28 + 66) = v28 + 544;
            *((_QWORD *)v28 + 67) = 0x600000000LL;
          }
          v109 = v28;
        }
        v28[*v28 + 1] = 8;
        v30 = v109;
        v31 = *(unsigned __int8 *)v109;
        *(_BYTE *)v109 = v31 + 1;
        v30[v31 + 2] = v29;
        if ( (_BYTE)v114 )
        {
          sub_C69E80(v111, &v109, HIBYTE(v114));
          v111 = 0;
          v114 = 0;
        }
        if ( v112 != v113 )
          operator delete(v112, v113[0] + 1LL);
        v32 = v109;
        if ( v109 )
        {
          v33 = v110;
          if ( v110 )
          {
            if ( (unsigned __int64)v109 >= v110 && v110 + 14848 >= (unsigned __int64)v109 )
            {
              v103 = *(unsigned int *)(v110 + 14976);
              *(_DWORD *)(v110 + 14976) = v103 + 1;
              *(_QWORD *)(v33 + 8 * v103 + 14848) = v32;
            }
            else
            {
              v34 = *((_QWORD **)v109 + 66);
              v35 = (unsigned __int64)*((unsigned int *)v109 + 134) << 6;
              v36 = (_QWORD *)((char *)v34 + v35);
              if ( v34 != (_QWORD *)((char *)v34 + v35) )
              {
                do
                {
                  v36 -= 8;
                  v37 = (_QWORD *)v36[3];
                  if ( v37 != v36 + 5 )
                    operator delete(v37, v36[5] + 1LL);
                }
                while ( v34 != v36 );
                v36 = (_QWORD *)v32[66];
              }
              if ( v36 != v32 + 68 )
                free(v36);
              v38 = (_QWORD *)v32[52];
              if ( v38 != v32 + 54 )
                free(v38);
              v39 = v32 + 50;
              do
              {
                v40 = (_QWORD *)*(v39 - 2);
                if ( v40 != v39 )
                  operator delete(v40, *v39 + 1LL);
                v39 -= 4;
              }
              while ( v32 + 10 != v39 );
              operator delete(v32, 0x3A0u);
            }
          }
        }
LABEL_109:
        while ( 1 )
        {
          v80 = *(_QWORD *)(v13 + 8);
          v13 = v80 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v80 <= 7 )
            break;
          if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 47 <= 2 )
            goto LABEL_17;
        }
      }
    }
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  result = *(void ***)(a1 + 128);
  if ( *(char *)result >= 0 && (*(_BYTE *)(a1 + 76) & 4) != 0 )
  {
    v41 = sub_7868A0(a1);
    result = &v109;
    if ( v41 )
    {
LABEL_52:
      if ( (*(_BYTE *)(v41 + 29) & 1) == 0 )
        goto LABEL_86;
      v42 = sub_79A2B0(v41);
      v43 = *v42;
      v44 = *v42 + 8LL * *((unsigned int *)v42 + 2);
      if ( v43 >= v44 )
      {
        if ( v43 == v44 )
          goto LABEL_86;
        while ( *(_WORD *)(*(_QWORD *)v44 + 32LL) != 207 )
        {
          v44 += 8LL;
          if ( v43 == v44 )
            goto LABEL_86;
        }
        v45 = v43;
      }
      else
      {
        v45 = v43;
        while ( *(_WORD *)(*(_QWORD *)v45 + 32LL) != 207 )
        {
          v45 += 8LL;
          if ( v44 == v45 )
            goto LABEL_86;
        }
      }
      if ( v45 != v44 )
      {
        while ( 1 )
        {
          v46 = *(_QWORD *)v43;
          if ( *(_WORD *)(*(_QWORD *)v43 + 32LL) == 207 )
            break;
          v43 += 8LL;
        }
        v47 = sub_6BB140(v9);
        sub_C6CF40(&v109, v47, *(unsigned int *)(v46 + 16), 2350);
        v48 = (unsigned __int8 *)v109;
        if ( !v109 )
        {
          v65 = v110;
          v66 = *(_DWORD *)(v110 + 14976);
          if ( v66 )
          {
            v67 = (unsigned int)(v66 - 1);
            *(_DWORD *)(v110 + 14976) = v67;
            v48 = *(unsigned __int8 **)(v65 + 8 * v67 + 14848);
            v68 = *((unsigned int *)v48 + 134);
            v69 = *((_QWORD *)v48 + 66);
            *v48 = 0;
            *((_DWORD *)v48 + 106) = 0;
            v68 <<= 6;
            v105 = v69;
            v70 = v69 + v68;
            while ( v105 != v70 )
            {
              v70 -= 64;
              v71 = *(void **)(v70 + 24);
              if ( v71 != (void *)(v70 + 40) )
                operator delete(v71, *(_QWORD *)(v70 + 40) + 1LL);
            }
            *((_DWORD *)v48 + 134) = 0;
          }
          else
          {
            v81 = operator new(0x3A0u);
            *(_BYTE *)v81 = 0;
            v48 = (unsigned __int8 *)v81;
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
            *(_QWORD *)(v81 + 416) = v81 + 432;
            *(_QWORD *)(v81 + 424) = 0x800000000LL;
            *(_QWORD *)(v81 + 528) = v81 + 544;
            *(_QWORD *)(v81 + 536) = 0x600000000LL;
          }
          v109 = v48;
        }
        v48[*v48 + 1] = 14;
        v49 = v109;
        v50 = *(unsigned __int8 *)v109;
        *(_BYTE *)v109 = v50 + 1;
        v49[v50 + 2] = v46;
        v51 = sub_6E8B00(v9, a1);
        v52 = (unsigned __int8 *)v109;
        v53 = v51;
        if ( !v109 )
        {
          v72 = v110;
          v73 = *(_DWORD *)(v110 + 14976);
          if ( v73 )
          {
            v74 = (unsigned int)(v73 - 1);
            *(_DWORD *)(v110 + 14976) = v74;
            v52 = *(unsigned __int8 **)(v72 + 8 * v74 + 14848);
            v75 = *((unsigned int *)v52 + 134);
            *v52 = 0;
            v76 = *((_QWORD *)v52 + 66);
            *((_DWORD *)v52 + 106) = 0;
            v75 <<= 6;
            v77 = v76 + v75;
            v106 = v76;
            while ( v106 != v77 )
            {
              v77 -= 64;
              v78 = *(void **)(v77 + 24);
              if ( v78 != (void *)(v77 + 40) )
                operator delete(v78, *(_QWORD *)(v77 + 40) + 1LL);
            }
            *((_DWORD *)v52 + 134) = 0;
          }
          else
          {
            v52 = (unsigned __int8 *)operator new(0x3A0u);
            *v52 = 0;
            *((_QWORD *)v52 + 12) = v52 + 112;
            *((_QWORD *)v52 + 16) = v52 + 144;
            *((_QWORD *)v52 + 20) = v52 + 176;
            *((_QWORD *)v52 + 24) = v52 + 208;
            *((_QWORD *)v52 + 28) = v52 + 240;
            *((_QWORD *)v52 + 32) = v52 + 272;
            *((_QWORD *)v52 + 36) = v52 + 304;
            *((_QWORD *)v52 + 40) = v52 + 336;
            *((_QWORD *)v52 + 44) = v52 + 368;
            *((_QWORD *)v52 + 48) = v52 + 400;
            *((_QWORD *)v52 + 13) = 0;
            v52[112] = 0;
            *((_QWORD *)v52 + 17) = 0;
            v52[144] = 0;
            *((_QWORD *)v52 + 21) = 0;
            v52[176] = 0;
            *((_QWORD *)v52 + 25) = 0;
            v52[208] = 0;
            *((_QWORD *)v52 + 29) = 0;
            v52[240] = 0;
            *((_QWORD *)v52 + 33) = 0;
            v52[272] = 0;
            *((_QWORD *)v52 + 37) = 0;
            v52[304] = 0;
            *((_QWORD *)v52 + 41) = 0;
            v52[336] = 0;
            *((_QWORD *)v52 + 45) = 0;
            v52[368] = 0;
            *((_QWORD *)v52 + 49) = 0;
            v52[400] = 0;
            *((_QWORD *)v52 + 52) = v52 + 432;
            *((_QWORD *)v52 + 53) = 0x800000000LL;
            *((_QWORD *)v52 + 66) = v52 + 544;
            *((_QWORD *)v52 + 67) = 0x600000000LL;
          }
          v109 = v52;
        }
        v52[*v52 + 1] = 8;
        v54 = v109;
        v55 = *(unsigned __int8 *)v109;
        *(_BYTE *)v109 = v55 + 1;
        v54[v55 + 2] = v53;
        if ( (_BYTE)v114 )
        {
          sub_C69E80(v111, &v109, HIBYTE(v114));
          v111 = 0;
          v114 = 0;
        }
        if ( v112 != v113 )
          operator delete(v112, v113[0] + 1LL);
        v56 = v109;
        if ( v109 )
        {
          v57 = v110;
          if ( v110 )
          {
            if ( (unsigned __int64)v109 >= v110 && v110 + 14848 >= (unsigned __int64)v109 )
            {
              v79 = *(unsigned int *)(v110 + 14976);
              *(_DWORD *)(v110 + 14976) = v79 + 1;
              *(_QWORD *)(v57 + 8 * v79 + 14848) = v56;
            }
            else
            {
              v58 = *((_QWORD **)v109 + 66);
              v59 = (unsigned __int64)*((unsigned int *)v109 + 134) << 6;
              v60 = (_QWORD *)((char *)v58 + v59);
              if ( v58 != (_QWORD *)((char *)v58 + v59) )
              {
                do
                {
                  v60 -= 8;
                  v61 = (_QWORD *)v60[3];
                  if ( v61 != v60 + 5 )
                    operator delete(v61, v60[5] + 1LL);
                }
                while ( v58 != v60 );
                v60 = (_QWORD *)v56[66];
              }
              if ( v60 != v56 + 68 )
                free(v60);
              v62 = (_QWORD *)v56[52];
              if ( v62 != v56 + 54 )
                free(v62);
              v63 = v56 + 50;
              do
              {
                v64 = (_QWORD *)*(v63 - 2);
                if ( v64 != v63 )
                  operator delete(v64, *v63 + 1LL);
                v63 -= 4;
              }
              while ( v63 != v56 + 10 );
              operator delete(v56, 0x3A0u);
            }
          }
        }
      }
LABEL_86:
      while ( 1 )
      {
        result = *(void ***)(v41 + 8);
        v41 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFF8LL;
        if ( (unsigned __int64)result <= 7 )
          break;
        if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_52;
      }
    }
    *(_BYTE *)(a1 + 76) &= ~4u;
  }
  return result;
}

