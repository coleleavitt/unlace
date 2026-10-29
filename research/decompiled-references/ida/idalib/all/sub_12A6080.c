__int64 __fastcall sub_12A6080(__int64 a1, _BYTE *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // r12
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rcx
  unsigned __int8 *v16; // r12
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  void **v21; // rcx
  _BYTE *v22; // rdi
  __int64 v23; // rax
  unsigned __int8 *v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  void **v30; // rbx
  _BYTE *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int8 *v34; // rbx
  signed __int64 v35; // r13
  _BYTE *v36; // r14
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  void **v42; // r13
  _BYTE *v43; // rdi
  __int64 v44; // rax
  void **v45; // rbp
  unsigned __int64 v46; // rax
  void **v47; // r13
  void **v48; // rbx
  void **v49; // rdi
  void **v50; // rdi
  void **v51; // rbx
  void **v52; // r13
  size_t v53; // rdx
  size_t v54; // rdx
  size_t v55; // rdx
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  void *v63; // rdi
  unsigned __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r12
  _QWORD *v68; // rdx
  _QWORD *v69; // rdi
  unsigned __int64 v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rdi
  __int64 v78; // [rsp+0h] [rbp-188h]
  __int64 v79; // [rsp+0h] [rbp-188h]
  void **v80; // [rsp+0h] [rbp-188h]
  _QWORD *v81; // [rsp+0h] [rbp-188h]
  _QWORD *v82; // [rsp+0h] [rbp-188h]
  _BYTE *v83; // [rsp+0h] [rbp-188h]
  void *src; // [rsp+8h] [rbp-180h]
  _QWORD *srca; // [rsp+8h] [rbp-180h]
  void *srcb; // [rsp+8h] [rbp-180h]
  __int64 v87; // [rsp+10h] [rbp-178h]
  __int64 v88; // [rsp+18h] [rbp-170h]
  void *v89; // [rsp+20h] [rbp-168h] BYREF
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v91; // [rsp+30h] [rbp-158h] BYREF
  void *v92; // [rsp+40h] [rbp-148h]
  size_t v93; // [rsp+48h] [rbp-140h]
  _QWORD v94[2]; // [rsp+50h] [rbp-138h] BYREF
  void *v95; // [rsp+60h] [rbp-128h]
  size_t v96; // [rsp+68h] [rbp-120h]
  _QWORD v97[2]; // [rsp+70h] [rbp-118h] BYREF
  void *v98; // [rsp+80h] [rbp-108h]
  size_t v99; // [rsp+88h] [rbp-100h]
  _QWORD v100[2]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v101[4]; // [rsp+A0h] [rbp-E8h] BYREF
  __int16 v102; // [rsp+C0h] [rbp-C8h]
  _QWORD v103[4]; // [rsp+D0h] [rbp-B8h] BYREF
  __int16 v104; // [rsp+F0h] [rbp-98h]
  void *v105; // [rsp+100h] [rbp-88h] BYREF
  unsigned __int64 v106; // [rsp+108h] [rbp-80h]
  __int64 v107; // [rsp+110h] [rbp-78h]
  void *v108; // [rsp+120h] [rbp-68h]
  __int64 v109; // [rsp+130h] [rbp-58h] BYREF
  __int16 v110; // [rsp+140h] [rbp-48h]

  LODWORD(v8) = 1;
  LOWORD(v108) = 261;
  v105 = a2;
  v106 = a3;
  if ( !(unsigned int)sub_228C1E0(&v105, 0) )
    return (unsigned int)v8;
  sub_FC70B0((__int64)&v105, **(_QWORD **)a1, 0, 596);
  v11 = *(__int64 **)(a1 + 8);
  v12 = *v11;
  v13 = v11[1];
  v103[2] = a4;
  v101[2] = " ";
  v101[1] = v13;
  v103[0] = v101;
  v101[0] = v12;
  v104 = 1282;
  v102 = 773;
  v103[3] = a5;
  sub_2253560(&v89, v103);
  v14 = v89;
  v15 = n;
  v16 = (unsigned __int8 *)v105;
  if ( !v105 )
  {
    v57 = v106;
    v58 = *(_DWORD *)(v106 + 14976);
    if ( v58 )
    {
      v59 = (unsigned int)(v58 - 1);
      *(_DWORD *)(v106 + 14976) = v59;
      v16 = *(unsigned __int8 **)(v57 + 8 * v59 + 14848);
      v60 = *((unsigned int *)v16 + 134);
      v61 = *((_QWORD *)v16 + 66);
      *v16 = 0;
      *((_DWORD *)v16 + 106) = 0;
      v62 = v61 + (v60 << 6);
      while ( v61 != v62 )
      {
        while ( 1 )
        {
          v62 -= 64;
          v63 = *(void **)(v62 + 24);
          if ( v63 == (void *)(v62 + 40) )
            break;
          v88 = v61;
          v87 = v62;
          src = (void *)v15;
          operator delete(v63);
          v62 = v87;
          v61 = v88;
          v15 = (__int64)src;
          if ( v88 == v87 )
            goto LABEL_105;
        }
      }
LABEL_105:
      *((_DWORD *)v16 + 134) = 0;
    }
    else
    {
      srcb = (void *)n;
      v83 = v89;
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
      v14 = v83;
      *((_QWORD *)v16 + 66) = v16 + 544;
      v15 = (__int64)srcb;
      *((_QWORD *)v16 + 67) = 0x600000000LL;
    }
    v105 = v16;
  }
  v16[*v16 + 1] = 0;
  v98 = v100;
  if ( &v14[v15] && !v14 )
LABEL_127:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v15 > 0xF )
  {
    if ( v15 < 0 )
      goto LABEL_128;
    v78 = v15;
    v17 = (_QWORD *)operator new(v15 + 1);
    v15 = v78;
    v98 = v17;
    v100[0] = v78;
LABEL_71:
    v79 = v15;
    memcpy(v17, v14, v15);
    v17 = v98;
    v15 = v79;
    goto LABEL_9;
  }
  if ( v15 == 1 )
  {
    LOBYTE(v100[0]) = *v14;
    v17 = v100;
    goto LABEL_9;
  }
  v17 = v100;
  if ( v15 )
    goto LABEL_71;
