__int64 __fastcall sub_1C6BF80(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned int v8; // edx
  unsigned __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbp
  char v12; // r14
  __int64 v13; // rbp
  unsigned int v14; // r15d
  unsigned int v15; // ebp
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // r14
  unsigned __int8 *v23; // rdx
  __int64 v24; // rax
  unsigned __int8 *v25; // rbp
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r15
  unsigned __int8 *v48; // r14
  _BYTE *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // r14
  unsigned __int8 *v59; // rbp
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // r14
  __int64 v74; // r12
  void *v75; // rdi
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // r15
  __int64 v79; // r14
  void *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rax
  void *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // r15
  __int64 v88; // rdx
  __int64 v89; // r15
  void *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rdx
  __int64 v94; // r12
  void *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  void *v100; // rdi
  __int64 v101; // [rsp+0h] [rbp-F8h]
  __int64 v102; // [rsp+0h] [rbp-F8h]
  __int64 v103; // [rsp+0h] [rbp-F8h]
  __int64 v104; // [rsp+0h] [rbp-F8h]
  __int64 v105; // [rsp+8h] [rbp-F0h]
  __int64 v106; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v107; // [rsp+20h] [rbp-D8h] BYREF
  int v108; // [rsp+28h] [rbp-D0h]
  _QWORD v109[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v111; // [rsp+50h] [rbp-A8h]
  __int64 v112; // [rsp+58h] [rbp-A0h]
  char v113; // [rsp+A8h] [rbp-50h]
  unsigned int v114; // [rsp+B0h] [rbp-48h]
  char v115; // [rsp+B4h] [rbp-44h]

  v3 = *(_DWORD *)(a2 + 16);
  v4 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v5 = *(_QWORD *)(a2 + v4 + 32);
  if ( v3 > 1 )
  {
    v6 = a2 + v4 + 40;
    while ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL]
                      & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v5 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL]
                                                           & 0xFFFFFFFFFFFFFFF0LL) )
    {
      v6 += 8;
      if ( v6 == a2 + v4 + 48 + 8LL * (v3 - 2) )
        return 0;
    }
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v8 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0 || (v8 = sub_EEB7E0(v5, a2, a3)) == 0 )
    {
      v8 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a3);
      if ( !v8 )
        v8 = sub_EEB7E0(v5, a2, a3);
    }
    v9 = (unsigned __int64 *)(a1 + 8);
    sub_168B9F0((__int64)v109, (__int64 *)(a1 + 8), v8, 0x153Eu, 0);
    v10 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v11 = v10;
    if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 >= 6 )
      v11 = 0;
    if ( v113 )
    {
      v22 = v111;
      if ( !v111 )
      {
        v65 = v112;
        v66 = *(_DWORD *)(v112 + 14976);
        if ( v66 )
        {
          v81 = (unsigned int)(v66 - 1);
          *(_DWORD *)(v112 + 14976) = v81;
          v22 = *(unsigned __int8 **)(v65 + 8 * v81 + 14848);
          v82 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v83 = *((_QWORD *)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v84 = v83 + (v82 << 6);
          while ( v83 != v84 )
          {
            while ( 1 )
            {
              v84 -= 64;
              v85 = *(void **)(v84 + 24);
              if ( v85 == (void *)(v84 + 40) )
                break;
              v101 = v84;
              operator delete(v85);
              v84 = v101;
              if ( v83 == v101 )
                goto LABEL_77;
            }
          }
LABEL_77:
          *((_DWORD *)v22 + 134) = 0;
        }
        else
        {
          v22 = (unsigned __int8 *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          *((_QWORD *)v22 + 66) = v22 + 544;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        v111 = v22;
      }
      v22[*v22 + 1] = 10;
      v23 = v111;
      v24 = *v111;
      *v111 = v24 + 1;
      *(_QWORD *)&v23[8 * v24 + 16] = v11;
      if ( !v113 )
      {
LABEL_41:
        v12 = v115;
        if ( !v115 )
        {
LABEL_12:
          v13 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
          v14 = sub_EEC140(*(_QWORD *)(v13 + a2 + 8LL * (v3 - 1) + 32));
          v15 = sub_EEB7E0(*(_QWORD *)(a2 + v13 + 32), (__int64)v9, a3);
          if ( v12 )
          {
            v17 = v111;
            if ( !v111 )
            {
              v62 = v112;
              v63 = *(_DWORD *)(v112 + 14976);
              if ( v63 )
              {
                v71 = (unsigned int)(v63 - 1);
                *(_DWORD *)(v112 + 14976) = v71;
                v17 = *(unsigned __int8 **)(v62 + 8 * v71 + 14848);
                v72 = *((unsigned int *)v17 + 134);
                *v17 = 0;
                v73 = *((_QWORD *)v17 + 66);
                *((_DWORD *)v17 + 106) = 0;
                v74 = v73 + (v72 << 6);
                if ( v73 == v74 )
                {
                  v20 = 1;
                  v18 = 0;
                }
                else
                {
                  do
                  {
                    while ( 1 )
                    {
                      v74 -= 64;
                      v75 = *(void **)(v74 + 24);
                      if ( v75 == (void *)(v74 + 40) )
                        break;
                      operator delete(v75);
                      if ( v73 == v74 )
                        goto LABEL_64;
                    }
                  }
                  while ( v73 != v74 );
LABEL_64:
                  v18 = *((unsigned int *)v17 + 106);
                  v20 = v18 + 1;
                }
                *((_DWORD *)v17 + 134) = 0;
                v19 = *((unsigned int *)v17 + 107);
              }
              else
              {
                v64 = operator new(0x3A0u);
                v19 = 8;
                v20 = 1;
                v17 = (unsigned __int8 *)v64;
                *(_BYTE *)v64 = 0;
                *(_QWORD *)(v64 + 96) = v64 + 112;
                *(_QWORD *)(v64 + 128) = v64 + 144;
                *(_QWORD *)(v64 + 160) = v64 + 176;
                *(_QWORD *)(v64 + 192) = v64 + 208;
                *(_QWORD *)(v64 + 224) = v64 + 240;
                *(_QWORD *)(v64 + 256) = v64 + 272;
                *(_QWORD *)(v64 + 288) = v64 + 304;
                *(_QWORD *)(v64 + 320) = v64 + 336;
                *(_QWORD *)(v64 + 352) = v64 + 368;
                *(_QWORD *)(v64 + 384) = v64 + 400;
                *(_QWORD *)(v64 + 416) = v64 + 432;
                *(_QWORD *)(v64 + 104) = 0;
                *(_BYTE *)(v64 + 112) = 0;
                *(_QWORD *)(v64 + 136) = 0;
                *(_BYTE *)(v64 + 144) = 0;
                *(_QWORD *)(v64 + 168) = 0;
                *(_BYTE *)(v64 + 176) = 0;
                *(_QWORD *)(v64 + 200) = 0;
                *(_BYTE *)(v64 + 208) = 0;
                *(_QWORD *)(v64 + 232) = 0;
                *(_BYTE *)(v64 + 240) = 0;
                *(_QWORD *)(v64 + 264) = 0;
                *(_BYTE *)(v64 + 272) = 0;
                *(_QWORD *)(v64 + 296) = 0;
                *(_BYTE *)(v64 + 304) = 0;
                *(_QWORD *)(v64 + 328) = 0;
                *(_BYTE *)(v64 + 336) = 0;
                *(_QWORD *)(v64 + 360) = 0;
                *(_BYTE *)(v64 + 368) = 0;
                *(_QWORD *)(v64 + 392) = 0;
                *(_BYTE *)(v64 + 400) = 0;
                *(_QWORD *)(v64 + 424) = 0x800000000LL;
                *(_QWORD *)(v64 + 528) = v64 + 544;
                *(_QWORD *)(v64 + 536) = 0x600000000LL;
                v18 = 0;
              }
              v111 = v17;
              goto LABEL_23;
            }
          }
          else
          {
            if ( !v115 )
            {
LABEL_14:
              sub_15F7200(v109);
              return 1;
            }
            v30 = sub_168B9E0(v109);
            v33 = v110;
            if ( v110 )
              v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
            v106 = v33;
            v34 = sub_1587BC0(v30, &v106, v28, v29, v31, v32);
            v35 = *v34 + 32LL * v114;
            v17 = *(unsigned __int8 **)(v35 + 8);
            v36 = v35;
            if ( !v17 )
            {
              v37 = *(_QWORD *)(v35 + 16);
              v38 = *(_DWORD *)(v37 + 14976);
              if ( v38 )
              {
                v91 = (unsigned int)(v38 - 1);
                *(_DWORD *)(v37 + 14976) = v91;
                v17 = *(unsigned __int8 **)(v37 + 8 * v91 + 14848);
                v92 = *((unsigned int *)v17 + 134);
                *v17 = 0;
                v93 = *((_QWORD *)v17 + 66);
                *((_DWORD *)v17 + 106) = 0;
                v94 = v93 + (v92 << 6);
                if ( v93 == v94 )
                {
                  v20 = 1;
                  v18 = 0;
                }
                else
                {
                  do
                  {
                    while ( 1 )
                    {
                      v94 -= 64;
                      v95 = *(void **)(v94 + 24);
                      if ( v95 == (void *)(v94 + 40) )
                        break;
                      v103 = v93;
                      operator delete(v95);
                      v93 = v103;
                      if ( v103 == v94 )
                        goto LABEL_86;
                    }
                  }
                  while ( v93 != v94 );
LABEL_86:
                  v18 = *((unsigned int *)v17 + 106);
                  v20 = v18 + 1;
                }
                *((_DWORD *)v17 + 134) = 0;
                v19 = *((unsigned int *)v17 + 107);
              }
              else
              {
                v39 = operator new(0x3A0u);
                v19 = 8;
                v20 = 1;
                v17 = (unsigned __int8 *)v39;
                *(_BYTE *)v39 = 0;
                *(_QWORD *)(v39 + 96) = v39 + 112;
                *(_QWORD *)(v39 + 128) = v39 + 144;
                *(_QWORD *)(v39 + 160) = v39 + 176;
                *(_QWORD *)(v39 + 192) = v39 + 208;
                *(_QWORD *)(v39 + 224) = v39 + 240;
                *(_QWORD *)(v39 + 256) = v39 + 272;
                *(_QWORD *)(v39 + 288) = v39 + 304;
                *(_QWORD *)(v39 + 320) = v39 + 336;
                *(_QWORD *)(v39 + 352) = v39 + 368;
                *(_QWORD *)(v39 + 384) = v39 + 400;
                *(_QWORD *)(v39 + 416) = v39 + 432;
                *(_QWORD *)(v39 + 104) = 0;
                *(_BYTE *)(v39 + 112) = 0;
                *(_QWORD *)(v39 + 136) = 0;
                *(_BYTE *)(v39 + 144) = 0;
                *(_QWORD *)(v39 + 168) = 0;
                *(_BYTE *)(v39 + 176) = 0;
                *(_QWORD *)(v39 + 200) = 0;
                *(_BYTE *)(v39 + 208) = 0;
                *(_QWORD *)(v39 + 232) = 0;
                *(_BYTE *)(v39 + 240) = 0;
                *(_QWORD *)(v39 + 264) = 0;
                *(_BYTE *)(v39 + 272) = 0;
                *(_QWORD *)(v39 + 296) = 0;
                *(_BYTE *)(v39 + 304) = 0;
                *(_QWORD *)(v39 + 328) = 0;
                *(_BYTE *)(v39 + 336) = 0;
                *(_QWORD *)(v39 + 360) = 0;
                *(_BYTE *)(v39 + 368) = 0;
                *(_QWORD *)(v39 + 392) = 0;
                *(_BYTE *)(v39 + 400) = 0;
                *(_QWORD *)(v39 + 424) = 0x800000000LL;
                *(_QWORD *)(v39 + 528) = v39 + 544;
                *(_QWORD *)(v39 + 536) = 0x600000000LL;
                v18 = 0;
              }
              *(_QWORD *)(v36 + 8) = v17;
              goto LABEL_23;
            }
          }
          v18 = *((unsigned int *)v17 + 106);
          v19 = *((unsigned int *)v17 + 107);
          v20 = v18 + 1;
LABEL_23:
          v107 = __PAIR64__(v14, v15);
          LOBYTE(v108) = 1;
          if ( v20 > v19 )
          {
            sub_2237220(v17 + 416, v17 + 432, v20, 12);
            v18 = *((unsigned int *)v17 + 106);
          }
          v21 = *((_QWORD *)v17 + 52) + 12 * v18;
          *(_QWORD *)v21 = v107;
          *(_DWORD *)(v21 + 8) = v108;
          ++*((_DWORD *)v17 + 106);
          goto LABEL_14;
        }
        v53 = sub_168B9E0(v109);
        v56 = v110;
        if ( v110 )
          v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
        v9 = &v107;
        v107 = v56;
        v57 = sub_1587BC0(v53, (__int64 *)&v107, v51, v52, v54, v55);
        v58 = *v57 + 32LL * v114;
        v59 = *(unsigned __int8 **)(v58 + 8);
        if ( !v59 )
        {
          v67 = *(_QWORD *)(v58 + 16);
          v68 = *(_DWORD *)(v67 + 14976);
          if ( v68 )
          {
            v86 = (unsigned int)(v68 - 1);
            *(_DWORD *)(v67 + 14976) = v86;
            v59 = *(unsigned __int8 **)(v67 + 8 * v86 + 14848);
            v87 = *((unsigned int *)v59 + 134);
            *v59 = 0;
            v88 = *((_QWORD *)v59 + 66);
            *((_DWORD *)v59 + 106) = 0;
            v89 = v88 + (v87 << 6);
            while ( v88 != v89 )
            {
              while ( 1 )
              {
                v89 -= 64;
                v90 = *(void **)(v89 + 24);
                if ( v90 == (void *)(v89 + 40) )
                  break;
                v102 = v88;
                operator delete(v90);
                v88 = v102;
                if ( v102 == v89 )
                  goto LABEL_82;
              }
            }
LABEL_82:
            *((_DWORD *)v59 + 134) = 0;
          }
          else
          {
            v59 = (unsigned __int8 *)operator new(0x3A0u);
            *v59 = 0;
            *((_QWORD *)v59 + 12) = v59 + 112;
            *((_QWORD *)v59 + 16) = v59 + 144;
            *((_QWORD *)v59 + 20) = v59 + 176;
            *((_QWORD *)v59 + 24) = v59 + 208;
            *((_QWORD *)v59 + 28) = v59 + 240;
            *((_QWORD *)v59 + 32) = v59 + 272;
            *((_QWORD *)v59 + 36) = v59 + 304;
            *((_QWORD *)v59 + 40) = v59 + 336;
            *((_QWORD *)v59 + 44) = v59 + 368;
            *((_QWORD *)v59 + 48) = v59 + 400;
            *((_QWORD *)v59 + 52) = v59 + 432;
            *((_QWORD *)v59 + 13) = 0;
            v59[112] = 0;
            *((_QWORD *)v59 + 17) = 0;
            v59[144] = 0;
            *((_QWORD *)v59 + 21) = 0;
            v59[176] = 0;
            *((_QWORD *)v59 + 25) = 0;
            v59[208] = 0;
            *((_QWORD *)v59 + 29) = 0;
            v59[240] = 0;
            *((_QWORD *)v59 + 33) = 0;
            v59[272] = 0;
            *((_QWORD *)v59 + 37) = 0;
            v59[304] = 0;
            *((_QWORD *)v59 + 41) = 0;
            v59[336] = 0;
            *((_QWORD *)v59 + 45) = 0;
            v59[368] = 0;
            *((_QWORD *)v59 + 49) = 0;
            v59[400] = 0;
            *((_QWORD *)v59 + 53) = 0x800000000LL;
            *((_QWORD *)v59 + 66) = v59 + 544;
            *((_QWORD *)v59 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v58 + 8) = v59;
        }
        v59[*v59 + 1] = 2;
        v26 = *(unsigned __int8 **)(v58 + 8);
LABEL_30:
        v27 = *v26;
        *v26 = v27 + 1;
        *(_QWORD *)&v26[8 * v27 + 16] = 1;
        v12 = v113;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = v115;
      if ( !v115 )
        goto LABEL_12;
      v44 = sub_168B9E0(v109);
      v45 = v110;
      if ( v110 )
        v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL))(v110);
      v9 = &v107;
      v107 = v45;
      v46 = sub_1587BC0(v44, (__int64 *)&v107, v40, v41, v42, v43);
      v47 = *v46 + 32LL * v114;
      v48 = *(unsigned __int8 **)(v47 + 8);
      if ( !v48 )
      {
        v69 = *(_QWORD *)(v47 + 16);
        v70 = *(_DWORD *)(v69 + 14976);
        if ( v70 )
        {
          v96 = (unsigned int)(v70 - 1);
          *(_DWORD *)(v69 + 14976) = v96;
          v48 = *(unsigned __int8 **)(v69 + 8 * v96 + 14848);
          v97 = *((unsigned int *)v48 + 134);
          *v48 = 0;
          v98 = *((_QWORD *)v48 + 66);
          *((_DWORD *)v48 + 106) = 0;
          v99 = v98 + (v97 << 6);
          while ( v98 != v99 )
          {
            while ( 1 )
            {
              v99 -= 64;
              v100 = *(void **)(v99 + 24);
              if ( v100 == (void *)(v99 + 40) )
                break;
              v105 = v99;
              v104 = v98;
              operator delete(v100);
              v98 = v104;
              v99 = v105;
              if ( v104 == v105 )
                goto LABEL_94;
            }
          }
LABEL_94:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v47 + 8) = v48;
      }
      v48[*v48 + 1] = 10;
      v49 = *(_BYTE **)(v47 + 8);
      v50 = (unsigned __int8)*v49;
      *v49 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = v11;
      if ( !v113 )
        goto LABEL_41;
    }
    v25 = v111;
    if ( !v111 )
    {
      v60 = v112;
      v61 = *(_DWORD *)(v112 + 14976);
      if ( v61 )
      {
        v76 = (unsigned int)(v61 - 1);
        *(_DWORD *)(v112 + 14976) = v76;
        v25 = *(unsigned __int8 **)(v60 + 8 * v76 + 14848);
        v77 = *((unsigned int *)v25 + 134);
        *v25 = 0;
        v78 = *((_QWORD *)v25 + 66);
        *((_DWORD *)v25 + 106) = 0;
        v79 = v78 + (v77 << 6);
        while ( v78 != v79 )
        {
          while ( 1 )
          {
            v79 -= 64;
            v80 = *(void **)(v79 + 24);
            if ( v80 == (void *)(v79 + 40) )
              break;
            operator delete(v80);
            if ( v78 == v79 )
              goto LABEL_72;
          }
        }
LABEL_72:
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
      v111 = v25;
    }
    v25[*v25 + 1] = 2;
    v26 = v111;
    goto LABEL_30;
  }
  return 0;
}
