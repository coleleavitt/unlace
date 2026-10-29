__int64 __fastcall sub_10FB9A0(__int64 *a1, __int64 a2, char a3)
{
  int v3; // eax
  _QWORD *v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // ebp
  signed __int64 *p_dest; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  size_t v10; // rax
  unsigned __int8 *v11; // rax
  _BYTE *v12; // rsi
  signed __int64 v13; // rcx
  signed __int64 *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  signed __int64 **v18; // rcx
  signed __int64 *v19; // rdi
  signed __int64 v20; // rax
  unsigned __int8 *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  void **v24; // r13
  unsigned __int64 v25; // rax
  void **v26; // rdx
  void **v27; // r15
  unsigned int v28; // r12d
  __int64 v29; // rbp
  void **v30; // rbx
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // r15
  int v34; // eax
  size_t v36; // rdx
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  int v39; // eax
  unsigned __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // r13
  __int64 v47; // rbx
  unsigned __int8 *v48; // r12
  void *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rbp
  signed __int64 v56; // r13
  unsigned __int8 *v57; // r14
  void *v58; // rdi
  signed __int64 *v59; // rdi
  __int64 v60; // [rsp+0h] [rbp-E8h]
  _QWORD *v61; // [rsp+8h] [rbp-E0h]
  void **v62; // [rsp+8h] [rbp-E0h]
  signed __int64 v63; // [rsp+8h] [rbp-E0h]
  signed __int64 v64; // [rsp+8h] [rbp-E0h]
  signed __int64 **v65; // [rsp+8h] [rbp-E0h]
  __int64 v66; // [rsp+8h] [rbp-E0h]
  void *srca; // [rsp+20h] [rbp-C8h]
  unsigned int src; // [rsp+20h] [rbp-C8h]
  _QWORD *v71; // [rsp+28h] [rbp-C0h]
  signed __int64 *v72; // [rsp+30h] [rbp-B8h]
  signed __int64 *v73; // [rsp+40h] [rbp-A8h]
  size_t n; // [rsp+48h] [rbp-A0h]
  signed __int64 dest; // [rsp+50h] [rbp-98h] BYREF
  void *v76; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-80h]
  __int64 v78; // [rsp+70h] [rbp-78h]
  void *v79; // [rsp+80h] [rbp-68h]
  __int64 v80; // [rsp+90h] [rbp-58h] BYREF
  __int16 v81; // [rsp+A0h] [rbp-48h]

  v3 = *(_DWORD *)(a2 + 56);
  if ( v3 )
  {
    v4 = (_QWORD *)a2;
    v5 = 0;
    v6 = 0;
    p_dest = &dest;
    v60 = 8LL * (unsigned int)(v3 - 1) + 8;
    while ( 1 )
    {
      v8 = v4[6];
      v9 = *(_QWORD *)(v8 + v5);
      if ( v9 )
      {
        v10 = strlen(*(const char **)(v8 + v5));
        if ( v10 == 7 )
        {
          if ( *(_DWORD *)v9 == 1702260579 && *(_WORD *)(v9 + 4) == 25970 )
          {
            v34 = 1;
            if ( *(_BYTE *)(v9 + 6) == 100 )
              goto LABEL_43;
          }
          if ( *(_DWORD *)v9 == 1836020833 && *(_WORD *)(v9 + 4) == 25449 )
          {
            v34 = 2;
            if ( *(_BYTE *)(v9 + 6) == 115 )
              goto LABEL_43;
          }
        }
        else if ( v10 == 3 )
        {
          if ( *(_WORD *)v9 == 24949 )
          {
            v34 = 4;
            if ( *(_BYTE *)(v9 + 2) == 114 )
              goto LABEL_43;
          }
          if ( *(_WORD *)v9 == 27745 )
          {
            v34 = -1;
            if ( *(_BYTE *)(v9 + 2) == 108 )
              goto LABEL_43;
          }
        }
      }
      if ( a3 )
        break;
LABEL_42:
      v34 = 0;
LABEL_43:
      v6 |= v34;
      v5 += 8;
      if ( v60 == v5 )
        return v6;
    }
    sub_FA3370((__int64)&v76, *a1, 0, 497);
    v11 = (unsigned __int8 *)v76;
    v12 = (_BYTE *)v4[3];
    v13 = v4[4];
    if ( !v76 )
    {
      v38 = v77;
      v39 = *(_DWORD *)(v77 + 14976);
      if ( v39 )
      {
        v50 = (unsigned int)(v39 - 1);
        *(_DWORD *)(v77 + 14976) = v50;
        v11 = *(unsigned __int8 **)(v38 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v11 + 134);
        *v11 = 0;
        v52 = *((_QWORD *)v11 + 66);
        *((_DWORD *)v11 + 106) = 0;
        v53 = v52 + (v51 << 6);
        if ( v52 != v53 )
        {
          v66 = v5;
          v54 = v53;
          src = v6;
          v55 = v52;
          v56 = v13;
          v72 = p_dest;
          v57 = v11;
          do
          {
            while ( 1 )
            {
              v54 -= 64;
              v58 = *(void **)(v54 + 24);
              if ( v58 == (void *)(v54 + 40) )
                break;
              operator delete(v58);
              if ( v55 == v54 )
                goto LABEL_92;
            }
          }
          while ( v55 != v54 );
LABEL_92:
          v13 = v56;
          v11 = v57;
          v5 = v66;
          v6 = src;
          p_dest = v72;
        }
        *((_DWORD *)v11 + 134) = 0;
      }
      else
      {
        srca = (void *)v4[4];
        v11 = (unsigned __int8 *)operator new(0x3A0u);
        *v11 = 0;
        *((_QWORD *)v11 + 12) = v11 + 112;
        *((_QWORD *)v11 + 16) = v11 + 144;
        *((_QWORD *)v11 + 20) = v11 + 176;
        *((_QWORD *)v11 + 24) = v11 + 208;
        *((_QWORD *)v11 + 28) = v11 + 240;
        *((_QWORD *)v11 + 32) = v11 + 272;
        *((_QWORD *)v11 + 36) = v11 + 304;
        *((_QWORD *)v11 + 40) = v11 + 336;
        *((_QWORD *)v11 + 44) = v11 + 368;
        *((_QWORD *)v11 + 48) = v11 + 400;
        *((_QWORD *)v11 + 52) = v11 + 432;
        *((_QWORD *)v11 + 13) = 0;
        v11[112] = 0;
        *((_QWORD *)v11 + 17) = 0;
        v11[144] = 0;
        *((_QWORD *)v11 + 21) = 0;
        v11[176] = 0;
        *((_QWORD *)v11 + 25) = 0;
        v11[208] = 0;
        *((_QWORD *)v11 + 29) = 0;
        v11[240] = 0;
        *((_QWORD *)v11 + 33) = 0;
        v11[272] = 0;
        *((_QWORD *)v11 + 37) = 0;
        v11[304] = 0;
        *((_QWORD *)v11 + 41) = 0;
        v11[336] = 0;
        *((_QWORD *)v11 + 45) = 0;
        v11[368] = 0;
        *((_QWORD *)v11 + 49) = 0;
        v11[400] = 0;
        *((_QWORD *)v11 + 53) = 0x800000000LL;
        v13 = (signed __int64)srca;
        *((_QWORD *)v11 + 66) = v11 + 544;
        *((_QWORD *)v11 + 67) = 0x600000000LL;
      }
      v76 = v11;
    }
    v11[*v11 + 1] = 0;
    v73 = p_dest;
    if ( &v12[v13] && !v12 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v13 > 0xF )
    {
      if ( v13 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v63 = v13;
      v14 = (signed __int64 *)operator new(v13 + 1);
      v13 = v63;
      v73 = v14;
      dest = v63;
    }
    else
    {
      if ( v13 == 1 )
      {
        LOBYTE(dest) = *v12;
        v14 = p_dest;
        goto LABEL_15;
      }
      v14 = p_dest;
      if ( !v13 )
      {
LABEL_15:
        n = v13;
        *((_BYTE *)v14 + v13) = 0;
        v15 = v76;
        v16 = *(unsigned __int8 *)v76;
        *(_BYTE *)v76 = v16 + 1;
        v17 = 4 * (v16 + 3);
        v18 = (signed __int64 **)&v15[v17];
        v19 = (signed __int64 *)v15[v17];
        if ( v73 != p_dest )
        {
          if ( v19 == &v15[v17 + 2] )
          {
            *v18 = v73;
            v18[1] = (signed __int64 *)n;
            v18[2] = (signed __int64 *)dest;
          }
          else
          {
            v20 = v15[4 * (int)v16 + 14];
            *v18 = v73;
            v18[1] = (signed __int64 *)n;
            v18[2] = (signed __int64 *)dest;
            if ( v19 )
            {
              v73 = v19;
              dest = v20;
              goto LABEL_19;
            }
          }
          v73 = p_dest;
          v19 = p_dest;
          goto LABEL_19;
        }
        v36 = n;
        if ( n )
        {
          if ( n == 1 )
          {
            *(_BYTE *)v19 = dest;
            v59 = *v18;
            v18[1] = (_QWORD *)(&dword_0 + 1);
            *((_BYTE *)v59 + 1) = 0;
            v19 = v73;
            goto LABEL_19;
          }
          v65 = v18;
          memcpy(v19, p_dest, n);
          v18 = v65;
          v36 = n;
          v19 = *v65;
        }
        v18[1] = (signed __int64 *)v36;
        *((_BYTE *)v19 + v36) = 0;
        v19 = v73;
LABEL_19:
        *(_BYTE *)v19 = 0;
        if ( v73 != p_dest )
          operator delete(v73);
        v21 = (unsigned __int8 *)v76;
        if ( !v76 )
        {
          v40 = v77;
          v41 = *(_DWORD *)(v77 + 14976);
          if ( v41 )
          {
            v42 = (unsigned int)(v41 - 1);
            *(_DWORD *)(v77 + 14976) = v42;
            v21 = *(unsigned __int8 **)(v40 + 8 * v42 + 14848);
            v43 = *((unsigned int *)v21 + 134);
            *v21 = 0;
            v44 = *((_QWORD *)v21 + 66);
            *((_DWORD *)v21 + 106) = 0;
            v45 = v44 + (v43 << 6);
            if ( v44 != v45 )
            {
              v46 = v5;
              v47 = v45;
              v71 = v4;
              v48 = v21;
              do
              {
                while ( 1 )
                {
                  v47 -= 64;
                  v49 = *(void **)(v47 + 24);
                  if ( v49 == (void *)(v47 + 40) )
                    break;
                  operator delete(v49);
                  if ( v44 == v47 )
                    goto LABEL_84;
                }
              }
              while ( v44 != v47 );
LABEL_84:
              v21 = v48;
              v5 = v46;
              v4 = v71;
            }
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
            v21 = (unsigned __int8 *)operator new(0x3A0u);
            *v21 = 0;
            *((_QWORD *)v21 + 12) = v21 + 112;
            *((_QWORD *)v21 + 16) = v21 + 144;
            *((_QWORD *)v21 + 20) = v21 + 176;
            *((_QWORD *)v21 + 24) = v21 + 208;
            *((_QWORD *)v21 + 28) = v21 + 240;
            *((_QWORD *)v21 + 32) = v21 + 272;
            *((_QWORD *)v21 + 36) = v21 + 304;
            *((_QWORD *)v21 + 40) = v21 + 336;
            *((_QWORD *)v21 + 44) = v21 + 368;
            *((_QWORD *)v21 + 48) = v21 + 400;
            *((_QWORD *)v21 + 52) = v21 + 432;
            *((_QWORD *)v21 + 13) = 0;
            v21[112] = 0;
            *((_QWORD *)v21 + 17) = 0;
            v21[144] = 0;
            *((_QWORD *)v21 + 21) = 0;
            v21[176] = 0;
            *((_QWORD *)v21 + 25) = 0;
            v21[208] = 0;
            *((_QWORD *)v21 + 29) = 0;
            v21[240] = 0;
            *((_QWORD *)v21 + 33) = 0;
            v21[272] = 0;
            *((_QWORD *)v21 + 37) = 0;
            v21[304] = 0;
            *((_QWORD *)v21 + 41) = 0;
            v21[336] = 0;
            *((_QWORD *)v21 + 45) = 0;
            v21[368] = 0;
            *((_QWORD *)v21 + 49) = 0;
            v21[400] = 0;
            *((_QWORD *)v21 + 53) = 0x800000000LL;
            *((_QWORD *)v21 + 66) = v21 + 544;
            *((_QWORD *)v21 + 67) = 0x600000000LL;
          }
          v76 = v21;
        }
        v21[*v21 + 1] = 1;
        v22 = v76;
        v23 = *(unsigned __int8 *)v76;
        *(_BYTE *)v76 = v23 + 1;
        v22[v23 + 2] = v9;
        if ( (_BYTE)v81 )
        {
          sub_FA3A50(v78, (__int64)&v76, SHIBYTE(v81));
          v78 = 0;
          v81 = 0;
        }
        if ( v79 != &v80 )
          operator delete(v79);
        v24 = (void **)v76;
        if ( v76 )
        {
          v25 = v77;
          if ( v77 )
          {
            if ( (unsigned __int64)v76 < v77 || (unsigned __int64)v76 > v77 + 14848 )
            {
              v26 = *((void ***)v76 + 66);
              v27 = &v26[8 * (unsigned __int64)*((unsigned int *)v76 + 134)];
              if ( v26 != v27 )
              {
                v61 = v4;
                v28 = v6;
                v29 = v5;
                v30 = *((void ***)v76 + 66);
                do
                {
                  while ( 1 )
                  {
                    v27 -= 8;
                    v31 = (void **)v27[3];
                    if ( v31 == v27 + 5 )
                      break;
                    operator delete(v31);
                    if ( v30 == v27 )
                      goto LABEL_33;
                  }
                }
                while ( v30 != v27 );
LABEL_33:
                v5 = v29;
                v27 = (void **)v24[66];
                v6 = v28;
                v4 = v61;
              }
              if ( v27 != v24 + 68 )
                free(v27);
              v32 = (void **)v24[52];
              if ( v32 != v24 + 54 )
                free(v32);
              v33 = v24 + 48;
              v62 = v24 + 8;
              do
              {
                while ( *v33 != v33 + 2 )
                {
                  operator delete(*v33);
                  v33 -= 4;
                  if ( v33 == v62 )
                    goto LABEL_41;
                }
                v33 -= 4;
              }
              while ( v33 != v62 );
LABEL_41:
              operator delete(v24, 0x3A0u);
            }
            else
            {
              v37 = *(unsigned int *)(v77 + 14976);
              *(_DWORD *)(v77 + 14976) = v37 + 1;
              *(_QWORD *)(v25 + 8 * v37 + 14848) = v24;
            }
          }
        }
        goto LABEL_42;
      }
    }
    v64 = v13;
    memcpy(v14, v12, v13);
    v14 = v73;
    v13 = v64;
    goto LABEL_15;
  }
  return 0;
}