LABEL_9:
  v99 = v15;
  *((_BYTE *)v17 + v15) = 0;
  v18 = v105;
  v19 = *(unsigned __int8 *)v105;
  *(_BYTE *)v105 = v19 + 1;
  v20 = 4 * (v19 + 3);
  v21 = (void **)&v18[v20];
  v22 = (_BYTE *)v18[v20];
  if ( v98 == v100 )
  {
    v53 = v99;
    if ( v99 )
    {
      if ( v99 == 1 )
      {
        *v22 = v100[0];
        v53 = v99;
        v22 = *v21;
      }
      else
      {
        v80 = v21;
        memcpy(v22, v98, v99);
        v21 = v80;
        v53 = v99;
        v22 = *v80;
      }
    }
    v21[1] = (void *)v53;
    v22[v53] = 0;
    v22 = v98;
  }
  else
  {
    if ( v22 == (_BYTE *)&v18[v20 + 2] )
    {
      *v21 = v98;
      v21[1] = (void *)v99;
      v21[2] = (void *)v100[0];
    }
    else
    {
      v23 = v18[4 * (int)v19 + 14];
      *v21 = v98;
      v21[1] = (void *)v99;
      v21[2] = (void *)v100[0];
      if ( v22 )
      {
        v98 = v22;
        v100[0] = v23;
        goto LABEL_13;
      }
    }
    v22 = v100;
    v98 = v100;
  }
