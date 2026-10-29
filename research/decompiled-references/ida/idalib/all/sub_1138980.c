void __fastcall sub_1138980(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  const char **v10; // rax
  const char *v11; // rbx
  int v12; // eax
  unsigned __int8 *v13; // rbp
  _BYTE *v14; // rsi
  signed __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  void **v21; // r12
  _BYTE *v22; // rdi
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  _BYTE *v25; // r15
  signed __int64 v26; // r12
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void **v32; // r12
  _BYTE *v33; // rdi
  __int64 v34; // rax
  void **v35; // rbp
  unsigned __int64 v36; // rax
  void **v37; // r12
  void **v38; // rbx
  void **v39; // rdi
  void **v40; // rdi
  void **v41; // rbx
  void **v42; // r12
  size_t v43; // rdx
  size_t v44; // rdx
  __int64 v45; // rdx
  unsigned __int64 v46; // rdx
  int v47; // eax
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  __int64 v53; // r14
  void *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // r15
  void *v59; // rdi
  _BYTE *v60; // [rsp+0h] [rbp-F8h]
  __int64 v61; // [rsp+0h] [rbp-F8h]
  __int64 v62; // [rsp+8h] [rbp-F0h]
  void *src[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+20h] [rbp-D8h] BYREF
  void *v65; // [rsp+30h] [rbp-C8h]
  size_t v66; // [rsp+38h] [rbp-C0h]
  _QWORD v67[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v68; // [rsp+50h] [rbp-A8h]
  size_t v69; // [rsp+58h] [rbp-A0h]
  _QWORD v70[2]; // [rsp+60h] [rbp-98h] BYREF
  void *v71; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v72; // [rsp+78h] [rbp-80h]
  __int64 v73; // [rsp+80h] [rbp-78h]
  void *v74; // [rsp+90h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v76; // [rsp+B0h] [rbp-48h]

  LODWORD(v71) = 2222;
  v4 = sub_21B6DA0(a2, &v71, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2222) )
    {
      if ( v7 == ++v6 )
        return;
    }
    if ( v7 != v6 )
    {
      do
      {
        v8 = *v6;
        v9 = *(_QWORD *)(*v6 + 16LL);
        if ( !v9 )
          v9 = *v6;
        ++v6;
        *(_BYTE *)(v9 + 44) |= 1u;
        if ( v6 == v7 )
          break;
        while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 2222) )
        {
          if ( v7 == ++v6 )
            goto LABEL_13;
        }
      }
      while ( v7 != v6 );
