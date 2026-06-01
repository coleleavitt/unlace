void __fastcall sub_154FF40(__int64 a1, unsigned int a2, int a3, char a4, unsigned __int8 a5)
{
  _QWORD *v6; // r15
  __int64 v7; // rbx
  size_t v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char *v12; // rcx
  _BYTE *v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // r8
  unsigned __int8 *v16; // rbx
  __int64 v17; // r15
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r15
  void **v22; // rcx
  _BYTE *v23; // rax
  _BYTE *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r12
  _QWORD *v27; // rdx
  __int64 v28; // rax
  void **v29; // r12
  __int64 v30; // rax
  void **v31; // r13
  void **v32; // rbx
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rbx
  void **v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rbx
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r15
  size_t v48; // rdx
  size_t v49; // r15
  void *v50; // rdi
  int v51; // edx
  char *v52; // rdi
  size_t v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rbx
  int v57; // eax
  char *v58; // rdi
  int v59; // edx
  void **v60; // rdi
  size_t v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r15
  void *v65; // rdi
  __int64 v66; // r15
  int v67; // eax
  void *v68; // rdi
  size_t n; // [rsp+8h] [rbp-130h]
  void *src; // [rsp+10h] [rbp-128h]
  void **v71; // [rsp+18h] [rbp-120h]
  void *v72; // [rsp+28h] [rbp-110h] BYREF
  void *v73; // [rsp+30h] [rbp-108h] BYREF
  char v74; // [rsp+38h] [rbp-100h]
  __int64 v75; // [rsp+3Ch] [rbp-FCh]
  char v76; // [rsp+44h] [rbp-F4h]
  void *v77; // [rsp+48h] [rbp-F0h]
  __int64 v78; // [rsp+50h] [rbp-E8h]
  char v79[24]; // [rsp+58h] [rbp-E0h] BYREF
  _DWORD v80[2]; // [rsp+70h] [rbp-C8h] BYREF
  char v81; // [rsp+78h] [rbp-C0h]
  __int64 v82; // [rsp+7Ch] [rbp-BCh]
  char v83; // [rsp+84h] [rbp-B4h]
  void *v84; // [rsp+88h] [rbp-B0h]
  __int64 v85; // [rsp+90h] [rbp-A8h]
  _BYTE v86[24]; // [rsp+98h] [rbp-A0h] BYREF
  void *v87; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v88; // [rsp+B8h] [rbp-80h]
  void *v89; // [rsp+D0h] [rbp-68h]
  _WORD v90[4]; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v91; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v92; // [rsp+F0h] [rbp-48h]

  v74 = 0;
  v76 = 0;
  v73 = nullptr;
  v75 = 0;
  v77 = v79;
  v78 = 0;
  v79[0] = 0;
  v79[16] = 0;
  if ( !a4 )
  {
    LODWORD(v87) = a3;
    HIDWORD(v87) = a3;
    *(_QWORD *)((char *)&v88 + 4) = 0;
    BYTE12(v88) = 0;
    LOBYTE(v88) = 0;
    memset(v90, 46, 3);
    WORD2(v82) = 11822;
    strcpy(v79, "...");
    BYTE6(v82) = 46;
    v73 = v87;
    v78 = 3;
  }
  sub_1564820(&v87, a1, a2, 1727);
  v82 = 0;
  v83 = 0;
  v84 = v86;
  v85 = 0;
  v86[0] = 0;
  v86[16] = 0;
  v80[0] = a2;
  v80[1] = a2;
  v81 = 1;
  if ( a2 )
  {
    v6 = v87;
    if ( v87 )
    {
      v7 = *((unsigned int *)v87 + 134);
      v8 = *((_QWORD *)v87 + 66);
      v9 = *((unsigned int *)v87 + 135);
      v10 = v7 + 1;
      v11 = v8 + (v7 << 6);
    }
    else
    {
      v40 = v88;
      v41 = *(_DWORD *)(v88 + 14976);
      if ( v41 )
      {
        v42 = (unsigned int)(v41 - 1);
        *(_DWORD *)(v88 + 14976) = v42;
        v6 = *(_QWORD **)(v40 + 8 * v42 + 14848);
        v43 = *((unsigned int *)v6 + 134);
        *(_BYTE *)v6 = 0;
        v44 = v6[66];
        *((_DWORD *)v6 + 106) = 0;
        v8 = v44 + (v43 << 6);
        if ( v44 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 64LL;
              v45 = *(void **)(v8 + 24);
              if ( v45 == (void *)(v8 + 40) )
                break;
              n = v8;
              operator delete(v45);
              if ( v44 == v8 )
                goto LABEL_70;
            }
          }
          while ( v44 != v8 );
LABEL_70:
          v8 = v6[66];
        }
        *((_DWORD *)v6 + 134) = 0;
        v9 = *((unsigned int *)v6 + 135);
      }
      else
      {
        v6 = (_QWORD *)operator new(0x3A0u);
        *(_BYTE *)v6 = 0;
        v6[12] = v6 + 14;
        v8 = (size_t)(v6 + 68);
        v6[16] = v6 + 18;
        v6[20] = v6 + 22;
        v6[24] = v6 + 26;
        v6[28] = v6 + 30;
        v6[32] = v6 + 34;
        v6[36] = v6 + 38;
        v6[40] = v6 + 42;
        v6[44] = v6 + 46;
        v6[48] = v6 + 50;
        v6[52] = v6 + 54;
        v6[13] = 0;
        *((_BYTE *)v6 + 112) = 0;
        v6[17] = 0;
        *((_BYTE *)v6 + 144) = 0;
        v6[21] = 0;
        *((_BYTE *)v6 + 176) = 0;
        v6[25] = 0;
        *((_BYTE *)v6 + 208) = 0;
        v6[29] = 0;
        *((_BYTE *)v6 + 240) = 0;
        v6[33] = 0;
        *((_BYTE *)v6 + 272) = 0;
        v6[37] = 0;
        *((_BYTE *)v6 + 304) = 0;
        v6[41] = 0;
        *((_BYTE *)v6 + 336) = 0;
        v6[45] = 0;
        *((_BYTE *)v6 + 368) = 0;
        v6[49] = 0;
        *((_BYTE *)v6 + 400) = 0;
        v6[53] = 0x800000000LL;
        v6[66] = v6 + 68;
        v6[67] = 0x600000000LL;
        v9 = 6;
      }
      v87 = v6;
      v11 = v8;
      v10 = 1;
    }
    v12 = (char *)v80;
    if ( v10 > v9 )
    {
      if ( v8 > (unsigned __int64)v80 || v11 <= (unsigned __int64)v80 )
      {
        src = v6 + 68;
        n = (size_t)(v6 + 66);
        v56 = sub_2237400(v6 + 66, v6 + 68, v10, 64, &v72);
        sub_9EF810(v6 + 66, v56);
        v57 = (int)v72;
        v58 = (char *)v6[66];
        if ( v58 == (char *)(v6 + 68) )
        {
          v6[66] = v56;
        }
        else
        {
          n = (size_t)v72;
          free(v58);
          v6[66] = v56;
          v57 = n;
        }
        *((_DWORD *)v6 + 135) = v57;
        v12 = (char *)v80;
        v11 = ((unsigned __int64)*((unsigned int *)v6 + 134) << 6) + v56;
      }
      else
      {
        v71 = (void **)(v6 + 68);
        src = v6 + 66;
        n = sub_2237400(v6 + 66, v6 + 68, v10, 64, &v72);
        sub_9EF810(v6 + 66, n);
        v51 = (int)v72;
        v52 = (char *)v6[66];
        v53 = n;
        if ( v52 != (char *)(v6 + 68) )
        {
          src = v72;
          free(v52);
          v53 = n;
          v51 = (int)src;
        }
        v6[66] = n;
        *((_DWORD *)v6 + 135) = v51;
        v12 = (char *)v80 + v53 - v8;
        v11 = v53 + ((unsigned __int64)*((unsigned int *)v6 + 134) << 6);
      }
    }
    *(_QWORD *)v11 = *(_QWORD *)v12;
    *(_DWORD *)(v11 + 8) = *((_DWORD *)v12 + 2);
    *(_QWORD *)(v11 + 12) = *(_QWORD *)(v12 + 12);
    *(_DWORD *)(v11 + 20) = *((_DWORD *)v12 + 5);
    v13 = (_BYTE *)(v11 + 40);
    *(_QWORD *)(v11 + 24) = v11 + 40;
    v14 = *((_BYTE **)v12 + 3);
    v15 = *((_QWORD *)v12 + 4);
    if ( &v14[v15] && !v14 )
      goto LABEL_114;
    if ( (unsigned __int64)v15 > 0xF )
    {
      if ( v15 < 0 )
        goto LABEL_113;
      v71 = (void **)v12;
      src = v14;
      n = v15;
      v13 = (_BYTE *)operator new(v15 + 1);
      v15 = n;
      v14 = src;
      *(_QWORD *)(v11 + 24) = v13;
      v12 = (char *)v71;
      *(_QWORD *)(v11 + 40) = v15;
    }
    else
    {
      if ( v15 == 1 )
      {
        *(_BYTE *)(v11 + 40) = *v14;
LABEL_12:
        *(_QWORD *)(v11 + 32) = v15;
        v13[v15] = 0;
        *(_BYTE *)(v11 + 56) = v12[56];
        ++*((_DWORD *)v6 + 134);
        goto LABEL_13;
      }
      if ( !v15 )
        goto LABEL_12;
    }
    src = v12;
    n = v15;
    memcpy(v13, v14, v15);
    v13 = *(_BYTE **)(v11 + 24);
    v12 = (char *)src;
    v15 = n;
    goto LABEL_12;
  }
