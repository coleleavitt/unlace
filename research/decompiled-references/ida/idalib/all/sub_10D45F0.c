__int64 __fastcall sub_10D45F0(__int64 **a1, _BYTE *a2, char a3)
{
  bool v4; // zf
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 *v10; // rbx
  _BYTE *v11; // r15
  signed __int64 v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void **v18; // r12
  _BYTE *v19; // rdi
  __int64 v20; // rax
  char *v21; // rbp
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbx
  void *v25; // rdi
  char *v26; // rdi
  char *v27; // rdi
  void **v28; // rbx
  void **v29; // r12
  void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r13
  void *v39; // rdi
  unsigned int v40; // [rsp+8h] [rbp-130h]
  __int64 v41; // [rsp+8h] [rbp-130h]
  void *src[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v43; // [rsp+20h] [rbp-118h] BYREF
  void *v44; // [rsp+30h] [rbp-108h]
  size_t v45; // [rsp+38h] [rbp-100h]
  _QWORD v46[2]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE *v47; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v48; // [rsp+70h] [rbp-C8h]
  _BYTE *v49; // [rsp+80h] [rbp-B8h] BYREF
  __int16 v50; // [rsp+A0h] [rbp-98h]
  void *v51; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v52; // [rsp+B8h] [rbp-80h]
  __int64 v53; // [rsp+C0h] [rbp-78h]
  void *v54; // [rsp+D0h] [rbp-68h]
  __int64 v55; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v56; // [rsp+F0h] [rbp-48h]

  v4 = *a2 == 0;
  v48 = 257;
  if ( !v4 )
  {
    v47 = a2;
    LOBYTE(v48) = 3;
  }
  if ( (unsigned int)sub_228C1E0(&v47, 1) )
    return 1;
  v4 = *a2 == 0;
  v50 = 257;
  if ( !v4 )
  {
    v49 = a2;
    LOBYTE(v50) = 3;
  }
  if ( (unsigned int)sub_228B2B0(&v49, &v51) )
    return 1;
  v5 = (unsigned __int8)v51;
  if ( !(_BYTE)v51 )
    return 1;
  v4 = *a2 == 0;
  LOWORD(v54) = 257;
  if ( !v4 )
  {
    v51 = a2;
    LOBYTE(v54) = 3;
  }
  v6 = sub_228BF70(&v51, 1);
  v8 = v7;
  if ( !v6 )
    return v5;
  if ( !a3 )
    return 0;
  v40 = v6;
  sub_FC70B0((__int64)&v51, **a1, 0, 477);
  (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(src, v8, v40);
  v10 = (unsigned __int8 *)v51;
  v11 = src[0];
  v12 = (signed __int64)src[1];
  if ( !v51 )
  {
    v33 = v52;
    v34 = *(_DWORD *)(v52 + 14976);
    if ( v34 )
    {
      v35 = (unsigned int)(v34 - 1);
      *(_DWORD *)(v52 + 14976) = v35;
      v10 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
      v36 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v37 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v38 = v37 + (v36 << 6);
      v41 = v37;
      while ( v41 != v38 )
      {
        while ( 1 )
        {
          v38 -= 64;
          v39 = *(void **)(v38 + 24);
          if ( v39 == (void *)(v38 + 40) )
            break;
          operator delete(v39);
          if ( v41 == v38 )
            goto LABEL_69;
        }
      }
LABEL_69:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v51 = v10;
  }
  v10[*v10 + 1] = 0;
  v44 = v46;
  if ( &v11[v12] && !v11 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v13 = (_QWORD *)operator new(v12 + 1);
    v46[0] = v12;
    v44 = v13;
LABEL_51:
    memcpy(v13, v11, v12);
    v13 = v44;
    goto LABEL_21;
  }
  if ( v12 == 1 )
  {
    LOBYTE(v46[0]) = *v11;
    v13 = v46;
    goto LABEL_21;
  }
  v13 = v46;
  if ( v12 )
    goto LABEL_51;
LABEL_21:
  v45 = v12;
  *((_BYTE *)v13 + v12) = 0;
  v14 = v51;
  v15 = *(unsigned __int8 *)v51;
  *(_BYTE *)v51 = v15 + 1;
  v16 = (unsigned __int8)v15;
  v17 = 4 * (v15 + 3);
  v18 = (void **)&v14[v17];
  v19 = (_BYTE *)v14[v17];
  if ( v44 == v46 )
  {
    v31 = v45;
    if ( v45 )
    {
      if ( v45 == 1 )
        *v19 = v46[0];
      else
        memcpy(v19, v44, v45);
      v31 = v45;
      v19 = *v18;
    }
    v18[1] = (void *)v31;
    v19[v31] = 0;
    v19 = v44;
    goto LABEL_25;
  }
  if ( v19 == (_BYTE *)&v14[v17 + 2] )
  {
    *v18 = v44;
    v18[1] = (void *)v45;
    v18[2] = (void *)v46[0];
    goto LABEL_62;
  }
  v20 = v14[4 * v16 + 14];
  *v18 = v44;
  v18[1] = (void *)v45;
  v18[2] = (void *)v46[0];
  if ( !v19 )
  {
LABEL_62:
    v19 = v46;
    v44 = v46;
    goto LABEL_25;
  }
  v44 = v19;
  v46[0] = v20;
LABEL_25:
  v45 = 0;
  *v19 = 0;
  if ( v44 != v46 )
    operator delete(v44);
  if ( src[0] != &v43 )
    operator delete(src[0]);
  if ( (_BYTE)v56 )
  {
    sub_FC7790(v53, (__int64 *)&v51, SHIBYTE(v56));
    v53 = 0;
    v56 = 0;
  }
  if ( v54 != &v55 )
    operator delete(v54);
  v21 = (char *)v51;
  if ( !v51 )
    return 0;
  v22 = v52;
  if ( !v52 )
    return 0;
  if ( (unsigned __int64)v51 < v52 || (unsigned __int64)v51 > v52 + 14848 )
  {
    v23 = *((_QWORD *)v51 + 66);
    v24 = v23 + ((unsigned __int64)*((unsigned int *)v51 + 134) << 6);
    while ( v23 != v24 )
    {
      while ( 1 )
      {
        v24 -= 64;
        v25 = *(void **)(v24 + 24);
        if ( v25 == (void *)(v24 + 40) )
          break;
        operator delete(v25);
        if ( v23 == v24 )
          goto LABEL_40;
      }
    }
LABEL_40:
    v26 = *((char **)v21 + 66);
    if ( v26 != v21 + 544 )
      free(v26);
    v27 = *((char **)v21 + 52);
    v28 = (void **)(v21 + 416);
    if ( v27 != v21 + 432 )
      free(v27);
    v29 = (void **)(v21 + 96);
    do
    {
      while ( 1 )
      {
        v28 -= 4;
        if ( *v28 == v28 + 2 )
          break;
        operator delete(*v28);
        if ( v28 == v29 )
          goto LABEL_47;
      }
    }
    while ( v28 != v29 );
LABEL_47:
    v30 = v21;
    v5 = 0;
    operator delete(v30, 0x3A0u);
  }
  else
  {
    v32 = *(unsigned int *)(v52 + 14976);
    *(_DWORD *)(v52 + 14976) = v32 + 1;
    *(_QWORD *)(v22 + 8 * v32 + 14848) = v21;
    return 0;
  }
  return v5;
}
