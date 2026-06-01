void __fastcall sub_13B49B0(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rax
  char *v9; // rsi
  unsigned __int8 *v10; // r12
  char *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // r12
  _BYTE *v15; // rsi
  __int64 v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void **v22; // r15
  _BYTE *v23; // rdi
  __int64 v24; // rax
  void **v25; // r14
  unsigned __int64 v26; // rax
  void **v27; // r15
  void **v28; // r12
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // r12
  void **v32; // r15
  size_t v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  void *v41; // rdi
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rdx
  __int64 v47; // r15
  void *v48; // rdi
  char *src; // [rsp+8h] [rbp-F0h]
  char *srca; // [rsp+8h] [rbp-F0h]
  __int64 v51; // [rsp+10h] [rbp-E8h]
  __int64 v52; // [rsp+10h] [rbp-E8h]
  __int64 v53; // [rsp+18h] [rbp-E0h]
  __int64 v54; // [rsp+28h] [rbp-D0h] BYREF
  void *v55; // [rsp+30h] [rbp-C8h] BYREF
  size_t n; // [rsp+38h] [rbp-C0h]
  _BYTE v57[16]; // [rsp+40h] [rbp-B8h] BYREF
  void *v58; // [rsp+50h] [rbp-A8h]
  size_t v59; // [rsp+58h] [rbp-A0h]
  _QWORD v60[2]; // [rsp+60h] [rbp-98h] BYREF
  void *v61; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v62; // [rsp+78h] [rbp-80h]
  __int64 v63; // [rsp+80h] [rbp-78h]
  void *v64; // [rsp+90h] [rbp-68h]
  __int64 v65; // [rsp+A0h] [rbp-58h] BYREF
  __int16 v66; // [rsp+B0h] [rbp-48h]

  sub_13B4150(
    &v54,
    *(_BYTE *)(a2 + 40),
    *(_DWORD *)(a2 + 44),
    a3,
    *(_BYTE **)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    a4,
    a5,
    *(_BYTE **)(a2 + 56),
    *(_QWORD *)(a2 + 64),
    *(_DWORD *)(a2 + 88),
    *(_DWORD *)(a2 + 92));
  v57[0] = 0;
  n = 0;
  v55 = v57;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v54 + 16LL))(v54, &v55) )
    goto LABEL_2;
  sub_FC70B0((__int64)&v61, a1, *(_DWORD *)(a2 + 48), 770);
  v10 = (unsigned __int8 *)v61;
  v11 = "regex";
  if ( !*(_BYTE *)(a2 + 40) )
    v11 = "string";
  if ( !v61 )
  {
    v42 = v62;
    v43 = *(_DWORD *)(v62 + 14976);
    if ( v43 )
    {
      v44 = (unsigned int)(v43 - 1);
      *(_DWORD *)(v62 + 14976) = v44;
      v10 = *(unsigned __int8 **)(v42 + 8 * v44 + 14848);
      v45 = *((unsigned int *)v10 + 134);
      v46 = *((_QWORD *)v10 + 66);
      *v10 = 0;
      *((_DWORD *)v10 + 106) = 0;
      v47 = v46 + (v45 << 6);
      while ( v46 != v47 )
      {
        while ( 1 )
        {
          v47 -= 64;
          v48 = *(void **)(v47 + 24);
          if ( v48 == (void *)(v47 + 40) )
            break;
          v52 = v46;
          src = v11;
          operator delete(v48);
          v46 = v52;
          v11 = src;
          if ( v52 == v47 )
            goto LABEL_73;
        }
      }
LABEL_73:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      srca = v11;
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
      v11 = srca;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v61 = v10;
  }
  v10[*v10 + 1] = 1;
  v12 = v61;
  v13 = *(unsigned __int8 *)v61;
  *(_BYTE *)v61 = v13 + 1;
  v14 = (unsigned __int8 *)v61;
  v15 = v55;
  v16 = n;
  v12[v13 + 2] = v11;
  if ( !v14 )
  {
    v35 = v62;
    v36 = *(_DWORD *)(v62 + 14976);
    if ( v36 )
    {
      v37 = (unsigned int)(v36 - 1);
      *(_DWORD *)(v62 + 14976) = v37;
      v14 = *(unsigned __int8 **)(v35 + 8 * v37 + 14848);
      v38 = *((unsigned int *)v14 + 134);
      v39 = *((_QWORD *)v14 + 66);
      *v14 = 0;
      *((_DWORD *)v14 + 106) = 0;
      v40 = v39 + (v38 << 6);
      while ( v39 != v40 )
      {
        while ( 1 )
        {
          v40 -= 64;
          v41 = *(void **)(v40 + 24);
          if ( v41 == (void *)(v40 + 40) )
            break;
          v53 = v39;
          v51 = v40;
          operator delete(v41);
          v40 = v51;
          v39 = v53;
          if ( v53 == v51 )
            goto LABEL_67;
        }
      }
LABEL_67:
      *((_DWORD *)v14 + 134) = 0;
    }
    else
    {
      v14 = (unsigned __int8 *)operator new(0x3A0u);
      *v14 = 0;
      *((_QWORD *)v14 + 12) = v14 + 112;
      *((_QWORD *)v14 + 16) = v14 + 144;
      *((_QWORD *)v14 + 20) = v14 + 176;
      *((_QWORD *)v14 + 24) = v14 + 208;
      *((_QWORD *)v14 + 28) = v14 + 240;
      *((_QWORD *)v14 + 32) = v14 + 272;
      *((_QWORD *)v14 + 36) = v14 + 304;
      *((_QWORD *)v14 + 40) = v14 + 336;
      *((_QWORD *)v14 + 44) = v14 + 368;
      *((_QWORD *)v14 + 48) = v14 + 400;
      *((_QWORD *)v14 + 52) = v14 + 432;
      *((_QWORD *)v14 + 13) = 0;
      v14[112] = 0;
      *((_QWORD *)v14 + 17) = 0;
      v14[144] = 0;
      *((_QWORD *)v14 + 21) = 0;
      v14[176] = 0;
      *((_QWORD *)v14 + 25) = 0;
      v14[208] = 0;
      *((_QWORD *)v14 + 29) = 0;
      v14[240] = 0;
      *((_QWORD *)v14 + 33) = 0;
      v14[272] = 0;
      *((_QWORD *)v14 + 37) = 0;
      v14[304] = 0;
      *((_QWORD *)v14 + 41) = 0;
      v14[336] = 0;
      *((_QWORD *)v14 + 45) = 0;
      v14[368] = 0;
      *((_QWORD *)v14 + 49) = 0;
      v14[400] = 0;
      *((_QWORD *)v14 + 53) = 0x800000000LL;
      *((_QWORD *)v14 + 66) = v14 + 544;
      *((_QWORD *)v14 + 67) = 0x600000000LL;
    }
    v61 = v14;
  }
  v14[*v14 + 1] = 0;
  v58 = v60;
  if ( &v15[v16] && !v15 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v16 > 0xF )
  {
    if ( v16 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v17 = (_QWORD *)operator new(v16 + 1);
    v60[0] = v16;
    v58 = v17;
LABEL_52:
    memcpy(v17, v15, v16);
    v17 = v58;
    goto LABEL_18;
  }
  if ( v16 == 1 )
  {
    LOBYTE(v60[0]) = *v15;
    v17 = v60;
    goto LABEL_18;
  }
  v17 = v60;
  if ( v16 )
    goto LABEL_52;
LABEL_18:
  v59 = v16;
  *((_BYTE *)v17 + v16) = 0;
  v18 = v61;
  v19 = *(unsigned __int8 *)v61;
  *(_BYTE *)v61 = v19 + 1;
  v20 = (unsigned __int8)v19;
  v21 = 4 * (v19 + 3);
  v22 = (void **)&v18[v21];
  v23 = (_BYTE *)v18[v21];
  if ( v58 == v60 )
  {
    v33 = v59;
    if ( v59 )
    {
      if ( v59 == 1 )
        *v23 = v60[0];
      else
        memcpy(v23, v58, v59);
      v33 = v59;
      v23 = *v22;
    }
    v22[1] = (void *)v33;
    v23[v33] = 0;
    v23 = v58;
  }
  else
  {
    if ( v23 == (_BYTE *)&v18[v21 + 2] )
    {
      *v22 = v58;
      v22[1] = (void *)v59;
      v22[2] = (void *)v60[0];
    }
    else
    {
      v24 = v18[4 * v20 + 14];
      *v22 = v58;
      v22[1] = (void *)v59;
      v22[2] = (void *)v60[0];
      if ( v23 )
      {
        v58 = v23;
        v60[0] = v24;
        goto LABEL_22;
      }
    }
    v23 = v60;
    v58 = v60;
  }
LABEL_22:
  v59 = 0;
  *v23 = 0;
  if ( v58 != v60 )
    operator delete(v58);
  if ( (_BYTE)v66 )
  {
    sub_FC7790(v63, (__int64 *)&v61, SHIBYTE(v66));
    v63 = 0;
    v66 = 0;
  }
  if ( v64 != &v65 )
    operator delete(v64);
  v25 = (void **)v61;
  if ( v61 )
  {
    v26 = v62;
    if ( v62 )
    {
      if ( (unsigned __int64)v61 < v62 || (unsigned __int64)v61 > v62 + 14848 )
      {
        v27 = *((void ***)v61 + 66);
        v28 = &v27[8 * (unsigned __int64)*((unsigned int *)v61 + 134)];
        if ( v27 != v28 )
        {
          do
          {
            while ( 1 )
            {
              v28 -= 8;
              v29 = (void **)v28[3];
              if ( v29 == v28 + 5 )
                break;
              operator delete(v29);
              if ( v27 == v28 )
                goto LABEL_34;
            }
          }
          while ( v27 != v28 );
LABEL_34:
          v28 = (void **)v25[66];
        }
        if ( v28 != v25 + 68 )
          free(v28);
        v30 = (void **)v25[52];
        if ( v30 != v25 + 54 )
          free(v30);
        v31 = v25 + 48;
        v32 = v25 + 8;
        do
        {
          while ( *v31 != v31 + 2 )
          {
            operator delete(*v31);
            v31 -= 4;
            if ( v32 == v31 )
              goto LABEL_42;
          }
          v31 -= 4;
        }
        while ( v32 != v31 );
LABEL_42:
        operator delete(v25, 0x3A0u);
      }
      else
      {
        v34 = *(unsigned int *)(v62 + 14976);
        *(_DWORD *)(v62 + 14976) = v34 + 1;
        *(_QWORD *)(v26 + 8 * v34 + 14848) = v25;
      }
    }
  }
LABEL_2:
  v6 = *(_QWORD *)a2;
  v7 = *(char **)(*(_QWORD *)a2 + 8LL);
  if ( v7 == *(char **)(*(_QWORD *)a2 + 16LL) )
  {
    sub_13B4710(v6, v7, &v54);
  }
  else
  {
    v8 = v54;
    v9 = v7 + 8;
    v54 = 0;
    *((_QWORD *)v9 - 1) = v8;
    *(_QWORD *)(v6 + 8) = v9;
  }
  if ( v55 != v57 )
    operator delete(v55);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
}
