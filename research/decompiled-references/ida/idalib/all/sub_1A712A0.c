__int64 __fastcall sub_1A712A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v8; // rax
  __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 *v14; // rdx
  __int64 v15; // r12
  __int64 *v16; // rcx
  bool v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r15
  unsigned __int8 *v26; // rbx
  _BYTE *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r15
  unsigned __int8 *v37; // r14
  _BYTE *v38; // rdx
  __int64 v39; // rax
  unsigned __int8 *v40; // r14
  unsigned __int8 *v41; // rdx
  __int64 v42; // rax
  unsigned __int8 *v43; // rbx
  unsigned __int8 *v44; // rdx
  __int64 v45; // rax
  unsigned __int8 *v46; // r14
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // r15
  unsigned __int8 *v57; // r14
  _BYTE *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r15
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // r15
  void *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // rdx
  __int64 v85; // r15
  void *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  void *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  void *v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  void *v101; // rdi
  __int64 v102; // [rsp+0h] [rbp-E8h]
  __int64 v103; // [rsp+0h] [rbp-E8h]
  __int64 v104; // [rsp+0h] [rbp-E8h]
  __int64 v105; // [rsp+0h] [rbp-E8h]
  __int64 v106; // [rsp+0h] [rbp-E8h]
  __int64 v107; // [rsp+0h] [rbp-E8h]
  __int64 v108; // [rsp+8h] [rbp-E0h]
  __int64 v109; // [rsp+8h] [rbp-E0h]
  __int64 v110; // [rsp+8h] [rbp-E0h]
  __int64 v111; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v112[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v114; // [rsp+40h] [rbp-A8h]
  __int64 v115; // [rsp+48h] [rbp-A0h]
  char v116; // [rsp+98h] [rbp-50h]
  unsigned int v117; // [rsp+A0h] [rbp-48h]
  char v118; // [rsp+A4h] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return 0;
  v8 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v9 = *v8;
  v10 = (unsigned __int64)&(*v8)[*((unsigned int *)v8 + 2)];
  if ( (unsigned __int64)v9 < v10 )
  {
    v14 = v9;
    while ( *(_WORD *)(*v14 + 36) != 259 )
    {
      if ( (__int64 *)v10 == ++v14 )
        return 0;
    }
    if ( (__int64 *)v10 != v14 )
      goto LABEL_14;
  }
  else if ( v9 != (__int64 *)v10 )
  {
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 259 )
    {
      v11 = (__int64 *)(v10 + 8);
      while ( v9 != v11 )
      {
        v12 = *v11++;
        if ( *(_WORD *)(v12 + 36) == 259 )
          goto LABEL_14;
      }
      return 0;
    }
LABEL_14:
    v15 = *v9;
    if ( *(_WORD *)(*v9 + 36) != 259 )
    {
      v16 = v9 + 1;
      do
        v15 = *v16++;
      while ( *(_WORD *)(v15 + 36) != 259 );
    }
    sub_168B9F0((__int64)v112, a1, *(_DWORD *)(a3 + 24), 0xCADu, 0);
    if ( v116 )
    {
      v46 = v114;
      if ( !v114 )
      {
        v62 = v115;
        v63 = *(_DWORD *)(v115 + 14976);
        if ( v63 )
        {
          v82 = (unsigned int)(v63 - 1);
          *(_DWORD *)(v115 + 14976) = v82;
          v46 = *(unsigned __int8 **)(v62 + 8 * v82 + 14848);
          v83 = *((unsigned int *)v46 + 134);
          *v46 = 0;
          v84 = *((_QWORD *)v46 + 66);
          *((_DWORD *)v46 + 106) = 0;
          v85 = v84 + (v83 << 6);
          while ( v84 != v85 )
          {
            while ( 1 )
            {
              v85 -= 64;
              v86 = *(void **)(v85 + 24);
              if ( v86 == (void *)(v85 + 40) )
                break;
              v104 = v84;
              operator delete(v86);
              v84 = v104;
              if ( v104 == v85 )
                goto LABEL_79;
            }
          }
LABEL_79:
          *((_DWORD *)v46 + 134) = 0;
        }
        else
        {
          v46 = (unsigned __int8 *)operator new(0x3A0u);
          *v46 = 0;
          *((_QWORD *)v46 + 12) = v46 + 112;
          *((_QWORD *)v46 + 16) = v46 + 144;
          *((_QWORD *)v46 + 20) = v46 + 176;
          *((_QWORD *)v46 + 24) = v46 + 208;
          *((_QWORD *)v46 + 28) = v46 + 240;
          *((_QWORD *)v46 + 32) = v46 + 272;
          *((_QWORD *)v46 + 36) = v46 + 304;
          *((_QWORD *)v46 + 40) = v46 + 336;
          *((_QWORD *)v46 + 44) = v46 + 368;
          *((_QWORD *)v46 + 48) = v46 + 400;
          *((_QWORD *)v46 + 52) = v46 + 432;
          *((_QWORD *)v46 + 13) = 0;
          v46[112] = 0;
          *((_QWORD *)v46 + 17) = 0;
          v46[144] = 0;
          *((_QWORD *)v46 + 21) = 0;
          v46[176] = 0;
          *((_QWORD *)v46 + 25) = 0;
          v46[208] = 0;
          *((_QWORD *)v46 + 29) = 0;
          v46[240] = 0;
          *((_QWORD *)v46 + 33) = 0;
          v46[272] = 0;
          *((_QWORD *)v46 + 37) = 0;
          v46[304] = 0;
          *((_QWORD *)v46 + 41) = 0;
          v46[336] = 0;
          *((_QWORD *)v46 + 45) = 0;
          v46[368] = 0;
          *((_QWORD *)v46 + 49) = 0;
          v46[400] = 0;
          *((_QWORD *)v46 + 53) = 0x800000000LL;
          *((_QWORD *)v46 + 66) = v46 + 544;
          *((_QWORD *)v46 + 67) = 0x600000000LL;
        }
        v114 = v46;
      }
      v46[*v46 + 1] = 16;
      v47 = v114;
      v48 = *v114;
      *v114 = v48 + 1;
      *(_QWORD *)&v47[8 * v48 + 16] = a3;
    }
    else
    {
      if ( !v118 )
      {
LABEL_19:
        if ( (*(_BYTE *)(a3 + 35) & 2) != 0 )
        {
LABEL_26:
          sub_15F7200(v112);
          sub_168B9F0((__int64)v112, a1, *(_DWORD *)(v15 + 24), 0x16CFu, 0);
          sub_15F7200(v112);
          return 1;
        }
        v17 = (*(_BYTE *)(v15 + 35) & 2) != 0;
LABEL_21:
        if ( v118 )
        {
          v20 = sub_168B9E0(v112);
          v23 = v113;
          if ( v113 )
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
          v111 = v23;
          v24 = sub_1587BC0(v20, &v111, v18, v19, v21, v22);
          v25 = *v24 + 32LL * v117;
          v26 = *(unsigned __int8 **)(v25 + 8);
          if ( !v26 )
          {
            v68 = *(_QWORD *)(v25 + 16);
            v69 = *(_DWORD *)(v68 + 14976);
            if ( v69 )
            {
              v97 = (unsigned int)(v69 - 1);
              *(_DWORD *)(v68 + 14976) = v97;
              v26 = *(unsigned __int8 **)(v68 + 8 * v97 + 14848);
              v98 = *((unsigned int *)v26 + 134);
              *v26 = 0;
              v99 = *((_QWORD *)v26 + 66);
              *((_DWORD *)v26 + 106) = 0;
              v100 = v99 + (v98 << 6);
              while ( v99 != v100 )
              {
                while ( 1 )
                {
                  v100 -= 64;
                  v101 = *(void **)(v100 + 24);
                  if ( v101 == (void *)(v100 + 40) )
                    break;
                  v110 = v99;
                  v107 = v100;
                  operator delete(v101);
                  v100 = v107;
                  v99 = v110;
                  if ( v110 == v107 )
                    goto LABEL_94;
                }
              }
LABEL_94:
              *((_DWORD *)v26 + 134) = 0;
            }
            else
            {
              v26 = (unsigned __int8 *)operator new(0x3A0u);
              *v26 = 0;
              *((_QWORD *)v26 + 12) = v26 + 112;
              *((_QWORD *)v26 + 16) = v26 + 144;
              *((_QWORD *)v26 + 20) = v26 + 176;
              *((_QWORD *)v26 + 24) = v26 + 208;
              *((_QWORD *)v26 + 28) = v26 + 240;
              *((_QWORD *)v26 + 32) = v26 + 272;
              *((_QWORD *)v26 + 36) = v26 + 304;
              *((_QWORD *)v26 + 40) = v26 + 336;
              *((_QWORD *)v26 + 44) = v26 + 368;
              *((_QWORD *)v26 + 48) = v26 + 400;
              *((_QWORD *)v26 + 52) = v26 + 432;
              *((_QWORD *)v26 + 13) = 0;
              v26[112] = 0;
              *((_QWORD *)v26 + 17) = 0;
              v26[144] = 0;
              *((_QWORD *)v26 + 21) = 0;
              v26[176] = 0;
              *((_QWORD *)v26 + 25) = 0;
              v26[208] = 0;
              *((_QWORD *)v26 + 29) = 0;
              v26[240] = 0;
              *((_QWORD *)v26 + 33) = 0;
              v26[272] = 0;
              *((_QWORD *)v26 + 37) = 0;
              v26[304] = 0;
              *((_QWORD *)v26 + 41) = 0;
              v26[336] = 0;
              *((_QWORD *)v26 + 45) = 0;
              v26[368] = 0;
              *((_QWORD *)v26 + 49) = 0;
              v26[400] = 0;
              *((_QWORD *)v26 + 53) = 0x800000000LL;
              *((_QWORD *)v26 + 66) = v26 + 544;
              *((_QWORD *)v26 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v25 + 8) = v26;
          }
          v26[*v26 + 1] = 2;
          v27 = *(_BYTE **)(v25 + 8);
          v28 = (unsigned __int8)*v27;
          *v27 = v28 + 1;
          *(_QWORD *)&v27[8 * v28 + 16] = v17;
        }
        goto LABEL_26;
      }
      v33 = sub_168B9E0(v112);
      v34 = v113;
      if ( v113 )
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v111 = v34;
      v35 = sub_1587BC0(v33, &v111, v29, v30, v31, v32);
      v36 = *v35 + 32LL * v117;
      v37 = *(unsigned __int8 **)(v36 + 8);
      if ( !v37 )
      {
        v66 = *(_QWORD *)(v36 + 16);
        v67 = *(_DWORD *)(v66 + 14976);
        if ( v67 )
        {
          v92 = (unsigned int)(v67 - 1);
          *(_DWORD *)(v66 + 14976) = v92;
          v37 = *(unsigned __int8 **)(v66 + 8 * v92 + 14848);
          v93 = *((unsigned int *)v37 + 134);
          *v37 = 0;
          v94 = *((_QWORD *)v37 + 66);
          *((_DWORD *)v37 + 106) = 0;
          v95 = v94 + (v93 << 6);
          while ( v94 != v95 )
          {
            while ( 1 )
            {
              v95 -= 64;
              v96 = *(void **)(v95 + 24);
              if ( v96 == (void *)(v95 + 40) )
                break;
              v109 = v95;
              v106 = v94;
              operator delete(v96);
              v94 = v106;
              v95 = v109;
              if ( v106 == v109 )
                goto LABEL_89;
            }
          }
LABEL_89:
          *((_DWORD *)v37 + 134) = 0;
        }
        else
        {
          v37 = (unsigned __int8 *)operator new(0x3A0u);
          *v37 = 0;
          *((_QWORD *)v37 + 12) = v37 + 112;
          *((_QWORD *)v37 + 16) = v37 + 144;
          *((_QWORD *)v37 + 20) = v37 + 176;
          *((_QWORD *)v37 + 24) = v37 + 208;
          *((_QWORD *)v37 + 28) = v37 + 240;
          *((_QWORD *)v37 + 32) = v37 + 272;
          *((_QWORD *)v37 + 36) = v37 + 304;
          *((_QWORD *)v37 + 40) = v37 + 336;
          *((_QWORD *)v37 + 44) = v37 + 368;
          *((_QWORD *)v37 + 48) = v37 + 400;
          *((_QWORD *)v37 + 52) = v37 + 432;
          *((_QWORD *)v37 + 13) = 0;
          v37[112] = 0;
          *((_QWORD *)v37 + 17) = 0;
          v37[144] = 0;
          *((_QWORD *)v37 + 21) = 0;
          v37[176] = 0;
          *((_QWORD *)v37 + 25) = 0;
          v37[208] = 0;
          *((_QWORD *)v37 + 29) = 0;
          v37[240] = 0;
          *((_QWORD *)v37 + 33) = 0;
          v37[272] = 0;
          *((_QWORD *)v37 + 37) = 0;
          v37[304] = 0;
          *((_QWORD *)v37 + 41) = 0;
          v37[336] = 0;
          *((_QWORD *)v37 + 45) = 0;
          v37[368] = 0;
          *((_QWORD *)v37 + 49) = 0;
          v37[400] = 0;
          *((_QWORD *)v37 + 53) = 0x800000000LL;
          *((_QWORD *)v37 + 66) = v37 + 544;
          *((_QWORD *)v37 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v36 + 8) = v37;
      }
      v37[*v37 + 1] = 16;
      v38 = *(_BYTE **)(v36 + 8);
      v39 = (unsigned __int8)*v38;
      *v38 = v39 + 1;
      *(_QWORD *)&v38[8 * v39 + 16] = a3;
    }
    if ( v116 )
    {
      v40 = v114;
      if ( !v114 )
      {
        v60 = v115;
        v61 = *(_DWORD *)(v115 + 14976);
        if ( v61 )
        {
          v77 = (unsigned int)(v61 - 1);
          *(_DWORD *)(v115 + 14976) = v77;
          v40 = *(unsigned __int8 **)(v60 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v40 + 134);
          *v40 = 0;
          v79 = *((_QWORD *)v40 + 66);
          *((_DWORD *)v40 + 106) = 0;
          v80 = v79 + (v78 << 6);
          while ( v79 != v80 )
          {
            while ( 1 )
            {
              v80 -= 64;
              v81 = *(void **)(v80 + 24);
              if ( v81 == (void *)(v80 + 40) )
                break;
              v103 = v79;
              operator delete(v81);
              v79 = v103;
              if ( v103 == v80 )
                goto LABEL_74;
            }
          }
LABEL_74:
          *((_DWORD *)v40 + 134) = 0;
        }
        else
        {
          v40 = (unsigned __int8 *)operator new(0x3A0u);
          *v40 = 0;
          *((_QWORD *)v40 + 12) = v40 + 112;
          *((_QWORD *)v40 + 16) = v40 + 144;
          *((_QWORD *)v40 + 20) = v40 + 176;
          *((_QWORD *)v40 + 24) = v40 + 208;
          *((_QWORD *)v40 + 28) = v40 + 240;
          *((_QWORD *)v40 + 32) = v40 + 272;
          *((_QWORD *)v40 + 36) = v40 + 304;
          *((_QWORD *)v40 + 40) = v40 + 336;
          *((_QWORD *)v40 + 44) = v40 + 368;
          *((_QWORD *)v40 + 48) = v40 + 400;
          *((_QWORD *)v40 + 52) = v40 + 432;
          *((_QWORD *)v40 + 13) = 0;
          v40[112] = 0;
          *((_QWORD *)v40 + 17) = 0;
          v40[144] = 0;
          *((_QWORD *)v40 + 21) = 0;
          v40[176] = 0;
          *((_QWORD *)v40 + 25) = 0;
          v40[208] = 0;
          *((_QWORD *)v40 + 29) = 0;
          v40[240] = 0;
          *((_QWORD *)v40 + 33) = 0;
          v40[272] = 0;
          *((_QWORD *)v40 + 37) = 0;
          v40[304] = 0;
          *((_QWORD *)v40 + 41) = 0;
          v40[336] = 0;
          *((_QWORD *)v40 + 45) = 0;
          v40[368] = 0;
          *((_QWORD *)v40 + 49) = 0;
          v40[400] = 0;
          *((_QWORD *)v40 + 53) = 0x800000000LL;
          *((_QWORD *)v40 + 66) = v40 + 544;
          *((_QWORD *)v40 + 67) = 0x600000000LL;
        }
        v114 = v40;
      }
      v40[*v40 + 1] = 14;
      v41 = v114;
      v42 = *v114;
      *v114 = v42 + 1;
      *(_QWORD *)&v41[8 * v42 + 16] = v15;
    }
    else
    {
      if ( !v118 )
        goto LABEL_19;
      v53 = sub_168B9E0(v112);
      v54 = v113;
      if ( v113 )
        v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v113 + 32LL))(v113);
      v111 = v54;
      v55 = sub_1587BC0(v53, &v111, v49, v50, v51, v52);
      v56 = *v55 + 32LL * v117;
      v57 = *(unsigned __int8 **)(v56 + 8);
      if ( !v57 )
      {
        v70 = *(_QWORD *)(v56 + 16);
        v71 = *(_DWORD *)(v70 + 14976);
        if ( v71 )
        {
          v87 = (unsigned int)(v71 - 1);
          *(_DWORD *)(v70 + 14976) = v87;
          v57 = *(unsigned __int8 **)(v70 + 8 * v87 + 14848);
          v88 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          v89 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v90 = v89 + (v88 << 6);
          while ( v89 != v90 )
          {
            while ( 1 )
            {
              v90 -= 64;
              v91 = *(void **)(v90 + 24);
              if ( v91 == (void *)(v90 + 40) )
                break;
              v108 = v90;
              v105 = v89;
              operator delete(v91);
              v89 = v105;
              v90 = v108;
              if ( v105 == v108 )
                goto LABEL_84;
            }
          }
LABEL_84:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v56 + 8) = v57;
      }
      v57[*v57 + 1] = 14;
      v58 = *(_BYTE **)(v56 + 8);
      v59 = (unsigned __int8)*v58;
      *v58 = v59 + 1;
      *(_QWORD *)&v58[8 * v59 + 16] = v15;
    }
    v17 = 1;
    if ( (*(_BYTE *)(a3 + 35) & 2) == 0 )
      v17 = (*(_BYTE *)(v15 + 35) & 2) != 0;
    if ( v116 )
    {
      v43 = v114;
      if ( !v114 )
      {
        v64 = v115;
        v65 = *(_DWORD *)(v115 + 14976);
        if ( v65 )
        {
          v72 = (unsigned int)(v65 - 1);
          *(_DWORD *)(v115 + 14976) = v72;
          v43 = *(unsigned __int8 **)(v64 + 8 * v72 + 14848);
          v73 = *((unsigned int *)v43 + 134);
          *v43 = 0;
          v74 = *((_QWORD *)v43 + 66);
          *((_DWORD *)v43 + 106) = 0;
          v75 = v74 + (v73 << 6);
          while ( v74 != v75 )
          {
            while ( 1 )
            {
              v75 -= 64;
              v76 = *(void **)(v75 + 24);
              if ( v76 == (void *)(v75 + 40) )
                break;
              v102 = v74;
              operator delete(v76);
              v74 = v102;
              if ( v102 == v75 )
                goto LABEL_69;
            }
          }
LABEL_69:
          *((_DWORD *)v43 + 134) = 0;
        }
        else
        {
          v43 = (unsigned __int8 *)operator new(0x3A0u);
          *v43 = 0;
          *((_QWORD *)v43 + 12) = v43 + 112;
          *((_QWORD *)v43 + 16) = v43 + 144;
          *((_QWORD *)v43 + 20) = v43 + 176;
          *((_QWORD *)v43 + 24) = v43 + 208;
          *((_QWORD *)v43 + 28) = v43 + 240;
          *((_QWORD *)v43 + 32) = v43 + 272;
          *((_QWORD *)v43 + 36) = v43 + 304;
          *((_QWORD *)v43 + 40) = v43 + 336;
          *((_QWORD *)v43 + 44) = v43 + 368;
          *((_QWORD *)v43 + 48) = v43 + 400;
          *((_QWORD *)v43 + 52) = v43 + 432;
          *((_QWORD *)v43 + 13) = 0;
          v43[112] = 0;
          *((_QWORD *)v43 + 17) = 0;
          v43[144] = 0;
          *((_QWORD *)v43 + 21) = 0;
          v43[176] = 0;
          *((_QWORD *)v43 + 25) = 0;
          v43[208] = 0;
          *((_QWORD *)v43 + 29) = 0;
          v43[240] = 0;
          *((_QWORD *)v43 + 33) = 0;
          v43[272] = 0;
          *((_QWORD *)v43 + 37) = 0;
          v43[304] = 0;
          *((_QWORD *)v43 + 41) = 0;
          v43[336] = 0;
          *((_QWORD *)v43 + 45) = 0;
          v43[368] = 0;
          *((_QWORD *)v43 + 49) = 0;
          v43[400] = 0;
          *((_QWORD *)v43 + 53) = 0x800000000LL;
          *((_QWORD *)v43 + 66) = v43 + 544;
          *((_QWORD *)v43 + 67) = 0x600000000LL;
        }
        v114 = v43;
      }
      v43[*v43 + 1] = 2;
      v44 = v114;
      v45 = *v114;
      *v114 = v45 + 1;
      *(_QWORD *)&v44[8 * v45 + 16] = v17;
      goto LABEL_26;
    }
    goto LABEL_21;
  }
  return 0;
}
