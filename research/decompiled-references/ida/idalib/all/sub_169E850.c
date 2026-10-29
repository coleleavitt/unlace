__int64 __fastcall sub_169E850(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // ebx
  _QWORD *v8; // r15
  __int64 *v9; // rbp
  unsigned __int64 v10; // rbp
  unsigned int v11; // edx
  unsigned __int8 *v12; // rbx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned int v16; // ebp
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r13
  unsigned __int8 *v31; // rbx
  _BYTE *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r12
  unsigned __int8 *v54; // r15
  _BYTE *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // eax
  unsigned __int8 *v59; // r12
  unsigned __int8 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r15
  __int64 v69; // rdx
  __int64 v70; // r15
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // r13
  void *v76; // rdi
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // rdx
  __int64 v82; // r15
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  void *v88; // rdi
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r15
  __int64 v94; // rax
  void *v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rdx
  void *v100; // rdi
  __int64 v101; // [rsp+0h] [rbp-108h]
  __int64 v102; // [rsp+0h] [rbp-108h]
  __int64 v103; // [rsp+0h] [rbp-108h]
  __int64 v104; // [rsp+0h] [rbp-108h]
  __int64 v105; // [rsp+0h] [rbp-108h]
  __int64 v106; // [rsp+8h] [rbp-100h]
  __int64 v107; // [rsp+8h] [rbp-100h]
  __int64 v108; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int64 v109; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+28h] [rbp-E0h]
  __int64 v111; // [rsp+30h] [rbp-D8h]
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 *v114; // [rsp+60h] [rbp-A8h]
  __int64 v115; // [rsp+68h] [rbp-A0h]
  char v116; // [rsp+B8h] [rbp-50h]
  unsigned int v117; // [rsp+C0h] [rbp-48h]
  char v118; // [rsp+C4h] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    v5 = 0;
    ptr[0] = nullptr;
    if ( !(unsigned __int8)sub_1E61510(a1, a2, ptr, 0) )
    {
      sub_1DBADC0(a1);
      v5 = v11;
      sub_1A5FAE0(a1, a3, ptr[0], 1, (unsigned __int8)v11 ^ 1u);
    }
    return v5;
  }
  v8 = sub_B78820(a2);
  if ( v8 && ((**(__int64 **)(a2 + 144) >> 1) & 3) != 1 )
  {
    LOBYTE(v111) = 0;
    sub_1DBA4B0((unsigned int)ptr, a1, a2, 0, 0, 0, v109, v110, 0, 0, 0, 0, 0);
    v5 = sub_1DC3A70(a1, a3, a2, v8, ptr, 1);
    if ( ptr[0] != &v113 )
      free(ptr[0]);
    if ( (_BYTE)v5 && a4 )
    {
      *((_QWORD *)a4 + 1) = 0;
      a4[6] = 0;
    }
  }
  else
  {
    v9 = (__int64 *)(a1 + 8);
    if ( a4 )
    {
      sub_168B9F0((__int64)ptr, v9, a3, 0xF7Cu, 0);
      v10 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v116 )
      {
        v12 = v114;
        if ( !v114 )
        {
          v65 = v115;
          v66 = *(_DWORD *)(v115 + 14976);
          if ( v66 )
          {
            v72 = (unsigned int)(v66 - 1);
            *(_DWORD *)(v115 + 14976) = v72;
            v12 = *(unsigned __int8 **)(v65 + 8 * v72 + 14848);
            v73 = *((unsigned int *)v12 + 134);
            *v12 = 0;
            v74 = *((_QWORD *)v12 + 66);
            *((_DWORD *)v12 + 106) = 0;
            v75 = v74 + (v73 << 6);
            while ( v74 != v75 )
            {
              while ( 1 )
              {
                v75 -= 64;
                v76 = *(void **)(v75 + 24);
                if ( v76 == (void *)(v75 + 40) )
                  break;
                operator delete(v76);
                if ( v74 == v75 )
                  goto LABEL_62;
              }
            }
LABEL_62:
            *((_DWORD *)v12 + 134) = 0;
          }
          else
          {
            v12 = (unsigned __int8 *)operator new(0x3A0u);
            *v12 = 0;
            *((_QWORD *)v12 + 12) = v12 + 112;
            *((_QWORD *)v12 + 16) = v12 + 144;
            *((_QWORD *)v12 + 20) = v12 + 176;
            *((_QWORD *)v12 + 24) = v12 + 208;
            *((_QWORD *)v12 + 28) = v12 + 240;
            *((_QWORD *)v12 + 32) = v12 + 272;
            *((_QWORD *)v12 + 36) = v12 + 304;
            *((_QWORD *)v12 + 40) = v12 + 336;
            *((_QWORD *)v12 + 44) = v12 + 368;
            *((_QWORD *)v12 + 48) = v12 + 400;
            *((_QWORD *)v12 + 52) = v12 + 432;
            *((_QWORD *)v12 + 13) = 0;
            v12[112] = 0;
            *((_QWORD *)v12 + 17) = 0;
            v12[144] = 0;
            *((_QWORD *)v12 + 21) = 0;
            v12[176] = 0;
            *((_QWORD *)v12 + 25) = 0;
            v12[208] = 0;
            *((_QWORD *)v12 + 29) = 0;
            v12[240] = 0;
            *((_QWORD *)v12 + 33) = 0;
            v12[272] = 0;
            *((_QWORD *)v12 + 37) = 0;
            v12[304] = 0;
            *((_QWORD *)v12 + 41) = 0;
            v12[336] = 0;
            *((_QWORD *)v12 + 45) = 0;
            v12[368] = 0;
            *((_QWORD *)v12 + 49) = 0;
            v12[400] = 0;
            *((_QWORD *)v12 + 53) = 0x800000000LL;
            *((_QWORD *)v12 + 66) = v12 + 544;
            *((_QWORD *)v12 + 67) = 0x600000000LL;
          }
          v114 = v12;
        }
        v12[*v12 + 1] = 8;
        v13 = v114;
        v14 = *v114;
        *v114 = v14 + 1;
        *(_QWORD *)&v13[8 * v14 + 16] = v10;
      }
      else
      {
        if ( !v118 )
        {
LABEL_10:
          v5 = 1;
          sub_15F7200(ptr);
          *((_QWORD *)a4 + 1) = 0;
          a4[6] = 0;
          return v5;
        }
        v25 = sub_168B9E0(ptr);
        v28 = v113;
        if ( v113 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
        v109 = v28;
        v29 = sub_1587BC0(v25, (__int64 *)&v109, v23, v24, v26, v27);
        v30 = *v29 + 32LL * v117;
        v31 = *(unsigned __int8 **)(v30 + 8);
        if ( !v31 )
        {
          v57 = *(_QWORD *)(v30 + 16);
          v58 = *(_DWORD *)(v57 + 14976);
          if ( v58 )
          {
            v79 = (unsigned int)(v58 - 1);
            *(_DWORD *)(v57 + 14976) = v79;
            v31 = *(unsigned __int8 **)(v57 + 8 * v79 + 14848);
            v80 = *((unsigned int *)v31 + 134);
            *v31 = 0;
            v81 = *((_QWORD *)v31 + 66);
            *((_DWORD *)v31 + 106) = 0;
            v82 = v81 + (v80 << 6);
            while ( v81 != v82 )
            {
              while ( 1 )
              {
                v82 -= 64;
                v83 = *(void **)(v82 + 24);
                if ( v83 == (void *)(v82 + 40) )
                  break;
                v102 = v81;
                operator delete(v83);
                v81 = v102;
                if ( v102 == v82 )
                  goto LABEL_70;
              }
            }
LABEL_70:
            *((_DWORD *)v31 + 134) = 0;
          }
          else
          {
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
            *((_QWORD *)v31 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v30 + 8) = v31;
        }
        v31[*v31 + 1] = 8;
        v32 = *(_BYTE **)(v30 + 8);
        v33 = (unsigned __int8)*v32;
        *v32 = v33 + 1;
        *(_QWORD *)&v32[8 * v33 + 16] = v10;
      }
      v15 = *a4;
      v16 = a4[1];
      if ( v116 )
      {
        v17 = v114;
        if ( !v114 )
        {
          v62 = v115;
          v63 = *(_DWORD *)(v115 + 14976);
          if ( v63 )
          {
            v67 = (unsigned int)(v63 - 1);
            *(_DWORD *)(v115 + 14976) = v67;
            v17 = *(unsigned __int8 **)(v62 + 8 * v67 + 14848);
            v68 = *((unsigned int *)v17 + 134);
            *v17 = 0;
            v69 = *((_QWORD *)v17 + 66);
            *((_DWORD *)v17 + 106) = 0;
            v70 = v69 + (v68 << 6);
            while ( v69 != v70 )
            {
              while ( 1 )
              {
                v70 -= 64;
                v71 = *(void **)(v70 + 24);
                if ( v71 == (void *)(v70 + 40) )
                  break;
                v101 = v69;
                operator delete(v71);
                v69 = v101;
                if ( v101 == v70 )
                  goto LABEL_57;
              }
            }
LABEL_57:
            v18 = *((unsigned int *)v17 + 106);
            v19 = *((unsigned int *)v17 + 107);
            *((_DWORD *)v17 + 134) = 0;
            v20 = v18 + 1;
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
          v114 = v17;
          goto LABEL_21;
        }
      }
      else
      {
        if ( !v118 )
          goto LABEL_10;
        v36 = sub_168B9E0(ptr);
        v39 = v113;
        if ( v113 )
          v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
        v108 = v39;
        v40 = sub_1587BC0(v36, &v108, v34, v35, v37, v38);
        v41 = *v40 + 32LL * v117;
        v17 = *(unsigned __int8 **)(v41 + 8);
        v42 = v41;
        if ( !v17 )
        {
          v43 = *(_QWORD *)(v41 + 16);
          v44 = *(_DWORD *)(v43 + 14976);
          if ( v44 )
          {
            v84 = (unsigned int)(v44 - 1);
            *(_DWORD *)(v43 + 14976) = v84;
            v17 = *(unsigned __int8 **)(v43 + 8 * v84 + 14848);
            v85 = *((unsigned int *)v17 + 134);
            *v17 = 0;
            v86 = *((_QWORD *)v17 + 66);
            *((_DWORD *)v17 + 106) = 0;
            v87 = v86 + (v85 << 6);
            while ( v86 != v87 )
            {
              while ( 1 )
              {
                v87 -= 64;
                v88 = *(void **)(v87 + 24);
                if ( v88 == (void *)(v87 + 40) )
                  break;
                v106 = v87;
                v103 = v86;
                operator delete(v88);
                v86 = v103;
                v87 = v106;
                if ( v103 == v106 )
                  goto LABEL_75;
              }
            }
LABEL_75:
            v18 = *((unsigned int *)v17 + 106);
            v19 = *((unsigned int *)v17 + 107);
            *((_DWORD *)v17 + 134) = 0;
            v20 = v18 + 1;
          }
          else
          {
            v45 = operator new(0x3A0u);
            v19 = 8;
            v20 = 1;
            v17 = (unsigned __int8 *)v45;
            *(_BYTE *)v45 = 0;
            *(_QWORD *)(v45 + 96) = v45 + 112;
            *(_QWORD *)(v45 + 128) = v45 + 144;
            *(_QWORD *)(v45 + 160) = v45 + 176;
            *(_QWORD *)(v45 + 192) = v45 + 208;
            *(_QWORD *)(v45 + 224) = v45 + 240;
            *(_QWORD *)(v45 + 256) = v45 + 272;
            *(_QWORD *)(v45 + 288) = v45 + 304;
            *(_QWORD *)(v45 + 320) = v45 + 336;
            *(_QWORD *)(v45 + 352) = v45 + 368;
            *(_QWORD *)(v45 + 384) = v45 + 400;
            *(_QWORD *)(v45 + 416) = v45 + 432;
            *(_QWORD *)(v45 + 104) = 0;
            *(_BYTE *)(v45 + 112) = 0;
            *(_QWORD *)(v45 + 136) = 0;
            *(_BYTE *)(v45 + 144) = 0;
            *(_QWORD *)(v45 + 168) = 0;
            *(_BYTE *)(v45 + 176) = 0;
            *(_QWORD *)(v45 + 200) = 0;
            *(_BYTE *)(v45 + 208) = 0;
            *(_QWORD *)(v45 + 232) = 0;
            *(_BYTE *)(v45 + 240) = 0;
            *(_QWORD *)(v45 + 264) = 0;
            *(_BYTE *)(v45 + 272) = 0;
            *(_QWORD *)(v45 + 296) = 0;
            *(_BYTE *)(v45 + 304) = 0;
            *(_QWORD *)(v45 + 328) = 0;
            *(_BYTE *)(v45 + 336) = 0;
            *(_QWORD *)(v45 + 360) = 0;
            *(_BYTE *)(v45 + 368) = 0;
            *(_QWORD *)(v45 + 392) = 0;
            *(_BYTE *)(v45 + 400) = 0;
            *(_QWORD *)(v45 + 424) = 0x800000000LL;
            *(_QWORD *)(v45 + 528) = v45 + 544;
            *(_QWORD *)(v45 + 536) = 0x600000000LL;
            v18 = 0;
          }
          *(_QWORD *)(v42 + 8) = v17;
          goto LABEL_21;
        }
      }
      v18 = *((unsigned int *)v17 + 106);
      v19 = *((unsigned int *)v17 + 107);
      v20 = v18 + 1;
LABEL_21:
      v109 = __PAIR64__(v16, v15);
      LOBYTE(v110) = 1;
      if ( v20 > v19 )
      {
        sub_2237220(v17 + 416, v17 + 432, v20, 12);
        v18 = *((unsigned int *)v17 + 106);
      }
      v21 = *((_QWORD *)v17 + 52) + 12 * v18;
      *(_QWORD *)v21 = v109;
      *(_DWORD *)(v21 + 8) = v110;
      ++*((_DWORD *)v17 + 106);
      goto LABEL_10;
    }
    sub_168B9F0((__int64)ptr, v9, a3, 0xF79u, 0);
    v22 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v116 )
    {
      v59 = v114;
      if ( !v114 )
      {
        v77 = v115;
        v78 = *(_DWORD *)(v115 + 14976);
        if ( v78 )
        {
          v91 = (unsigned int)(v78 - 1);
          *(_DWORD *)(v115 + 14976) = v91;
          v59 = *(unsigned __int8 **)(v77 + 8 * v91 + 14848);
          v92 = *((unsigned int *)v59 + 134);
          v93 = *((_QWORD *)v59 + 66);
          *v59 = 0;
          *((_DWORD *)v59 + 106) = 0;
          v94 = v93 + (v92 << 6);
          while ( v93 != v94 )
          {
            while ( 1 )
            {
              v94 -= 64;
              v95 = *(void **)(v94 + 24);
              if ( v95 == (void *)(v94 + 40) )
                break;
              v104 = v94;
              operator delete(v95);
              v94 = v104;
              if ( v93 == v104 )
                goto LABEL_83;
            }
          }
LABEL_83:
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
        v114 = v59;
      }
      v59[*v59 + 1] = 8;
      v60 = v114;
      v61 = *v114;
      *v114 = v61 + 1;
      *(_QWORD *)&v60[8 * v61 + 16] = v22;
    }
    else if ( v118 )
    {
      v50 = sub_168B9E0(ptr);
      v51 = v113;
      if ( v113 )
        v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v109 = v51;
      v52 = sub_1587BC0(v50, (__int64 *)&v109, v46, v47, v48, v49);
      v53 = *v52 + 32LL * v117;
      v54 = *(unsigned __int8 **)(v53 + 8);
      if ( !v54 )
      {
        v89 = *(_QWORD *)(v53 + 16);
        v90 = *(_DWORD *)(v89 + 14976);
        if ( v90 )
        {
          v96 = (unsigned int)(v90 - 1);
          *(_DWORD *)(v89 + 14976) = v96;
          v54 = *(unsigned __int8 **)(v89 + 8 * v96 + 14848);
          v97 = *((unsigned int *)v54 + 134);
          *v54 = 0;
          v98 = *((_QWORD *)v54 + 66);
          *((_DWORD *)v54 + 106) = 0;
          v99 = v98 + (v97 << 6);
          v105 = v98;
          while ( v105 != v99 )
          {
            while ( 1 )
            {
              v99 -= 64;
              v100 = *(void **)(v99 + 24);
              if ( v100 == (void *)(v99 + 40) )
                break;
              v107 = v99;
              operator delete(v100);
              v99 = v107;
              if ( v105 == v107 )
                goto LABEL_87;
            }
          }
LABEL_87:
          *((_DWORD *)v54 + 134) = 0;
        }
        else
        {
          v54 = (unsigned __int8 *)operator new(0x3A0u);
          *v54 = 0;
          *((_QWORD *)v54 + 12) = v54 + 112;
          *((_QWORD *)v54 + 16) = v54 + 144;
          *((_QWORD *)v54 + 20) = v54 + 176;
          *((_QWORD *)v54 + 24) = v54 + 208;
          *((_QWORD *)v54 + 28) = v54 + 240;
          *((_QWORD *)v54 + 32) = v54 + 272;
          *((_QWORD *)v54 + 36) = v54 + 304;
          *((_QWORD *)v54 + 40) = v54 + 336;
          *((_QWORD *)v54 + 44) = v54 + 368;
          *((_QWORD *)v54 + 48) = v54 + 400;
          *((_QWORD *)v54 + 52) = v54 + 432;
          *((_QWORD *)v54 + 13) = 0;
          v54[112] = 0;
          *((_QWORD *)v54 + 17) = 0;
          v54[144] = 0;
          *((_QWORD *)v54 + 21) = 0;
          v54[176] = 0;
          *((_QWORD *)v54 + 25) = 0;
          v54[208] = 0;
          *((_QWORD *)v54 + 29) = 0;
          v54[240] = 0;
          *((_QWORD *)v54 + 33) = 0;
          v54[272] = 0;
          *((_QWORD *)v54 + 37) = 0;
          v54[304] = 0;
          *((_QWORD *)v54 + 41) = 0;
          v54[336] = 0;
          *((_QWORD *)v54 + 45) = 0;
          v54[368] = 0;
          *((_QWORD *)v54 + 49) = 0;
          v54[400] = 0;
          *((_QWORD *)v54 + 53) = 0x800000000LL;
          *((_QWORD *)v54 + 66) = v54 + 544;
          *((_QWORD *)v54 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v53 + 8) = v54;
      }
      v54[*v54 + 1] = 8;
      v55 = *(_BYTE **)(v53 + 8);
      v56 = (unsigned __int8)*v55;
      *v55 = v56 + 1;
      *(_QWORD *)&v55[8 * v56 + 16] = v22;
    }
    sub_15F7200(ptr);
    v5 = 1;
    sub_168B9F0((__int64)ptr, v9, *(_DWORD *)(a2 + 24), 0x67u, 0);
    sub_15F7200(ptr);
  }
  return v5;
}
