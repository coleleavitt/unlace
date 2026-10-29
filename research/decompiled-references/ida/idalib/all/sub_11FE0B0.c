void __fastcall sub_11FE0B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rax
  const char **v11; // rax
  const char *v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  __int64 v15; // r14
  unsigned __int8 *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 *v20; // r13
  _BYTE *v21; // rsi
  signed __int64 v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void **v28; // r14
  _BYTE *v29; // rdi
  __int64 v30; // rax
  unsigned __int8 *v31; // r13
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rbx
  _BYTE *v38; // rdi
  __int64 v39; // rax
  void **v40; // rbp
  unsigned __int64 v41; // rax
  void **v42; // r12
  void **v43; // rbx
  void **v44; // rdi
  void **v45; // rdi
  void **v46; // rbx
  void **v47; // r12
  size_t v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // r15
  void *v57; // rdi
  unsigned __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // r14
  void *v64; // rdi
  unsigned __int64 v65; // rdx
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // r15
  char *v69; // rdx
  char *v70; // r15
  char *v71; // rdi
  __int64 *src; // [rsp+0h] [rbp-D8h]
  _BYTE *srca; // [rsp+0h] [rbp-D8h]
  char *srcb; // [rsp+0h] [rbp-D8h]
  __int64 v75; // [rsp+8h] [rbp-D0h]
  _QWORD *v76; // [rsp+10h] [rbp-C8h]
  _QWORD v77[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v78; // [rsp+30h] [rbp-A8h]
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v80[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v81; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v82; // [rsp+58h] [rbp-80h]
  __int64 v83; // [rsp+60h] [rbp-78h]
  void *v84; // [rsp+70h] [rbp-68h]
  __int64 v85; // [rsp+80h] [rbp-58h] BYREF
  __int16 v86; // [rsp+90h] [rbp-48h]

  v4 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
  LODWORD(v81) = 2222;
  src = v4;
  v5 = sub_21B6DA0(a2, &v81, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 != v8 )
  {
    while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
    {
      if ( v8 == ++v7 )
        return;
    }
    if ( v8 != v7 )
    {
      do
      {
        v9 = (_QWORD *)*v7;
        v10 = *(_QWORD *)(*v7 + 16LL);
        if ( !v10 )
          v10 = *v7;
        ++v7;
        *(_BYTE *)(v10 + 44) |= 1u;
        if ( v7 == v8 )
          break;
        while ( !*v7 || !(unsigned __int8)sub_21B9810(*v7, 2222) )
        {
          if ( v8 == ++v7 )
            goto LABEL_13;
        }
      }
      while ( v7 != v8 );
LABEL_13:
      v11 = (const char **)v9[6];
      v12 = *v11;
      if ( *v11 )
      {
        v13 = strlen(*v11);
        v14 = v13;
        if ( v13 == 10 )
        {
          if ( *(_QWORD *)v12 == 0x617478652D636576LL && *((_WORD *)v12 + 4) == 26978 )
          {
            v15 = *(_QWORD *)(a1 + 24);
            if ( *(_DWORD *)(v15 + 60) != 20 )
            {
              sub_FC70B0((__int64)&v81, *src, 0, 495);
              v16 = (unsigned __int8 *)v81;
              if ( !v81 )
              {
                v65 = v82;
                v66 = *(_DWORD *)(v82 + 14976);
                if ( v66 )
                {
                  v67 = (unsigned int)(v66 - 1);
                  *(_DWORD *)(v82 + 14976) = v67;
                  v16 = *(unsigned __int8 **)(v65 + 8 * v67 + 14848);
                  v68 = *((unsigned int *)v16 + 134);
                  *v16 = 0;
                  v69 = *((char **)v16 + 66);
                  *((_DWORD *)v16 + 106) = 0;
                  v70 = &v69[64 * v68];
                  while ( v69 != v70 )
                  {
                    while ( 1 )
                    {
                      v70 -= 64;
                      v71 = *((char **)v70 + 3);
                      if ( v71 == v70 + 40 )
                        break;
                      srcb = v69;
                      operator delete(v71);
                      v69 = srcb;
                      if ( srcb == v70 )
                        goto LABEL_128;
                    }
                  }
LABEL_128:
                  *((_DWORD *)v16 + 134) = 0;
                }
                else
                {
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
                  *((_QWORD *)v16 + 66) = v16 + 544;
                  *((_QWORD *)v16 + 67) = 0x600000000LL;
                }
                v81 = v16;
              }
              v16[*v16 + 1] = 1;
              v17 = v81;
              v18 = *(unsigned __int8 *)v81;
              *(_BYTE *)v81 = v18 + 1;
              v17[v18 + 2] = "-mabi=vec-extabi";
              sub_AEC220((unsigned __int8 **)&v81, *(_BYTE **)(v15 + 16), *(_QWORD *)(v15 + 24));
              sub_AEA040((__int64)&v81);
            }
            v19 = *(unsigned int *)(a3 + 8);
            if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
            {
              sub_2237220(a3, a3 + 16, v19 + 1, 8);
              v19 = *(unsigned int *)(a3 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a3 + 8 * v19) = "-mabi=vec-extabi";
            ++*(_DWORD *)(a3 + 8);
            return;
          }
        }
        else if ( v13 == 11 && *(_QWORD *)v12 == 0x616665642D636576LL && *((_WORD *)v12 + 4) == 27765 && v12[10] == 116 )
        {
          return;
        }
      }
      else
      {
        v14 = 0;
      }
      sub_FC70B0((__int64)&v81, *src, 0, 497);
      v20 = (unsigned __int8 *)v81;
      v21 = (_BYTE *)v9[3];
      v22 = v9[4];
      if ( !v81 )
      {
        v51 = v82;
        v52 = *(_DWORD *)(v82 + 14976);
        if ( v52 )
        {
          v53 = (unsigned int)(v52 - 1);
          *(_DWORD *)(v82 + 14976) = v53;
          v20 = *(unsigned __int8 **)(v51 + 8 * v53 + 14848);
          v54 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v55 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v56 = v55 + (v54 << 6);
          while ( v55 != v56 )
          {
            while ( 1 )
            {
              v56 -= 64;
              v57 = *(void **)(v56 + 24);
              if ( v57 == (void *)(v56 + 40) )
                break;
              v75 = v55;
              operator delete(v57);
              v55 = v75;
              if ( v75 == v56 )
                goto LABEL_108;
            }
          }
LABEL_108:
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          srca = (_BYTE *)v9[3];
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
          *((_QWORD *)v20 + 52) = v20 + 432;
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
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          v21 = srca;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        v81 = v20;
      }
      v20[*v20 + 1] = 0;
      v78 = v80;
      if ( &v21[v22] && !v21 )
        goto LABEL_129;
      if ( (unsigned __int64)v22 > 0xF )
      {
        if ( v22 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v23 = (_QWORD *)operator new(v22 + 1);
        v80[0] = v22;
        v78 = v23;
      }
      else
      {
        if ( v22 == 1 )
        {
          LOBYTE(v80[0]) = *v21;
          v23 = v80;
          goto LABEL_32;
        }
        v23 = v80;
        if ( !v22 )
        {
LABEL_32:
          n = v22;
          *((_BYTE *)v23 + v22) = 0;
          v24 = v81;
          v25 = *(unsigned __int8 *)v81;
          *(_BYTE *)v81 = v25 + 1;
          v26 = (unsigned __int8)v25;
          v27 = 4 * (v25 + 3);
          v28 = (void **)&v24[v27];
          v29 = (_BYTE *)v24[v27];
          if ( v78 == v80 )
          {
            v48 = n;
            if ( n )
            {
              if ( n == 1 )
                *v29 = v80[0];
              else
                memcpy(v29, v78, n);
              v48 = n;
              v29 = *v28;
            }
            v28[1] = (void *)v48;
            v29[v48] = 0;
            v29 = v78;
          }
          else
          {
            if ( v29 == (_BYTE *)&v24[v27 + 2] )
            {
              *v28 = v78;
              v28[1] = (void *)n;
              v28[2] = (void *)v80[0];
            }
            else
            {
              v30 = v24[4 * v26 + 14];
              *v28 = v78;
              v28[1] = (void *)n;
              v28[2] = (void *)v80[0];
              if ( v29 )
              {
                v78 = v29;
                v80[0] = v30;
                goto LABEL_36;
              }
            }
            v29 = v80;
            v78 = v80;
          }
LABEL_36:
          n = 0;
          *v29 = 0;
          if ( v78 != v80 )
            operator delete(v78);
          v31 = (unsigned __int8 *)v81;
          if ( !v81 )
          {
            v58 = v82;
            v59 = *(_DWORD *)(v82 + 14976);
            if ( v59 )
            {
              v60 = (unsigned int)(v59 - 1);
              *(_DWORD *)(v82 + 14976) = v60;
              v31 = *(unsigned __int8 **)(v58 + 8 * v60 + 14848);
              v61 = *((unsigned int *)v31 + 134);
              *v31 = 0;
              v62 = *((_QWORD *)v31 + 66);
              *((_DWORD *)v31 + 106) = 0;
              v63 = v62 + (v61 << 6);
              while ( v62 != v63 )
              {
                while ( 1 )
                {
                  v63 -= 64;
                  v64 = *(void **)(v63 + 24);
                  if ( v64 == (void *)(v63 + 40) )
                    break;
                  operator delete(v64);
                  if ( v62 == v63 )
                    goto LABEL_114;
                }
              }
LABEL_114:
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
            v81 = v31;
          }
          v31[*v31 + 1] = 0;
          v76 = v77;
          if ( !&v12[v14] || v12 )
          {
            if ( v14 > 0xF )
            {
              v32 = (_QWORD *)operator new(v14 + 1);
              v77[0] = v14;
              v76 = v32;
            }
            else
            {
              if ( v14 == 1 )
              {
                LOBYTE(v77[0]) = *v12;
                v32 = v77;
                goto LABEL_44;
              }
              v32 = v77;
              if ( !v14 )
              {
LABEL_44:
                *((_BYTE *)v32 + v14) = 0;
                v33 = v81;
                v34 = *(unsigned __int8 *)v81;
                *(_BYTE *)v81 = v34 + 1;
                v35 = (unsigned __int8)v34;
                v36 = 4 * (v34 + 3);
                v37 = &v33[v36];
                v38 = (_BYTE *)v33[v36];
                if ( v76 == v77 )
                {
                  v49 = v14;
                  if ( v14 )
                  {
                    if ( v14 == 1 )
                    {
                      *v38 = v77[0];
                      v49 = 1;
                    }
                    else
                    {
                      memcpy(v38, v76, v14);
                      v49 = v14;
                    }
                    v38 = (_BYTE *)*v37;
                  }
                  v37[1] = v49;
                  v38[v49] = 0;
                  v38 = v76;
                }
                else
                {
                  if ( v38 == (_BYTE *)&v33[v36 + 2] )
                  {
                    *v37 = v76;
                    v37[1] = v14;
                    v37[2] = v77[0];
                  }
                  else
                  {
                    v39 = v33[4 * v35 + 14];
                    *v37 = v76;
                    v37[1] = v14;
                    v37[2] = v77[0];
                    if ( v38 )
                    {
                      v76 = v38;
                      v77[0] = v39;
                      goto LABEL_48;
                    }
                  }
                  v38 = v77;
                  v76 = v77;
                }
LABEL_48:
                *v38 = 0;
                if ( v76 != v77 )
                  operator delete(v76);
                if ( (_BYTE)v86 )
                {
                  sub_FC7790(v83, (__int64 *)&v81, SHIBYTE(v86));
                  v83 = 0;
                  v86 = 0;
                }
                if ( v84 != &v85 )
                  operator delete(v84);
                v40 = (void **)v81;
                if ( v81 )
                {
                  v41 = v82;
                  if ( v82 )
                  {
                    if ( (unsigned __int64)v81 < v82 || (unsigned __int64)v81 > v82 + 14848 )
                    {
                      v42 = *((void ***)v81 + 66);
                      v43 = &v42[8 * (unsigned __int64)*((unsigned int *)v81 + 134)];
                      if ( v42 != v43 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v43 -= 8;
                            v44 = (void **)v43[3];
                            if ( v44 == v43 + 5 )
                              break;
                            operator delete(v44);
                            if ( v42 == v43 )
                              goto LABEL_60;
                          }
                        }
                        while ( v42 != v43 );
LABEL_60:
                        v43 = (void **)v40[66];
                      }
                      if ( v43 != v40 + 68 )
                        free(v43);
                      v45 = (void **)v40[52];
                      if ( v45 != v40 + 54 )
                        free(v45);
                      v46 = v40 + 48;
                      v47 = v40 + 8;
                      do
                      {
                        while ( *v46 != v46 + 2 )
                        {
                          operator delete(*v46);
                          v46 -= 4;
                          if ( v46 == v47 )
                            goto LABEL_68;
                        }
                        v46 -= 4;
                      }
                      while ( v46 != v47 );
LABEL_68:
                      operator delete(v40, 0x3A0u);
                    }
                    else
                    {
                      v50 = *(unsigned int *)(v82 + 14976);
                      *(_DWORD *)(v82 + 14976) = v50 + 1;
                      *(_QWORD *)(v41 + 8 * v50 + 14848) = v40;
                    }
                  }
                }
                return;
              }
            }
            memcpy(v32, v12, v14);
            v32 = v76;
            goto LABEL_44;
          }
LABEL_129:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        }
      }
      memcpy(v23, v21, v22);
      v23 = v78;
      goto LABEL_32;
    }
  }
}
