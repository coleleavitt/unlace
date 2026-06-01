__int64 __fastcall sub_1123470(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  const char **v15; // rax
  size_t v16; // rsi
  const char *v17; // rbx
  const char *v18; // rdi
  size_t v19; // rax
  _BYTE *v21; // rsi
  signed __int64 v22; // r13
  unsigned __int8 *v23; // r12
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void **v29; // r13
  _BYTE *v30; // rdi
  __int64 v31; // rax
  void **v32; // r12
  unsigned __int64 v33; // rax
  void **v34; // r13
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r13
  __int64 v40; // r14
  __int64 v41; // rax
  const char **v42; // rax
  size_t v43; // rsi
  char *v44; // rbx
  unsigned int v45; // eax
  _BYTE *v46; // rsi
  signed __int64 v47; // r14
  unsigned __int8 *v48; // r12
  _QWORD *v49; // rax
  void **v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  void **v54; // r14
  unsigned __int8 *v55; // rdi
  void *v56; // rax
  void **v57; // r13
  void **v58; // rbx
  void **v59; // rdi
  void **v60; // rdi
  void **v61; // rbx
  void **v62; // r13
  size_t v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rdx
  __int64 v72; // r15
  void *v73; // rdi
  size_t v74; // rdx
  unsigned __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // r15
  void *v81; // rdi
  _BYTE *srca; // [rsp+0h] [rbp-168h]
  _BYTE *srcb; // [rsp+0h] [rbp-168h]
  __int64 v85; // [rsp+8h] [rbp-160h]
  __int64 v86; // [rsp+8h] [rbp-160h]
  void *v87[2]; // [rsp+10h] [rbp-158h] BYREF
  __int64 v88; // [rsp+20h] [rbp-148h] BYREF
  void *v89[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v90; // [rsp+40h] [rbp-128h] BYREF
  void *v91; // [rsp+50h] [rbp-118h]
  size_t v92; // [rsp+58h] [rbp-110h]
  _QWORD v93[2]; // [rsp+60h] [rbp-108h] BYREF
  void *v94; // [rsp+70h] [rbp-F8h]
  size_t v95; // [rsp+78h] [rbp-F0h]
  _QWORD v96[2]; // [rsp+80h] [rbp-E8h] BYREF
  void *v97; // [rsp+90h] [rbp-D8h] BYREF
  unsigned __int64 v98; // [rsp+98h] [rbp-D0h]
  __int64 v99; // [rsp+A0h] [rbp-C8h]
  void *v100; // [rsp+B0h] [rbp-B8h]
  __int64 v101; // [rsp+C0h] [rbp-A8h] BYREF
  __int16 v102; // [rsp+D0h] [rbp-98h]
  void **v103; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 v104; // [rsp+E8h] [rbp-80h]
  __int64 v105; // [rsp+F0h] [rbp-78h]
  void *v106; // [rsp+100h] [rbp-68h]
  __int64 v107; // [rsp+110h] [rbp-58h] BYREF
  __int16 v108; // [rsp+120h] [rbp-48h]

  LODWORD(v103) = 2260;
  v5 = sub_2193060(a3, &v103, 1);
  v6 = *(_QWORD *)(a3 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2260) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    LODWORD(v103) = 2323;
    v9 = sub_2193060(a3, &v103, 1);
    v10 = *(_QWORD *)(a3 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 == v12 )
      goto LABEL_9;
    while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2323) )
    {
      if ( v12 == ++v11 )
        goto LABEL_9;
    }
    if ( v12 == v11 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 8) = 5;
      *(_QWORD *)a1 = "ck810";
      *(_BYTE *)(a1 + 16) = 1;
      return a1;
    }
    do
    {
      v40 = *v11;
      v41 = *(_QWORD *)(*v11 + 16LL);
      if ( !v41 )
        v41 = *v11;
      ++v11;
      *(_BYTE *)(v41 + 44) |= 1u;
      if ( v11 == v12 )
        break;
      while ( !*v11 || !(unsigned __int8)sub_2195AD0(*v11, 2323) )
      {
        if ( v12 == ++v11 )
          goto LABEL_74;
      }
    }
    while ( v11 != v12 );
