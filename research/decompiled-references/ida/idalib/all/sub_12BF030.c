_QWORD *__fastcall sub_12BF030(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 **v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  char *v10; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  const char **v14; // rax
  char *v15; // rbp
  size_t v16; // rax
  char v17; // al
  size_t v18; // rcx
  _BYTE *v19; // rsi
  __int64 v20; // rcx
  unsigned __int8 *v21; // r13
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  void **v27; // r13
  _BYTE *v28; // rdi
  __int64 v29; // rax
  void **v30; // rbp
  unsigned __int64 v31; // rax
  void **v32; // r13
  void **v33; // rbx
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r13
  char v38; // al
  _BYTE *v39; // rax
  size_t v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rax
  void *v48; // rdi
  size_t v49; // [rsp+8h] [rbp-100h]
  size_t v50; // [rsp+10h] [rbp-F8h]
  size_t v51; // [rsp+10h] [rbp-F8h]
  size_t v52; // [rsp+10h] [rbp-F8h]
  _BYTE *v53; // [rsp+10h] [rbp-F8h]
  size_t v54; // [rsp+18h] [rbp-F0h]
  __int64 v55; // [rsp+18h] [rbp-F0h]
  __int64 v56; // [rsp+20h] [rbp-E8h]
  __int64 v57; // [rsp+28h] [rbp-E0h]
  void *src; // [rsp+30h] [rbp-D8h] BYREF
  size_t n; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-C8h] BYREF
  void *v61; // [rsp+50h] [rbp-B8h] BYREF
  size_t v62; // [rsp+58h] [rbp-B0h]
  _QWORD v63[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v64; // [rsp+70h] [rbp-98h]
  void *v65; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+90h] [rbp-78h]
  void *v68; // [rsp+A0h] [rbp-68h]
  __int64 v69; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v70; // [rsp+C0h] [rbp-48h]

  v5 = *(__int64 ***)(a2 + 24);
  LODWORD(v65) = 1916;
  v6 = sub_21B6DA0(a3, &v65, 1);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = (_QWORD *)(v7 + 8LL * (unsigned int)v6);
  v9 = (_QWORD *)(v7 + 8 * HIDWORD(v6));
  if ( v8 == v9 )
    goto LABEL_5;
  while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1916) )
  {
    if ( v9 == ++v8 )
      goto LABEL_5;
  }
  if ( v9 == v8 )
    goto LABEL_5;
  do
  {
    v12 = *v8;
    v13 = *(_QWORD *)(*v8 + 16LL);
    if ( !v13 )
      v13 = *v8;
    ++v8;
    *(_BYTE *)(v13 + 44) |= 1u;
    if ( v8 == v9 )
      break;
    while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, 1916) )
    {
      if ( v9 == ++v8 )
        goto LABEL_14;
    }
  }
  while ( v9 != v8 );
