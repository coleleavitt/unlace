void __fastcall sub_83ADB0(__int64 *a1, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  void *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // rax
  char v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int8 **v19; // r12
  unsigned __int8 *v20; // r13
  _BYTE *v21; // r8
  char *v22; // r15
  double *v23; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int8 *v28; // r15
  size_t v29; // rsi
  double *v30; // rdi
  __int64 v31; // rax
  double v32; // rcx
  unsigned __int8 *v33; // r13
  _BYTE *v34; // r8
  char *v35; // r15
  double *v36; // rax
  unsigned __int8 *v37; // rdx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned __int8 *v41; // r12
  size_t v42; // rsi
  double *v43; // rdi
  __int64 v44; // rax
  double v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdx
  const void *v50; // r8
  __int64 v51; // r15
  const void *v52; // r14
  double *v53; // rdi
  void *v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rdi
  void *v62; // rax
  double *v63; // rdi
  __int64 v64; // r12
  unsigned int v65; // eax
  __int64 *v66; // r12
  void *v67; // rax
  unsigned __int8 *v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  _QWORD *v74; // rdi
  void *v75; // [rsp+8h] [rbp-130h]
  void *v76; // [rsp+8h] [rbp-130h]
  _BYTE *v77; // [rsp+8h] [rbp-130h]
  _QWORD *v78; // [rsp+8h] [rbp-130h]
  _BYTE *v79; // [rsp+8h] [rbp-130h]
  _QWORD *v80; // [rsp+8h] [rbp-130h]
  _BYTE *v81; // [rsp+8h] [rbp-130h]
  _BYTE *v82; // [rsp+8h] [rbp-130h]
  char v83; // [rsp+10h] [rbp-128h]
  __int64 v84; // [rsp+10h] [rbp-128h]
  const void *v85; // [rsp+10h] [rbp-128h]
  __int64 v86; // [rsp+10h] [rbp-128h]
  _QWORD *v87; // [rsp+10h] [rbp-128h]
  _QWORD *v88; // [rsp+10h] [rbp-128h]
  __int64 v89; // [rsp+18h] [rbp-120h]
  _BYTE *v91; // [rsp+20h] [rbp-118h]
  _BYTE *v92; // [rsp+20h] [rbp-118h]
  __int64 v93; // [rsp+28h] [rbp-110h]
  __int64 v94; // [rsp+28h] [rbp-110h]
  char v95; // [rsp+30h] [rbp-108h]
  char v96; // [rsp+3Ch] [rbp-FCh]
  char v97; // [rsp+3Ch] [rbp-FCh]
  void *src[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v99; // [rsp+50h] [rbp-E8h] BYREF
  void *v100[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v101; // [rsp+70h] [rbp-C8h] BYREF
  void *v102; // [rsp+80h] [rbp-B8h] BYREF
  size_t v103; // [rsp+88h] [rbp-B0h]
  double v104[6]; // [rsp+90h] [rbp-A8h] BYREF
  void *v105; // [rsp+C0h] [rbp-78h] BYREF
  size_t v106; // [rsp+C8h] [rbp-70h]
  double v107[13]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 16LL) + 8LL);
  v5 = *(void **)(*(_QWORD *)a1[1] + 16LL);
  BYTE4(v102) &= ~1u;
  LODWORD(v102) = 0;
  v75 = v5;
  if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    v7 = *(_QWORD *)v3;
    v83 = *(_BYTE *)(v3 + 128) & 1;
    BYTE4(v105) &= ~1u;
    LODWORD(v105) = 0;
    sub_6A37F0((__int64)&v105);
    sub_6A3550((__int64)&v105, v7, v6, (_QWORD *)(v3 + 16), v83);
    sub_6A01B0((__int64)&v102, (__int64)&v105);
    if ( (unsigned int)v105 <= 1 )
      goto LABEL_3;
  }
  else
  {
    v97 = *(_BYTE *)(v3 + 128) & 1;
    v95 = *(_BYTE *)(v3 + 24);
    v94 = *(_QWORD *)v3;
    v51 = *(unsigned int *)(v3 + 56);
    v52 = *(const void **)(v3 + 48);
    v86 = *(_QWORD *)(v3 + 8);
    BYTE4(v105) &= ~1u;
    LODWORD(v105) = 0;
    sub_6A37F0((__int64)&v105);
    sub_6A3690((__int64)&v105, v94, v86, (_QWORD *)(v3 + 16), v52, v51, (v95 & 2) != 0, v97);
    sub_6A01B0((__int64)&v102, (__int64)&v105);
    if ( (unsigned int)v105 <= 1 )
      goto LABEL_3;
  }
  sub_69F740((__int64)&v105);