LABEL_13:
      v10 = *(const char ***)(v8 + 48);
      v11 = *v10;
      if ( *v10 )
      {
        if ( strlen(*v10) == 9 && *(_QWORD *)v11 == 0x7365746874756170LL && v11[8] == 116 )
        {
          v12 = *(_DWORD *)(a3 + 48);
          if ( !v12 )
          {
            sub_22BA610(a3, 51);
            return;
          }
          if ( v12 != 51 )
          {
            sub_FC70B0((__int64)&v71, *a1, 0, 495);
            sub_21B5FF0(src, v8, a2);
            v13 = (unsigned __int8 *)v71;
            v14 = src[0];
            v15 = (signed __int64)src[1];
            if ( !v71 )
            {
              v48 = v72;
              v49 = *(_DWORD *)(v72 + 14976);
              if ( v49 )
              {
                v55 = (unsigned int)(v49 - 1);
                *(_DWORD *)(v72 + 14976) = v55;
                v13 = *(unsigned __int8 **)(v48 + 8 * v55 + 14848);
                v56 = *((unsigned int *)v13 + 134);
                *v13 = 0;
                v57 = *((_QWORD *)v13 + 66);
                *((_DWORD *)v13 + 106) = 0;
                v58 = v57 + (v56 << 6);
                while ( v57 != v58 )
                {
                  while ( 1 )
                  {
                    v58 -= 64;
                    v59 = *(void **)(v58 + 24);
                    if ( v59 == (void *)(v58 + 40) )
                      break;
                    v62 = v57;
                    operator delete(v59);
                    v57 = v62;
                    if ( v62 == v58 )
                      goto LABEL_110;
                  }
                }
LABEL_110:
                *((_DWORD *)v13 + 134) = 0;
              }
              else
              {
                v60 = src[0];
                v13 = (unsigned __int8 *)operator new(0x3A0u);
                *v13 = 0;
                *((_QWORD *)v13 + 12) = v13 + 112;
                *((_QWORD *)v13 + 16) = v13 + 144;
                *((_QWORD *)v13 + 20) = v13 + 176;
                *((_QWORD *)v13 + 24) = v13 + 208;
                *((_QWORD *)v13 + 28) = v13 + 240;
                *((_QWORD *)v13 + 32) = v13 + 272;
                *((_QWORD *)v13 + 36) = v13 + 304;
                *((_QWORD *)v13 + 40) = v13 + 336;
                *((_QWORD *)v13 + 44) = v13 + 368;
                *((_QWORD *)v13 + 48) = v13 + 400;
                *((_QWORD *)v13 + 52) = v13 + 432;
                *((_QWORD *)v13 + 13) = 0;
                v13[112] = 0;
                *((_QWORD *)v13 + 17) = 0;
                v13[144] = 0;
                *((_QWORD *)v13 + 21) = 0;
                v13[176] = 0;
                *((_QWORD *)v13 + 25) = 0;
                v13[208] = 0;
                *((_QWORD *)v13 + 29) = 0;
                v13[240] = 0;
                *((_QWORD *)v13 + 33) = 0;
                v13[272] = 0;
                *((_QWORD *)v13 + 37) = 0;
                v13[304] = 0;
                *((_QWORD *)v13 + 41) = 0;
                v13[336] = 0;
                *((_QWORD *)v13 + 45) = 0;
                v13[368] = 0;
                *((_QWORD *)v13 + 49) = 0;
                v13[400] = 0;
                *((_QWORD *)v13 + 53) = 0x800000000LL;
                v14 = v60;
                *((_QWORD *)v13 + 66) = v13 + 544;
                *((_QWORD *)v13 + 67) = 0x600000000LL;
              }
              v71 = v13;
            }
            v13[*v13 + 1] = 0;
            v68 = v70;
            if ( &v14[v15] && !v14 )
              goto LABEL_114;
            if ( (unsigned __int64)v15 > 0xF )
            {
              if ( v15 < 0 )
                goto LABEL_113;
              v16 = (_QWORD *)operator new(v15 + 1);
              v70[0] = v15;
              v68 = v16;
            }
            else
            {
              if ( v15 == 1 )
              {
                LOBYTE(v70[0]) = *v14;
                v16 = v70;
                goto LABEL_25;
              }
              v16 = v70;
              if ( !v15 )
              {
LABEL_25:
                v69 = v15;
                *((_BYTE *)v16 + v15) = 0;
                v17 = v71;
                v18 = *(unsigned __int8 *)v71;
                *(_BYTE *)v71 = v18 + 1;
                v19 = (unsigned __int8)v18;
                v20 = 4 * (v18 + 3);
                v21 = (void **)&v17[v20];
                v22 = (_BYTE *)v17[v20];
                if ( v68 == v70 )
                {
                  v44 = v69;
                  if ( v69 )
                  {
                    if ( v69 == 1 )
                      *v22 = v70[0];
                    else
                      memcpy(v22, v68, v69);
                    v44 = v69;
                    v22 = *v21;
                  }
                  v21[1] = (void *)v44;
                  v22[v44] = 0;
                  v22 = v68;
                }
                else
                {
                  if ( v22 == (_BYTE *)&v17[v20 + 2] )
                  {
                    *v21 = v68;
                    v21[1] = (void *)v69;
                    v21[2] = (void *)v70[0];
                  }
                  else
                  {
                    v23 = v17[4 * v19 + 14];
                    *v21 = v68;
                    v21[1] = (void *)v69;
                    v21[2] = (void *)v70[0];
                    if ( v22 )
                    {
                      v68 = v22;
                      v70[0] = v23;
                      goto LABEL_29;
                    }
                  }
                  v22 = v70;
                  v68 = v70;
                }
LABEL_29:
                v69 = 0;
                *v22 = 0;
                if ( v68 != v70 )
                  operator delete(v68);
                v24 = (unsigned __int8 *)v71;
                v25 = *(_BYTE **)a3;
                v26 = *(_QWORD *)(a3 + 8);
                if ( !v71 )
                {
                  v46 = v72;
                  v47 = *(_DWORD *)(v72 + 14976);
                  if ( v47 )
                  {
                    v50 = (unsigned int)(v47 - 1);
                    *(_DWORD *)(v72 + 14976) = v50;
                    v24 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
                    v51 = *((unsigned int *)v24 + 134);
                    *v24 = 0;
                    v52 = *((_QWORD *)v24 + 66);
                    *((_DWORD *)v24 + 106) = 0;
                    v53 = v52 + (v51 << 6);
                    while ( v52 != v53 )
                    {
                      while ( 1 )
                      {
                        v53 -= 64;
                        v54 = *(void **)(v53 + 24);
                        if ( v54 == (void *)(v53 + 40) )
                          break;
                        v61 = v52;
                        operator delete(v54);
                        v52 = v61;
                        if ( v61 == v53 )
                          goto LABEL_105;
                      }
                    }
LABEL_105:
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
                  v71 = v24;
                }
                v24[*v24 + 1] = 0;
                v65 = v67;
                if ( !&v25[v26] || v25 )
                {
                  if ( (unsigned __int64)v26 <= 0xF )
                  {
                    if ( v26 == 1 )
                    {
                      LOBYTE(v67[0]) = *v25;
                      v27 = v67;
                      goto LABEL_37;
                    }
                    v27 = v67;
                    if ( !v26 )
                    {
LABEL_37:
                      v66 = v26;
                      *((_BYTE *)v27 + v26) = 0;
                      v28 = v71;
                      v29 = *(unsigned __int8 *)v71;
                      *(_BYTE *)v71 = v29 + 1;
                      v30 = (unsigned __int8)v29;
                      v31 = 4 * (v29 + 3);
                      v32 = (void **)&v28[v31];
                      v33 = (_BYTE *)v28[v31];
                      if ( v65 == v67 )
                      {
                        v43 = v66;
                        if ( v66 )
                        {
                          if ( v66 == 1 )
                            *v33 = v67[0];
                          else
                            memcpy(v33, v65, v66);
                          v43 = v66;
                          v33 = *v32;
                        }
                        v32[1] = (void *)v43;
                        v33[v43] = 0;
                        v33 = v65;
                      }
                      else
                      {
                        if ( v33 == (_BYTE *)&v28[v31 + 2] )
                        {
                          *v32 = v65;
                          v32[1] = (void *)v66;
                          v32[2] = (void *)v67[0];
                        }
                        else
                        {
                          v34 = v28[4 * v30 + 14];
                          *v32 = v65;
                          v32[1] = (void *)v66;
                          v32[2] = (void *)v67[0];
                          if ( v33 )
                          {
                            v65 = v33;
                            v67[0] = v34;
                            goto LABEL_41;
                          }
                        }
                        v33 = v67;
                        v65 = v67;
                      }
LABEL_41:
                      v66 = 0;
                      *v33 = 0;
                      if ( v65 != v67 )
                        operator delete(v65);
                      if ( src[0] != &v64 )
                        operator delete(src[0]);
                      if ( (_BYTE)v76 )
                      {
                        sub_FC7790(v73, (__int64 *)&v71, SHIBYTE(v76));
                        v73 = 0;
                        v76 = 0;
                      }
                      if ( v74 != &v75 )
                        operator delete(v74);
                      v35 = (void **)v71;
                      if ( v71 )
                      {
                        v36 = v72;
                        if ( v72 )
                        {
                          if ( (unsigned __int64)v71 < v72 || (unsigned __int64)v71 > v72 + 14848 )
                          {
                            v37 = *((void ***)v71 + 66);
                            v38 = &v37[8 * (unsigned __int64)*((unsigned int *)v71 + 134)];
                            if ( v37 != v38 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v38 -= 8;
                                  v39 = (void **)v38[3];
                                  if ( v39 == v38 + 5 )
                                    break;
                                  operator delete(v39);
                                  if ( v37 == v38 )
                                    goto LABEL_55;
                                }
                              }
                              while ( v37 != v38 );
LABEL_55:
                              v38 = (void **)v35[66];
                            }
                            if ( v38 != v35 + 68 )
                              free(v38);
                            v40 = (void **)v35[52];
                            if ( v40 != v35 + 54 )
                              free(v40);
                            v41 = v35 + 48;
                            v42 = v35 + 8;
                            do
                            {
                              while ( *v41 != v41 + 2 )
                              {
                                operator delete(*v41);
                                v41 -= 4;
                                if ( v41 == v42 )
                                  goto LABEL_63;
                              }
                              v41 -= 4;
                            }
                            while ( v42 != v41 );
LABEL_63:
                            operator delete(v35, 0x3A0u);
                          }
                          else
                          {
                            v45 = *(unsigned int *)(v72 + 14976);
                            *(_DWORD *)(v72 + 14976) = v45 + 1;
                            *(_QWORD *)(v36 + 8 * v45 + 14848) = v35;
                          }
                        }
                      }
                      return;
                    }
LABEL_74:
                    memcpy(v27, v25, v26);
                    v27 = v65;
                    goto LABEL_37;
                  }
                  if ( v26 >= 0 )
                  {
                    v27 = (_QWORD *)operator new(v26 + 1);
                    v67[0] = v26;
                    v65 = v27;
                    goto LABEL_74;
                  }
LABEL_113:
                  std::__throw_length_error("basic_string::_M_create");
                }
LABEL_114:
                std::__throw_logic_error("basic_string::_M_construct null not valid");
              }
            }
            memcpy(v16, v14, v15);
            v16 = v68;
            goto LABEL_25;
          }
        }
      }
    }
  }
}