LABEL_74:
    v42 = *(const char ***)(v40 + 48);
    v43 = 0;
    v44 = (char *)*v42;
    if ( *v42 )
      v43 = strlen(*v42);
    v45 = sub_227D130(v44, v43);
    if ( v45 )
    {
      v65 = sub_227CFA0(v45);
      *(_BYTE *)(a1 + 16) = 1;
      *(_QWORD *)a1 = v65;
      *(_QWORD *)(a1 + 8) = v66;
      return a1;
    }
    sub_FA3370((__int64)&v103, *a2, 0, 333);
    sub_21922B0(v89, v40, a3);
    v46 = v89[0];
    v47 = (signed __int64)v89[1];
    v48 = (unsigned __int8 *)v103;
    if ( !v103 )
    {
      v75 = v104;
      v76 = *(_DWORD *)(v104 + 14976);
      if ( v76 )
      {
        v77 = (unsigned int)(v76 - 1);
        *(_DWORD *)(v104 + 14976) = v77;
        v48 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
        v78 = *((unsigned int *)v48 + 134);
        v79 = *((_QWORD *)v48 + 66);
        *v48 = 0;
        *((_DWORD *)v48 + 106) = 0;
        v80 = v79 + (v78 << 6);
        while ( v79 != v80 )
        {
          while ( 1 )
          {
            v80 -= 64;
            v81 = *(void **)(v80 + 24);
            if ( v81 == (void *)(v80 + 40) )
              break;
            v86 = v79;
            operator delete(v81);
            v79 = v86;
            if ( v86 == v80 )
              goto LABEL_159;
          }
        }
LABEL_159:
        *((_DWORD *)v48 + 134) = 0;
      }
      else
      {
        srcb = v89[0];
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
        v46 = srcb;
        *((_QWORD *)v48 + 66) = v48 + 544;
        *((_QWORD *)v48 + 67) = 0x600000000LL;
      }
      v103 = (void **)v48;
    }
    v48[*v48 + 1] = 0;
    v94 = v96;
    if ( &v46[v47] && !v46 )
      goto LABEL_80;
    if ( (unsigned __int64)v47 > 0xF )
    {
      if ( v47 < 0 )
        goto LABEL_161;
      v49 = (_QWORD *)operator new(v47 + 1);
      v96[0] = v47;
      v94 = v49;
    }
    else
    {
      if ( v47 == 1 )
      {
        LOBYTE(v96[0]) = *v46;
        v49 = v96;
        goto LABEL_84;
      }
      v49 = v96;
      if ( !v47 )
      {
LABEL_84:
        v95 = v47;
        *((_BYTE *)v49 + v47) = 0;
        v50 = v103;
        v51 = *(unsigned __int8 *)v103;
        *(_BYTE *)v103 = v51 + 1;
        v52 = (unsigned __int8)v51;
        v53 = 4 * (v51 + 3);
        v54 = &v50[v53];
        v55 = (unsigned __int8 *)v50[v53];
        if ( v94 == v96 )
        {
          v74 = v95;
          if ( v95 )
          {
            if ( v95 == 1 )
              *v55 = v96[0];
            else
              memcpy(v55, v94, v95);
            v74 = v95;
            v55 = (unsigned __int8 *)*v54;
          }
          v54[1] = (void *)v74;
          v55[v74] = 0;
          v55 = (unsigned __int8 *)v94;
          goto LABEL_88;
        }
        if ( v55 == (unsigned __int8 *)&v50[v53 + 2] )
        {
          *v54 = v94;
          v54[1] = (void *)v95;
          v54[2] = (void *)v96[0];
        }
        else
        {
          v56 = v50[4 * v52 + 14];
          *v54 = v94;
          v54[1] = (void *)v95;
          v54[2] = (void *)v96[0];
          if ( v55 )
          {
            v94 = v55;
            v96[0] = v56;
LABEL_88:
            v95 = 0;
            *v55 = 0;
            if ( v94 != v96 )
              operator delete(v94);
            if ( v89[0] != &v90 )
              operator delete(v89[0]);
            if ( (_BYTE)v108 )
            {
              sub_FA3A50(v105, (__int64)&v103, SHIBYTE(v108));
              v105 = 0;
              v108 = 0;
            }
            if ( v106 != &v107 )
              operator delete(v106);
            v32 = v103;
            if ( !v103 )
              goto LABEL_59;
            v33 = v104;
            if ( !v104 )
              goto LABEL_59;
            if ( (unsigned __int64)v103 >= v104 && (unsigned __int64)v103 <= v104 + 14848 )
              goto LABEL_121;
            v57 = (void **)v103[66];
            v58 = &v57[8 * (unsigned __int64)*((unsigned int *)v103 + 134)];
            if ( v57 != v58 )
            {
              do
              {
                while ( 1 )
                {
                  v58 -= 8;
                  v59 = (void **)v58[3];
                  if ( v59 == v58 + 5 )
                    break;
                  operator delete(v59);
                  if ( v57 == v58 )
                    goto LABEL_102;
                }
              }
              while ( v57 != v58 );
LABEL_102:
              v58 = (void **)v32[66];
            }
            if ( v58 != v32 + 68 )
              free(v58);
            v60 = (void **)v32[52];
            v61 = v32 + 52;
            if ( v60 != v32 + 54 )
              free(v60);
            v62 = v32 + 12;
            do
            {
              while ( 1 )
              {
                v61 -= 4;
                if ( *v61 == v61 + 2 )
                  break;
                operator delete(*v61);
                if ( v62 == v61 )
                  goto LABEL_58;
              }
            }
            while ( v62 != v61 );
            goto LABEL_58;
          }
        }
        v55 = (unsigned __int8 *)v96;
        v94 = v96;
        goto LABEL_88;
      }
    }
    memcpy(v49, v46, v47);
    v49 = v94;
    goto LABEL_84;
  }
  do
  {
    v13 = *v7;
    v14 = *(_QWORD *)(*v7 + 16LL);
    if ( !v14 )
      v14 = *v7;
    ++v7;
    *(_BYTE *)(v14 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2260) )
    {
      if ( v8 == ++v7 )
        goto LABEL_17;
    }
  }
  while ( v8 != v7 );