LABEL_14:
  v14 = *(const char ***)(v12 + 48);
  v15 = (char *)*v14;
  if ( !*v14 )
    goto LABEL_5;
  v16 = strlen(*v14);
  if ( !v16 )
    goto LABEL_5;
  v61 = v15;
  v64 = 261;
  v62 = v16;
  v50 = v16;
  v17 = sub_228B020(&v61, 0);
  v18 = v50;
  if ( v17 )
  {
    v66 = v50;
    LOWORD(v68) = 261;
    v65 = v15;
    v38 = sub_228C2C0(&v65);
    v18 = v50;
    if ( v38 )
    {
      v39 = a1 + 2;
      *a1 = a1 + 2;
      if ( v50 > 0xF )
      {
        v39 = (_BYTE *)operator new(v50 + 1);
        v18 = v50;
        *a1 = v39;
        a1[2] = v50;
      }
      else if ( v50 == 1 )
      {
        *((_BYTE *)a1 + 16) = *v15;
LABEL_58:
        a1[1] = v18;
        v39[v18] = 0;
        return a1;
      }
      v49 = v18;
      memcpy(v39, v15, v18);
      v39 = (_BYTE *)*a1;
      v18 = v49;
      goto LABEL_58;
    }
  }
  if ( v18 == 3 )
  {
    if ( *(_WORD *)v15 == 27756 && v15[2] == 100 )
    {
      sub_112D530(a1, (__int64)v5, "wasm-ld");
      return a1;
    }
LABEL_19:
    sub_FC70B0((__int64)&v65, *v5[1], 0, 383);
    sub_21B5FF0(&src, v12, a3);
    v19 = src;
    v20 = n;
    v21 = (unsigned __int8 *)v65;
    if ( !v65 )
    {
      v42 = v66;
      v43 = *(_DWORD *)(v66 + 14976);
      if ( v43 )
      {
        v44 = (unsigned int)(v43 - 1);
        *(_DWORD *)(v66 + 14976) = v44;
        v21 = *(unsigned __int8 **)(v42 + 8 * v44 + 14848);
        v45 = *((unsigned int *)v21 + 134);
        *v21 = 0;
        v46 = *((_QWORD *)v21 + 66);
        *((_DWORD *)v21 + 106) = 0;
        v47 = v46 + (v45 << 6);
        while ( v46 != v47 )
        {
          while ( 1 )
          {
            v47 -= 64;
            v48 = *(void **)(v47 + 24);
            if ( v48 == (void *)(v47 + 40) )
              break;
            v57 = v46;
            v56 = v47;
            v55 = v20;
            operator delete(v48);
            v47 = v56;
            v46 = v57;
            v20 = v55;
            if ( v57 == v56 )
              goto LABEL_90;
          }
        }
LABEL_90:
        *((_DWORD *)v21 + 134) = 0;
      }
      else
      {
        v54 = n;
        v53 = src;
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
        v19 = v53;
        *((_QWORD *)v21 + 66) = v21 + 544;
        v20 = v54;
        *((_QWORD *)v21 + 67) = 0x600000000LL;
      }
      v65 = v21;
    }
    v21[*v21 + 1] = 0;
    v61 = v63;
    if ( &v19[v20] && !v19 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v20 > 0xF )
    {
      if ( v20 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v52 = v20;
      v22 = (_QWORD *)operator new(v20 + 1);
      v20 = v52;
      v61 = v22;
      v63[0] = v52;
    }
    else
    {
      if ( v20 == 1 )
      {
        LOBYTE(v63[0]) = *v19;
        v22 = v63;
        goto LABEL_25;
      }
      v22 = v63;
      if ( !v20 )
      {
LABEL_25:
        v62 = v20;
        *((_BYTE *)v22 + v20) = 0;
        v23 = v65;
        v24 = *(unsigned __int8 *)v65;
        *(_BYTE *)v65 = v24 + 1;
        v25 = (unsigned __int8)v24;
        v26 = 4 * (v24 + 3);
        v27 = (void **)&v23[v26];
        v28 = (_BYTE *)v23[v26];
        if ( v61 == v63 )
        {
          v40 = v62;
          if ( v62 )
          {
            if ( v62 == 1 )
              *v28 = v63[0];
            else
              memcpy(v28, v61, v62);
            v40 = v62;
            v28 = *v27;
          }
          v27[1] = (void *)v40;
          v28[v40] = 0;
          v28 = v61;
        }
        else
        {
          if ( v28 == (_BYTE *)&v23[v26 + 2] )
          {
            *v27 = v61;
            v27[1] = (void *)v62;
            v27[2] = (void *)v63[0];
          }
          else
          {
            v29 = v23[4 * v25 + 14];
            *v27 = v61;
            v27[1] = (void *)v62;
            v27[2] = (void *)v63[0];
            if ( v28 )
            {
              v61 = v28;
              v63[0] = v29;
              goto LABEL_29;
            }
          }
          v28 = v63;
          v61 = v63;
        }
LABEL_29:
        v62 = 0;
        *v28 = 0;
        if ( v61 != v63 )
          operator delete(v61);
        if ( src != &v60 )
          operator delete(src);
        if ( (_BYTE)v70 )
        {
          sub_FC7790(v67, (__int64 *)&v65, SHIBYTE(v70));
          v67 = 0;
          v70 = 0;
        }
        if ( v68 != &v69 )
          operator delete(v68);
        v30 = (void **)v65;
        if ( v65 )
        {
          v31 = v66;
          if ( v66 )
          {
            if ( (unsigned __int64)v65 < v66 || (unsigned __int64)v65 > v66 + 14848 )
            {
              v32 = *((void ***)v65 + 66);
              v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v65 + 134)];
              if ( v32 != v33 )
              {
                do
                {
                  while ( 1 )
                  {
                    v33 -= 8;
                    v34 = (void **)v33[3];
                    if ( v34 == v33 + 5 )
                      break;
                    operator delete(v34);
                    if ( v32 == v33 )
                      goto LABEL_43;
                  }
                }
                while ( v32 != v33 );
LABEL_43:
                v33 = (void **)v30[66];
              }
              if ( v33 != v30 + 68 )
                free(v33);
              v35 = (void **)v30[52];
              if ( v35 != v30 + 54 )
                free(v35);
              v36 = v30 + 48;
              v37 = v30 + 8;
              do
              {
                while ( *v36 != v36 + 2 )
                {
                  operator delete(*v36);
                  v36 -= 4;
                  if ( v36 == v37 )
                    goto LABEL_51;
                }
                v36 -= 4;
              }
              while ( v37 != v36 );
LABEL_51:
              operator delete(v30, 0x3A0u);
            }
            else
            {
              v41 = *(unsigned int *)(v66 + 14976);
              *(_DWORD *)(v66 + 14976) = v41 + 1;
              *(_QWORD *)(v31 + 8 * v41 + 14848) = v30;
            }
          }
        }
        goto LABEL_5;
      }
    }
    v51 = v20;
    memcpy(v22, v19, v20);
    v22 = v61;
    v20 = v51;
    goto LABEL_25;
  }
  if ( v18 != 2 || *(_WORD *)v15 != 25708 )
    goto LABEL_19;
LABEL_5:
  v10 = (char *)((__int64 (__fastcall *)(__int64 **))(*v5)[33])(v5);
  sub_112D530(a1, (__int64)v5, v10);
  return a1;
}
