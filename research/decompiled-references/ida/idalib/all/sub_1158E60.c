__int64 **__fastcall sub_1158E60(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 *v7; // rax
  __int64 *v8; // r13
  __int64 v9; // rax
  unsigned __int8 *v10; // r12
  _BYTE *v11; // rsi
  signed __int64 v12; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void **v18; // r14
  _BYTE *v19; // rdi
  __int64 v20; // rax
  unsigned __int8 *v21; // r12
  _BYTE *v22; // rsi
  signed __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // r14
  _BYTE *v30; // rdi
  __int64 v31; // rax
  void **v32; // r12
  unsigned __int64 v33; // rax
  void **v34; // r14
  void **v35; // rbx
  void **v36; // rdi
  void **v37; // rdi
  void **v38; // rbx
  void **v39; // r14
  __int64 v40; // rax
  size_t v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // r15
  void *v50; // rdi
  unsigned __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // r15
  void *v57; // rdi
  _BYTE *src; // [rsp+0h] [rbp-D8h]
  __int64 v59; // [rsp+8h] [rbp-D0h]
  __int64 v60; // [rsp+8h] [rbp-D0h]
  _QWORD *v61; // [rsp+10h] [rbp-C8h]
  size_t v62; // [rsp+18h] [rbp-C0h]
  _QWORD v63[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v64; // [rsp+30h] [rbp-A8h]
  size_t n; // [rsp+38h] [rbp-A0h]
  _QWORD v66[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v67; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+58h] [rbp-80h]
  __int64 v69; // [rsp+60h] [rbp-78h]
  void *v70; // [rsp+70h] [rbp-68h]
  __int64 v71; // [rsp+80h] [rbp-58h] BYREF
  __int16 v72; // [rsp+90h] [rbp-48h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, void *))(**a2 + 48))(*a2, &unk_2D0AA99) )
  {
    v5 = *a2;
    *a2 = nullptr;
    *a1 = v5;
    return a1;
  }
  v7 = *(__int64 **)a3;
  v8 = *a2;
  *a2 = nullptr;
  sub_FC70B0((__int64)&v67, *v7, 0, 394);
  v9 = *(_QWORD *)(a3 + 8);
  v10 = (unsigned __int8 *)v67;
  v11 = *(_BYTE **)v9;
  v12 = *(_QWORD *)(v9 + 8);
  if ( !v67 )
  {
    v44 = v68;
    v45 = *(_DWORD *)(v68 + 14976);
    if ( v45 )
    {
      v46 = (unsigned int)(v45 - 1);
      *(_DWORD *)(v68 + 14976) = v46;
      v10 = *(unsigned __int8 **)(v44 + 8 * v46 + 14848);
      v47 = *((unsigned int *)v10 + 134);
      v48 = *((_QWORD *)v10 + 66);
      *v10 = 0;
      *((_DWORD *)v10 + 106) = 0;
      v49 = v48 + (v47 << 6);
      while ( v48 != v49 )
      {
        while ( 1 )
        {
          v49 -= 64;
          v50 = *(void **)(v49 + 24);
          if ( v50 == (void *)(v49 + 40) )
            break;
          v59 = v48;
          operator delete(v50);
          v48 = v59;
          if ( v59 == v49 )
            goto LABEL_83;
        }
      }
LABEL_83:
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
    v67 = v10;
  }
  v10[*v10 + 1] = 0;
  v64 = v66;
  if ( &v11[v12] && !v11 )
LABEL_96:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      goto LABEL_97;
    v13 = (_QWORD *)operator new(v12 + 1);
    v66[0] = v12;
    v64 = v13;
LABEL_58:
    memcpy(v13, v11, v12);
    v13 = v64;
    goto LABEL_10;
  }
  if ( v12 == 1 )
  {
    LOBYTE(v66[0]) = *v11;
    v13 = v66;
    goto LABEL_10;
  }
  v13 = v66;
  if ( v12 )
    goto LABEL_58;
LABEL_10:
  n = v12;
  *((_BYTE *)v13 + v12) = 0;
  v14 = v67;
  v15 = *(unsigned __int8 *)v67;
  *(_BYTE *)v67 = v15 + 1;
  v16 = (unsigned __int8)v15;
  v17 = 4 * (v15 + 3);
  v18 = (void **)&v14[v17];
  v19 = (_BYTE *)v14[v17];
  if ( v64 == v66 )
  {
    v41 = n;
    if ( n )
    {
      if ( n == 1 )
        *v19 = v66[0];
      else
        memcpy(v19, v64, n);
      v41 = n;
      v19 = *v18;
    }
    v18[1] = (void *)v41;
    v19[v41] = 0;
    v19 = v64;
  }
  else
  {
    if ( v19 == (_BYTE *)&v14[v17 + 2] )
    {
      *v18 = v64;
      v18[1] = (void *)n;
      v18[2] = (void *)v66[0];
    }
    else
    {
      v20 = v14[4 * v16 + 14];
      *v18 = v64;
      v18[1] = (void *)n;
      v18[2] = (void *)v66[0];
      if ( v19 )
      {
        v64 = v19;
        v66[0] = v20;
        goto LABEL_14;
      }
    }
    v19 = v66;
    v64 = v66;
  }
LABEL_14:
  n = 0;
  *v19 = 0;
  if ( v64 != v66 )
    operator delete(v64);
  v21 = (unsigned __int8 *)v67;
  v22 = (_BYTE *)v8[1];
  v23 = v8[2];
  if ( !v67 )
  {
    v51 = v68;
    v52 = *(_DWORD *)(v68 + 14976);
    if ( v52 )
    {
      v53 = (unsigned int)(v52 - 1);
      *(_DWORD *)(v68 + 14976) = v53;
      v21 = *(unsigned __int8 **)(v51 + 8 * v53 + 14848);
      v54 = *((unsigned int *)v21 + 134);
      v55 = *((_QWORD *)v21 + 66);
      *v21 = 0;
      *((_DWORD *)v21 + 106) = 0;
      v56 = v55 + (v54 << 6);
      while ( v55 != v56 )
      {
        while ( 1 )
        {
          v56 -= 64;
          v57 = *(void **)(v56 + 24);
          if ( v57 == (void *)(v56 + 40) )
            break;
          v60 = v55;
          operator delete(v57);
          v55 = v60;
          if ( v60 == v56 )
            goto LABEL_89;
        }
      }
LABEL_89:
      *((_DWORD *)v21 + 134) = 0;
    }
    else
    {
      src = (_BYTE *)v8[1];
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
      v22 = src;
      *((_QWORD *)v21 + 66) = v21 + 544;
      *((_QWORD *)v21 + 67) = 0x600000000LL;
    }
    v67 = v21;
  }
  v21[*v21 + 1] = 0;
  v61 = v63;
  if ( &v22[v23] && !v22 )
    goto LABEL_96;
  if ( (unsigned __int64)v23 > 0xF )
  {
    if ( v23 >= 0 )
    {
      v24 = (_QWORD *)operator new(v23 + 1);
      v63[0] = v23;
      v61 = v24;
LABEL_61:
      memcpy(v24, v22, v23);
      v24 = v61;
      goto LABEL_22;
    }
LABEL_97:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v23 == 1 )
  {
    LOBYTE(v63[0]) = *v22;
    v24 = v63;
    goto LABEL_22;
  }
  v24 = v63;
  if ( v23 )
    goto LABEL_61;
LABEL_22:
  v62 = v23;
  *((_BYTE *)v24 + v23) = 0;
  v25 = v67;
  v26 = *(unsigned __int8 *)v67;
  *(_BYTE *)v67 = v26 + 1;
  v27 = (unsigned __int8)v26;
  v28 = 4 * (v26 + 3);
  v29 = &v25[v28];
  v30 = (_BYTE *)v25[v28];
  if ( v61 == v63 )
  {
    v42 = v62;
    if ( v62 )
    {
      if ( v62 == 1 )
      {
        *v30 = v63[0];
        v42 = 1;
      }
      else
      {
        memcpy(v30, v61, v62);
        v42 = v62;
      }
      v30 = (_BYTE *)*v29;
    }
    v29[1] = v42;
    v30[v42] = 0;
    v30 = v61;
    goto LABEL_26;
  }
  if ( v30 == (_BYTE *)&v25[v28 + 2] )
  {
    *v29 = v61;
    v29[1] = v62;
    v29[2] = v63[0];
    goto LABEL_75;
  }
  v31 = v25[4 * v27 + 14];
  *v29 = v61;
  v29[1] = v62;
  v29[2] = v63[0];
  if ( !v30 )
  {
LABEL_75:
    v30 = v63;
    v61 = v63;
    goto LABEL_26;
  }
  v61 = v30;
  v63[0] = v31;
LABEL_26:
  *v30 = 0;
  if ( v61 != v63 )
    operator delete(v61);
  if ( (_BYTE)v72 )
  {
    sub_FC7790(v69, (__int64 *)&v67, SHIBYTE(v72));
    v69 = 0;
    v72 = 0;
  }
  if ( v70 != &v71 )
    operator delete(v70);
  v32 = (void **)v67;
  if ( v67 )
  {
    v33 = v68;
    if ( v68 )
    {
      if ( (unsigned __int64)v67 < v68 || (unsigned __int64)v67 > v68 + 14848 )
      {
        v34 = *((void ***)v67 + 66);
        v35 = &v34[8 * (unsigned __int64)*((unsigned int *)v67 + 134)];
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
                goto LABEL_38;
            }
          }
          while ( v34 != v35 );
LABEL_38:
          v35 = (void **)v32[66];
        }
        if ( v35 != v32 + 68 )
          free(v35);
        v37 = (void **)v32[52];
        v38 = v32 + 52;
        if ( v37 != v32 + 54 )
          free(v37);
        v39 = v32 + 12;
        do
        {
          while ( 1 )
          {
            v38 -= 4;
            if ( *v38 == v38 + 2 )
              break;
            operator delete(*v38);
            if ( v39 == v38 )
              goto LABEL_46;
          }
        }
        while ( v39 != v38 );
LABEL_46:
        operator delete(v32, 0x3A0u);
      }
      else
      {
        v43 = *(unsigned int *)(v68 + 14976);
        *(_DWORD *)(v68 + 14976) = v43 + 1;
        *(_QWORD *)(v33 + 8 * v43 + 14848) = v32;
      }
    }
  }
  v40 = *v8;
  *a1 = nullptr;
  (*(void (__fastcall **)(__int64 *))(v40 + 8))(v8);
  return a1;
}
