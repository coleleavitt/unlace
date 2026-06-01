__int64 __fastcall sub_10FA900(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  char *v7; // r15
  char *v8; // r14
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  const char **v12; // rax
  size_t v13; // rsi
  const char *v14; // rbx
  unsigned __int8 *v15; // r13
  _BYTE *v16; // rsi
  signed __int64 v17; // r15
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  void **v23; // r15
  _BYTE *v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // rax
  unsigned __int8 *v27; // rbp
  __int64 v28; // r15
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // rdi
  void **v32; // rbp
  unsigned __int64 v33; // rax
  void **v34; // r12
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r12
  size_t v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r13
  char *v53; // rdx
  char *v54; // r13
  char *v55; // rdi
  _BYTE *srca; // [rsp+8h] [rbp-E0h]
  char *srcb; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+10h] [rbp-D8h]
  __int64 v62; // [rsp+18h] [rbp-D0h]
  void *v63[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+30h] [rbp-B8h] BYREF
  void *v65; // [rsp+40h] [rbp-A8h]
  size_t v66; // [rsp+48h] [rbp-A0h]
  _QWORD v67[2]; // [rsp+50h] [rbp-98h] BYREF
  void *v68; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v69; // [rsp+68h] [rbp-80h]
  __int64 v70; // [rsp+70h] [rbp-78h]
  void *v71; // [rsp+80h] [rbp-68h]
  __int64 v72; // [rsp+90h] [rbp-58h] BYREF
  __int16 v73; // [rsp+A0h] [rbp-48h]

  LODWORD(v68) = a2;
  v5 = sub_2193060(a1, &v68, 1);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (char *)(v6 + 8LL * (unsigned int)v5);
  v8 = (char *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    return a3;
  if ( a2 )
  {
    while ( !*(_QWORD *)v7 || !(unsigned __int8)sub_2195AD0(*(_QWORD *)v7, a2) )
    {
      v7 += 8;
      if ( v8 == v7 )
        return a3;
    }
  }
  else
  {
    v7 += 8 * ((unsigned __int64)(v8 - 8 - v7) >> 3) + 8;
  }
  if ( v8 == v7 )
    return a3;
  do
  {
    v10 = *(_QWORD *)v7;
    v11 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
    if ( !v11 )
      v11 = *(_QWORD *)v7;
    *(_BYTE *)(v11 + 44) |= 1u;
    if ( v7 + 8 == v8 )
      break;
    if ( a2 )
    {
      v7 += 8;
      while ( !*(_QWORD *)v7 || !(unsigned __int8)sub_2195AD0(*(_QWORD *)v7, a2) )
      {
        v7 += 8;
        if ( v8 == v7 )
          goto LABEL_18;
      }
    }
    else
    {
      v7 += 8 * ((unsigned __int64)(v8 - 16 - v7) >> 3) + 16;
    }
  }
  while ( v8 != v7 );
LABEL_18:
  v12 = *(const char ***)(v10 + 48);
  v13 = 0;
  v14 = *v12;
  if ( *v12 )
    v13 = strlen(*v12);
  if ( (unsigned __int8)sub_2223D10(v14, v13, a5, &v68) || (result = (unsigned int)v68, v68 != (void *)(int)v68) )
  {
    if ( !a4 )
      return a3;
    sub_FA3370((__int64)&v68, a4, 0, 382);
    sub_21922B0(v63, v10, a1);
    v15 = (unsigned __int8 *)v68;
    v16 = v63[0];
    v17 = (signed __int64)v63[1];
    if ( !v68 )
    {
      v42 = v69;
      v43 = *(_DWORD *)(v69 + 14976);
      if ( v43 )
      {
        v46 = (unsigned int)(v43 - 1);
        *(_DWORD *)(v69 + 14976) = v46;
        v15 = *(unsigned __int8 **)(v42 + 8 * v46 + 14848);
        v47 = *((unsigned int *)v15 + 134);
        *v15 = 0;
        v48 = *((_QWORD *)v15 + 66);
        *((_DWORD *)v15 + 106) = 0;
        v49 = v48 + (v47 << 6);
        while ( v48 != v49 )
        {
          while ( 1 )
          {
            v49 -= 64;
            v50 = *(void **)(v49 + 24);
            if ( v50 == (void *)(v49 + 40) )
              break;
            v62 = v49;
            v61 = v48;
            operator delete(v50);
            v48 = v61;
            v49 = v62;
            if ( v61 == v62 )
              goto LABEL_88;
          }
        }
LABEL_88:
        *((_DWORD *)v15 + 134) = 0;
      }
      else
      {
        srca = v63[0];
        v15 = (unsigned __int8 *)operator new(0x3A0u);
        *v15 = 0;
        *((_QWORD *)v15 + 12) = v15 + 112;
        *((_QWORD *)v15 + 16) = v15 + 144;
        *((_QWORD *)v15 + 20) = v15 + 176;
        *((_QWORD *)v15 + 24) = v15 + 208;
        *((_QWORD *)v15 + 28) = v15 + 240;
        *((_QWORD *)v15 + 32) = v15 + 272;
        *((_QWORD *)v15 + 36) = v15 + 304;
        *((_QWORD *)v15 + 40) = v15 + 336;
        *((_QWORD *)v15 + 44) = v15 + 368;
        *((_QWORD *)v15 + 48) = v15 + 400;
        *((_QWORD *)v15 + 52) = v15 + 432;
        *((_QWORD *)v15 + 13) = 0;
        v15[112] = 0;
        *((_QWORD *)v15 + 17) = 0;
        v15[144] = 0;
        *((_QWORD *)v15 + 21) = 0;
        v15[176] = 0;
        *((_QWORD *)v15 + 25) = 0;
        v15[208] = 0;
        *((_QWORD *)v15 + 29) = 0;
        v15[240] = 0;
        *((_QWORD *)v15 + 33) = 0;
        v15[272] = 0;
        *((_QWORD *)v15 + 37) = 0;
        v15[304] = 0;
        *((_QWORD *)v15 + 41) = 0;
        v15[336] = 0;
        *((_QWORD *)v15 + 45) = 0;
        v15[368] = 0;
        *((_QWORD *)v15 + 49) = 0;
        v15[400] = 0;
        *((_QWORD *)v15 + 53) = 0x800000000LL;
        v16 = srca;
        *((_QWORD *)v15 + 66) = v15 + 544;
        *((_QWORD *)v15 + 67) = 0x600000000LL;
      }
      v68 = v15;
    }
    v15[*v15 + 1] = 0;
    v65 = v67;
    if ( &v16[v17] && !v16 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v17 > 0xF )
    {
      if ( v17 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v18 = (_QWORD *)operator new(v17 + 1);
      v67[0] = v17;
      v65 = v18;
    }
    else
    {
      if ( v17 == 1 )
      {
        LOBYTE(v67[0]) = *v16;
        v18 = v67;
        goto LABEL_29;
      }
      v18 = v67;
      if ( !v17 )
      {
LABEL_29:
        v66 = v17;
        *((_BYTE *)v18 + v17) = 0;
        v19 = v68;
        v20 = *(unsigned __int8 *)v68;
        *(_BYTE *)v68 = v20 + 1;
        v21 = (unsigned __int8)v20;
        v22 = 4 * (v20 + 3);
        v23 = (void **)&v19[v22];
        v24 = (_BYTE *)v19[v22];
        if ( v65 == v67 )
        {
          v40 = v66;
          if ( v66 )
          {
            if ( v66 == 1 )
              *v24 = v67[0];
            else
              memcpy(v24, v65, v66);
            v40 = v66;
            v24 = *v23;
          }
          v23[1] = (void *)v40;
          v24[v40] = 0;
          v24 = v65;
          goto LABEL_33;
        }
        if ( v24 == (_BYTE *)&v19[v22 + 2] )
        {
          *v23 = v65;
          v23[1] = (void *)v66;
          v23[2] = (void *)v67[0];
        }
        else
        {
          v25 = v19[4 * v21 + 14];
          *v23 = v65;
          v23[1] = (void *)v66;
          v23[2] = (void *)v67[0];
          if ( v24 )
          {
            v65 = v24;
            v67[0] = v25;
LABEL_33:
            v66 = 0;
            *v24 = 0;
            if ( v65 != v67 )
              operator delete(v65);
            v26 = *(__int64 **)(v10 + 48);
            v27 = (unsigned __int8 *)v68;
            v28 = *v26;
            if ( !v68 )
            {
              v44 = v69;
              v45 = *(_DWORD *)(v69 + 14976);
              if ( v45 )
              {
                v51 = (unsigned int)(v45 - 1);
                *(_DWORD *)(v69 + 14976) = v51;
                v27 = *(unsigned __int8 **)(v44 + 8 * v51 + 14848);
                v52 = *((unsigned int *)v27 + 134);
                *v27 = 0;
                v53 = *((char **)v27 + 66);
                *((_DWORD *)v27 + 106) = 0;
                v54 = &v53[64 * v52];
                while ( v53 != v54 )
                {
                  while ( 1 )
                  {
                    v54 -= 64;
                    v55 = *((char **)v54 + 3);
                    if ( v55 == v54 + 40 )
                      break;
                    srcb = v53;
                    operator delete(v55);
                    v53 = srcb;
                    if ( srcb == v54 )
                      goto LABEL_93;
                  }
                }
LABEL_93:
                *((_DWORD *)v27 + 134) = 0;
              }
              else
              {
                v27 = (unsigned __int8 *)operator new(0x3A0u);
                *v27 = 0;
                *((_QWORD *)v27 + 12) = v27 + 112;
                *((_QWORD *)v27 + 16) = v27 + 144;
                *((_QWORD *)v27 + 20) = v27 + 176;
                *((_QWORD *)v27 + 24) = v27 + 208;
                *((_QWORD *)v27 + 28) = v27 + 240;
                *((_QWORD *)v27 + 32) = v27 + 272;
                *((_QWORD *)v27 + 36) = v27 + 304;
                *((_QWORD *)v27 + 40) = v27 + 336;
                *((_QWORD *)v27 + 44) = v27 + 368;
                *((_QWORD *)v27 + 48) = v27 + 400;
                *((_QWORD *)v27 + 52) = v27 + 432;
                *((_QWORD *)v27 + 13) = 0;
                v27[112] = 0;
                *((_QWORD *)v27 + 17) = 0;
                v27[144] = 0;
                *((_QWORD *)v27 + 21) = 0;
                v27[176] = 0;
                *((_QWORD *)v27 + 25) = 0;
                v27[208] = 0;
                *((_QWORD *)v27 + 29) = 0;
                v27[240] = 0;
                *((_QWORD *)v27 + 33) = 0;
                v27[272] = 0;
                *((_QWORD *)v27 + 37) = 0;
                v27[304] = 0;
                *((_QWORD *)v27 + 41) = 0;
                v27[336] = 0;
                *((_QWORD *)v27 + 45) = 0;
                v27[368] = 0;
                *((_QWORD *)v27 + 49) = 0;
                v27[400] = 0;
                *((_QWORD *)v27 + 53) = 0x800000000LL;
                *((_QWORD *)v27 + 66) = v27 + 544;
                *((_QWORD *)v27 + 67) = 0x600000000LL;
              }
              v68 = v27;
            }
            v27[*v27 + 1] = 1;
            v29 = v68;
            v30 = *(unsigned __int8 *)v68;
            *(_BYTE *)v68 = v30 + 1;
            v31 = (__int64 *)v63[0];
            v29[v30 + 2] = v28;
            if ( v31 != &v64 )
              operator delete(v31);
            if ( (_BYTE)v73 )
            {
              sub_FA3A50(v70, (__int64)&v68, SHIBYTE(v73));
              v70 = 0;
              v73 = 0;
            }
            if ( v71 != &v72 )
              operator delete(v71);
            v32 = (void **)v68;
            if ( v68 )
            {
              v33 = v69;
              if ( v69 )
              {
                if ( (unsigned __int64)v68 < v69 || (unsigned __int64)v68 > v69 + 14848 )
                {
                  v34 = *((void ***)v68 + 66);
                  v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v68 + 134)];
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
                          goto LABEL_48;
                      }
                    }
                    while ( v34 != v35 );
LABEL_48:
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
                        goto LABEL_56;
                    }
                    v38 -= 4;
                  }
                  while ( v39 != v38 );
LABEL_56:
                  operator delete(v32, 0x3A0u);
                }
                else
                {
                  v41 = *(unsigned int *)(v69 + 14976);
                  *(_DWORD *)(v69 + 14976) = v41 + 1;
                  *(_QWORD *)(v33 + 8 * v41 + 14848) = v32;
                }
              }
            }
            return a3;
          }
        }
        v24 = v67;
        v65 = v67;
        goto LABEL_33;
      }
    }
    memcpy(v18, v16, v17);
    v18 = v65;
    goto LABEL_29;
  }
  return result;
}

