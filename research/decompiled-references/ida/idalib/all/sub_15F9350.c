void **__fastcall sub_15F9350(unsigned __int8 **a1, __int64 a2, unsigned __int8 *a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  int v5; // eax
  unsigned __int8 *v6; // rdx
  __int64 v7; // r15
  unsigned __int8 *i; // r14
  _BYTE *v10; // rsi
  signed __int64 v11; // rbx
  _QWORD *v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  void **v17; // rbx
  _BYTE *v18; // rdi
  __int64 v19; // rax
  unsigned __int8 v20; // bl
  void *v21; // rdx
  _BYTE *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rbp
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  size_t v35; // rdx
  __int64 v36; // rax
  void **result; // rax
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // r15
  unsigned __int64 v41; // rbp
  __int64 v42; // r14
  __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  _BYTE *v48; // rcx
  _BYTE *v49; // rax
  _BYTE *v50; // rsi
  signed __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r12
  void *v56; // rdi
  unsigned __int8 *v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rax
  void *v63; // rdi
  unsigned __int8 *v64; // rsi
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  void *v70; // rdi
  size_t v71; // rdx
  _BYTE *v72; // rdi
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r13
  unsigned __int64 v81; // r12
  __int64 v82; // rbp
  void *v83; // rdi
  unsigned __int64 v84; // rbp
  void *v85; // rdi
  int v86; // edx
  __int64 v87; // rax
  void *v88; // rdi
  int v89; // edx
  unsigned __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // [rsp+0h] [rbp-78h]
  __int64 v93; // [rsp+0h] [rbp-78h]
  signed __int64 v94; // [rsp+0h] [rbp-78h]
  signed __int64 v95; // [rsp+0h] [rbp-78h]
  _QWORD *v96; // [rsp+0h] [rbp-78h]
  __int64 v97; // [rsp+0h] [rbp-78h]
  __int64 v98; // [rsp+0h] [rbp-78h]
  _DWORD *srca; // [rsp+8h] [rbp-70h]
  _DWORD *srcb; // [rsp+8h] [rbp-70h]
  void *srcc; // [rsp+8h] [rbp-70h]
  _QWORD *srcd; // [rsp+8h] [rbp-70h]
  void *srce; // [rsp+8h] [rbp-70h]
  _QWORD *src; // [rsp+8h] [rbp-70h]
  int srcf; // [rsp+8h] [rbp-70h]
  int srcg; // [rsp+8h] [rbp-70h]
  __int64 v107; // [rsp+10h] [rbp-68h]
  __int64 v108; // [rsp+10h] [rbp-68h]
  __int64 v109; // [rsp+10h] [rbp-68h]
  _BYTE *v110; // [rsp+10h] [rbp-68h]
  __int64 v111; // [rsp+18h] [rbp-60h]
  __int64 v112; // [rsp+18h] [rbp-60h]
  void *v113; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD dest[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = (_QWORD *)a2;
  v4 = a1;
  v5 = *(_DWORD *)(a2 + 12);
  a1[1] = a3;
  v6 = *(unsigned __int8 **)(a2 + 48);
  *a1 = nullptr;
  *((_DWORD *)a1 + 4) = v5;
  v92 = *v6;
  if ( *v6 )
  {
    v7 = 0;
    for ( i = nullptr; ; i = *a1 )
    {
      v20 = v6[(unsigned int)v7 + 1];
      if ( !v20 )
        break;
      v21 = *(void **)&v6[8 * (unsigned int)v7 + 16];
      if ( !i )
      {
        v64 = a1[1];
        v65 = *((_DWORD *)v64 + 3744);
        if ( v65 )
        {
          v66 = (unsigned int)(v65 - 1);
          *((_DWORD *)v64 + 3744) = v66;
          i = *(unsigned __int8 **)&v64[8 * v66 + 14848];
          v67 = *((unsigned int *)i + 134);
          *i = 0;
          v68 = *((_QWORD *)i + 66);
          *((_DWORD *)i + 106) = 0;
          v69 = v68 + (v67 << 6);
          while ( v68 != v69 )
          {
            while ( 1 )
            {
              v69 -= 64;
              v70 = *(void **)(v69 + 24);
              if ( v70 == (void *)(v69 + 40) )
                break;
              v112 = v69;
              v109 = v68;
              srcc = v21;
              operator delete(v70);
              v68 = v109;
              v69 = v112;
              v21 = srcc;
              if ( v109 == v112 )
                goto LABEL_78;
            }
          }
LABEL_78:
          *((_DWORD *)i + 134) = 0;
        }
        else
        {
          srce = v21;
          i = (unsigned __int8 *)operator new(0x3A0u);
          *i = 0;
          *((_QWORD *)i + 12) = i + 112;
          *((_QWORD *)i + 16) = i + 144;
          *((_QWORD *)i + 20) = i + 176;
          *((_QWORD *)i + 24) = i + 208;
          *((_QWORD *)i + 28) = i + 240;
          *((_QWORD *)i + 32) = i + 272;
          *((_QWORD *)i + 36) = i + 304;
          *((_QWORD *)i + 40) = i + 336;
          *((_QWORD *)i + 44) = i + 368;
          *((_QWORD *)i + 48) = i + 400;
          *((_QWORD *)i + 52) = i + 432;
          *((_QWORD *)i + 13) = 0;
          i[112] = 0;
          *((_QWORD *)i + 17) = 0;
          i[144] = 0;
          *((_QWORD *)i + 21) = 0;
          i[176] = 0;
          *((_QWORD *)i + 25) = 0;
          i[208] = 0;
          *((_QWORD *)i + 29) = 0;
          i[240] = 0;
          *((_QWORD *)i + 33) = 0;
          i[272] = 0;
          *((_QWORD *)i + 37) = 0;
          i[304] = 0;
          *((_QWORD *)i + 41) = 0;
          i[336] = 0;
          *((_QWORD *)i + 45) = 0;
          i[368] = 0;
          *((_QWORD *)i + 49) = 0;
          i[400] = 0;
          *((_QWORD *)i + 53) = 0x800000000LL;
          v21 = srce;
          *((_QWORD *)i + 66) = i + 544;
          *((_QWORD *)i + 67) = 0x600000000LL;
        }
        *a1 = i;
      }
      ++v7;
      i[*i + 1] = v20;
      v22 = *a1;
      v23 = **a1;
      *v22 = v23 + 1;
      *(_QWORD *)&v22[8 * v23 + 16] = v21;
      v6 = (unsigned __int8 *)v3[6];
      if ( v92 == (_DWORD)v7 )
      {
LABEL_20:
        v4 = a1;
        goto LABEL_21;
      }
LABEL_16:
      ;
    }
    v10 = *(_BYTE **)&v6[32 * v7 + 96];
    v11 = *(_QWORD *)&v6[32 * v7 + 104];
    if ( !i )
    {
      v57 = a1[1];
      v58 = *((_DWORD *)v57 + 3744);
      if ( v58 )
      {
        v59 = (unsigned int)(v58 - 1);
        *((_DWORD *)v57 + 3744) = v59;
        i = *(unsigned __int8 **)&v57[8 * v59 + 14848];
        v60 = *((unsigned int *)i + 134);
        *i = 0;
        v61 = *((_QWORD *)i + 66);
        *((_DWORD *)i + 106) = 0;
        v62 = v61 + (v60 << 6);
        while ( v61 != v62 )
        {
          while ( 1 )
          {
            v62 -= 64;
            v63 = *(void **)(v62 + 24);
            if ( v63 == (void *)(v62 + 40) )
              break;
            v111 = v62;
            v108 = v61;
            operator delete(v63);
            v61 = v108;
            v62 = v111;
            if ( v108 == v111 )
              goto LABEL_72;
          }
        }
LABEL_72:
        *((_DWORD *)i + 134) = 0;
      }
      else
      {
        i = (unsigned __int8 *)operator new(0x3A0u);
        *i = 0;
        *((_QWORD *)i + 12) = i + 112;
        *((_QWORD *)i + 16) = i + 144;
        *((_QWORD *)i + 20) = i + 176;
        *((_QWORD *)i + 24) = i + 208;
        *((_QWORD *)i + 28) = i + 240;
        *((_QWORD *)i + 32) = i + 272;
        *((_QWORD *)i + 36) = i + 304;
        *((_QWORD *)i + 40) = i + 336;
        *((_QWORD *)i + 44) = i + 368;
        *((_QWORD *)i + 48) = i + 400;
        *((_QWORD *)i + 52) = i + 432;
        *((_QWORD *)i + 13) = 0;
        i[112] = 0;
        *((_QWORD *)i + 17) = 0;
        i[144] = 0;
        *((_QWORD *)i + 21) = 0;
        i[176] = 0;
        *((_QWORD *)i + 25) = 0;
        i[208] = 0;
        *((_QWORD *)i + 29) = 0;
        i[240] = 0;
        *((_QWORD *)i + 33) = 0;
        i[272] = 0;
        *((_QWORD *)i + 37) = 0;
        i[304] = 0;
        *((_QWORD *)i + 41) = 0;
        i[336] = 0;
        *((_QWORD *)i + 45) = 0;
        i[368] = 0;
        *((_QWORD *)i + 49) = 0;
        i[400] = 0;
        *((_QWORD *)i + 53) = 0x800000000LL;
        *((_QWORD *)i + 66) = i + 544;
        *((_QWORD *)i + 67) = 0x600000000LL;
      }
      *a1 = i;
    }
    i[*i + 1] = 0;
    v113 = dest;
    if ( &v10[v11] && !v10 )
LABEL_110:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v11 > 0xF )
    {
      if ( v11 < 0 )
LABEL_111:
        std::__throw_length_error("basic_string::_M_create");
      v12 = (_QWORD *)operator new(v11 + 1);
      dest[0] = v11;
      v113 = v12;
    }
    else
    {
      if ( v11 == 1 )
      {
        LOBYTE(dest[0]) = *v10;
        v12 = dest;
        goto LABEL_9;
      }
      v12 = dest;
      if ( !v11 )
      {
LABEL_9:
        n = v11;
        *((_BYTE *)v12 + v11) = 0;
        v13 = *a1;
        v14 = **a1;
        *v13 = v14 + 1;
        v15 = (unsigned __int8)v14;
        v16 = 32 * (v14 + 3);
        v17 = (void **)&v13[v16];
        v18 = *(_BYTE **)&v13[v16];
        if ( v113 != dest )
        {
          if ( v18 == &v13[v16 + 16] )
          {
            *v17 = v113;
            v17[1] = (void *)n;
            v17[2] = (void *)dest[0];
          }
          else
          {
            v19 = *(_QWORD *)&v13[32 * v15 + 112];
            *v17 = v113;
            v17[1] = (void *)n;
            v17[2] = (void *)dest[0];
            if ( v18 )
            {
              v113 = v18;
              dest[0] = v19;
              goto LABEL_13;
            }
          }
          v113 = dest;
          v18 = dest;
LABEL_13:
          n = 0;
          *v18 = 0;
          if ( v113 != dest )
            operator delete(v113);
          v6 = (unsigned __int8 *)v3[6];
          if ( v92 == (_DWORD)++v7 )
            goto LABEL_20;
          goto LABEL_16;
        }
        v35 = n;
        if ( n )
        {
          if ( n == 1 )
          {
            *v18 = dest[0];
            v71 = n;
            v72 = *v17;
            v17[1] = (void *)n;
            v72[v71] = 0;
            v18 = v113;
            goto LABEL_13;
          }
          memcpy(v18, dest, n);
          v35 = n;
          v18 = *v17;
        }
        v17[1] = (void *)v35;
        v18[v35] = 0;
        v18 = v113;
        goto LABEL_13;
      }
    }
    memcpy(v12, v10, v11);
    v12 = v113;
    goto LABEL_9;
  }
LABEL_21:
  v24 = *((_DWORD *)v6 + 106);
  if ( !v24 )
    goto LABEL_42;
  v25 = 0;
  v93 = 4 * (3LL * (unsigned int)(v24 - 1) + 3);
  while ( 1 )
  {
    v30 = *v4;
    v31 = (_DWORD *)(v25 + *((_QWORD *)v6 + 52));
    if ( *v4 )
    {
      v26 = *(unsigned int *)(v30 + 424);
      v27 = *(unsigned int *)(v30 + 428);
      v28 = v26 + 1;
    }
    else
    {
      v32 = v4[1];
      v33 = *(_DWORD *)(v32 + 14976);
      if ( v33 )
      {
        v52 = (unsigned int)(v33 - 1);
        *(_DWORD *)(v32 + 14976) = v52;
        v30 = *(_QWORD *)(v32 + 8 * v52 + 14848);
        v53 = *(unsigned int *)(v30 + 536);
        *(_BYTE *)v30 = 0;
        v54 = *(_QWORD *)(v30 + 528);
        *(_DWORD *)(v30 + 424) = 0;
        v53 <<= 6;
        v55 = v54 + v53;
        if ( v54 == v54 + v53 )
        {
          v28 = 1;
          v26 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v55 -= 64;
              v56 = *(void **)(v55 + 24);
              if ( v56 == (void *)(v55 + 40) )
                break;
              v107 = v54;
              srcb = v31;
              operator delete(v56);
              v54 = v107;
              v31 = srcb;
              if ( v107 == v55 )
                goto LABEL_63;
            }
          }
          while ( v54 != v55 );
LABEL_63:
          v26 = *(unsigned int *)(v30 + 424);
          v28 = v26 + 1;
        }
        *(_DWORD *)(v30 + 536) = 0;
        v27 = *(unsigned int *)(v30 + 428);
      }
      else
      {
        srca = v31;
        v34 = operator new(0x3A0u);
        v27 = 8;
        v28 = 1;
        v30 = v34;
        *(_BYTE *)v34 = 0;
        *(_QWORD *)(v34 + 96) = v34 + 112;
        *(_QWORD *)(v34 + 128) = v34 + 144;
        *(_QWORD *)(v34 + 160) = v34 + 176;
        *(_QWORD *)(v34 + 192) = v34 + 208;
        *(_QWORD *)(v34 + 224) = v34 + 240;
        *(_QWORD *)(v34 + 256) = v34 + 272;
        *(_QWORD *)(v34 + 288) = v34 + 304;
        *(_QWORD *)(v34 + 320) = v34 + 336;
        *(_QWORD *)(v34 + 352) = v34 + 368;
        *(_QWORD *)(v34 + 384) = v34 + 400;
        *(_QWORD *)(v34 + 416) = v34 + 432;
        *(_QWORD *)(v34 + 104) = 0;
        *(_BYTE *)(v34 + 112) = 0;
        *(_QWORD *)(v34 + 136) = 0;
        *(_BYTE *)(v34 + 144) = 0;
        *(_QWORD *)(v34 + 168) = 0;
        *(_BYTE *)(v34 + 176) = 0;
        *(_QWORD *)(v34 + 200) = 0;
        *(_BYTE *)(v34 + 208) = 0;
        *(_QWORD *)(v34 + 232) = 0;
        *(_BYTE *)(v34 + 240) = 0;
        *(_QWORD *)(v34 + 264) = 0;
        *(_BYTE *)(v34 + 272) = 0;
        *(_QWORD *)(v34 + 296) = 0;
        *(_BYTE *)(v34 + 304) = 0;
        *(_QWORD *)(v34 + 328) = 0;
        *(_BYTE *)(v34 + 336) = 0;
        *(_QWORD *)(v34 + 360) = 0;
        *(_BYTE *)(v34 + 368) = 0;
        *(_QWORD *)(v34 + 392) = 0;
        *(_BYTE *)(v34 + 400) = 0;
        *(_QWORD *)(v34 + 424) = 0x800000000LL;
        v31 = srca;
        *(_QWORD *)(v34 + 528) = v34 + 544;
        *(_QWORD *)(v34 + 536) = 0x600000000LL;
        v26 = 0;
      }
      *v4 = v30;
    }
    v113 = *(void **)v31;
    LODWORD(n) = v31[2];
    if ( v28 > v27 )
      break;
    v25 += 12;
    v29 = *(_QWORD *)(v30 + 416) + 12 * v26;
    *(_QWORD *)v29 = v113;
    *(_DWORD *)(v29 + 8) = n;
    ++*(_DWORD *)(v30 + 424);
    if ( v93 == v25 )
      goto LABEL_41;
