void __fastcall sub_1140630(
        __int64 *a1,
        _QWORD *a2,
        _BYTE *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  _BYTE *v17; // rsi
  signed __int64 v18; // r14
  unsigned __int8 *v19; // r13
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  void **v25; // r14
  _BYTE *v26; // rdi
  __int64 v27; // rax
  __int64 *v28; // rax
  unsigned __int8 *v29; // rbx
  __int64 v30; // r14
  _QWORD *v31; // rdx
  __int64 v32; // rax
  void **v33; // r12
  unsigned __int64 v34; // rax
  void **v35; // r13
  void **v36; // rbx
  void **v37; // rdi
  void **v38; // rdi
  void **v39; // rbx
  void **v40; // r13
  size_t v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r15
  __int64 v48; // r13
  void *v49; // rdi
  unsigned __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // r15
  void *v56; // rdi
  _BYTE *src; // [rsp+0h] [rbp-108h]
  __int64 v58; // [rsp+8h] [rbp-100h]
  _BYTE *v59; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v60; // [rsp+18h] [rbp-F0h]
  _BYTE *v61; // [rsp+30h] [rbp-D8h]
  __int64 v62; // [rsp+38h] [rbp-D0h]
  void *v63; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  void *v66; // [rsp+60h] [rbp-A8h]
  size_t n; // [rsp+68h] [rbp-A0h]
  _QWORD v68[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v69; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp-80h]
  __int64 v71; // [rsp+90h] [rbp-78h]
  void *v72; // [rsp+A0h] [rbp-68h]
  __int64 v73; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v74; // [rsp+C0h] [rbp-48h]

  v59 = a3;
  v60 = a4;
  v12 = sub_2246AB0(&v59, "+", 1, 0);
  if ( v12 == -1 )
  {
    sub_113FDE0(&v63, v59, v60, a8);
    if ( (unsigned int)sub_229CAC0(v63, v64) )
      goto LABEL_39;
  }
  else
  {
    v13 = v60;
    v14 = v12 + 1;
    v15 = 0;
    if ( v14 <= v60 )
    {
      v15 = v60 - v14;
      v13 = v14;
    }
    v61 = &v59[v13];
    sub_113FDE0(&v63, v59, v60, a8);
    v16 = sub_229CAC0(v63, v64);
    if ( v16 )
    {
      if ( !v15 )
        goto LABEL_39;
      v62 = v15;
      if ( (unsigned __int8)sub_113C8E0((__int64)v61, v15, a5, a6, v16, a7, a9) )
        goto LABEL_39;
    }
  }
  sub_FC70B0((__int64)&v69, *a1, 0, 497);
  v17 = (_BYTE *)a2[3];
  v18 = a2[4];
  v19 = (unsigned __int8 *)v69;
  if ( !v69 )
  {
    v50 = v70;
    v51 = *(_DWORD *)(v70 + 14976);
    if ( v51 )
    {
      v52 = (unsigned int)(v51 - 1);
      *(_DWORD *)(v70 + 14976) = v52;
      v19 = *(unsigned __int8 **)(v50 + 8 * v52 + 14848);
      v53 = *((unsigned int *)v19 + 134);
      *v19 = 0;
      v54 = *((_QWORD *)v19 + 66);
      *((_DWORD *)v19 + 106) = 0;
      v55 = v54 + (v53 << 6);
      while ( v54 != v55 )
      {
        while ( 1 )
        {
          v55 -= 64;
          v56 = *(void **)(v55 + 24);
          if ( v56 == (void *)(v55 + 40) )
            break;
          v58 = v54;
          operator delete(v56);
          v54 = v58;
          if ( v58 == v55 )
            goto LABEL_73;
        }
      }
LABEL_73:
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      src = (_BYTE *)a2[3];
      v19 = (unsigned __int8 *)operator new(0x3A0u);
      *v19 = 0;
      *((_QWORD *)v19 + 12) = v19 + 112;
      *((_QWORD *)v19 + 16) = v19 + 144;
      *((_QWORD *)v19 + 20) = v19 + 176;
      *((_QWORD *)v19 + 24) = v19 + 208;
      *((_QWORD *)v19 + 28) = v19 + 240;
      *((_QWORD *)v19 + 32) = v19 + 272;
      *((_QWORD *)v19 + 36) = v19 + 304;
      *((_QWORD *)v19 + 40) = v19 + 336;
      *((_QWORD *)v19 + 44) = v19 + 368;
      *((_QWORD *)v19 + 48) = v19 + 400;
      *((_QWORD *)v19 + 52) = v19 + 432;
      *((_QWORD *)v19 + 13) = 0;
      v19[112] = 0;
      *((_QWORD *)v19 + 17) = 0;
      v19[144] = 0;
      *((_QWORD *)v19 + 21) = 0;
      v19[176] = 0;
      *((_QWORD *)v19 + 25) = 0;
      v19[208] = 0;
      *((_QWORD *)v19 + 29) = 0;
      v19[240] = 0;
      *((_QWORD *)v19 + 33) = 0;
      v19[272] = 0;
      *((_QWORD *)v19 + 37) = 0;
      v19[304] = 0;
      *((_QWORD *)v19 + 41) = 0;
      v19[336] = 0;
      *((_QWORD *)v19 + 45) = 0;
      v19[368] = 0;
      *((_QWORD *)v19 + 49) = 0;
      v19[400] = 0;
      *((_QWORD *)v19 + 53) = 0x800000000LL;
      v17 = src;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v69 = v19;
  }
  v19[*v19 + 1] = 0;
  v66 = v68;
  if ( &v17[v18] && !v17 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v18 > 0xF )
  {
    if ( v18 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v20 = (_QWORD *)operator new(v18 + 1);
    v68[0] = v18;
    v66 = v20;
LABEL_52:
    memcpy(v20, v17, v18);
    v20 = v66;
    goto LABEL_13;
  }
  if ( v18 == 1 )
  {
    LOBYTE(v68[0]) = *v17;
    v20 = v68;
    goto LABEL_13;
  }
  v20 = v68;
  if ( v18 )
    goto LABEL_52;
LABEL_13:
  n = v18;
  *((_BYTE *)v20 + v18) = 0;
  v21 = v69;
  v22 = *(unsigned __int8 *)v69;
  *(_BYTE *)v69 = v22 + 1;
  v23 = (unsigned __int8)v22;
  v24 = 4 * (v22 + 3);
  v25 = (void **)&v21[v24];
  v26 = (_BYTE *)v21[v24];
  if ( v66 == v68 )
  {
    v41 = n;
    if ( n )
    {
      if ( n == 1 )
        *v26 = v68[0];
      else
        memcpy(v26, v66, n);
      v41 = n;
      v26 = *v25;
    }
    v25[1] = (void *)v41;
    v26[v41] = 0;
    v26 = v66;
    goto LABEL_17;
  }
  if ( v26 == (_BYTE *)&v21[v24 + 2] )
  {
    *v25 = v66;
    v25[1] = (void *)n;
    v25[2] = (void *)v68[0];
    goto LABEL_61;
  }
  v27 = v21[4 * v23 + 14];
  *v25 = v66;
  v25[1] = (void *)n;
  v25[2] = (void *)v68[0];
  if ( !v26 )
  {
LABEL_61:
    v26 = v68;
    v66 = v68;
    goto LABEL_17;
  }
  v66 = v26;
  v68[0] = v27;
LABEL_17:
  n = 0;
  *v26 = 0;
  if ( v66 != v68 )
    operator delete(v66);
  v28 = (__int64 *)a2[6];
  v29 = (unsigned __int8 *)v69;
  v30 = *v28;
  if ( !v69 )
  {
    v43 = v70;
    v44 = *(_DWORD *)(v70 + 14976);
    if ( v44 )
    {
      v45 = (unsigned int)(v44 - 1);
      *(_DWORD *)(v70 + 14976) = v45;
      v29 = *(unsigned __int8 **)(v43 + 8 * v45 + 14848);
      v46 = *((unsigned int *)v29 + 134);
      *v29 = 0;
      v47 = *((_QWORD *)v29 + 66);
      *((_DWORD *)v29 + 106) = 0;
      v48 = v47 + (v46 << 6);
      while ( v47 != v48 )
      {
        while ( 1 )
        {
          v48 -= 64;
          v49 = *(void **)(v48 + 24);
          if ( v49 == (void *)(v48 + 40) )
            break;
          operator delete(v49);
          if ( v47 == v48 )
            goto LABEL_67;
        }
      }
LABEL_67:
      *((_DWORD *)v29 + 134) = 0;
    }
    else
    {
      v29 = (unsigned __int8 *)operator new(0x3A0u);
      *v29 = 0;
      *((_QWORD *)v29 + 12) = v29 + 112;
      *((_QWORD *)v29 + 16) = v29 + 144;
      *((_QWORD *)v29 + 20) = v29 + 176;
      *((_QWORD *)v29 + 24) = v29 + 208;
      *((_QWORD *)v29 + 28) = v29 + 240;
      *((_QWORD *)v29 + 32) = v29 + 272;
      *((_QWORD *)v29 + 36) = v29 + 304;
      *((_QWORD *)v29 + 40) = v29 + 336;
      *((_QWORD *)v29 + 44) = v29 + 368;
      *((_QWORD *)v29 + 48) = v29 + 400;
      *((_QWORD *)v29 + 52) = v29 + 432;
      *((_QWORD *)v29 + 13) = 0;
      v29[112] = 0;
      *((_QWORD *)v29 + 17) = 0;
      v29[144] = 0;
      *((_QWORD *)v29 + 21) = 0;
      v29[176] = 0;
      *((_QWORD *)v29 + 25) = 0;
      v29[208] = 0;
      *((_QWORD *)v29 + 29) = 0;
      v29[240] = 0;
      *((_QWORD *)v29 + 33) = 0;
      v29[272] = 0;
      *((_QWORD *)v29 + 37) = 0;
      v29[304] = 0;
      *((_QWORD *)v29 + 41) = 0;
      v29[336] = 0;
      *((_QWORD *)v29 + 45) = 0;
      v29[368] = 0;
      *((_QWORD *)v29 + 49) = 0;
      v29[400] = 0;
      *((_QWORD *)v29 + 53) = 0x800000000LL;
      *((_QWORD *)v29 + 66) = v29 + 544;
      *((_QWORD *)v29 + 67) = 0x600000000LL;
    }
    v69 = v29;
  }
  v29[*v29 + 1] = 1;
  v31 = v69;
  v32 = *(unsigned __int8 *)v69;
  *(_BYTE *)v69 = v32 + 1;
  v31[v32 + 2] = v30;
  if ( (_BYTE)v74 )
  {
    sub_FC7790(v71, (__int64 *)&v69, SHIBYTE(v74));
    v71 = 0;
    v74 = 0;
  }
  if ( v72 != &v73 )
    operator delete(v72);
  v33 = (void **)v69;
  if ( v69 )
  {
    v34 = v70;
    if ( v70 )
    {
      if ( (unsigned __int64)v69 < v70 || (unsigned __int64)v69 > v70 + 14848 )
      {
        v35 = *((void ***)v69 + 66);
        v36 = &v35[8 * (unsigned __int64)*((unsigned int *)v69 + 134)];
        if ( v35 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v36 -= 8;
              v37 = (void **)v36[3];
              if ( v37 == v36 + 5 )
                break;
              operator delete(v37);
              if ( v35 == v36 )
                goto LABEL_30;
            }
          }
          while ( v35 != v36 );
LABEL_30:
          v36 = (void **)v33[66];
        }
        if ( v36 != v33 + 68 )
          free(v36);
        v38 = (void **)v33[52];
        v39 = v33 + 52;
        if ( v38 != v33 + 54 )
          free(v38);
        v40 = v33 + 12;
        do
        {
          while ( 1 )
          {
            v39 -= 4;
            if ( *v39 == v39 + 2 )
              break;
            operator delete(*v39);
            if ( v39 == v40 )
              goto LABEL_38;
          }
        }
        while ( v39 != v40 );
LABEL_38:
        operator delete(v33, 0x3A0u);
      }
      else
      {
        v42 = *(unsigned int *)(v70 + 14976);
        *(_DWORD *)(v70 + 14976) = v42 + 1;
        *(_QWORD *)(v34 + 8 * v42 + 14848) = v33;
      }
    }
  }
LABEL_39:
  if ( v63 != &v65 )
    operator delete(v63);
}
