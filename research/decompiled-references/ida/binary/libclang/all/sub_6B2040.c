void __fastcall sub_6B2040(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v9; // r15
  _QWORD *v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  char v16; // al
  char *v17; // rcx
  _QWORD *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  char v22; // r13
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  _QWORD *v29; // rax
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rax
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  char v35; // al
  char *v36; // r12
  _QWORD *v37; // rax
  char *v38; // rbp
  int v39; // eax
  unsigned __int64 v40; // rsi
  _QWORD *v41; // rdi
  unsigned __int64 v42; // rax
  char v43; // dl
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // rdx
  char *v49; // r8
  int v50; // eax
  unsigned __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rax
  char *srcb; // [rsp+0h] [rbp-98h]
  _QWORD *src; // [rsp+0h] [rbp-98h]
  _QWORD *srca; // [rsp+0h] [rbp-98h]
  char *n; // [rsp+8h] [rbp-90h]
  char *v59; // [rsp+18h] [rbp-80h]
  _QWORD *v60; // [rsp+20h] [rbp-78h]
  _QWORD v61[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v62; // [rsp+40h] [rbp-58h]
  unsigned __int64 v63; // [rsp+48h] [rbp-50h]
  _QWORD v64[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a2 + 2;
  v9 = a2[1];
  v10 = (_QWORD *)*a2;
  v11 = v9 + 1;
  if ( (_QWORD *)*a2 == a2 + 2 )
    v12 = 15;
  else
    v12 = a2[2];
  if ( v12 < v11 )
  {
    std::string::_M_mutate();
    v10 = (_QWORD *)*a2;
    v11 = v9 + 1;
  }
  *((_BYTE *)v10 + v9) = 98;
  v13 = (_QWORD *)*a2;
  a2[1] = v11;
  *((_BYTE *)v13 + v9 + 1) = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2160) + 360LL) > 3u )
  {
    if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x30 )
    {
      v14 = sub_7B81E0(a4);
      v15 = sub_AAC7E0(a1, v14, 0, a4);
      if ( !v15 )
      {
LABEL_8:
        v16 = 48;
        v60 = v61;
LABEL_9:
        LOBYTE(v61[0]) = v16;
        v17 = (_BYTE *)(&dword_0 + 1);
LABEL_10:
        v18 = v61;
        goto LABEL_11;
      }
    }
    else
    {
      v42 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
        v42 = *(_QWORD *)v42;
      v43 = *(_BYTE *)(v42 + 8);
      v44 = 0;
      v45 = v42 - 64;
      v46 = a4;
      if ( (v43 & 0x7Fu) - 56 < 4 )
        v44 = v45;
      v47 = sub_AB4240(a1, v44);
      v48 = (_QWORD *)v47;
      if ( *(char *)(a4 + 29) < 0 )
      {
        src = (_QWORD *)v47;
        v54 = sub_77A0C0(a4);
        v48 = src;
        v46 = v54;
      }
      if ( *(_DWORD *)(v46 + 68) <= 0xFu )
      {
        srca = v48;
        sub_78B660(v46);
        v48 = srca;
      }
      v15 = *(_QWORD *)(v48[6] + 8LL * (unsigned int)((*(_DWORD *)(v46 + 68) >> 4) - 1));
      if ( !v15 )
        goto LABEL_8;
    }
    v49 = (char *)v64 + 5;
    do
    {
      --v49;
      v50 = v15 % 0xA;
      v51 = v15;
      v15 /= 0xAu;
      v16 = v50 + 48;
      *v49 = v16;
    }
    while ( v51 > 9 );
    v17 = (char *)((char *)v64 + 5 - v49);
    v60 = v61;
    v59 = (char *)((char *)v64 + 5 - v49);
    if ( (unsigned __int64)((char *)v64 + 5 - v49) <= 0xF )
    {
      if ( v17 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_9;
      if ( !v17 )
        goto LABEL_10;
      v53 = v61;
    }
    else
    {
      n = (char *)((char *)v64 + 5 - v49);
      srcb = v49;
      v52 = std::string::_M_create();
      v49 = srcb;
      v17 = n;
      v60 = (_QWORD *)v52;
      v53 = (_QWORD *)v52;
      v61[0] = v59;
    }
    memcpy(v53, v49, (size_t)v17);
    v17 = v59;
    v18 = v60;
LABEL_11:
    v17[(_QWORD)v18] = 0;
    if ( 0x3FFFFFFFFFFFFFFFLL - a2[1] < (unsigned __int64)v17 )
      goto LABEL_65;
    std::string::_M_append();
    if ( v60 != v61 )
      operator delete(v60, v61[0] + 1LL);
    v19 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *v19;
    if ( *(_BYTE *)(*v19 + 16) == 46 )
    {
      v21 = sub_B14A40(*v19);
      v22 = 105;
      if ( (*(_BYTE *)(v21 + 77) & 2) == 0 )
      {
LABEL_24:
        v28 = a2[1];
        v29 = (_QWORD *)*a2;
        v30 = v28 + 1;
        if ( v4 == (_QWORD *)*a2 )
          v31 = 15;
        else
          v31 = a2[2];
        if ( v31 < v30 )
        {
          std::string::_M_mutate();
          v29 = (_QWORD *)*a2;
        }
        *((_BYTE *)v29 + v28) = v22;
        v32 = (_QWORD *)*a2;
        a2[1] = v30;
        *((_BYTE *)v32 + v28 + 1) = 0;
        goto LABEL_29;
      }
      v23 = *(_QWORD *)(v21 + 128);
      v24 = 0;
      if ( v23 > 7 )
      {
        if ( (v23 & 4) != 0 )
        {
          v25 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL);
          v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
          v27 = *(_QWORD *)(v26 + 8);
          if ( (v27 & 7) != 0 || (v27 & 8) != 0 )
            v26 = sub_B0CF30(v25, v20);
          v24 = v26 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v24 = v23 & 0xFFFFFFFFFFFFFFF0LL;
        }
      }
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v22 = sub_6B1990(a1, v20);
    goto LABEL_24;
  }