LABEL_13:
  v99 = 0;
  *v22 = 0;
  if ( v98 != v100 )
    operator delete(v98);
  v24 = (unsigned __int8 *)v105;
  if ( !v105 )
  {
    v70 = v106;
    v71 = *(_DWORD *)(v106 + 14976);
    if ( v71 )
    {
      v72 = (unsigned int)(v71 - 1);
      *(_DWORD *)(v106 + 14976) = v72;
      v24 = *(unsigned __int8 **)(v70 + 8 * v72 + 14848);
      v73 = *((unsigned int *)v24 + 134);
      v74 = *((_QWORD **)v24 + 66);
      *v24 = 0;
      *((_DWORD *)v24 + 106) = 0;
      v75 = &v74[8 * v73];
      while ( v74 != v75 )
      {
        while ( 1 )
        {
          v75 -= 8;
          v76 = (_QWORD *)v75[3];
          if ( v76 == v75 + 5 )
            break;
          srca = v75;
          v82 = v74;
          operator delete(v76);
          v74 = v82;
          v75 = srca;
          if ( v82 == srca )
            goto LABEL_117;
        }
      }
LABEL_117:
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
      *((_QWORD *)v24 + 52) = v24 + 432;
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
      *((_QWORD *)v24 + 53) = 0x800000000LL;
      *((_QWORD *)v24 + 66) = v24 + 544;
      *((_QWORD *)v24 + 67) = 0x600000000LL;
    }
    v105 = v24;
  }
  v24[*v24 + 1] = 0;
  v95 = v97;
  if ( &a2[a3] && !a2 )
    goto LABEL_127;
  if ( (unsigned __int64)a3 > 0xF )
  {
    if ( a3 < 0 )
      goto LABEL_128;
    v25 = (_QWORD *)operator new(a3 + 1);
    v97[0] = a3;
    v95 = v25;
LABEL_74:
    memcpy(v25, a2, a3);
    v25 = v95;
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    LOBYTE(v97[0]) = *a2;
    v25 = v97;
    goto LABEL_21;
  }
  v25 = v97;
  if ( a3 )
    goto LABEL_74;
LABEL_21:
  v96 = a3;
  *((_BYTE *)v25 + a3) = 0;
  v26 = v105;
  v27 = *(unsigned __int8 *)v105;
  *(_BYTE *)v105 = v27 + 1;
  v28 = (unsigned __int8)v27;
  v29 = 4 * (v27 + 3);
  v30 = (void **)&v26[v29];
  v31 = (_BYTE *)v26[v29];
  if ( v95 == v97 )
  {
    v54 = v96;
    if ( v96 )
    {
      if ( v96 == 1 )
        *v31 = v97[0];
      else
        memcpy(v31, v95, v96);
      v54 = v96;
      v31 = *v30;
    }
    v30[1] = (void *)v54;
    v31[v54] = 0;
    v31 = v95;
  }
  else
  {
    if ( v31 == (_BYTE *)&v26[v29 + 2] )
    {
      *v30 = v95;
      v30[1] = (void *)v96;
      v30[2] = (void *)v97[0];
    }
    else
    {
      v32 = v26[4 * v28 + 14];
      *v30 = v95;
      v30[1] = (void *)v96;
      v30[2] = (void *)v97[0];
      if ( v31 )
      {
        v95 = v31;
        v97[0] = v32;
        goto LABEL_25;
      }
    }
    v31 = v97;
    v95 = v97;
  }
