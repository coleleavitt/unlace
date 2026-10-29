void __fastcall sub_82F130(__int64 *a1, unsigned int a2, char a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void **v17; // r12
  unsigned __int8 **v18; // rbx
  void **v19; // rax
  unsigned __int8 *v20; // r13
  _BYTE *v21; // r8
  char *v22; // rcx
  double *v23; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rsi
  size_t v26; // r8
  unsigned __int8 *v27; // rcx
  double *v28; // rdi
  __int64 v29; // rax
  double v30; // rsi
  _BYTE *v31; // rcx
  char *v32; // r13
  unsigned __int8 *v33; // r12
  double *v34; // rax
  unsigned __int8 *v35; // rdx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  unsigned __int8 *v39; // rbx
  size_t v40; // rsi
  double *v41; // rdi
  __int64 v42; // rax
  double v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rdx
  const void *v47; // rax
  __int64 v48; // r15
  const void *v49; // r14
  double *v50; // rdi
  void *v51; // rax
  unsigned __int8 *v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rbp
  void *v60; // rdi
  void *v61; // rax
  double *v62; // rdi
  unsigned __int8 *v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r15
  __int64 v67; // rdx
  __int64 v68; // r15
  __int64 v69; // rbx
  __int64 v70; // r15
  void *v71; // rdi
  _BYTE *srcb; // [rsp+0h] [rbp-138h]
  unsigned __int8 **srca; // [rsp+0h] [rbp-138h]
  _BYTE *srcc; // [rsp+0h] [rbp-138h]
  __int64 v76; // [rsp+8h] [rbp-130h]
  __int64 v77; // [rsp+8h] [rbp-130h]
  _BYTE *v78; // [rsp+8h] [rbp-130h]
  unsigned __int8 **v79; // [rsp+8h] [rbp-130h]
  unsigned __int8 *v80; // [rsp+8h] [rbp-130h]
  _BYTE *v81; // [rsp+8h] [rbp-130h]
  _BYTE *v82; // [rsp+8h] [rbp-130h]
  char v83; // [rsp+10h] [rbp-128h]
  __int64 v84; // [rsp+10h] [rbp-128h]
  const void *v85; // [rsp+10h] [rbp-128h]
  __int64 v86; // [rsp+10h] [rbp-128h]
  char *v87; // [rsp+10h] [rbp-128h]
  __int64 v88; // [rsp+18h] [rbp-120h]
  char *v90; // [rsp+20h] [rbp-118h]
  _BYTE *v91; // [rsp+20h] [rbp-118h]
  char *v92; // [rsp+20h] [rbp-118h]
  __int64 v93; // [rsp+28h] [rbp-110h]
  __int64 v94; // [rsp+28h] [rbp-110h]
  char v95; // [rsp+30h] [rbp-108h]
  char v96; // [rsp+30h] [rbp-108h]
  char v97; // [rsp+38h] [rbp-100h]
  char v98; // [rsp+38h] [rbp-100h]
  char v99; // [rsp+3Ch] [rbp-FCh]
  void *v100[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v101; // [rsp+50h] [rbp-E8h] BYREF
  void *v102[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v103; // [rsp+70h] [rbp-C8h] BYREF
  void *v104; // [rsp+80h] [rbp-B8h] BYREF
  size_t n; // [rsp+88h] [rbp-B0h]
  double v106[6]; // [rsp+90h] [rbp-A8h] BYREF
  void *v107; // [rsp+C0h] [rbp-78h] BYREF
  size_t v108; // [rsp+C8h] [rbp-70h]
  double v109[13]; // [rsp+D0h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 16LL) + 8LL);
  v5 = *(_QWORD *)(a1[1] + 16);
  BYTE4(v104) &= ~1u;
  LODWORD(v104) = 0;
  v76 = v5;
  if ( (*(_BYTE *)(v3 + 24) & 1) != 0 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    v7 = *(_QWORD *)v3;
    v83 = *(_BYTE *)(v3 + 128) & 1;
    BYTE4(v107) &= ~1u;
    LODWORD(v107) = 0;
    sub_6A37F0((__int64)&v107);
    sub_6A3550((__int64)&v107, v7, v6, (_QWORD *)(v3 + 16), v83);
    sub_6A01B0((__int64)&v104, (__int64)&v107);
    if ( (unsigned int)v107 <= 1 )
      goto LABEL_3;
  }
  else
  {
    v98 = *(_BYTE *)(v3 + 128) & 1;
    v96 = *(_BYTE *)(v3 + 24);
    v94 = *(_QWORD *)v3;
    v48 = *(unsigned int *)(v3 + 56);
    v49 = *(const void **)(v3 + 48);
    v86 = *(_QWORD *)(v3 + 8);
    BYTE4(v107) &= ~1u;
    LODWORD(v107) = 0;
    sub_6A37F0((__int64)&v107);
    sub_6A3690((__int64)&v107, v94, v86, (_QWORD *)(v3 + 16), v49, v48, (v96 & 2) != 0, v98);
    sub_6A01B0((__int64)&v104, (__int64)&v107);
    if ( (unsigned int)v107 <= 1 )
      goto LABEL_3;
  }
  sub_69F740((__int64)&v107);
LABEL_3:
  if ( *(_BYTE *)(v3 + 129) )
    BYTE4(v104) |= 1u;
  sub_6A3290((__int64)v100, (__int64)&v104, v76, v4, v8, v9);
  if ( (unsigned int)v104 > 1 )
    sub_69F740((__int64)&v104);
  v10 = a1[3];
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1[2] + 24LL) + 8LL);
  v12 = *(_QWORD *)(a1[1] + 16);
  BYTE4(v104) &= ~1u;
  LODWORD(v104) = 0;
  v77 = v12;
  if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
  {
    v13 = *(_QWORD *)v10;
    v14 = *(_QWORD *)(v10 + 8);
    v95 = *(_BYTE *)(v10 + 128) & 1;
    BYTE4(v107) &= ~1u;
    v84 = v14;
    LODWORD(v107) = 0;
    sub_6A37F0((__int64)&v107);
    sub_6A3550((__int64)&v107, v13, v84, (_QWORD *)(v10 + 16), v95);
    sub_6A01B0((__int64)&v104, (__int64)&v107);
    if ( (unsigned int)v107 <= 1 )
      goto LABEL_9;
  }
  else
  {
    v44 = *(unsigned int *)(v10 + 56);
    v45 = *(_QWORD *)v10;
    v97 = *(_BYTE *)(v10 + 24);
    v46 = *(_QWORD *)(v10 + 8);
    v47 = *(const void **)(v10 + 48);
    v99 = *(_BYTE *)(v10 + 128) & 1;
    BYTE4(v107) &= ~1u;
    v93 = v46;
    v85 = v47;
    v88 = v44;
    LODWORD(v107) = 0;
    sub_6A37F0((__int64)&v107);
    sub_6A3690((__int64)&v107, v45, v93, (_QWORD *)(v10 + 16), v85, v88, (v97 & 2) != 0, v99);
    sub_6A01B0((__int64)&v104, (__int64)&v107);
    if ( (unsigned int)v107 <= 1 )
      goto LABEL_9;
  }
  sub_69F740((__int64)&v107);
LABEL_9:
  if ( *(_BYTE *)(v10 + 129) )
    BYTE4(v104) |= 1u;
  v17 = v102;
  sub_6A3290((__int64)v102, (__int64)&v104, v77, v11, v15, v16);
  if ( (unsigned int)v104 > 1 )
    sub_69F740((__int64)&v104);
  v18 = (unsigned __int8 **)sub_A2E130(a1[1], *(_QWORD *)a1[2], a2, 0);
  v19 = v102;
  if ( !a3 )
    v19 = v100;
  if ( v18 )
  {
    v20 = *v18;
    v21 = *v19;
    v22 = (char *)v19[1];
    if ( !*v18 )
    {
      v52 = v18[1];
      v53 = *((_DWORD *)v52 + 3744);
      if ( v53 )
      {
        v54 = (unsigned int)(v53 - 1);
        *((_DWORD *)v52 + 3744) = v54;
        v20 = *(unsigned __int8 **)&v52[8 * v54 + 14848];
        v55 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v56 = *((_QWORD *)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v57 = v56 + (v55 << 6);
        if ( v56 != v57 )
        {
          v91 = v21;
          v87 = v22;
          v79 = v18;
          v58 = v56;
          v59 = v57;
          do
          {
            v59 -= 64;
            v60 = *(void **)(v59 + 24);
            if ( v60 != (void *)(v59 + 40) )
              operator delete(v60, *(_QWORD *)(v59 + 40) + 1LL);
          }
          while ( v58 != v59 );
          v18 = v79;
          v21 = v91;
          v22 = v87;
        }
        *((_DWORD *)v20 + 134) = 0;
      }
      else
      {
        v92 = v22;
        v82 = v21;
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
        v21 = v82;
        v22 = v92;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      *v18 = v20;
    }
    v20[*v20 + 1] = 0;
    v104 = v106;
    if ( v21 )
    {
      v107 = v22;
      if ( (unsigned __int64)v22 > 0xF )
      {
        v90 = v22;
        v78 = v21;
        v51 = (void *)std::string::_M_create();
        v21 = v78;
        v22 = v90;
        v104 = v51;
        v50 = (double *)v51;
        *(_QWORD *)&v106[0] = v107;
        goto LABEL_57;
      }
    }
    else
    {
      if ( v22 )
        goto LABEL_103;
      v107 = nullptr;
    }
    if ( v22 == (_BYTE *)&dword_0 + 1 )
    {
      LOBYTE(v106[0]) = *v21;
LABEL_21:
      v23 = v106;
      goto LABEL_22;
    }
    if ( !v22 )
      goto LABEL_21;
    v50 = v106;
LABEL_57:
    memcpy(v50, v21, (size_t)v22);
    v22 = (char *)v107;
    v23 = (double *)v104;
LABEL_22:
    n = (size_t)v22;
    v22[(_QWORD)v23] = 0;
    v24 = *v18;
    v25 = **v18;
    *v24 = v25 + 1;
    v26 = n;
    v27 = &v24[32 * v25];
    v28 = *((double **)v27 + 12);
    if ( v28 == (double *)(v27 + 112) )
    {
      if ( v104 != v106 )
      {
        *((_QWORD *)v27 + 12) = v104;
        *(__m128 *)&v24[32 * (int)v25 + 104] = _mm_loadh_ps(v106);
LABEL_75:
        v104 = v106;
        v28 = v106;
        goto LABEL_26;
      }
    }
    else if ( v104 != v106 )
    {
      v29 = 32LL * (int)v25;
      v30 = *(double *)&v24[v29 + 112];
      *((_QWORD *)v27 + 12) = v104;
      *(__m128 *)&v24[v29 + 104] = _mm_loadh_ps(v106);
      if ( v28 )
      {
        v104 = v28;
        v106[0] = v30;
        goto LABEL_26;
      }
      goto LABEL_75;
    }
    if ( &v104 == (void **)&v24[32 * v25 + 96] )
    {
      v28 = (double *)v104;
    }
    else
    {
      if ( n )
      {
        if ( n == 1 )
        {
          *(_BYTE *)v28 = LOBYTE(v106[0]);
          v26 = n;
          v28 = *((double **)v27 + 12);
        }
        else
        {
          v80 = &v24[32 * v25];
          memcpy(v28, v106, n);
          v27 = v80;
          v26 = n;
          v28 = *((double **)v80 + 12);
        }
      }
      *((_QWORD *)v27 + 13) = v26;
      *((_BYTE *)v28 + v26) = 0;
      v28 = (double *)v104;
    }
LABEL_26:
    n = 0;
    *(_BYTE *)v28 = 0;
    if ( v104 != v106 )
      operator delete(v104, *(_QWORD *)&v106[0] + 1LL);
    if ( a3 )
      v17 = v100;
    v31 = *v17;
    v32 = (char *)v17[1];
    v33 = *v18;
    if ( !*v18 )
    {
      v63 = v18[1];
      v64 = *((_DWORD *)v63 + 3744);
      if ( v64 )
      {
        v65 = (unsigned int)(v64 - 1);
        *((_DWORD *)v63 + 3744) = v65;
        v33 = *(unsigned __int8 **)&v63[8 * v65 + 14848];
        v66 = *((unsigned int *)v33 + 134);
        v67 = *((_QWORD *)v33 + 66);
        *v33 = 0;
        *((_DWORD *)v33 + 106) = 0;
        v68 = v67 + (v66 << 6);
        if ( v67 != v68 )
        {
          v81 = v31;
          srca = v18;
          v69 = v68;
          v70 = v67;
          do
          {
            v69 -= 64;
            v71 = *(void **)(v69 + 24);
            if ( v71 != (void *)(v69 + 40) )
              operator delete(v71, *(_QWORD *)(v69 + 40) + 1LL);
          }
          while ( v70 != v69 );
          v18 = srca;
          v31 = v81;
        }
        *((_DWORD *)v33 + 134) = 0;
      }
      else
      {
        srcc = v31;
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
        v31 = srcc;
        *((_QWORD *)v33 + 53) = 0x800000000LL;
        *((_QWORD *)v33 + 66) = v33 + 544;
        *((_QWORD *)v33 + 67) = 0x600000000LL;
      }
      *v18 = v33;
    }
    v33[*v33 + 1] = 0;
    v107 = v109;
    if ( v31 || !v32 )
    {
      v104 = v32;
      if ( (unsigned __int64)v32 > 0xF )
      {
        srcb = v31;
        v61 = (void *)std::string::_M_create();
        v31 = srcb;
        v107 = v61;
        v62 = (double *)v61;
        *(_QWORD *)&v109[0] = v104;
      }
      else
      {
        if ( v32 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v109[0]) = *v31;
          goto LABEL_36;
        }
        if ( !v32 )
        {
LABEL_36:
          v34 = v109;
          goto LABEL_37;
        }
        v62 = v109;
      }
      memcpy(v62, v31, (size_t)v32);
      v32 = (char *)v104;
      v34 = (double *)v107;
LABEL_37:
      v108 = (size_t)v32;
      v32[(_QWORD)v34] = 0;
      v35 = *v18;
      v36 = **v18;
      *v35 = v36 + 1;
      v37 = (unsigned __int8)v36;
      v38 = 32 * v36;
      v39 = &v35[v38];
      v40 = v108;
      v41 = *(double **)&v35[v38 + 96];
      if ( v41 == (double *)&v35[v38 + 112] )
      {
        if ( v107 != v109 )
        {
          *((_QWORD *)v39 + 12) = v107;
          *(__m128 *)&v35[32 * v37 + 104] = _mm_loadh_ps(v109);
          goto LABEL_72;
        }
      }
      else if ( v107 != v109 )
      {
        v42 = 32LL * v37;
        v43 = *(double *)&v35[v42 + 112];
        *((_QWORD *)v39 + 12) = v107;
        *(__m128 *)&v35[v42 + 104] = _mm_loadh_ps(v109);
        if ( v41 )
        {
          v107 = v41;
          v109[0] = v43;
          goto LABEL_41;
        }
LABEL_72:
        v107 = v109;
        v41 = v109;
LABEL_41:
        v108 = 0;
        *(_BYTE *)v41 = 0;
        if ( v107 != v109 )
          operator delete(v107, *(_QWORD *)&v109[0] + 1LL);
        goto LABEL_43;
      }
      if ( &v107 == (void **)&v35[v38 + 96] )
      {
        v41 = (double *)v107;
      }
      else
      {
        if ( v108 )
        {
          if ( v108 == 1 )
            *(_BYTE *)v41 = LOBYTE(v109[0]);
          else
            memcpy(v41, v109, v108);
          v40 = v108;
          v41 = *((double **)v39 + 12);
        }
        *((_QWORD *)v39 + 13) = v40;
        *((_BYTE *)v41 + v40) = 0;
        v41 = (double *)v107;
      }
      goto LABEL_41;
    }
LABEL_103:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
LABEL_43:
  if ( v102[0] != &v103 )
    operator delete(v102[0], v103 + 1);
  if ( v100[0] != &v101 )
    operator delete(v100[0], v101 + 1);
}