LABEL_13:
  v16 = (unsigned __int8 *)v87;
  if ( (_DWORD)v73 && HIDWORD(v73) )
  {
    if ( v87 )
    {
      v17 = *((unsigned int *)v87 + 134);
      v18 = *((_QWORD *)v87 + 66);
      v19 = *((unsigned int *)v87 + 135);
      v20 = v17 + 1;
      v21 = v18 + (v17 << 6);
    }
    else
    {
      v54 = v88;
      v55 = *(_DWORD *)(v88 + 14976);
      if ( v55 )
      {
        v62 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v88 + 14976) = v62;
        v16 = *(unsigned __int8 **)(v54 + 8 * v62 + 14848);
        v63 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v64 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v18 = v64 + (v63 << 6);
        if ( v64 != v18 )
        {
          do
          {
            while ( 1 )
            {
              v18 -= 64LL;
              v65 = *(void **)(v18 + 24);
              if ( v65 == (void *)(v18 + 40) )
                break;
              n = v18;
              operator delete(v65);
              v18 = n;
              if ( v64 == n )
                goto LABEL_102;
            }
          }
          while ( v64 != v18 );
LABEL_102:
          v18 = *((_QWORD *)v16 + 66);
        }
        *((_DWORD *)v16 + 134) = 0;
        v19 = *((unsigned int *)v16 + 135);
      }
      else
      {
        v16 = (unsigned __int8 *)operator new(0x3A0u);
        *v16 = 0;
        *((_QWORD *)v16 + 12) = v16 + 112;
        v18 = (unsigned __int64)(v16 + 544);
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
        v19 = 6;
      }
      v87 = v16;
      v21 = v18;
      v20 = 1;
    }
    v22 = &v73;
    if ( v19 < v20 )
    {
      if ( v18 > (unsigned __int64)&v73 || v21 <= (unsigned __int64)&v73 )
      {
        src = v16 + 544;
        n = (size_t)(v16 + 528);
        v66 = sub_2237400(v16 + 528, v16 + 544, v20, 64, &v72);
        sub_9EF810((__int64 *)n, v66);
        v67 = (int)v72;
        v68 = *((void **)v16 + 66);
        if ( src == v68 )
        {
          *((_QWORD *)v16 + 66) = v66;
        }
        else
        {
          n = (size_t)v72;
          free(v68);
          *((_QWORD *)v16 + 66) = v66;
          v67 = n;
        }
        *((_DWORD *)v16 + 135) = v67;
        v22 = &v73;
        v21 = ((unsigned __int64)*((unsigned int *)v16 + 134) << 6) + v66;
      }
      else
      {
        v71 = (void **)(v16 + 544);
        src = v16 + 528;
        n = sub_2237400(v16 + 528, v16 + 544, v20, 64, &v72);
        sub_9EF810((__int64 *)src, n);
        v59 = (int)v72;
        v60 = *((void ***)v16 + 66);
        v61 = n;
        if ( v71 != v60 )
        {
          src = v72;
          free(v60);
          v61 = n;
          v59 = (int)src;
        }
        *((_QWORD *)v16 + 66) = n;
        *((_DWORD *)v16 + 135) = v59;
        v22 = (void **)((char *)&v73 + v61 - v18);
        v21 = v61 + ((unsigned __int64)*((unsigned int *)v16 + 134) << 6);
      }
    }
    *(_QWORD *)v21 = *v22;
    *(_DWORD *)(v21 + 8) = *((_DWORD *)v22 + 2);
    *(_QWORD *)(v21 + 12) = *(void **)((char *)v22 + 12);
    *(_DWORD *)(v21 + 20) = *((_DWORD *)v22 + 5);
    v23 = (_BYTE *)(v21 + 40);
    *(_QWORD *)(v21 + 24) = v21 + 40;
    v24 = v22[3];
    v25 = (__int64)v22[4];
    if ( !&v24[v25] || v24 )
    {
      if ( (unsigned __int64)v25 <= 0xF )
      {
        if ( v25 == 1 )
        {
          *(_BYTE *)(v21 + 40) = *v24;
LABEL_23:
          *(_QWORD *)(v21 + 32) = v25;
          v23[v25] = 0;
          *(_BYTE *)(v21 + 56) = *((_BYTE *)v22 + 56);
          ++*((_DWORD *)v16 + 134);
          v16 = (unsigned __int8 *)v87;
          goto LABEL_24;
        }
        if ( !v25 )
          goto LABEL_23;
LABEL_59:
        src = v22;
        n = v25;
        memcpy(v23, v24, v25);
        v23 = *(_BYTE **)(v21 + 24);
        v22 = (void **)src;
        v25 = n;
        goto LABEL_23;
      }
      v71 = v22;
      src = v24;
      if ( v25 >= 0 )
      {
        n = v25;
        v23 = (_BYTE *)operator new(v25 + 1);
        v25 = n;
        v24 = src;
        *(_QWORD *)(v21 + 24) = v23;
        v22 = v71;
        *(_QWORD *)(v21 + 40) = v25;
        goto LABEL_59;
      }
LABEL_113:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_114:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
LABEL_24:
  v26 = a5 ^ 1u;
  if ( !v16 )
  {
    v38 = v88;
    v39 = *(_DWORD *)(v88 + 14976);
    if ( v39 )
    {
      v46 = (unsigned int)(v39 - 1);
      *(_DWORD *)(v88 + 14976) = v46;
      v16 = *(unsigned __int8 **)(v38 + 8 * v46 + 14848);
      v47 = *((unsigned int *)v16 + 134);
      *v16 = 0;
      v48 = *((_QWORD *)v16 + 66);
      *((_DWORD *)v16 + 106) = 0;
      v49 = v48 + (v47 << 6);
      while ( v48 != v49 )
      {
        while ( 1 )
        {
          v49 -= 64LL;
          v50 = *(void **)(v49 + 24);
          if ( v50 == (void *)(v49 + 40) )
            break;
          n = v48;
          operator delete(v50);
          v48 = n;
          if ( n == v49 )
            goto LABEL_76;
        }
      }
LABEL_76:
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
    v87 = v16;
  }
  v16[*v16 + 1] = 2;
  v27 = v87;
  v28 = *(unsigned __int8 *)v87;
  *(_BYTE *)v87 = v28 + 1;
  v27[v28 + 2] = v26;
  if ( v84 != v86 )
    operator delete(v84);
  if ( (_BYTE)v92 )
  {
    sub_FC7790(*((__int64 *)&v88 + 1), (__int64 *)&v87, SHIBYTE(v92));
    *((_QWORD *)&v88 + 1) = 0;
    v92 = 0;
  }
  if ( v89 != &v91 )
    operator delete(v89);
  v29 = (void **)v87;
  if ( v87 )
  {
    v30 = v88;
    if ( (_QWORD)v88 )
    {
      if ( (unsigned __int64)v87 < (unsigned __int64)v88 || (unsigned __int64)v87 > (__int64)v88 + 14848 )
      {
        v31 = *((void ***)v87 + 66);
        v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v87 + 134)];
        if ( v31 != v32 )
        {
          do
          {
            while ( 1 )
            {
              v32 -= 8;
              v33 = (void **)v32[3];
              if ( v33 == v32 + 5 )
                break;
              operator delete(v33);
              if ( v31 == v32 )
                goto LABEL_37;
            }
          }
          while ( v31 != v32 );
LABEL_37:
          v32 = (void **)v29[66];
        }
        if ( v32 != v29 + 68 )
          free(v32);
        v34 = (void **)v29[52];
        v35 = v29 + 52;
        if ( v34 != v29 + 54 )
          free(v34);
        v36 = v29 + 12;
        do
        {
          while ( 1 )
          {
            v35 -= 4;
            if ( *v35 == v35 + 2 )
              break;
            operator delete(*v35);
            if ( v36 == v35 )
              goto LABEL_45;
          }
        }
        while ( v36 != v35 );
LABEL_45:
        operator delete(v29, 0x3A0u);
      }
      else
      {
        v37 = *(unsigned int *)(v88 + 14976);
        *(_DWORD *)(v88 + 14976) = v37 + 1;
        *(_QWORD *)(v30 + 8 * v37 + 14848) = v29;
      }
    }
  }
  if ( v77 != v79 )
    operator delete(v77);
}