LABEL_3:
  if ( *(_BYTE *)(v3 + 129) )
    BYTE4(v102) |= 1u;
  sub_6A3290((__int64)src, (__int64)&v102, (__int64)v75, v4, v8, v9);
  if ( (unsigned int)v102 > 1 )
    sub_69F740((__int64)&v102);
  v10 = a1[3];
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 24LL) + 8LL);
  v12 = *(void **)(*(_QWORD *)a1[1] + 16LL);
  BYTE4(v102) &= ~1u;
  LODWORD(v102) = 0;
  v76 = v12;
  v13 = *(_BYTE *)(v10 + 128) & 1;
  if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
  {
    v14 = *(_QWORD *)v10;
    v15 = *(_QWORD *)(v10 + 8);
    LODWORD(v105) = 0;
    BYTE4(v105) &= ~1u;
    v84 = v15;
    sub_6A37F0((__int64)&v105);
    sub_6A3550((__int64)&v105, v14, v84, (_QWORD *)(v10 + 16), v13);
    sub_6A01B0((__int64)&v102, (__int64)&v105);
    if ( (unsigned int)v105 <= 1 )
      goto LABEL_9;
  }
  else
  {
    v47 = *(unsigned int *)(v10 + 56);
    v48 = *(_QWORD *)v10;
    v96 = *(_BYTE *)(v10 + 24);
    v49 = *(_QWORD *)(v10 + 8);
    v50 = *(const void **)(v10 + 48);
    LODWORD(v105) = 0;
    BYTE4(v105) &= ~1u;
    v93 = v49;
    v85 = v50;
    v89 = v47;
    sub_6A37F0((__int64)&v105);
    sub_6A3690((__int64)&v105, v48, v93, (_QWORD *)(v10 + 16), v85, v89, (v96 & 2) != 0, v13);
    sub_6A01B0((__int64)&v102, (__int64)&v105);
    if ( (unsigned int)v105 <= 1 )
      goto LABEL_9;
  }
  sub_69F740((__int64)&v105);
