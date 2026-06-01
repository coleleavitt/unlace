__int64 __fastcall sub_1ADC130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v9; // r12
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 v16; // rbp
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 **v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // eax
  const char *v31; // rsi
  unsigned __int8 v32; // al
  int v33; // eax
  unsigned int v34; // eax
  __int64 *v35; // rcx
  unsigned __int8 *v36; // rbp
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  char v39; // r14
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbx
  unsigned __int8 *v42; // rbp
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbp
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // r14
  unsigned __int8 *v69; // rbp
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r14
  __int64 v82; // r15
  __int64 v83; // r14
  void *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // r14
  __int64 v87; // r15
  __int64 v88; // r14
  void *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // rdx
  __int64 v93; // r15
  void *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // r14
  __int64 v97; // rdx
  __int64 v98; // r14
  void *v99; // rdi
  __int64 v100; // [rsp+8h] [rbp-F0h]
  __int64 v101; // [rsp+8h] [rbp-F0h]
  __int64 v102; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v103; // [rsp+20h] [rbp-D8h] BYREF
  int v104; // [rsp+28h] [rbp-D0h]
  _QWORD v105[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v107; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v108; // [rsp+58h] [rbp-A0h]
  char v109; // [rsp+A8h] [rbp-50h]
  unsigned int v110; // [rsp+B0h] [rbp-48h]
  char v111; // [rsp+B4h] [rbp-44h]

  v9 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 41 )
  {
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v10 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0
           || (v10 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a7)) == 0 )
    {
      v10 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a7);
      if ( !v10 )
      {
        v10 = *(_DWORD *)(a2 + 16);
        if ( v10 )
          v10 = sub_EEB7E0(v9, a2, a7);
      }
    }
    v11 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v105, (__int64 *)(a1 + 8), v10, 0x123Du, 0);
    v12 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v13 = v12;
    if ( v12 && (*(_BYTE *)(v12 + 28) & 0x7Fu) - 34 >= 6 )
      v13 = 0;
    if ( v109 )
    {
      v36 = v107;
      if ( !v107 )
      {
        v73 = v108;
        v74 = *(_DWORD *)(v108 + 14976);
        if ( v74 )
        {
          v85 = (unsigned int)(v74 - 1);
          *(_DWORD *)(v108 + 14976) = v85;
          v36 = *(unsigned __int8 **)(v73 + 8 * v85 + 14848);
          v86 = *((unsigned int *)v36 + 134);
          *v36 = 0;
          v87 = *((_QWORD *)v36 + 66);
          *((_DWORD *)v36 + 106) = 0;
          v88 = v87 + (v86 << 6);
          while ( v87 != v88 )
          {
            while ( 1 )
            {
              v88 -= 64;
              v89 = *(void **)(v88 + 24);
              if ( v89 == (void *)(v88 + 40) )
                break;
              operator delete(v89);
              if ( v87 == v88 )
                goto LABEL_123;
            }
          }
LABEL_123:
          *((_DWORD *)v36 + 134) = 0;
        }
        else
        {
          v36 = (unsigned __int8 *)operator new(0x3A0u);
          *v36 = 0;
          *((_QWORD *)v36 + 12) = v36 + 112;
          *((_QWORD *)v36 + 16) = v36 + 144;
          *((_QWORD *)v36 + 20) = v36 + 176;
          *((_QWORD *)v36 + 24) = v36 + 208;
          *((_QWORD *)v36 + 28) = v36 + 240;
          *((_QWORD *)v36 + 32) = v36 + 272;
          *((_QWORD *)v36 + 36) = v36 + 304;
          *((_QWORD *)v36 + 40) = v36 + 336;
          *((_QWORD *)v36 + 44) = v36 + 368;
          *((_QWORD *)v36 + 48) = v36 + 400;
          *((_QWORD *)v36 + 52) = v36 + 432;
          *((_QWORD *)v36 + 13) = 0;
          v36[112] = 0;
          *((_QWORD *)v36 + 17) = 0;
          v36[144] = 0;
          *((_QWORD *)v36 + 21) = 0;
          v36[176] = 0;
          *((_QWORD *)v36 + 25) = 0;
          v36[208] = 0;
          *((_QWORD *)v36 + 29) = 0;
          v36[240] = 0;
          *((_QWORD *)v36 + 33) = 0;
          v36[272] = 0;
          *((_QWORD *)v36 + 37) = 0;
          v36[304] = 0;
          *((_QWORD *)v36 + 41) = 0;
          v36[336] = 0;
          *((_QWORD *)v36 + 45) = 0;
          v36[368] = 0;
          *((_QWORD *)v36 + 49) = 0;
          v36[400] = 0;
          *((_QWORD *)v36 + 53) = 0x800000000LL;
          *((_QWORD *)v36 + 66) = v36 + 544;
          *((_QWORD *)v36 + 67) = 0x600000000LL;
        }
        v107 = v36;
      }
      v36[*v36 + 1] = 10;
      v37 = v107;
    }
    else
    {
      if ( !v111 )
      {
        v14 = sub_EEC8C0(v9, (__int64)v11, a7);
        v15 = v14;
        v16 = HIDWORD(v14);
LABEL_10:
        if ( v111 )
        {
          v49 = sub_168B9E0(v105);
          v52 = v106;
          if ( v106 )
            v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v106 + 32LL))(v106);
          v102 = v52;
          v53 = sub_1587BC0(v49, &v102, v47, v48, v50, v51);
          v54 = *v53 + 32LL * v110;
          v55 = *(_QWORD *)(v54 + 8);
          v56 = v54;
          if ( v55 )
          {
            v57 = *(unsigned int *)(v55 + 424);
            v58 = *(unsigned int *)(v55 + 428);
            v59 = v57 + 1;
          }
          else
          {
            v77 = *(_QWORD *)(v54 + 16);
            v78 = *(_DWORD *)(v77 + 14976);
            if ( v78 )
            {
              v95 = (unsigned int)(v78 - 1);
              *(_DWORD *)(v77 + 14976) = v95;
              v55 = *(_QWORD *)(v77 + 8 * v95 + 14848);
              v96 = *(unsigned int *)(v55 + 536);
              *(_BYTE *)v55 = 0;
              v97 = *(_QWORD *)(v55 + 528);
              *(_DWORD *)(v55 + 424) = 0;
              v98 = v97 + (v96 << 6);
              if ( v97 == v98 )
              {
                v59 = 1;
                v57 = 0;
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v98 -= 64;
                    v99 = *(void **)(v98 + 24);
                    if ( v99 == (void *)(v98 + 40) )
                      break;
                    v101 = v97;
                    operator delete(v99);
                    v97 = v101;
                    if ( v101 == v98 )
                      goto LABEL_132;
                  }
                }
                while ( v97 != v98 );
LABEL_132:
                v57 = *(unsigned int *)(v55 + 424);
                v59 = v57 + 1;
              }
              *(_DWORD *)(v55 + 536) = 0;
              v58 = *(unsigned int *)(v55 + 428);
            }
            else
            {
              v79 = operator new(0x3A0u);
              v58 = 8;
              v59 = 1;
              v55 = v79;
              *(_BYTE *)v79 = 0;
              *(_QWORD *)(v79 + 96) = v79 + 112;
              *(_QWORD *)(v79 + 128) = v79 + 144;
              *(_QWORD *)(v79 + 160) = v79 + 176;
              *(_QWORD *)(v79 + 192) = v79 + 208;
              *(_QWORD *)(v79 + 224) = v79 + 240;
              *(_QWORD *)(v79 + 256) = v79 + 272;
              *(_QWORD *)(v79 + 288) = v79 + 304;
              *(_QWORD *)(v79 + 320) = v79 + 336;
              *(_QWORD *)(v79 + 352) = v79 + 368;
              *(_QWORD *)(v79 + 384) = v79 + 400;
              *(_QWORD *)(v79 + 416) = v79 + 432;
              *(_QWORD *)(v79 + 104) = 0;
              *(_BYTE *)(v79 + 112) = 0;
              *(_QWORD *)(v79 + 136) = 0;
              *(_BYTE *)(v79 + 144) = 0;
              *(_QWORD *)(v79 + 168) = 0;
              *(_BYTE *)(v79 + 176) = 0;
              *(_QWORD *)(v79 + 200) = 0;
              *(_BYTE *)(v79 + 208) = 0;
              *(_QWORD *)(v79 + 232) = 0;
              *(_BYTE *)(v79 + 240) = 0;
              *(_QWORD *)(v79 + 264) = 0;
              *(_BYTE *)(v79 + 272) = 0;
              *(_QWORD *)(v79 + 296) = 0;
              *(_BYTE *)(v79 + 304) = 0;
              *(_QWORD *)(v79 + 328) = 0;
              *(_BYTE *)(v79 + 336) = 0;
              *(_QWORD *)(v79 + 360) = 0;
              *(_BYTE *)(v79 + 368) = 0;
              *(_QWORD *)(v79 + 392) = 0;
              *(_BYTE *)(v79 + 400) = 0;
              *(_QWORD *)(v79 + 424) = 0x800000000LL;
              *(_QWORD *)(v79 + 528) = v79 + 544;
              *(_QWORD *)(v79 + 536) = 0x600000000LL;
              v57 = 0;
            }
            *(_QWORD *)(v56 + 8) = v55;
          }
          v103 = __PAIR64__(v16, v15);
          LOBYTE(v104) = 1;
          if ( v59 > v58 )
          {
            sub_2237220(v55 + 416, v55 + 432, v59, 12);
            v57 = *(unsigned int *)(v55 + 424);
          }
          v60 = *(_QWORD *)(v55 + 416) + 12 * v57;
          *(_QWORD *)v60 = v103;
          *(_DWORD *)(v60 + 8) = v104;
          ++*(_DWORD *)(v55 + 424);
        }
        goto LABEL_11;
      }
      v63 = sub_168B9E0(v105);
      v66 = v106;
      if ( v106 )
        v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v106 + 32LL))(v106);
      v11 = &v103;
      v103 = v66;
      v67 = sub_1587BC0(v63, &v103, v61, v62, v64, v65);
      v68 = *v67 + 32LL * v110;
      v69 = *(unsigned __int8 **)(v68 + 8);
      if ( !v69 )
      {
        v75 = *(_QWORD *)(v68 + 16);
        v76 = *(_DWORD *)(v75 + 14976);
        if ( v76 )
        {
          v90 = (unsigned int)(v76 - 1);
          *(_DWORD *)(v75 + 14976) = v90;
          v69 = *(unsigned __int8 **)(v75 + 8 * v90 + 14848);
          v91 = *((unsigned int *)v69 + 134);
          *v69 = 0;
          v92 = *((_QWORD *)v69 + 66);
          *((_DWORD *)v69 + 106) = 0;
          v93 = v92 + (v91 << 6);
          while ( v92 != v93 )
          {
            while ( 1 )
            {
              v93 -= 64;
              v94 = *(void **)(v93 + 24);
              if ( v94 == (void *)(v93 + 40) )
                break;
              v100 = v92;
              operator delete(v94);
              v92 = v100;
              if ( v100 == v93 )
                goto LABEL_128;
            }
          }
LABEL_128:
          *((_DWORD *)v69 + 134) = 0;
        }
        else
        {
          v69 = (unsigned __int8 *)operator new(0x3A0u);
          *v69 = 0;
          *((_QWORD *)v69 + 12) = v69 + 112;
          *((_QWORD *)v69 + 16) = v69 + 144;
          *((_QWORD *)v69 + 20) = v69 + 176;
          *((_QWORD *)v69 + 24) = v69 + 208;
          *((_QWORD *)v69 + 28) = v69 + 240;
          *((_QWORD *)v69 + 32) = v69 + 272;
          *((_QWORD *)v69 + 36) = v69 + 304;
          *((_QWORD *)v69 + 40) = v69 + 336;
          *((_QWORD *)v69 + 44) = v69 + 368;
          *((_QWORD *)v69 + 48) = v69 + 400;
          *((_QWORD *)v69 + 52) = v69 + 432;
          *((_QWORD *)v69 + 13) = 0;
          v69[112] = 0;
          *((_QWORD *)v69 + 17) = 0;
          v69[144] = 0;
          *((_QWORD *)v69 + 21) = 0;
          v69[176] = 0;
          *((_QWORD *)v69 + 25) = 0;
          v69[208] = 0;
          *((_QWORD *)v69 + 29) = 0;
          v69[240] = 0;
          *((_QWORD *)v69 + 33) = 0;
          v69[272] = 0;
          *((_QWORD *)v69 + 37) = 0;
          v69[304] = 0;
          *((_QWORD *)v69 + 41) = 0;
          v69[336] = 0;
          *((_QWORD *)v69 + 45) = 0;
          v69[368] = 0;
          *((_QWORD *)v69 + 49) = 0;
          v69[400] = 0;
          *((_QWORD *)v69 + 53) = 0x800000000LL;
          *((_QWORD *)v69 + 66) = v69 + 544;
          *((_QWORD *)v69 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v68 + 8) = v69;
      }
      v69[*v69 + 1] = 10;
      v37 = *(unsigned __int8 **)(v68 + 8);
    }
    v38 = *v37;
    *v37 = v38 + 1;
    *(_QWORD *)&v37[8 * v38 + 16] = v13;
    v39 = v109;
    v40 = sub_EEC8C0(v9, (__int64)v11, a7);
    v15 = v40;
    v41 = HIDWORD(v40);
    LODWORD(v16) = HIDWORD(v40);
    if ( v39 )
    {
      v42 = v107;
      if ( v107 )
      {
        v43 = *((unsigned int *)v107 + 106);
        v44 = *((unsigned int *)v107 + 107);
        v45 = v43 + 1;
      }
      else
      {
        v70 = v108;
        v71 = *(_DWORD *)(v108 + 14976);
        if ( v71 )
        {
          v80 = (unsigned int)(v71 - 1);
          *(_DWORD *)(v108 + 14976) = v80;
          v42 = *(unsigned __int8 **)(v70 + 8 * v80 + 14848);
          v81 = *((unsigned int *)v42 + 134);
          *v42 = 0;
          v82 = *((_QWORD *)v42 + 66);
          *((_DWORD *)v42 + 106) = 0;
          v83 = v82 + (v81 << 6);
          if ( v82 == v83 )
          {
            v45 = 1;
            v43 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v83 -= 64;
                v84 = *(void **)(v83 + 24);
                if ( v84 == (void *)(v83 + 40) )
                  break;
                operator delete(v84);
                if ( v82 == v83 )
                  goto LABEL_115;
              }
            }
            while ( v82 != v83 );
LABEL_115:
            v43 = *((unsigned int *)v42 + 106);
            v45 = v43 + 1;
          }
          *((_DWORD *)v42 + 134) = 0;
          v44 = *((unsigned int *)v42 + 107);
        }
        else
        {
          v72 = operator new(0x3A0u);
          v44 = 8;
          v45 = 1;
          v42 = (unsigned __int8 *)v72;
          *(_BYTE *)v72 = 0;
          *(_QWORD *)(v72 + 96) = v72 + 112;
          *(_QWORD *)(v72 + 128) = v72 + 144;
          *(_QWORD *)(v72 + 160) = v72 + 176;
          *(_QWORD *)(v72 + 192) = v72 + 208;
          *(_QWORD *)(v72 + 224) = v72 + 240;
          *(_QWORD *)(v72 + 256) = v72 + 272;
          *(_QWORD *)(v72 + 288) = v72 + 304;
          *(_QWORD *)(v72 + 320) = v72 + 336;
          *(_QWORD *)(v72 + 352) = v72 + 368;
          *(_QWORD *)(v72 + 384) = v72 + 400;
          *(_QWORD *)(v72 + 416) = v72 + 432;
          *(_QWORD *)(v72 + 104) = 0;
          *(_BYTE *)(v72 + 112) = 0;
          *(_QWORD *)(v72 + 136) = 0;
          *(_BYTE *)(v72 + 144) = 0;
          *(_QWORD *)(v72 + 168) = 0;
          *(_BYTE *)(v72 + 176) = 0;
          *(_QWORD *)(v72 + 200) = 0;
          *(_BYTE *)(v72 + 208) = 0;
          *(_QWORD *)(v72 + 232) = 0;
          *(_BYTE *)(v72 + 240) = 0;
          *(_QWORD *)(v72 + 264) = 0;
          *(_BYTE *)(v72 + 272) = 0;
          *(_QWORD *)(v72 + 296) = 0;
          *(_BYTE *)(v72 + 304) = 0;
          *(_QWORD *)(v72 + 328) = 0;
          *(_BYTE *)(v72 + 336) = 0;
          *(_QWORD *)(v72 + 360) = 0;
          *(_BYTE *)(v72 + 368) = 0;
          *(_QWORD *)(v72 + 392) = 0;
          *(_BYTE *)(v72 + 400) = 0;
          *(_QWORD *)(v72 + 424) = 0x800000000LL;
          *(_QWORD *)(v72 + 528) = v72 + 544;
          *(_QWORD *)(v72 + 536) = 0x600000000LL;
          v43 = 0;
        }
        v107 = v42;
      }
      v103 = __PAIR64__(v41, v15);
      LOBYTE(v104) = 1;
      if ( v45 > v44 )
      {
        sub_2237220(v42 + 416, v42 + 432, v45, 12);
        v43 = *((unsigned int *)v42 + 106);
      }
      v46 = *((_QWORD *)v42 + 52) + 12 * v43;
      *(_QWORD *)v46 = v103;
      *(_DWORD *)(v46 + 8) = v104;
      ++*((_DWORD *)v42 + 106);
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v18 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v18 + 29) & 1) == 0 )
    goto LABEL_20;
  v19 = (__int64 **)sub_B8C3D0(v18, a2, a3, a4, a5, a6);
  v20 = *v19;
  v21 = (unsigned __int64)&(*v19)[*((unsigned int *)v19 + 2)];
  if ( (unsigned __int64)v20 < v21 )
  {
    v35 = v20;
    while ( *(_WORD *)(*v35 + 36) != 434 )
    {
      if ( (__int64 *)v21 == ++v35 )
        goto LABEL_20;
    }
    if ( (__int64 *)v21 == v35 )
      goto LABEL_20;
  }
  else
  {
    if ( v20 == (__int64 *)v21 )
    {
LABEL_20:
      v24 = 0;
      goto LABEL_21;
    }
    if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 434 )
    {
      v22 = (__int64 *)(v21 + 8);
      while ( v22 != v20 )
      {
        v23 = *v22++;
        if ( *(_WORD *)(v23 + 36) == 434 )
          goto LABEL_64;
      }
      goto LABEL_20;
    }
  }