LABEL_25:
  v96 = 0;
  v8 = v97;
  *v31 = 0;
  if ( v95 != v97 )
    operator delete(v95);
  v33 = *(_QWORD *)(a1 + 16);
  v34 = (unsigned __int8 *)v105;
  v35 = *(_QWORD *)(v33 + 8);
  v36 = *(_BYTE **)v33;
  if ( !v105 )
  {
    v64 = v106;
    v65 = *(_DWORD *)(v106 + 14976);
    if ( v65 )
    {
      v66 = (unsigned int)(v65 - 1);
      *(_DWORD *)(v106 + 14976) = v66;
      v34 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
      v67 = *((unsigned int *)v34 + 134);
      *v34 = 0;
      v68 = *((_QWORD **)v34 + 66);
      *((_DWORD *)v34 + 106) = 0;
      v8 = &v68[8 * v67];
      while ( v68 != v8 )
      {
        while ( 1 )
        {
          v8 -= 8;
          v69 = (_QWORD *)v8[3];
          if ( v69 == v8 + 5 )
            break;
          v81 = v68;
          operator delete(v69);
          v68 = v81;
          if ( v81 == v8 )
            goto LABEL_111;
        }
      }
LABEL_111:
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
    v105 = v34;
  }
  v34[*v34 + 1] = 0;
  v37 = v94;
  v92 = v94;
  LOBYTE(v8) = v36 == nullptr && &v36[v35] != nullptr;
  if ( (_BYTE)v8 )
    goto LABEL_127;
  if ( (unsigned __int64)v35 > 0xF )
  {
    if ( v35 >= 0 )
    {
      v37 = (_QWORD *)operator new(v35 + 1);
      v94[0] = v35;
      v92 = v37;
LABEL_77:
      memcpy(v37, v36, v35);
      v37 = v92;
      goto LABEL_32;
    }
LABEL_128:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v35 == 1 )
  {
    LOBYTE(v94[0]) = *v36;
    goto LABEL_32;
  }
  if ( v35 )
    goto LABEL_77;
LABEL_32:
  v93 = v35;
  *((_BYTE *)v37 + v35) = 0;
  v38 = v105;
  v39 = *(unsigned __int8 *)v105;
  *(_BYTE *)v105 = v39 + 1;
  v40 = (unsigned __int8)v39;
  v41 = 4 * (v39 + 3);
  v42 = (void **)&v38[v41];
  v43 = (_BYTE *)v38[v41];
  if ( v92 == v94 )
  {
    v55 = v93;
    if ( v93 )
    {
      if ( v93 == 1 )
        *v43 = v94[0];
      else
        memcpy(v43, v92, v93);
      v55 = v93;
      v43 = *v42;
    }
    v42[1] = (void *)v55;
    v43[v55] = 0;
    v43 = v92;
  }
  else
  {
    if ( v43 == (_BYTE *)&v38[v41 + 2] )
    {
      *v42 = v92;
      v42[1] = (void *)v93;
      v42[2] = (void *)v94[0];
    }
    else
    {
      v44 = v38[4 * v40 + 14];
      *v42 = v92;
      v42[1] = (void *)v93;
      v42[2] = (void *)v94[0];
      if ( v43 )
      {
        v92 = v43;
        v94[0] = v44;
        goto LABEL_36;
      }
    }
    v43 = v94;
    v92 = v94;
  }
LABEL_36:
  v93 = 0;
  *v43 = 0;
  if ( v92 != v94 )
    operator delete(v92);
  if ( v89 != &v91 )
    operator delete(v89);
  if ( (_BYTE)v110 )
  {
    sub_FC7790(v107, (__int64 *)&v105, SHIBYTE(v110));
    v107 = 0;
    v110 = 0;
  }
  if ( v108 != &v109 )
    operator delete(v108);
  v45 = (void **)v105;
  if ( v105 )
  {
    v46 = v106;
    if ( v106 )
    {
      if ( (unsigned __int64)v105 < v106 || (unsigned __int64)v105 > v106 + 14848 )
      {
        v47 = *((void ***)v105 + 66);
        v48 = &v47[8 * (unsigned __int64)*((unsigned int *)v105 + 134)];
        if ( v47 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v48 -= 8;
              v49 = (void **)v48[3];
              if ( v49 == v48 + 5 )
                break;
              operator delete(v49);
              if ( v47 == v48 )
                goto LABEL_50;
            }
          }
          while ( v47 != v48 );
LABEL_50:
          v48 = (void **)v45[66];
        }
        if ( v48 != v45 + 68 )
          free(v48);
        v50 = (void **)v45[52];
        v51 = v45 + 52;
        if ( v50 != v45 + 54 )
          free(v50);
        v52 = v45 + 12;
        do
        {
          while ( 1 )
          {
            v51 -= 4;
            if ( *v51 == v51 + 2 )
              break;
            operator delete(*v51);
            if ( v52 == v51 )
              goto LABEL_58;
          }
        }
        while ( v52 != v51 );
LABEL_58:
        operator delete(v45, 0x3A0u);
      }
      else
      {
        v56 = *(unsigned int *)(v106 + 14976);
        *(_DWORD *)(v106 + 14976) = v56 + 1;
        *(_QWORD *)(v46 + 8 * v56 + 14848) = v45;
      }
    }
  }
  return (unsigned int)v8;
}
