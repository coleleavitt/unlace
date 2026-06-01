__int64 __fastcall sub_168CDE0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 v10; // r9
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 *v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rdx
  _BYTE *v19; // r15
  signed __int64 v20; // rbx
  _QWORD *v21; // rax
  unsigned __int8 *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  void **v25; // rbx
  unsigned __int8 *v26; // rdi
  __int64 v27; // rax
  unsigned __int8 *v28; // r14
  unsigned __int8 v29; // r15
  __int64 v30; // rbx
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int8 *v39; // rbp
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  void *v46; // rdi
  size_t v47; // rdx
  char *v48; // rbp
  unsigned __int64 v49; // r13
  char *v50; // r15
  char *v51; // rbx
  unsigned __int8 *v52; // r13
  __int64 v53; // r12
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r12
  _BYTE *v58; // rax
  _BYTE *v59; // rsi
  signed __int64 v60; // r14
  unsigned __int8 *v61; // rax
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rdx
  char *v68; // r8
  char *v69; // rdx
  char *v70; // rdi
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r12
  void *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // r8
  _QWORD *v80; // rdx
  _QWORD *v81; // rdi
  __int64 v82; // rax
  int v83; // ebx
  unsigned __int8 *v84; // rdi
  void *v85; // rax
  __int64 v86; // r12
  __int64 v87; // r12
  unsigned __int8 *v88; // rdi
  __int64 v89; // rax
  int v90; // [rsp+0h] [rbp-118h]
  __int64 v91; // [rsp+0h] [rbp-118h]
  __int64 v92; // [rsp+0h] [rbp-118h]
  __int64 v93; // [rsp+8h] [rbp-110h]
  char *v94; // [rsp+8h] [rbp-110h]
  _QWORD *v95; // [rsp+8h] [rbp-110h]
  _BYTE *src; // [rsp+10h] [rbp-108h]
  char *srcb; // [rsp+10h] [rbp-108h]
  _QWORD *srcc; // [rsp+10h] [rbp-108h]
  void *srca; // [rsp+10h] [rbp-108h]
  int srcd; // [rsp+10h] [rbp-108h]
  void *v102; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  _QWORD dest[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+50h] [rbp-C8h] BYREF
  int v106; // [rsp+58h] [rbp-C0h]
  int v107; // [rsp+5Ch] [rbp-BCh]
  __int64 v108; // [rsp+60h] [rbp-B8h]
  char v109; // [rsp+68h] [rbp-B0h]
  unsigned __int8 *v110; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v111; // [rsp+78h] [rbp-A0h]
  __int64 v112; // [rsp+B8h] [rbp-60h]
  int v113; // [rsp+C0h] [rbp-58h]
  char v114; // [rsp+C8h] [rbp-50h]
  __int64 v115; // [rsp+D0h] [rbp-48h]

  v6 = a1;
  sub_168B9F0((__int64)&v105, a2, a3, *(_DWORD *)(a4 + 16), a5);
  if ( !v114 )
  {
    if ( !BYTE4(v115) )
    {
      v14 = v105;
      *(_BYTE *)(a1 + 120) = 0;
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 8) = v106;
      *(_DWORD *)(a1 + 12) = v107;
      *(_QWORD *)(a1 + 16) = v108;
      *(_BYTE *)(a1 + 24) = v109;
      goto LABEL_8;
    }
    sub_168BC80(&v105, a4, v7, v8, v9, v10);
    goto LABEL_4;
  }
  v16 = *(unsigned __int8 **)a4;
  if ( !*(_QWORD *)a4 )
  {
    v82 = v105;
    *(_BYTE *)(a1 + 120) = 0;
    *(_QWORD *)a1 = v82;
    *(_DWORD *)(a1 + 8) = v106;
    *(_DWORD *)(a1 + 12) = v107;
    *(_QWORD *)(a1 + 16) = v108;
    *(_BYTE *)(a1 + 24) = v109;
    goto LABEL_6;
  }
  v90 = *v16;
  if ( *v16 )
  {
    v17 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = v110;
        v29 = v16[(unsigned int)v17 + 1];
        if ( !v29 )
          break;
        v30 = *(_QWORD *)&v16[8 * (unsigned int)v17 + 16];
        if ( !v110 )
        {
          v64 = v111;
          v65 = *(_DWORD *)(v111 + 14976);
          if ( v65 )
          {
            v66 = (unsigned int)(v65 - 1);
            *(_DWORD *)(v111 + 14976) = v66;
            v28 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
            v67 = *((unsigned int *)v28 + 134);
            *v28 = 0;
            v68 = *((char **)v28 + 66);
            *((_DWORD *)v28 + 106) = 0;
            v69 = &v68[64 * v67];
            while ( v68 != v69 )
            {
              while ( 1 )
              {
                v69 -= 64;
                v70 = *((char **)v69 + 3);
                if ( v70 == v69 + 40 )
                  break;
                srcb = v68;
                v94 = v69;
                operator delete(v70);
                v69 = v94;
                v68 = srcb;
                if ( srcb == v94 )
                  goto LABEL_89;
              }
            }
LABEL_89:
            *((_DWORD *)v28 + 134) = 0;
          }
          else
          {
            v28 = (unsigned __int8 *)operator new(0x3A0u);
            *v28 = 0;
            *((_QWORD *)v28 + 12) = v28 + 112;
            *((_QWORD *)v28 + 16) = v28 + 144;
            *((_QWORD *)v28 + 20) = v28 + 176;
            *((_QWORD *)v28 + 24) = v28 + 208;
            *((_QWORD *)v28 + 28) = v28 + 240;
            *((_QWORD *)v28 + 32) = v28 + 272;
            *((_QWORD *)v28 + 36) = v28 + 304;
            *((_QWORD *)v28 + 40) = v28 + 336;
            *((_QWORD *)v28 + 44) = v28 + 368;
            *((_QWORD *)v28 + 48) = v28 + 400;
            *((_QWORD *)v28 + 52) = v28 + 432;
            *((_QWORD *)v28 + 13) = 0;
            v28[112] = 0;
            *((_QWORD *)v28 + 17) = 0;
            v28[144] = 0;
            *((_QWORD *)v28 + 21) = 0;
            v28[176] = 0;
            *((_QWORD *)v28 + 25) = 0;
            v28[208] = 0;
            *((_QWORD *)v28 + 29) = 0;
            v28[240] = 0;
            *((_QWORD *)v28 + 33) = 0;
            v28[272] = 0;
            *((_QWORD *)v28 + 37) = 0;
            v28[304] = 0;
            *((_QWORD *)v28 + 41) = 0;
            v28[336] = 0;
            *((_QWORD *)v28 + 45) = 0;
            v28[368] = 0;
            *((_QWORD *)v28 + 49) = 0;
            v28[400] = 0;
            *((_QWORD *)v28 + 53) = 0x800000000LL;
            *((_QWORD *)v28 + 66) = v28 + 544;
            *((_QWORD *)v28 + 67) = 0x600000000LL;
          }
          v110 = v28;
        }
        ++v17;
        v28[*v28 + 1] = v29;
        v31 = v110;
        v32 = *v110;
        *v110 = v32 + 1;
        *(_QWORD *)&v31[8 * v32 + 16] = v30;
        v16 = *(unsigned __int8 **)a4;
        if ( v90 == (_DWORD)v17 )
        {
LABEL_28:
          v6 = a1;
          goto LABEL_29;
        }
      }
      v18 = (__int64)&v16[32 * v17 + 96];
      v19 = *(_BYTE **)v18;
      v20 = *(_QWORD *)(v18 + 8);
      if ( !v110 )
      {
        v62 = v111;
        v63 = *(_DWORD *)(v111 + 14976);
        if ( v63 )
        {
          v77 = (unsigned int)(v63 - 1);
          *(_DWORD *)(v111 + 14976) = v77;
          v28 = *(unsigned __int8 **)(v62 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v28 + 134);
          *v28 = 0;
          v79 = *((_QWORD **)v28 + 66);
          *((_DWORD *)v28 + 106) = 0;
          v80 = &v79[8 * v78];
          while ( v79 != v80 )
          {
            while ( 1 )
            {
              v80 -= 8;
              v81 = (_QWORD *)v80[3];
              if ( v81 == v80 + 5 )
                break;
              srcc = v80;
              v95 = v79;
              operator delete(v81);
              v79 = v95;
              v80 = srcc;
              if ( v95 == srcc )
                goto LABEL_100;
            }
          }
LABEL_100:
          *((_DWORD *)v28 + 134) = 0;
        }
        else
        {
          v28 = (unsigned __int8 *)operator new(0x3A0u);
          *v28 = 0;
          *((_QWORD *)v28 + 12) = v28 + 112;
          *((_QWORD *)v28 + 16) = v28 + 144;
          *((_QWORD *)v28 + 20) = v28 + 176;
          *((_QWORD *)v28 + 24) = v28 + 208;
          *((_QWORD *)v28 + 28) = v28 + 240;
          *((_QWORD *)v28 + 32) = v28 + 272;
          *((_QWORD *)v28 + 36) = v28 + 304;
          *((_QWORD *)v28 + 40) = v28 + 336;
          *((_QWORD *)v28 + 44) = v28 + 368;
          *((_QWORD *)v28 + 48) = v28 + 400;
          *((_QWORD *)v28 + 52) = v28 + 432;
          *((_QWORD *)v28 + 13) = 0;
          v28[112] = 0;
          *((_QWORD *)v28 + 17) = 0;
          v28[144] = 0;
          *((_QWORD *)v28 + 21) = 0;
          v28[176] = 0;
          *((_QWORD *)v28 + 25) = 0;
          v28[208] = 0;
          *((_QWORD *)v28 + 29) = 0;
          v28[240] = 0;
          *((_QWORD *)v28 + 33) = 0;
          v28[272] = 0;
          *((_QWORD *)v28 + 37) = 0;
          v28[304] = 0;
          *((_QWORD *)v28 + 41) = 0;
          v28[336] = 0;
          *((_QWORD *)v28 + 45) = 0;
          v28[368] = 0;
          *((_QWORD *)v28 + 49) = 0;
          v28[400] = 0;
          *((_QWORD *)v28 + 53) = 0x800000000LL;
          *((_QWORD *)v28 + 66) = v28 + 544;
          *((_QWORD *)v28 + 67) = 0x600000000LL;
        }
        v110 = v28;
      }
      v28[*v28 + 1] = 0;
      v102 = dest;
      if ( &v19[v20] && !v19 )