LABEL_9:
  if ( *(_BYTE *)(v10 + 129) )
    BYTE4(v102) |= 1u;
  sub_6A3290((__int64)v100, (__int64)&v102, (__int64)v76, v11, v16, v17);
  if ( (unsigned int)v102 > 1 )
    sub_69F740((__int64)&v102);
  v18 = sub_A2E130(*(_QWORD *)a1[1], *(_QWORD *)a1[2], a2, 0);
  v19 = (unsigned __int8 **)v18;
  if ( v18 )
  {
    v20 = *(unsigned __int8 **)v18;
    v21 = src[0];
    v22 = (char *)src[1];
    if ( !*(_QWORD *)v18 )
    {
      v55 = *(_QWORD *)(v18 + 8);
      v56 = *(_DWORD *)(v55 + 14976);
      if ( v56 )
      {
        v57 = (unsigned int)(v56 - 1);
        *(_DWORD *)(v55 + 14976) = v57;
        v20 = *(unsigned __int8 **)(v55 + 8 * v57 + 14848);
        v58 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v59 = *((_QWORD **)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v60 = &v59[8 * v58];
        v87 = v59;
        while ( v87 != v60 )
        {
          v60 -= 8;
          v61 = (_QWORD *)v60[3];
          if ( v61 != v60 + 5 )
          {
            v91 = v21;
            v78 = v60;
            operator delete(v61, v60[5] + 1LL);
            v21 = v91;
            v60 = v78;
          }
        }
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        v81 = src[0];
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
        *((_QWORD *)v20 + 52) = v20 + 432;
        v21 = v81;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      *v19 = v20;
    }
    v20[*v20 + 1] = 0;
    v102 = v104;
    if ( v21 )
    {
      v105 = v22;
      if ( (unsigned __int64)v22 > 0xF )
      {
        v77 = v21;
        v54 = (void *)std::string::_M_create();
        v21 = v77;
        v102 = v54;
        v53 = (double *)v54;
        *(_QWORD *)&v104[0] = v105;
        goto LABEL_55;
      }
    }
    else
    {
      if ( v22 )
        goto LABEL_100;
      v105 = nullptr;
    }
    if ( v22 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v104[0]) = *v21;
LABEL_19:
      v23 = v104;
      goto LABEL_20;
    }
    if ( !v22 )
      goto LABEL_19;
    v53 = v104;
LABEL_55:
    memcpy(v53, v21, (size_t)v22);
    v22 = (char *)v105;
    v23 = (double *)v102;
LABEL_20:
    v103 = (size_t)v22;
    v22[(_QWORD)v23] = 0;
    v24 = *v19;
    v25 = **v19;
    *v24 = v25 + 1;
    v26 = (unsigned __int8)v25;
    v27 = 32 * v25;
    v28 = &v24[v27];
    v29 = v103;
    v30 = *(double **)&v24[v27 + 96];
    if ( v30 == (double *)&v24[v27 + 112] )
    {
      if ( v102 != v104 )
      {
        *((_QWORD *)v28 + 12) = v102;
        *(__m128 *)&v24[32 * v26 + 104] = _mm_loadh_ps(v104);
LABEL_68:
        v102 = v104;
        v30 = v104;
        goto LABEL_24;
      }
    }
    else if ( v102 != v104 )
    {
      v31 = 32LL * v26;
      v32 = *(double *)&v24[v31 + 112];
      *((_QWORD *)v28 + 12) = v102;
      *(__m128 *)&v24[v31 + 104] = _mm_loadh_ps(v104);
      if ( v30 )
      {
        v102 = v30;
        v104[0] = v32;
        goto LABEL_24;
      }
      goto LABEL_68;
    }
    if ( &v102 == (void **)&v24[v27 + 96] )
    {
      v30 = (double *)v102;
    }
    else
    {
      if ( v103 )
      {
        if ( v103 == 1 )
          *(_BYTE *)v30 = LOBYTE(v104[0]);
        else
          memcpy(v30, v104, v103);
        v29 = v103;
        v30 = *((double **)v28 + 12);
      }
      *((_QWORD *)v28 + 13) = v29;
      *((_BYTE *)v30 + v29) = 0;
      v30 = (double *)v102;
    }
LABEL_24:
    v103 = 0;
    *(_BYTE *)v30 = 0;
    if ( v102 != v104 )
      operator delete(v102, *(_QWORD *)&v104[0] + 1LL);
    v33 = *v19;
    v34 = v100[0];
    v35 = (char *)v100[1];
    if ( !*v19 )
    {
      v68 = v19[1];
      v69 = *((_DWORD *)v68 + 3744);
      if ( v69 )
      {
        v70 = (unsigned int)(v69 - 1);
        *((_DWORD *)v68 + 3744) = v70;
        v33 = *(unsigned __int8 **)&v68[8 * v70 + 14848];
        v71 = *((unsigned int *)v33 + 134);
        *v33 = 0;
        v72 = *((_QWORD **)v33 + 66);
        *((_DWORD *)v33 + 106) = 0;
        v73 = &v72[8 * v71];
        v88 = v72;
        while ( v88 != v73 )
        {
          v73 -= 8;
          v74 = (_QWORD *)v73[3];
          if ( v74 != v73 + 5 )
          {
            v92 = v34;
            v80 = v73;
            operator delete(v74, v73[5] + 1LL);
            v34 = v92;
            v73 = v80;
          }
        }
        *((_DWORD *)v33 + 134) = 0;
      }
      else
      {
        v82 = v100[0];
        v33 = (unsigned __int8 *)operator new(0x3A0u);
        *v33 = 0;
        *((_QWORD *)v33 + 12) = v33 + 112;
        *((_QWORD *)v33 + 16) = v33 + 144;
        *((_QWORD *)v33 + 20) = v33 + 176;
        *((_QWORD *)v33 + 24) = v33 + 208;
        *((_QWORD *)v33 + 28) = v33 + 240;
        *((_QWORD *)v33 + 32) = v33 + 272;
        *((_QWORD *)v33 + 36) = v33 + 304;
        *((_QWORD *)v33 + 40) = v33 + 336;
        *((_QWORD *)v33 + 44) = v33 + 368;
        *((_QWORD *)v33 + 48) = v33 + 400;
        *((_QWORD *)v33 + 13) = 0;
        v33[112] = 0;
        *((_QWORD *)v33 + 17) = 0;
        v33[144] = 0;
        *((_QWORD *)v33 + 21) = 0;
        v33[176] = 0;
        *((_QWORD *)v33 + 25) = 0;
        v33[208] = 0;
        *((_QWORD *)v33 + 29) = 0;
        v33[240] = 0;
        *((_QWORD *)v33 + 33) = 0;
        v33[272] = 0;
        *((_QWORD *)v33 + 37) = 0;
        v33[304] = 0;
        *((_QWORD *)v33 + 41) = 0;
        v33[336] = 0;
        *((_QWORD *)v33 + 45) = 0;
        v33[368] = 0;
        *((_QWORD *)v33 + 49) = 0;
        v33[400] = 0;
        *((_QWORD *)v33 + 52) = v33 + 432;
        v34 = v82;
        *((_QWORD *)v33 + 53) = 0x800000000LL;
        *((_QWORD *)v33 + 66) = v33 + 544;
        *((_QWORD *)v33 + 67) = 0x600000000LL;
      }
      *v19 = v33;
    }
    v33[*v33 + 1] = 0;
    v105 = v107;
    if ( v34 || !v35 )
    {
      v102 = v35;
      if ( (unsigned __int64)v35 > 0xF )
      {
        v79 = v34;
        v62 = (void *)std::string::_M_create();
        v34 = v79;
        v105 = v62;
        v63 = (double *)v62;
        *(_QWORD *)&v107[0] = v102;
      }
      else
      {
        if ( v35 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v107[0]) = *v34;
          goto LABEL_32;
        }
        if ( !v35 )
        {
LABEL_32:
          v36 = v107;
          goto LABEL_33;
        }
        v63 = v107;
      }
      memcpy(v63, v34, (size_t)v35);
      v35 = (char *)v102;
      v36 = (double *)v105;
LABEL_33:
      v106 = (size_t)v35;
      v35[(_QWORD)v36] = 0;
      v37 = *v19;
      v38 = **v19;
      *v37 = v38 + 1;
      v39 = (unsigned __int8)v38;
      v40 = 32 * v38;
      v41 = &v37[v40];
      v42 = v106;
      v43 = *(double **)&v37[v40 + 96];
      if ( v43 == (double *)&v37[v40 + 112] )
      {
        if ( v105 != v107 )
        {
          *((_QWORD *)v41 + 12) = v105;
          *(__m128 *)&v37[32 * v39 + 104] = _mm_loadh_ps(v107);
          goto LABEL_71;
        }
      }
      else if ( v105 != v107 )
      {
        v44 = 32LL * v39;
        v45 = *(double *)&v37[v44 + 112];
        *((_QWORD *)v41 + 12) = v105;
        *(__m128 *)&v37[v44 + 104] = _mm_loadh_ps(v107);
        if ( v43 )
        {
          v105 = v43;
          v107[0] = v45;
          goto LABEL_37;
        }
LABEL_71:
        v105 = v107;
        v43 = v107;
LABEL_37:
        v106 = 0;
        *(_BYTE *)v43 = 0;
        if ( v105 != v107 )
          operator delete(v105, *(_QWORD *)&v107[0] + 1LL);
        goto LABEL_39;
      }
      if ( &v105 == (void **)&v37[v40 + 96] )
      {
        v43 = (double *)v105;
      }
      else
      {
        if ( v106 )
        {
          if ( v106 == 1 )
            *(_BYTE *)v43 = LOBYTE(v107[0]);
          else
            memcpy(v43, v107, v106);
          v42 = v106;
          v43 = *((double **)v41 + 12);
        }
        *((_QWORD *)v41 + 13) = v42;
        *((_BYTE *)v43 + v42) = 0;
        v43 = (double *)v105;
      }
      goto LABEL_37;
    }
LABEL_100:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
LABEL_39:
  v46 = *(_QWORD *)a1[4];
  if ( v46 )
  {
    if ( v46 == *(_QWORD *)a1[5] )
    {
      v64 = *(_QWORD *)a1[1];
      v65 = sub_8124E0(v46);
      v66 = (__int64 *)sub_A2DD70(v64, v65, 2280);
      v67 = (void *)sub_AC7B80(*(_QWORD *)a1[4]);
      if ( v66 )
      {
        v105 = v67;
        LOBYTE(v106) = 1;
        sub_839C90(v66, (__int64 *)&v105);
      }
    }
  }
  if ( v100[0] != &v101 )
    operator delete(v100[0], v101 + 1);
  if ( src[0] != &v99 )
    operator delete(src[0], v99 + 1);
}