LABEL_26:
    v6 = (unsigned __int8 *)v3[6];
  }
  v25 += 12;
  sub_2237220(v30 + 416, v30 + 432, v28, 12);
  v36 = *(_QWORD *)(v30 + 416) + 12LL * *(unsigned int *)(v30 + 424);
  *(_QWORD *)v36 = v113;
  *(_DWORD *)(v36 + 8) = n;
  ++*(_DWORD *)(v30 + 424);
  if ( v25 != v93 )
    goto LABEL_26;
LABEL_41:
  v6 = (unsigned __int8 *)v3[6];
LABEL_42:
  result = (void **)*((unsigned int *)v6 + 134);
  if ( (_DWORD)result )
  {
    v38 = (unsigned int)((_DWORD)result - 1);
    result = &v113;
    v39 = 0;
    v40 = v38 << 6;
    while ( 1 )
    {
      v41 = v39 + *((_QWORD *)v6 + 66);
      if ( *(_DWORD *)v41 )
      {
        result = (void **)*(unsigned int *)(v41 + 4);
        if ( (_DWORD)result )
          break;
      }
LABEL_56:
      if ( v40 == v39 )
        return result;
      v6 = (unsigned __int8 *)v3[6];
      v39 += 64;
    }
    v42 = *v4;
    if ( *v4 )
    {
      v43 = *(unsigned int *)(v42 + 536);
      v44 = *(unsigned int *)(v42 + 540);
      v45 = v43 + 1;
      v46 = v43 << 6;
    }
    else
    {
      v73 = v4[1];
      v74 = *(_DWORD *)(v73 + 14976);
      if ( v74 )
      {
        v75 = (unsigned int)(v74 - 1);
        *(_DWORD *)(v73 + 14976) = v75;
        v42 = *(_QWORD *)(v73 + 8 * v75 + 14848);
        v76 = *(unsigned int *)(v42 + 536);
        *(_BYTE *)v42 = 0;
        v77 = *(_QWORD *)(v42 + 528);
        *(_DWORD *)(v42 + 424) = 0;
        v78 = v77 + (v76 << 6);
        if ( v77 != v78 )
        {
          v96 = v4;
          v79 = v78;
          src = v3;
          v80 = v39;
          v81 = v41;
          v82 = v77;
          do
          {
            while ( 1 )
            {
              v79 -= 64;
              v83 = *(void **)(v79 + 24);
              if ( v83 == (void *)(v79 + 40) )
                break;
              operator delete(v83);
              if ( v82 == v79 )
                goto LABEL_94;
            }
          }
          while ( v82 != v79 );
LABEL_94:
          v41 = v81;
          v4 = v96;
          v39 = v80;
          v3 = src;
        }
        *(_DWORD *)(v42 + 536) = 0;
        v44 = *(unsigned int *)(v42 + 540);
      }
      else
      {
        v44 = 6;
        v42 = operator new(0x3A0u);
        *(_BYTE *)v42 = 0;
        *(_QWORD *)(v42 + 96) = v42 + 112;
        *(_QWORD *)(v42 + 128) = v42 + 144;
        *(_QWORD *)(v42 + 160) = v42 + 176;
        *(_QWORD *)(v42 + 192) = v42 + 208;
        *(_QWORD *)(v42 + 224) = v42 + 240;
        *(_QWORD *)(v42 + 256) = v42 + 272;
        *(_QWORD *)(v42 + 288) = v42 + 304;
        *(_QWORD *)(v42 + 320) = v42 + 336;
        *(_QWORD *)(v42 + 352) = v42 + 368;
        *(_QWORD *)(v42 + 384) = v42 + 400;
        *(_QWORD *)(v42 + 416) = v42 + 432;
        *(_QWORD *)(v42 + 104) = 0;
        *(_BYTE *)(v42 + 112) = 0;
        *(_QWORD *)(v42 + 136) = 0;
        *(_BYTE *)(v42 + 144) = 0;
        *(_QWORD *)(v42 + 168) = 0;
        *(_BYTE *)(v42 + 176) = 0;
        *(_QWORD *)(v42 + 200) = 0;
        *(_BYTE *)(v42 + 208) = 0;
        *(_QWORD *)(v42 + 232) = 0;
        *(_BYTE *)(v42 + 240) = 0;
        *(_QWORD *)(v42 + 264) = 0;
        *(_BYTE *)(v42 + 272) = 0;
        *(_QWORD *)(v42 + 296) = 0;
        *(_BYTE *)(v42 + 304) = 0;
        *(_QWORD *)(v42 + 328) = 0;
        *(_BYTE *)(v42 + 336) = 0;
        *(_QWORD *)(v42 + 360) = 0;
        *(_BYTE *)(v42 + 368) = 0;
        *(_QWORD *)(v42 + 392) = 0;
        *(_BYTE *)(v42 + 400) = 0;
        *(_QWORD *)(v42 + 424) = 0x800000000LL;
        *(_QWORD *)(v42 + 528) = v42 + 544;
        *(_QWORD *)(v42 + 536) = 0x600000000LL;
      }
      *v4 = v42;
      v46 = 0;
      v45 = 1;
    }
    v47 = *(_QWORD *)(v42 + 528);
    v48 = (_BYTE *)(v47 + v46);
    if ( v45 > v44 )
    {
      if ( v47 > v41 || (unsigned __int64)v48 <= v41 )
      {
        v98 = sub_2237400(v42 + 528, v42 + 544, v45, 64, &v113);
        sub_9EF810((__int64 *)(v42 + 528), v98);
        v88 = *(void **)(v42 + 528);
        v89 = (int)v113;
        if ( v88 == (void *)(v42 + 544) )
        {
          v91 = *(unsigned int *)(v42 + 536);
          *(_QWORD *)(v42 + 528) = v98;
          *(_DWORD *)(v42 + 540) = v89;
          v48 = (_BYTE *)(v98 + (v91 << 6));
        }
        else
        {
          srcg = (int)v113;
          free(v88);
          v90 = (unsigned __int64)*(unsigned int *)(v42 + 536) << 6;
          *(_QWORD *)(v42 + 528) = v98;
          *(_DWORD *)(v42 + 540) = srcg;
          v48 = (_BYTE *)(v98 + v90);
        }
      }
      else
      {
        v84 = v41 - v47;
        v97 = sub_2237400(v42 + 528, v42 + 544, v45, 64, &v113);
        sub_9EF810((__int64 *)(v42 + 528), v97);
        v85 = *(void **)(v42 + 528);
        v86 = (int)v113;
        v87 = v97;
        if ( v85 == (void *)(v42 + 544) )
        {
          *(_QWORD *)(v42 + 528) = v97;
          *(_DWORD *)(v42 + 540) = v86;
        }
        else
        {
          srcf = (int)v113;
          free(v85);
          v87 = v97;
          *(_QWORD *)(v42 + 528) = v97;
          *(_DWORD *)(v42 + 540) = srcf;
        }
        v41 = v87 + v84;
        v48 = (_BYTE *)(v87 + ((unsigned __int64)*(unsigned int *)(v42 + 536) << 6));
      }
    }
    *(_QWORD *)v48 = *(_QWORD *)v41;
    *((_DWORD *)v48 + 2) = *(_DWORD *)(v41 + 8);
    *(_QWORD *)(v48 + 12) = *(_QWORD *)(v41 + 12);
    *((_DWORD *)v48 + 5) = *(_DWORD *)(v41 + 20);
    v49 = v48 + 40;
    *((_QWORD *)v48 + 3) = v48 + 40;
    v50 = *(_BYTE **)(v41 + 24);
    v51 = *(_QWORD *)(v41 + 32);
    if ( &v50[v51] && !v50 )
      goto LABEL_110;
    if ( (unsigned __int64)v51 > 0xF )
    {
      v110 = v48;
      if ( v51 < 0 )
        goto LABEL_111;
      v94 = *(_QWORD *)(v41 + 32);
      v49 = (_BYTE *)operator new(v51 + 1);
      v48 = v110;
      v51 = v94;
      *((_QWORD *)v110 + 3) = v49;
      *((_QWORD *)v110 + 5) = v94;
    }
    else
    {
      if ( v51 == 1 )
      {
        v48[40] = *v50;
LABEL_55:
        *((_QWORD *)v48 + 4) = v51;
        v49[v51] = 0;
        result = (void **)*(unsigned __int8 *)(v41 + 56);
        v48[56] = (_BYTE)result;
        ++*(_DWORD *)(v42 + 536);
        goto LABEL_56;
      }
      if ( !v51 )
        goto LABEL_55;
    }
    srcd = v48;
    v95 = v51;
    memcpy(v49, v50, v51);
    v48 = srcd;
    v51 = v95;
    v49 = (_BYTE *)srcd[3];
    goto LABEL_55;
  }
  return result;
}
