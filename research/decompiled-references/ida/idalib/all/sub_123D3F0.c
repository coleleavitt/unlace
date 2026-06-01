void __fastcall sub_123D3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 *p_src; // r12
  __int64 *v18; // r14
  __int64 v19; // r15
  __int64 v20; // r13
  size_t v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // r15
  unsigned __int8 *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  char *v29; // r15
  _BYTE *v30; // rdi
  __int64 v31; // rax
  _BYTE *v32; // r15
  unsigned __int8 *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  char *v38; // r15
  _BYTE *v39; // rdi
  __int64 v40; // rax
  void **v41; // r15
  unsigned __int64 v42; // rax
  void **v43; // rax
  void **v44; // r13
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // r13
  void **v48; // rax
  size_t v49; // rdx
  size_t v50; // rdx
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  int v53; // eax
  unsigned __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // r13
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rbp
  unsigned __int8 *v64; // r12
  void *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // r13
  __int64 v71; // rbx
  __int64 v72; // r14
  __int64 v73; // rbp
  unsigned __int8 *v74; // r12
  void *v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  unsigned __int64 v78; // rbx
  _QWORD *i; // [rsp+0h] [rbp-108h]
  void *v80; // [rsp+10h] [rbp-F8h]
  __int64 v81; // [rsp+10h] [rbp-F8h]
  void **v82; // [rsp+10h] [rbp-F8h]
  void **v83; // [rsp+10h] [rbp-F8h]
  __int64 v84; // [rsp+18h] [rbp-F0h]
  __int64 v85; // [rsp+20h] [rbp-E8h]
  __int64 *v86; // [rsp+30h] [rbp-D8h]
  __int64 *v87; // [rsp+30h] [rbp-D8h]
  __int64 *v88; // [rsp+38h] [rbp-D0h]
  __int64 *v89; // [rsp+38h] [rbp-D0h]
  void *v90[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B8h] BYREF
  void *v92; // [rsp+60h] [rbp-A8h] BYREF
  size_t n; // [rsp+68h] [rbp-A0h]
  __int64 src; // [rsp+70h] [rbp-98h] BYREF
  void *v95; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v96; // [rsp+88h] [rbp-80h]
  __int64 v97; // [rsp+90h] [rbp-78h]
  void *v98; // [rsp+A0h] [rbp-68h]
  __int16 v99; // [rsp+C0h] [rbp-48h]

  v6 = a1;
  sub_1176DD0(a1, a2, a3, a5);
  v8 = *(unsigned int *)(a1 + 1160);
  *(_QWORD *)(a1 + 5032) = a4;
  *(_QWORD *)a1 = off_2C3BA90;
  v9 = v8 + 1;
  v10 = *(_QWORD *)(a1 + 8) + 104LL;
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1164) )
  {
    v76 = *(_QWORD *)(a1 + 1152);
    v77 = a1 + 1152;
    if ( v76 > v10 || v10 >= v76 + 32 * v8 )
    {
      sub_A8C1F0(v77, v9);
      v11 = *(_QWORD *)(v6 + 1152);
      v8 = *(unsigned int *)(v6 + 1160);
    }
    else
    {
      v78 = v10 - v76;
      sub_A8C1F0(v77, v9);
      v11 = *(_QWORD *)(v6 + 1152);
      v8 = *(unsigned int *)(v6 + 1160);
      v10 = v11 + v78;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 1152);
  }
  v12 = (_QWORD *)(v11 + 32 * v8);
  *v12 = v12 + 2;
  sub_123B090(v12, *(_BYTE **)v10, *(_QWORD *)v10 + *(_QWORD *)(v10 + 8));
  ++*(_DWORD *)(v6 + 1160);
  if ( (unsigned __int8)sub_21B7850(a5, 826, 1165, 1) )
  {
    v13 = **(_QWORD **)(v6 + 8);
    LODWORD(v95) = 1781;
    v84 = v13;
    v14 = sub_21B6DA0(a5, &v95, 1);
    v15 = *(_QWORD *)(a5 + 8);
    v16 = (_QWORD *)(v15 + 8LL * (unsigned int)v14);
    for ( i = (_QWORD *)(v15 + 8 * HIDWORD(v14)); i != v16; ++v16 )
    {
      if ( *v16 && (unsigned __int8)sub_21B9810(*v16, 1781) )
        break;
    }
    v85 = a5;
    p_src = &src;
    v18 = (__int64 *)&v95;
    while ( 1 )
    {
      if ( i == v16 )
        return;
      v19 = *v16;
      v20 = **(_QWORD **)(*v16 + 48LL);
      v21 = 0;
      if ( v20 )
        v21 = strlen(**(const char ***)(*v16 + 48LL));
      if ( sub_1001430(v20, v21, 0) != 1 || v22 )
        break;
LABEL_49:
      if ( ++v16 == i )
        return;
      while ( !*v16 || !(unsigned __int8)sub_21B9810(*v16, 1781) )
      {
        if ( i == ++v16 )
          return;
      }
    }
    sub_FC70B0((__int64)v18, v84, 0, 609);
    sub_21B5FF0(v90, v19, v85);
    v23 = v90[0];
    v80 = v90[1];
    v24 = (unsigned __int8 *)v95;
    if ( !v95 )
    {
      v54 = v96;
      v55 = *(_DWORD *)(v96 + 14976);
      if ( v55 )
      {
        v66 = (unsigned int)(v55 - 1);
        *(_DWORD *)(v96 + 14976) = v66;
        v24 = *(unsigned __int8 **)(v54 + 8 * v66 + 14848);
        v67 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v68 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v69 = v68 + (v67 << 6);
        if ( v68 != v69 )
        {
          v70 = v16;
          v71 = v69;
          v87 = v18;
          v72 = v6;
          v73 = v68;
          v89 = p_src;
          v74 = v24;
          do
          {
            while ( 1 )
            {
              v71 -= 64;
              v75 = *(void **)(v71 + 24);
              if ( v75 == (void *)(v71 + 40) )
                break;
              operator delete(v75);
              if ( v73 == v71 )
                goto LABEL_94;
            }
          }
          while ( v73 != v71 );
LABEL_94:
          v24 = v74;
          v16 = v70;
          v6 = v72;
          v18 = v87;
          p_src = v89;
        }
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      v95 = v24;
    }
    v24[*v24 + 1] = 0;
    v92 = p_src;
    sub_123B150(&v92, v23, (__int64)v80 + (_QWORD)v23);
    v25 = v95;
    v26 = *(unsigned __int8 *)v95;
    *(_BYTE *)v95 = v26 + 1;
    v27 = (unsigned __int8)v26;
    v28 = 4 * (v26 + 3);
    v29 = (char *)&v25[v28];
    v30 = (_BYTE *)v25[v28];
    if ( v92 == p_src )
    {
      v50 = n;
      if ( n )
      {
        if ( n == 1 )
          *v30 = src;
        else
          memcpy(v30, p_src, n);
        v50 = n;
        v30 = *(_BYTE **)v29;
      }
      *((_QWORD *)v29 + 1) = v50;
      v30[v50] = 0;
      v30 = v92;
    }
    else
    {
      if ( v30 == (_BYTE *)&v25[v28 + 2] )
      {
        *(_QWORD *)v29 = v92;
        *((_QWORD *)v29 + 1) = n;
        *((_QWORD *)v29 + 2) = src;
      }
      else
      {
        v31 = v25[4 * v27 + 14];
        *(_QWORD *)v29 = v92;
        *((_QWORD *)v29 + 1) = n;
        *((_QWORD *)v29 + 2) = src;
        if ( v30 )
        {
          v92 = v30;
          src = v31;
          goto LABEL_19;
        }
      }
      v92 = p_src;
      v30 = p_src;
    }
LABEL_19:
    n = 0;
    *v30 = 0;
    if ( v92 != p_src )
      operator delete(v92);
    v32 = *(_BYTE **)(v6 + 16);
    v81 = *(_QWORD *)(v6 + 24);
    v33 = (unsigned __int8 *)v95;
    if ( !v95 )
    {
      v52 = v96;
      v53 = *(_DWORD *)(v96 + 14976);
      if ( v53 )
      {
        v56 = (unsigned int)(v53 - 1);
        *(_DWORD *)(v96 + 14976) = v56;
        v33 = *(unsigned __int8 **)(v52 + 8 * v56 + 14848);
        v57 = *((unsigned int *)v33 + 134);
        *v33 = 0;
        v58 = *((_QWORD *)v33 + 66);
        *((_DWORD *)v33 + 106) = 0;
        v59 = v58 + (v57 << 6);
        if ( v58 != v59 )
        {
          v60 = v16;
          v61 = v59;
          v86 = v18;
          v62 = v6;
          v63 = v58;
          v88 = p_src;
          v64 = v33;
          do
          {
            while ( 1 )
            {
              v61 -= 64;
              v65 = *(void **)(v61 + 24);
              if ( v65 == (void *)(v61 + 40) )
                break;
              operator delete(v65);
              if ( v63 == v61 )
                goto LABEL_86;
            }
          }
          while ( v63 != v61 );
LABEL_86:
          v33 = v64;
          v16 = v60;
          v6 = v62;
          v18 = v86;
          p_src = v88;
        }
        *((_DWORD *)v33 + 134) = 0;
      }
      else
      {
        v33 = (unsigned __int8 *)operator new(0x3A0u);
        *v33 = 0;
        *((_QWORD *)v33 + 12) = v33 + 112;
        *((_QWORD *)v33 + 16) = v33 + 144;
        *((_QWORD *)v33 + 20) = v33 + 176;
        *((_QWORD *)v33 + 24) = v33 + 208;
        *((_QWORD *)v33 + 28) = v33 + 240;
        *((_QWORD *)v33 + 32) = v33 + 272;
        *((_QWORD *)v33 + 36) = v33 + 304;
        *((_QWORD *)v33 + 40) = v33 + 336;
        *((_QWORD *)v33 + 44) = v33 + 368;
        *((_QWORD *)v33 + 48) = v33 + 400;
        *((_QWORD *)v33 + 52) = v33 + 432;
        *((_QWORD *)v33 + 13) = 0;
        v33[112] = 0;
        *((_QWORD *)v33 + 17) = 0;
        v33[144] = 0;
        *((_QWORD *)v33 + 21) = 0;
        v33[176] = 0;
        *((_QWORD *)v33 + 25) = 0;
        v33[208] = 0;
        *((_QWORD *)v33 + 29) = 0;
        v33[240] = 0;
        *((_QWORD *)v33 + 33) = 0;
        v33[272] = 0;
        *((_QWORD *)v33 + 37) = 0;
        v33[304] = 0;
        *((_QWORD *)v33 + 41) = 0;
        v33[336] = 0;
        *((_QWORD *)v33 + 45) = 0;
        v33[368] = 0;
        *((_QWORD *)v33 + 49) = 0;
        v33[400] = 0;
        *((_QWORD *)v33 + 53) = 0x800000000LL;
        *((_QWORD *)v33 + 66) = v33 + 544;
        *((_QWORD *)v33 + 67) = 0x600000000LL;
      }
      v95 = v33;
    }
    v33[*v33 + 1] = 0;
    v92 = p_src;
    sub_123B150(&v92, v32, (__int64)&v32[v81]);
    v34 = v95;
    v35 = *(unsigned __int8 *)v95;
    *(_BYTE *)v95 = v35 + 1;
    v36 = (unsigned __int8)v35;
    v37 = 4 * (v35 + 3);
    v38 = (char *)&v34[v37];
    v39 = (_BYTE *)v34[v37];
    if ( v92 == p_src )
    {
      v49 = n;
      if ( n )
      {
        if ( n == 1 )
          *v39 = src;
        else
          memcpy(v39, p_src, n);
        v49 = n;
        v39 = *(_BYTE **)v38;
      }
      *((_QWORD *)v38 + 1) = v49;
      v39[v49] = 0;
      v39 = v92;
    }
    else
    {
      if ( v39 == (_BYTE *)&v34[v37 + 2] )
      {
        *(_QWORD *)v38 = v92;
        *((_QWORD *)v38 + 1) = n;
        *((_QWORD *)v38 + 2) = src;
      }
      else
      {
        v40 = v34[4 * v36 + 14];
        *(_QWORD *)v38 = v92;
        *((_QWORD *)v38 + 1) = n;
        *((_QWORD *)v38 + 2) = src;
        if ( v39 )
        {
          v92 = v39;
          src = v40;
          goto LABEL_26;
        }
      }
      v92 = p_src;
      v39 = p_src;
    }
LABEL_26:
    n = 0;
    *v39 = 0;
    if ( v92 != p_src )
      operator delete(v92);
    if ( v90[0] != &v91 )
      operator delete(v90[0]);
    if ( (_BYTE)v99 )
    {
      sub_FC7790(v97, v18, SHIBYTE(v99));
      v97 = 0;
      v99 = 0;
    }
    if ( v98 != v18 + 6 )
      operator delete(v98);
    v41 = (void **)v95;
    if ( v95 )
    {
      v42 = v96;
      if ( v96 )
      {
        if ( (unsigned __int64)v95 < v96 || (unsigned __int64)v95 > v96 + 14848 )
        {
          v43 = *((void ***)v95 + 66);
          v44 = &v43[8 * (unsigned __int64)*((unsigned int *)v95 + 134)];
          if ( v43 != v44 )
          {
            do
            {
              while ( 1 )
              {
                v44 -= 8;
                v45 = (void **)v44[3];
                if ( v45 == v44 + 5 )
                  break;
                v82 = v43;
                operator delete(v45);
                v43 = v82;
                if ( v82 == v44 )
                  goto LABEL_40;
              }
            }
            while ( v43 != v44 );
LABEL_40:
            v44 = (void **)v41[66];
          }
          if ( v44 != v41 + 68 )
            free(v44);
          v46 = (void **)v41[52];
          v47 = v41 + 52;
          if ( v46 != v41 + 54 )
            free(v46);
          v48 = v41 + 12;
          do
          {
            while ( 1 )
            {
              v47 -= 4;
              if ( *v47 == v47 + 2 )
                break;
              v83 = v48;
              operator delete(*v47);
              v48 = v83;
              if ( v47 == v83 )
                goto LABEL_48;
            }
          }
          while ( v47 != v48 );
LABEL_48:
          operator delete(v41, 0x3A0u);
        }
        else
        {
          v51 = *(unsigned int *)(v96 + 14976);
          *(_DWORD *)(v96 + 14976) = v51 + 1;
          *(_QWORD *)(v42 + 8 * v51 + 14848) = v41;
        }
      }
    }
    goto LABEL_49;
  }
}