LABEL_17:
  v15 = *(const char ***)(v13 + 48);
  v16 = 0;
  v17 = *v15;
  if ( *v15 )
    v16 = strlen(*v15);
  if ( !(unsigned int)sub_227CFC0(v17, v16) )
  {
    sub_FA3370((__int64)&v97, *a2, 0, 371);
    sub_21922B0(v87, v13, a3);
    v21 = v87[0];
    v22 = (signed __int64)v87[1];
    v23 = (unsigned __int8 *)v97;
    if ( !v97 )
    {
      v67 = v98;
      v68 = *(_DWORD *)(v98 + 14976);
      if ( v68 )
      {
        v69 = (unsigned int)(v68 - 1);
        *(_DWORD *)(v98 + 14976) = v69;
        v23 = *(unsigned __int8 **)(v67 + 8 * v69 + 14848);
        v70 = *((unsigned int *)v23 + 134);
        v71 = *((_QWORD *)v23 + 66);
        *v23 = 0;
        *((_DWORD *)v23 + 106) = 0;
        v72 = v71 + (v70 << 6);
        while ( v71 != v72 )
        {
          while ( 1 )
          {
            v72 -= 64;
            v73 = *(void **)(v72 + 24);
            if ( v73 == (void *)(v72 + 40) )
              break;
            v85 = v71;
            operator delete(v73);
            v71 = v85;
            if ( v85 == v72 )
              goto LABEL_141;
          }
        }
LABEL_141:
        *((_DWORD *)v23 + 134) = 0;
      }
      else
      {
        srca = v87[0];
        v23 = (unsigned __int8 *)operator new(0x3A0u);
        *v23 = 0;
        *((_QWORD *)v23 + 12) = v23 + 112;
        *((_QWORD *)v23 + 16) = v23 + 144;
        *((_QWORD *)v23 + 20) = v23 + 176;
        *((_QWORD *)v23 + 24) = v23 + 208;
        *((_QWORD *)v23 + 28) = v23 + 240;
        *((_QWORD *)v23 + 32) = v23 + 272;
        *((_QWORD *)v23 + 36) = v23 + 304;
        *((_QWORD *)v23 + 40) = v23 + 336;
        *((_QWORD *)v23 + 44) = v23 + 368;
        *((_QWORD *)v23 + 48) = v23 + 400;
        *((_QWORD *)v23 + 52) = v23 + 432;
        *((_QWORD *)v23 + 13) = 0;
        v23[112] = 0;
        *((_QWORD *)v23 + 17) = 0;
        v23[144] = 0;
        *((_QWORD *)v23 + 21) = 0;
        v23[176] = 0;
        *((_QWORD *)v23 + 25) = 0;
        v23[208] = 0;
        *((_QWORD *)v23 + 29) = 0;
        v23[240] = 0;
        *((_QWORD *)v23 + 33) = 0;
        v23[272] = 0;
        *((_QWORD *)v23 + 37) = 0;
        v23[304] = 0;
        *((_QWORD *)v23 + 41) = 0;
        v23[336] = 0;
        *((_QWORD *)v23 + 45) = 0;
        v23[368] = 0;
        *((_QWORD *)v23 + 49) = 0;
        v23[400] = 0;
        *((_QWORD *)v23 + 53) = 0x800000000LL;
        v21 = srca;
        *((_QWORD *)v23 + 66) = v23 + 544;
        *((_QWORD *)v23 + 67) = 0x600000000LL;
      }
      v97 = v23;
    }
    v23[*v23 + 1] = 0;
    v91 = v93;
    if ( !&v21[v22] || v21 )
    {
      if ( (unsigned __int64)v22 <= 0xF )
      {
        if ( v22 == 1 )
        {
          LOBYTE(v93[0]) = *v21;
          v24 = v93;
          goto LABEL_32;
        }
        v24 = v93;
        if ( !v22 )
        {
LABEL_32:
          v92 = v22;
          *((_BYTE *)v24 + v22) = 0;
          v25 = v97;
          v26 = *(unsigned __int8 *)v97;
          *(_BYTE *)v97 = v26 + 1;
          v27 = (unsigned __int8)v26;
          v28 = 4 * (v26 + 3);
          v29 = (void **)&v25[v28];
          v30 = (_BYTE *)v25[v28];
          if ( v91 == v93 )
          {
            v63 = v92;
            if ( v92 )
            {
              if ( v92 == 1 )
                *v30 = v93[0];
              else
                memcpy(v30, v91, v92);
              v63 = v92;
              v30 = *v29;
            }
            v29[1] = (void *)v63;
            v30[v63] = 0;
            v30 = v91;
            goto LABEL_36;
          }
          if ( v30 == (_BYTE *)&v25[v28 + 2] )
          {
            *v29 = v91;
            v29[1] = (void *)v92;
            v29[2] = (void *)v93[0];
          }
          else
          {
            v31 = v25[4 * v27 + 14];
            *v29 = v91;
            v29[1] = (void *)v92;
            v29[2] = (void *)v93[0];
            if ( v30 )
            {
              v91 = v30;
              v93[0] = v31;
LABEL_36:
              v92 = 0;
              *v30 = 0;
              if ( v91 != v93 )
                operator delete(v91);
              if ( v87[0] != &v88 )
                operator delete(v87[0]);
              if ( (_BYTE)v102 )
              {
                sub_FA3A50(v99, (__int64)&v97, SHIBYTE(v102));
                v99 = 0;
                v102 = 0;
              }
              if ( v100 != &v101 )
                operator delete(v100);
              v32 = (void **)v97;
              if ( !v97 )
                goto LABEL_59;
              v33 = v98;
              if ( !v98 )
                goto LABEL_59;
              if ( (unsigned __int64)v97 >= v98 && (unsigned __int64)v97 <= v98 + 14848 )
              {
LABEL_121:
                v64 = *(unsigned int *)(v33 + 14976);
                *(_DWORD *)(v33 + 14976) = v64 + 1;
                *(_QWORD *)(v33 + 8 * v64 + 14848) = v32;
                goto LABEL_59;
              }
              v34 = *((void ***)v97 + 66);
              v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v97 + 134)];
              if ( v34 != v35 )
              {
                do
                {
                  while ( 1 )
                  {
                    v35 -= 8;
                    v36 = (void **)v35[3];
                    if ( v36 == v35 + 5 )
                      break;
                    operator delete(v36);
                    if ( v34 == v35 )
                      goto LABEL_50;
                  }
                }
                while ( v34 != v35 );
LABEL_50:
                v35 = (void **)v32[66];
              }
              if ( v35 != v32 + 68 )
                free(v35);
              v37 = (void **)v32[52];
              if ( v37 != v32 + 54 )
                free(v37);
              v38 = v32 + 48;
              v39 = v32 + 8;
              do
              {
                while ( *v38 != v38 + 2 )
                {
                  operator delete(*v38);
                  v38 -= 4;
                  if ( v39 == v38 )
                    goto LABEL_58;
                }
                v38 -= 4;
              }
              while ( v39 != v38 );
LABEL_58:
              operator delete(v32, 0x3A0u);
LABEL_59:
              *(_BYTE *)(a1 + 16) = 0;
              return a1;
            }
          }
          v30 = v93;
          v91 = v93;
          goto LABEL_36;
        }
LABEL_62:
        memcpy(v24, v21, v22);
        v24 = v91;
        goto LABEL_32;
      }
      if ( v22 >= 0 )
      {
        v24 = (_QWORD *)operator new(v22 + 1);
        v93[0] = v22;
        v91 = v24;
        goto LABEL_62;
      }
LABEL_161:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_80:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  v18 = **(const char ***)(v13 + 48);
  v19 = 0;
  *(_QWORD *)a1 = v18;
  if ( v18 )
    v19 = strlen(v18);
  *(_QWORD *)(a1 + 8) = v19;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}