LABEL_64:
  while ( 1 )
  {
    v24 = *v20;
    if ( *(_WORD *)(*v20 + 36) == 434 )
      break;
    ++v20;
  }
LABEL_21:
  v25 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v25 && (*(_BYTE *)(v25 + 28) & 0x7Fu) - 34 >= 6 )
    v25 = 0;
  v26 = 0;
  v27 = sub_B75A50(v25, 0);
  v28 = v27;
  if ( v27 == 1281 )
    goto LABEL_38;
  if ( v27 <= 0x501 )
  {
    if ( v27 == 1069 )
      goto LABEL_52;
    if ( v27 <= 0x42D )
    {
      if ( v27 == 349 )
        goto LABEL_52;
      if ( v27 != 350 )
        return 0;
    }
    else if ( v27 != 1096 )
    {
      if ( v27 != 1280 && v27 != 1095 )
        return 0;
LABEL_52:
      if ( !v24 )
        return 0;
      v32 = *(_BYTE *)(v24 + 34);
      if ( (v32 & 0xF0) == 0xF0 )
      {
        if ( !(unsigned int)sub_FA77D0(v24) )
          return 0;
        v32 = *(_BYTE *)(v24 + 34);
        if ( (v32 & 0xF0) == 0xF0 )
        {
          v33 = sub_FA77D0(v24);
LABEL_56:
          if ( v33 != 1 )
          {
            v34 = sub_EEB7E0(v9, v26, a7);
            v31 = (const char *)(a1 + 8);
            sub_168B9F0((__int64)v105, (__int64 *)(a1 + 8), v34, 0x123Eu, 0);
            if ( v109 )
            {
              v31 = "read_only";
              sub_AE9DF0(&v107, (__int64)"read_only", 1u);
            }
            else if ( v111 )
            {
              v31 = "read_only";
              sub_1AD78E0(v105, (__int64)"read_only");
            }
LABEL_46:
            v103 = sub_EEC8C0(v9, (__int64)v31, a7);
            sub_1587DB0((__int64)v105, &v103);
LABEL_11:
            sub_15F7200(v105);
            return 1;
          }
          return 0;
        }
      }
      else
      {
        v26 = *(unsigned __int8 *)(v24 + 34);
        LOBYTE(v26) = v32 >> 4;
        if ( !(v32 >> 4) )
          return 0;
      }
      v33 = v32 >> 4;
      goto LABEL_56;
    }
    goto LABEL_38;
  }
  if ( v27 == 1492 )
    goto LABEL_38;
  if ( v27 <= 0x5D4 )
  {
    if ( v27 != 1283 )
    {
      if ( v27 >= 0x503 && v27 != 1491 )
        return 0;
      goto LABEL_52;
    }
LABEL_38:
    if ( !v24 )
      goto LABEL_43;
    if ( (*(_BYTE *)(v24 + 34) & 0xF0) == 0xF0 )
    {
      if ( (unsigned int)sub_FA77D0(v24) == 2 )
        return 0;
      if ( (*(_BYTE *)(v24 + 34) & 0xF0) == 0xF0 )
      {
        v29 = sub_FA77D0(v24);
LABEL_42:
        if ( v29 == 3 )
          return 0;
LABEL_43:
        v30 = sub_EEB7E0(v9, 0, a7);
        v31 = (const char *)(a1 + 8);
        sub_168B9F0((__int64)v105, (__int64 *)(a1 + 8), v30, 0x123Eu, 0);
        if ( v109 )
        {
          v31 = "write_only";
          sub_AE9DF0(&v107, (__int64)"write_only", 1u);
        }
        else if ( v111 )
        {
          v31 = "write_only";
          sub_1AD78E0(v105, (__int64)"write_only");
        }
        goto LABEL_46;
      }
      LOBYTE(v29) = *(_BYTE *)(v24 + 34) >> 4;
    }
    else
    {
      LOBYTE(v29) = *(_BYTE *)(v24 + 34) >> 4;
      if ( (_BYTE)v29 == 2 )
        return 0;
    }
    v29 = (unsigned __int8)v29;
    goto LABEL_42;
  }
  if ( v27 == 1493 )
    goto LABEL_52;
  result = 0;
  if ( v28 <= 0x5D7 )
    goto LABEL_38;
  return result;
}
