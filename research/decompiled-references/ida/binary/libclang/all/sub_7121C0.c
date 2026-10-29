_QWORD *__fastcall sub_7121C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rbx
  __int64 *v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  char v18; // cl
  char *v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  char v22; // al
  char *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  _QWORD *v27; // r15
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // r9
  char v32; // al
  char *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rcx
  int v37; // esi
  int v38; // esi
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  _BYTE *v41; // rcx
  _BYTE *v42; // r8
  unsigned __int64 v43; // rax
  char *v44; // r8
  char *v45; // r8
  int v46; // ecx
  unsigned __int64 v47; // rax
  char *v48; // rsi
  __int64 v49; // rax
  _QWORD *v50; // rdi
  int v51; // eax
  unsigned __int64 v52; // rsi
  _QWORD *v53; // rdi
  void *v54; // rax
  unsigned __int64 v56; // r13
  _BYTE *v57; // rcx
  _BYTE *v58; // rdi
  unsigned __int64 v59; // rax
  _BYTE *v60; // r8
  char *v61; // rsi
  char *v62; // r15
  _QWORD *v63; // rax
  unsigned __int64 v64; // rcx
  _BYTE *v65; // rdi
  _BYTE *v66; // r8
  unsigned __int64 v67; // rax
  _BYTE *v68; // r8
  char *v69; // rcx
  _QWORD *v70; // rax
  char *v71; // r15
  int v72; // eax
  unsigned __int64 v73; // r8
  void *v74; // rax
  _QWORD *v75; // rdi
  _QWORD *v76; // rdi
  _QWORD *v77; // rdi
  __int64 v78; // rax
  void *v79; // rax
  signed __int64 v80; // [rsp+0h] [rbp-C8h]
  size_t v81; // [rsp+0h] [rbp-C8h]
  _QWORD *src; // [rsp+8h] [rbp-C0h]
  char *srca; // [rsp+8h] [rbp-C0h]
  char *srcb; // [rsp+8h] [rbp-C0h]
  _BYTE *srcc; // [rsp+8h] [rbp-C0h]
  int v86; // [rsp+14h] [rbp-B4h]
  size_t n; // [rsp+18h] [rbp-B0h]
  char *na; // [rsp+18h] [rbp-B0h]
  char *v89; // [rsp+28h] [rbp-A0h]
  _QWORD *v90; // [rsp+30h] [rbp-98h]
  char *v91; // [rsp+30h] [rbp-98h]
  unsigned __int64 v92; // [rsp+38h] [rbp-90h]
  _QWORD v93[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v94; // [rsp+50h] [rbp-78h]
  unsigned __int64 v95; // [rsp+58h] [rbp-70h]
  _QWORD v96[2]; // [rsp+60h] [rbp-68h] BYREF
  void *v97; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v98; // [rsp+78h] [rbp-50h]
  _QWORD v99[9]; // [rsp+80h] [rbp-48h] BYREF

  v7 = (_QWORD *)a1;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v8 = *(_QWORD *)(a3 + 80);
  sub_6CC070(a2, (*(_QWORD *)(a3 + 56) >> 26) & 0x7F, (_QWORD *)a1);
  v86 = a4 == 0 ? 7 : 103;
  sub_710580(a2, v8, (_QWORD *)a1, v86, 0, nullptr);
  sub_70D900((__int64)&v97, a2, *(_QWORD *)(*(_QWORD *)(a2 + 18896) & 0xFFFFFFFFFFFFFFF0LL));
  v9 = *(__int64 **)(a3 + 96);
  v80 = (signed __int64)v97;
  v10 = 2LL * (_QWORD)v97;
  v11 = 2LL * (_QWORD)v97;
  v97 = *(void **)(a3 + 40);
  v13 = sub_C87220(&v97, a2, v12);
  if ( v9 != &v9[v13] )
  {
    v14 = v9;
    v15 = &v9[v13];
    do
    {
      v16 = *v14++;
      v11 += sub_70E310(a2, *(_QWORD *)(v16 + 48));
    }
    while ( v15 != v14 );
    v7 = (_QWORD *)a1;
  }
  v17 = v11;
  if ( v11 < 0 )
  {
    v64 = -v11;
    v65 = (char *)v99 + 5;
    do
    {
      v66 = v65--;
      *v65 = v64 % 0xA + 48;
      v67 = v64;
      v64 /= 0xAu;
    }
    while ( v67 > 9 );
    v68 = v66 - 2;
    *(v65 - 1) = 45;
    v69 = (char *)((char *)v99 + 5 - v68);
    v90 = v93;
    v94 = (void *)((char *)v99 + 5 - v68);
    if ( (unsigned __int64)((char *)v99 + 5 - v68) > 0xF )
    {
      na = (char *)((char *)v99 + 5 - v68);
      srcc = v68;
      v78 = std::string::_M_create();
      v68 = srcc;
      v69 = na;
      v90 = (_QWORD *)v78;
      v77 = (_QWORD *)v78;
      v93[0] = v94;
    }
    else
    {
      if ( v69 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v93[0]) = 45;
LABEL_74:
        v70 = v93;
LABEL_75:
        v92 = (unsigned __int64)v69;
        v69[(_QWORD)v70] = 0;
        goto LABEL_11;
      }
      if ( !v69 )
        goto LABEL_74;
      v77 = v93;
    }
    memcpy(v77, v68, (size_t)v69);
    v69 = (char *)v94;
    v70 = v90;
    goto LABEL_75;
  }
  if ( v11 )
  {
    v45 = (char *)v99 + 5;
    do
    {
      --v45;
      v46 = v17 % 0xA;
      v47 = v17;
      v17 /= 0xAu;
      v18 = v46 + 48;
      *v45 = v18;
    }
    while ( v47 > 9 );
    v48 = (char *)((char *)v99 + 5 - v45);
    v90 = v93;
    v19 = (char *)((char *)v99 + 5 - v45);
    v94 = (void *)((char *)v99 + 5 - v45);
    if ( (unsigned __int64)((char *)v99 + 5 - v45) <= 0xF )
    {
      if ( v48 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_8;
      if ( !v48 )
        goto LABEL_9;
      v50 = v93;
    }
    else
    {
      srca = v45;
      v49 = std::string::_M_create();
      v45 = srca;
      v19 = v48;
      v90 = (_QWORD *)v49;
      v50 = (_QWORD *)v49;
      v93[0] = v94;
    }
    memcpy(v50, v45, (size_t)v19);
    v19 = (char *)v94;
    v20 = v90;
    goto LABEL_10;
  }
  v18 = 48;
  v90 = v93;
LABEL_8:
  LOBYTE(v93[0]) = v18;
  v19 = (_BYTE *)(&dword_0 + 1);
LABEL_9:
  v20 = v93;
LABEL_10:
  v92 = (unsigned __int64)v19;
  v19[(_QWORD)v20] = 0;
LABEL_11:
  if ( 0x3FFFFFFFFFFFFFFFLL - v7[1] < v92 )
    goto LABEL_95;
  std::string::_M_append();
  if ( v90 != v93 )
    operator delete(v90, v93[0] + 1LL);
  if ( (unsigned __int64)(0x3FFFFFFFFFFFFFFFLL - v7[1]) <= 2 )
LABEL_95:
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  v21 = v80;
  if ( v80 >= 0 )
  {
    if ( !v80 )
    {
      v22 = 48;
      v94 = v96;
LABEL_18:
      LOBYTE(v96[0]) = v22;
      v23 = (_BYTE *)(&dword_0 + 1);
LABEL_19:
      v24 = v96;
LABEL_20:
      v95 = (unsigned __int64)v23;
      v23[(_QWORD)v24] = 0;
      goto LABEL_21;
    }
    v71 = (char *)v99 + 5;
    do
    {
      --v71;
      v72 = v21 % 0xA;
      v73 = v21;
      v21 /= 0xAu;
      v22 = v72 + 48;
      *v71 = v22;
    }
    while ( v73 > 9 );
    v95 = 0;
    v23 = (char *)((char *)v99 + 5 - v71);
    v94 = v96;
    if ( (unsigned __int64)((char *)v99 + 5 - v71) <= 0xF )
    {
      if ( v23 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_18;
      if ( !v23 )
        goto LABEL_19;
      v75 = v96;
    }
    else
    {
      v74 = (void *)std::string::_M_create();
      v23 = (char *)((char *)v99 + 5 - v71);
      v94 = v74;
      v75 = v74;
      v96[0] = (char *)v99 + 5 - v71;
    }
    memcpy(v75, v71, (size_t)v23);
    v23 = (char *)((char *)v99 + 5 - v71);
    v24 = v94;
    goto LABEL_20;
  }
  v56 = -v80;
  v57 = (char *)v99 + 5;
  do
  {
    v58 = v57--;
    *v57 = v56 % 0xA + 48;
    v59 = v56;
    v56 /= 0xAu;
  }
  while ( v59 > 9 );
  v60 = v58 - 2;
  *(v57 - 1) = 45;
  v61 = (char *)((char *)v99 + 5 - (v58 - 2));
  v94 = v96;
  v95 = 0;
  v62 = v61;
  if ( (unsigned __int64)v61 > 0xF )
  {
    v79 = (void *)std::string::_M_create();
    v60 = v58 - 2;
    v94 = v79;
    v76 = v79;
    v96[0] = v61;
    goto LABEL_94;
  }
  if ( v61 != (_BYTE *)&dword_0 + 1 )
  {
    if ( !v61 )
      goto LABEL_67;
    v76 = v96;
LABEL_94:
    memcpy(v76, v60, (size_t)v61);
    v62 = v61;
    v63 = v94;
    goto LABEL_68;
  }
  LOBYTE(v96[0]) = 45;
LABEL_67:
  v63 = v96;
LABEL_68:
  v95 = (unsigned __int64)v62;
  v62[(_QWORD)v63] = 0;
LABEL_21:
  v25 = (__int64)v94;
  if ( 0x3FFFFFFFFFFFFFFFLL - v7[1] < v95 )
    goto LABEL_95;
  std::string::_M_append();
  if ( v94 != v96 )
  {
    v25 = v96[0] + 1LL;
    operator delete(v94, v96[0] + 1LL);
  }
  v27 = *(_QWORD **)(a3 + 96);
  v97 = *(void **)(a3 + 40);
  v28 = sub_C87220(&v97, v25, v26);
  v31 = v99;
  if ( &v27[v28] != v27 )
  {
    n = (size_t)&v27[v28];
    v81 = a2;
    do
    {
      src = (_QWORD *)*v27;
      v35 = sub_77D460(*v27, v25, *v27, v29, v30, v31);
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v37 = *(unsigned __int8 *)(v36 + 16);
      if ( (_BYTE)v37 != 2
        && ((unsigned __int8)(*(_BYTE *)(v36 + 16) - 4) <= 2u
         || v37 != 3 && (unsigned int)*(unsigned __int8 *)(v36 + 16) - 25 <= 1) )
      {
        v35 = src[6];
      }
      LOBYTE(v38) = 0;
      if ( (*((_BYTE *)src + 97) & 0x10) != 0 )
        v38 = (*((_DWORD *)src + 24) >> 13) & 0x7F;
      sub_6CC070(v81, v38, v7);
      sub_710580(v81, v35, v7, v86, 0, nullptr);
      v39 = v10;
      if ( v10 >= 0 )
      {
        if ( !v10 )
        {
          v97 = v99;
          v32 = 48;
LABEL_28:
          LOBYTE(v99[0]) = v32;
          v33 = (_BYTE *)(&dword_0 + 1);
          goto LABEL_29;
        }
        v44 = (char *)v96 + 5;
        do
        {
          --v44;
          v51 = v39 % 0xA;
          v52 = v39;
          v39 /= 0xAu;
          v32 = v51 + 48;
          *v44 = v32;
        }
        while ( v52 > 9 );
        v97 = v99;
        v98 = 0;
        v33 = (char *)((char *)v96 + 5 - v44);
        v91 = (char *)((char *)v96 + 5 - v44);
        if ( (unsigned __int64)((char *)v96 + 5 - v44) > 0xF )
        {
LABEL_56:
          v89 = v33;
          srcb = v44;
          v54 = (void *)std::string::_M_create();
          v44 = srcb;
          v33 = v89;
          v97 = v54;
          v53 = v54;
          v99[0] = v91;
          goto LABEL_57;
        }
        if ( (char *)v96 + 5 - v44 == 1 )
          goto LABEL_28;
      }
      else
      {
        v40 = -v10;
        v41 = (char *)v96 + 5;
        do
        {
          v42 = v41--;
          *v41 = v40 % 0xA + 48;
          v43 = v40;
          v40 /= 0xAu;
        }
        while ( v43 > 9 );
        v44 = v42 - 2;
        *(v41 - 1) = 45;
        v97 = v99;
        v98 = 0;
        v33 = (char *)((char *)v96 + 5 - v44);
        v91 = (char *)((char *)v96 + 5 - v44);
        if ( (unsigned __int64)((char *)v96 + 5 - v44) > 0xF )
          goto LABEL_56;
        if ( (char *)v96 + 5 - v44 == 1 )
        {
          LOBYTE(v99[0]) = 45;
          goto LABEL_29;
        }
      }
      if ( v33 )
      {
        v53 = v99;
LABEL_57:
        memcpy(v53, v44, (size_t)v33);
        v33 = v91;
        v34 = v97;
        goto LABEL_30;
      }
LABEL_29:
      v34 = v99;
LABEL_30:
      v98 = (unsigned __int64)v33;
      v33[(_QWORD)v34] = 0;
      if ( 0x3FFFFFFFFFFFFFFFLL - v7[1] < v98 )
        goto LABEL_95;
      std::string::_M_append();
      if ( v97 != v99 )
        operator delete(v97, v99[0] + 1LL);
      v25 = v35;
      ++v27;
      v10 += sub_70E310(v81, v35);
    }
    while ( v27 != (_QWORD *)n );
  }
  return v7;
}