LABEL_116:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v20 > 0xF )
        break;
      if ( v20 == 1 )
      {
        LOBYTE(dest[0]) = *v19;
        v21 = dest;
        goto LABEL_18;
      }
      v21 = dest;
      if ( v20 )
        goto LABEL_46;
LABEL_18:
      n = v20;
      *((_BYTE *)v21 + v20) = 0;
      v22 = v110;
      v23 = *v110;
      *v110 = v23 + 1;
      v24 = 32 * (v23 + 3);
      v25 = (void **)&v22[v24];
      v26 = *(unsigned __int8 **)&v22[v24];
      if ( v102 == dest )
      {
        v47 = n;
        if ( n )
        {
          if ( n == 1 )
            *v26 = dest[0];
          else
            memcpy(v26, dest, n);
          v47 = n;
          v26 = (unsigned __int8 *)*v25;
        }
        v25[1] = (void *)v47;
        v26[v47] = 0;
        v26 = (unsigned __int8 *)v102;
        goto LABEL_22;
      }
      if ( v26 == &v22[v24 + 16] )
      {
        *v25 = v102;
        v25[1] = (void *)n;
        v25[2] = (void *)dest[0];
LABEL_69:
        v102 = dest;
        v26 = (unsigned __int8 *)dest;
        goto LABEL_22;
      }
      v27 = *(_QWORD *)&v22[32 * (int)v23 + 112];
      *v25 = v102;
      v25[1] = (void *)n;
      v25[2] = (void *)dest[0];
      if ( !v26 )
        goto LABEL_69;
      v102 = v26;
      dest[0] = v27;