LABEL_29:
  v33 = sub_781830(a4);
  v34 = v33;
  if ( !v33 )
  {
    v35 = 48;
    v62 = v64;
LABEL_31:
    LOBYTE(v64[0]) = v35;
    v36 = (_BYTE *)(&dword_0 + 1);
LABEL_32:
    v37 = v64;
    goto LABEL_33;
  }
  v38 = (char *)v61 + 5;
  do
  {
    --v38;
    v39 = v34 % 0xA;
    v40 = v34;
    v34 /= 0xAu;
    v35 = v39 + 48;
    *v38 = v35;
  }
  while ( v40 > 9 );
  v36 = (char *)((char *)v61 + 5 - v38);
  v63 = 0;
  v62 = v64;
  if ( (unsigned __int64)((char *)v61 + 5 - v38) <= 0xF )
  {
    if ( v36 == (_BYTE *)&dword_0 + 1 )
      goto LABEL_31;
    if ( !v36 )
      goto LABEL_32;
    v41 = v64;
  }
  else
  {
    v62 = (void *)std::string::_M_create();
    v41 = v62;
    v64[0] = (char *)v61 + 5 - v38;
  }
  memcpy(v41, v38, (size_t)v36);
  v36 = (char *)((char *)v61 + 5 - v38);
  v37 = v62;
LABEL_33:
  v63 = (unsigned __int64)v36;
  v36[(_QWORD)v37] = 0;
  if ( 0x3FFFFFFFFFFFFFFFLL - a2[1] < v63 )
LABEL_65:
    std::__throw_length_error("basic_string::append");
  std::string::_M_append();
  if ( v62 != v64 )
    operator delete(v62, v64[0] + 1LL);
}