LABEL_22:
      n = 0;
      *v26 = 0;
      if ( v102 != dest )
        operator delete(v102);
      v16 = *(unsigned __int8 **)a4;
      if ( v90 == (_DWORD)++v17 )
        goto LABEL_28;
    }
    if ( v20 < 0 )
LABEL_117:
      std::__throw_length_error("basic_string::_M_create");
    v21 = (_QWORD *)operator new(v20 + 1);
    dest[0] = v20;
    v102 = v21;
LABEL_46:
    memcpy(v21, v19, v20);
    v21 = v102;
    goto LABEL_18;
  }
LABEL_29:
  v33 = *((_QWORD *)v16 + 52);
  v93 = v33 + 12LL * *((unsigned int *)v16 + 106);
  if ( v33 != v93 )
  {
    v34 = *((_QWORD *)v16 + 52);
    do
    {
      v39 = v110;
      if ( v110 )
      {
        v35 = *((unsigned int *)v110 + 106);
        v36 = *((unsigned int *)v110 + 107);
        v37 = v35 + 1;
      }
      else
      {
        v40 = v111;
        v41 = *(_DWORD *)(v111 + 14976);
        if ( v41 )
        {
          v42 = (unsigned int)(v41 - 1);
          *(_DWORD *)(v111 + 14976) = v42;
          v39 = *(unsigned __int8 **)(v40 + 8 * v42 + 14848);
          v43 = *((unsigned int *)v39 + 134);
          *v39 = 0;
          v44 = *((_QWORD *)v39 + 66);
          *((_DWORD *)v39 + 106) = 0;
          v43 <<= 6;
          v45 = v44 + v43;
          if ( v44 == v44 + v43 )
          {
            v37 = 1;
            v35 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v45 -= 64;
                v46 = *(void **)(v45 + 24);
                if ( v46 == (void *)(v45 + 40) )
                  break;
                v91 = v44;
                operator delete(v46);
                v44 = v91;
                if ( v91 == v45 )
                  goto LABEL_40;
              }
            }
            while ( v44 != v45 );
LABEL_40:
            v35 = *((unsigned int *)v39 + 106);
            v37 = v35 + 1;
          }
          *((_DWORD *)v39 + 134) = 0;
          v36 = *((unsigned int *)v39 + 107);
        }
        else
        {
          v61 = (unsigned __int8 *)operator new(0x3A0u);
          v36 = 8;
          v37 = 1;
          v39 = v61;
          *v61 = 0;
          *((_QWORD *)v61 + 12) = v61 + 112;
          *((_QWORD *)v61 + 16) = v61 + 144;
          *((_QWORD *)v61 + 20) = v61 + 176;
          *((_QWORD *)v61 + 24) = v61 + 208;
          *((_QWORD *)v61 + 28) = v61 + 240;
          *((_QWORD *)v61 + 32) = v61 + 272;
          *((_QWORD *)v61 + 36) = v61 + 304;
          *((_QWORD *)v61 + 40) = v61 + 336;
          *((_QWORD *)v61 + 44) = v61 + 368;
          *((_QWORD *)v61 + 48) = v61 + 400;
          *((_QWORD *)v61 + 52) = v61 + 432;
          *((_QWORD *)v61 + 13) = 0;
          v61[112] = 0;
          *((_QWORD *)v61 + 17) = 0;
          v61[144] = 0;
          *((_QWORD *)v61 + 21) = 0;
          v61[176] = 0;
          *((_QWORD *)v61 + 25) = 0;
          v61[208] = 0;
          *((_QWORD *)v61 + 29) = 0;
          v61[240] = 0;
          *((_QWORD *)v61 + 33) = 0;
          v61[272] = 0;
          *((_QWORD *)v61 + 37) = 0;
          v61[304] = 0;
          *((_QWORD *)v61 + 41) = 0;
          v61[336] = 0;
          *((_QWORD *)v61 + 45) = 0;
          v61[368] = 0;
          *((_QWORD *)v61 + 49) = 0;
          v61[400] = 0;
          *((_QWORD *)v61 + 53) = 0x800000000LL;
          *((_QWORD *)v61 + 66) = v61 + 544;
          *((_QWORD *)v61 + 67) = 0x600000000LL;
          v35 = 0;
        }
        v110 = v39;
      }
      v102 = *(void **)v34;
      LODWORD(n) = *(_DWORD *)(v34 + 8);
      if ( v37 > v36 )
      {
        sub_2237220(v39 + 416, v39 + 432, v37, 12);
        v35 = *((unsigned int *)v39 + 106);
      }
      v34 += 12;
      v38 = *((_QWORD *)v39 + 52) + 12 * v35;
      *(_QWORD *)v38 = v102;
      *(_DWORD *)(v38 + 8) = n;
      ++*((_DWORD *)v39 + 106);
    }
    while ( v93 != v34 );
    v16 = *(unsigned __int8 **)a4;
  }
  v48 = *((char **)v16 + 66);
  v49 = (unsigned __int64)*((unsigned int *)v16 + 134) << 6;
  if ( v48 == &v48[v49] )
  {
LABEL_4:
    v11 = v114;
    goto LABEL_5;
  }
  v92 = v6;
  v50 = &v48[v49];
  do
  {
    v51 = v48;
    if ( *(_DWORD *)v48 && *((_DWORD *)v48 + 1) )
    {
      v52 = v110;
      if ( v110 )
      {
        v53 = *((unsigned int *)v110 + 134);
        v54 = *((_QWORD *)v110 + 66);
        v55 = *((unsigned int *)v110 + 135);
        v56 = v53 + 1;
        v57 = v54 + (v53 << 6);
      }
      else
      {
        v71 = v111;
        v72 = *(_DWORD *)(v111 + 14976);
        if ( v72 )
        {
          v73 = (unsigned int)(v72 - 1);
          *(_DWORD *)(v111 + 14976) = v73;
          v52 = *(unsigned __int8 **)(v71 + 8 * v73 + 14848);
          v74 = *((unsigned int *)v52 + 134);
          *v52 = 0;
          v75 = *((_QWORD *)v52 + 66);
          *((_DWORD *)v52 + 106) = 0;
          v74 <<= 6;
          v54 = v75 + v74;
          if ( v75 != v75 + v74 )
          {
            do
            {
              while ( 1 )
              {
                v54 -= 64LL;
                v76 = *(void **)(v54 + 24);
                if ( v76 == (void *)(v54 + 40) )
                  break;
                operator delete(v76);
                if ( v75 == v54 )
                  goto LABEL_94;
              }
            }
            while ( v75 != v54 );
LABEL_94:
            v54 = *((_QWORD *)v52 + 66);
          }
          *((_DWORD *)v52 + 134) = 0;
          v55 = *((unsigned int *)v52 + 135);
        }
        else
        {
          v52 = (unsigned __int8 *)operator new(0x3A0u);
          *v52 = 0;
          *((_QWORD *)v52 + 12) = v52 + 112;
          v54 = (unsigned __int64)(v52 + 544);
          *((_QWORD *)v52 + 16) = v52 + 144;
          *((_QWORD *)v52 + 20) = v52 + 176;
          *((_QWORD *)v52 + 24) = v52 + 208;
          *((_QWORD *)v52 + 28) = v52 + 240;
          *((_QWORD *)v52 + 32) = v52 + 272;
          *((_QWORD *)v52 + 36) = v52 + 304;
          *((_QWORD *)v52 + 40) = v52 + 336;
          *((_QWORD *)v52 + 44) = v52 + 368;
          *((_QWORD *)v52 + 48) = v52 + 400;
          *((_QWORD *)v52 + 52) = v52 + 432;
          *((_QWORD *)v52 + 13) = 0;
          v52[112] = 0;
          *((_QWORD *)v52 + 17) = 0;
          v52[144] = 0;
          *((_QWORD *)v52 + 21) = 0;
          v52[176] = 0;
          *((_QWORD *)v52 + 25) = 0;
          v52[208] = 0;
          *((_QWORD *)v52 + 29) = 0;
          v52[240] = 0;
          *((_QWORD *)v52 + 33) = 0;
          v52[272] = 0;
          *((_QWORD *)v52 + 37) = 0;
          v52[304] = 0;
          *((_QWORD *)v52 + 41) = 0;
          v52[336] = 0;
          *((_QWORD *)v52 + 45) = 0;
          v52[368] = 0;
          *((_QWORD *)v52 + 49) = 0;
          v52[400] = 0;
          *((_QWORD *)v52 + 53) = 0x800000000LL;
          *((_QWORD *)v52 + 66) = v52 + 544;
          *((_QWORD *)v52 + 67) = 0x600000000LL;
          v55 = 6;
        }
        v110 = v52;
        v57 = v54;
        v56 = 1;
      }
      if ( v56 > v55 )
      {
        if ( v54 > (unsigned __int64)v48 || v57 <= (unsigned __int64)v48 )
        {
          v87 = sub_2237400(v52 + 528, v52 + 544, v56, 64, &v102);
          sub_9EF810((__int64 *)v52 + 66, v87);
          v88 = *((unsigned __int8 **)v52 + 66);
          if ( v88 == v52 + 544 )
          {
            *((_DWORD *)v52 + 135) = (_DWORD)v102;
            v89 = *((unsigned int *)v52 + 134);
            *((_QWORD *)v52 + 66) = v87;
            v57 = (v89 << 6) + v87;
          }
          else
          {
            srcd = (int)v102;
            free(v88);
            *((_QWORD *)v52 + 66) = v87;
            *((_DWORD *)v52 + 135) = srcd;
            v57 = ((unsigned __int64)*((unsigned int *)v52 + 134) << 6) + v87;
          }
        }
        else
        {
          srca = (void *)sub_2237400(v52 + 528, v52 + 544, v56, 64, &v102);
          sub_9EF810((__int64 *)v52 + 66, (__int64)srca);
          v83 = (int)v102;
          v84 = *((unsigned __int8 **)v52 + 66);
          v85 = srca;
          if ( v84 != v52 + 544 )
          {
            free(v84);
            v85 = srca;
          }
          *((_DWORD *)v52 + 135) = v83;
          v51 = &v48[(_QWORD)v85 - v54];
          v86 = *((unsigned int *)v52 + 134);
          *((_QWORD *)v52 + 66) = v85;
          v57 = (unsigned __int64)v85 + 64 * v86;
        }
      }
      *(_QWORD *)v57 = *(_QWORD *)v51;
      *(_DWORD *)(v57 + 8) = *((_DWORD *)v51 + 2);
      *(_QWORD *)(v57 + 12) = *(_QWORD *)(v51 + 12);
      *(_DWORD *)(v57 + 20) = *((_DWORD *)v51 + 5);
      v58 = (_BYTE *)(v57 + 40);
      *(_QWORD *)(v57 + 24) = v57 + 40;
      v59 = *((_BYTE **)v51 + 3);
      v60 = *((_QWORD *)v51 + 4);
      if ( &v59[v60] && !v59 )
        goto LABEL_116;
      if ( (unsigned __int64)v60 > 0xF )
      {
        src = *((_BYTE **)v51 + 3);
        if ( v60 < 0 )
          goto LABEL_117;
        v58 = (_BYTE *)operator new(v60 + 1);
        *(_QWORD *)(v57 + 40) = v60;
        v59 = src;
        *(_QWORD *)(v57 + 24) = v58;
      }
      else
      {
        if ( v60 == 1 )
        {
          *(_BYTE *)(v57 + 40) = *v59;
LABEL_65:
          *(_QWORD *)(v57 + 32) = v60;
          v58[v60] = 0;
          *(_BYTE *)(v57 + 56) = v51[56];
          ++*((_DWORD *)v52 + 134);
          goto LABEL_66;
        }
        if ( !v60 )
          goto LABEL_65;
      }
      memcpy(v58, v59, v60);
      v58 = *(_BYTE **)(v57 + 24);
      goto LABEL_65;
    }
LABEL_66:
    v48 += 64;
  }
  while ( v50 != v48 );
  v6 = v92;
  v11 = v114;
LABEL_5:
  v12 = v105;
  *(_BYTE *)(v6 + 120) = 0;
  *(_QWORD *)v6 = v12;
  *(_DWORD *)(v6 + 8) = v106;
  *(_DWORD *)(v6 + 12) = v107;
  *(_QWORD *)(v6 + 16) = v108;
  *(_BYTE *)(v6 + 24) = v109;
  if ( v11 )
  {
LABEL_6:
    sub_FC70F0(v6 + 32, (__int64)&v110);
    v13 = v112;
    *(_BYTE *)(v6 + 120) = 1;
    *(_QWORD *)(v6 + 104) = v13;
    *(_DWORD *)(v6 + 112) = v113;
  }
LABEL_8:
  *(_QWORD *)(v6 + 128) = v115;
  sub_15F7200(&v105);
  return v6;
}
