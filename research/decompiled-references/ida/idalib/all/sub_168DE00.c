__int64 __fastcall sub_168DE00(__int64 a1, unsigned __int8 **a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  unsigned __int8 *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _BYTE *v12; // rsi
  signed __int64 v13; // r15
  _QWORD *v14; // rax
  _BYTE *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  void **v18; // r13
  _BYTE *v19; // rdi
  __int64 v20; // rax
  unsigned __int8 *v21; // r13
  unsigned __int8 v22; // si
  __int64 v23; // r15
  _BYTE *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbp
  void *v38; // rdi
  size_t v39; // rdx
  char *v40; // rbx
  char *v41; // rbp
  char *v42; // r13
  __int64 v43; // r15
  __int64 v44; // rcx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // r12
  _BYTE *v50; // rax
  _BYTE *v51; // rsi
  signed __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r12
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  void *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rdx
  void *v74; // rdi
  char *v75; // r13
  __int64 v76; // r12
  int v77; // eax
  void *v78; // rdi
  __int64 v79; // r12
  int v80; // edx
  void *v81; // rdi
  __int64 v82; // rcx
  int v83; // [rsp+0h] [rbp-78h]
  __int64 v84; // [rsp+0h] [rbp-78h]
  signed __int64 v85; // [rsp+0h] [rbp-78h]
  signed __int64 v86; // [rsp+0h] [rbp-78h]
  __int64 v87; // [rsp+0h] [rbp-78h]
  int v88; // [rsp+0h] [rbp-78h]
  int v89; // [rsp+0h] [rbp-78h]
  void *src; // [rsp+8h] [rbp-70h]
  _BYTE *srca; // [rsp+8h] [rbp-70h]
  __int64 v92; // [rsp+10h] [rbp-68h]
  __int64 v93; // [rsp+10h] [rbp-68h]
  __int64 v94; // [rsp+18h] [rbp-60h]
  __int64 v95; // [rsp+18h] [rbp-60h]
  void *v96; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD dest[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( !*(_BYTE *)(a1 + 120) )
  {
    if ( *(_BYTE *)(a1 + 132) )
      sub_168BC80((__int64 *)a1, (__int64)a2, a3, a4, a5, a6);
    return a1;
  }
  v9 = *a2;
  if ( !*a2 )
    return a1;
  v83 = *v9;
  if ( *v9 )
  {
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *(unsigned __int8 **)(a1 + 32);
        v22 = v9[(unsigned int)v10 + 1];
        if ( !v22 )
          break;
        v23 = *(_QWORD *)&v9[8 * (unsigned int)v10 + 16];
        if ( !v21 )
        {
          v56 = *(_QWORD *)(a1 + 40);
          v57 = *(_DWORD *)(v56 + 14976);
          if ( v57 )
          {
            v70 = (unsigned int)(v57 - 1);
            *(_DWORD *)(v56 + 14976) = v70;
            v21 = *(unsigned __int8 **)(v56 + 8 * v70 + 14848);
            v71 = *((unsigned int *)v21 + 134);
            *v21 = 0;
            v72 = *((_QWORD *)v21 + 66);
            *((_DWORD *)v21 + 106) = 0;
            v73 = v72 + (v71 << 6);
            while ( v72 != v73 )
            {
              while ( 1 )
              {
                v73 -= 64;
                v74 = *(void **)(v73 + 24);
                if ( v74 == (void *)(v73 + 40) )
                  break;
                v95 = v73;
                v93 = v72;
                operator delete(v74);
                v72 = v93;
                v73 = v95;
                if ( v93 == v95 )
                  goto LABEL_94;
              }
            }
LABEL_94:
            *((_DWORD *)v21 + 134) = 0;
          }
          else
          {
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
            *((_QWORD *)v21 + 66) = v21 + 544;
            *((_QWORD *)v21 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(a1 + 32) = v21;
        }
        ++v10;
        v21[*v21 + 1] = v22;
        v24 = *(_BYTE **)(a1 + 32);
        v25 = (unsigned __int8)*v24;
        *v24 = v25 + 1;
        *(_QWORD *)&v24[8 * v25 + 16] = v23;
        v9 = *a2;
        if ( v83 == (_DWORD)v10 )
          goto LABEL_24;
      }
      v11 = (__int64)&v9[32 * v10 + 96];
      v12 = *(_BYTE **)v11;
      v13 = *(_QWORD *)(v11 + 8);
      if ( !v21 )
      {
        v54 = *(_QWORD *)(a1 + 40);
        v55 = *(_DWORD *)(v54 + 14976);
        if ( v55 )
        {
          v65 = (unsigned int)(v55 - 1);
          *(_DWORD *)(v54 + 14976) = v65;
          v21 = *(unsigned __int8 **)(v54 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v21 + 134);
          *v21 = 0;
          v67 = *((_QWORD *)v21 + 66);
          *((_DWORD *)v21 + 106) = 0;
          v68 = v67 + (v66 << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              v94 = v68;
              v92 = v67;
              operator delete(v69);
              v67 = v92;
              v68 = v94;
              if ( v92 == v94 )
                goto LABEL_89;
            }
          }
LABEL_89:
          *((_DWORD *)v21 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v21 + 66) = v21 + 544;
          *((_QWORD *)v21 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(a1 + 32) = v21;
      }
      v21[*v21 + 1] = 0;
      v96 = dest;
      if ( &v12[v13] && !v12 )
LABEL_110:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
        break;
      if ( v13 == 1 )
      {
        LOBYTE(dest[0]) = *v12;
        v14 = dest;
        goto LABEL_14;
      }
      v14 = dest;
      if ( v13 )
        goto LABEL_41;
LABEL_14:
      n = v13;
      *((_BYTE *)v14 + v13) = 0;
      v15 = *(_BYTE **)(a1 + 32);
      v16 = (unsigned __int8)*v15;
      *v15 = v16 + 1;
      v17 = 32 * (v16 + 3);
      v18 = (void **)&v15[v17];
      v19 = *(_BYTE **)&v15[v17];
      if ( v96 == dest )
      {
        v39 = n;
        if ( n )
        {
          if ( n == 1 )
            *v19 = dest[0];
          else
            memcpy(v19, dest, n);
          v39 = n;
          v19 = *v18;
        }
        v18[1] = (void *)v39;
        v19[v39] = 0;
        v19 = v96;
        goto LABEL_18;
      }
      if ( v19 == &v15[v17 + 16] )
      {
        *v18 = v96;
        v18[1] = (void *)n;
        v18[2] = (void *)dest[0];
LABEL_63:
        v96 = dest;
        v19 = dest;
        goto LABEL_18;
      }
      v20 = *(_QWORD *)&v15[32 * (int)v16 + 112];
      *v18 = v96;
      v18[1] = (void *)n;
      v18[2] = (void *)dest[0];
      if ( !v19 )
        goto LABEL_63;
      v96 = v19;
      dest[0] = v20;
LABEL_18:
      n = 0;
      *v19 = 0;
      if ( v96 != dest )
        operator delete(v96);
      v9 = *a2;
      if ( v83 == (_DWORD)++v10 )
        goto LABEL_24;
    }
    if ( v13 < 0 )
LABEL_109:
      std::__throw_length_error("basic_string::_M_create");
    v14 = (_QWORD *)operator new(v13 + 1);
    dest[0] = v13;
    v96 = v14;
LABEL_41:
    memcpy(v14, v12, v13);
    v14 = v96;
    goto LABEL_14;
  }
LABEL_24:
  v26 = *((_QWORD *)v9 + 52);
  src = (void *)(v26 + 12LL * *((unsigned int *)v9 + 106));
  if ( (void *)v26 != src )
  {
    do
    {
      v31 = *(_QWORD *)(a1 + 32);
      if ( v31 )
      {
        v27 = *(unsigned int *)(v31 + 424);
        v28 = *(unsigned int *)(v31 + 428);
        v29 = v27 + 1;
      }
      else
      {
        v32 = *(_QWORD *)(a1 + 40);
        v33 = *(_DWORD *)(v32 + 14976);
        if ( v33 )
        {
          v34 = (unsigned int)(v33 - 1);
          *(_DWORD *)(v32 + 14976) = v34;
          v31 = *(_QWORD *)(v32 + 8 * v34 + 14848);
          v35 = *(unsigned int *)(v31 + 536);
          *(_BYTE *)v31 = 0;
          v36 = *(_QWORD *)(v31 + 528);
          *(_DWORD *)(v31 + 424) = 0;
          v35 <<= 6;
          v37 = v36 + v35;
          if ( v36 == v36 + v35 )
          {
            v29 = 1;
            v27 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v37 -= 64;
                v38 = *(void **)(v37 + 24);
                if ( v38 == (void *)(v37 + 40) )
                  break;
                v84 = v36;
                operator delete(v38);
                v36 = v84;
                if ( v84 == v37 )
                  goto LABEL_35;
              }
            }
            while ( v36 != v37 );
LABEL_35:
            v27 = *(unsigned int *)(v31 + 424);
            v29 = v27 + 1;
          }
          *(_DWORD *)(v31 + 536) = 0;
          v28 = *(unsigned int *)(v31 + 428);
        }
        else
        {
          v53 = operator new(0x3A0u);
          v28 = 8;
          v29 = 1;
          v31 = v53;
          *(_BYTE *)v53 = 0;
          *(_QWORD *)(v53 + 96) = v53 + 112;
          *(_QWORD *)(v53 + 128) = v53 + 144;
          *(_QWORD *)(v53 + 160) = v53 + 176;
          *(_QWORD *)(v53 + 192) = v53 + 208;
          *(_QWORD *)(v53 + 224) = v53 + 240;
          *(_QWORD *)(v53 + 256) = v53 + 272;
          *(_QWORD *)(v53 + 288) = v53 + 304;
          *(_QWORD *)(v53 + 320) = v53 + 336;
          *(_QWORD *)(v53 + 352) = v53 + 368;
          *(_QWORD *)(v53 + 384) = v53 + 400;
          *(_QWORD *)(v53 + 416) = v53 + 432;
          *(_QWORD *)(v53 + 104) = 0;
          *(_BYTE *)(v53 + 112) = 0;
          *(_QWORD *)(v53 + 136) = 0;
          *(_BYTE *)(v53 + 144) = 0;
          *(_QWORD *)(v53 + 168) = 0;
          *(_BYTE *)(v53 + 176) = 0;
          *(_QWORD *)(v53 + 200) = 0;
          *(_BYTE *)(v53 + 208) = 0;
          *(_QWORD *)(v53 + 232) = 0;
          *(_BYTE *)(v53 + 240) = 0;
          *(_QWORD *)(v53 + 264) = 0;
          *(_BYTE *)(v53 + 272) = 0;
          *(_QWORD *)(v53 + 296) = 0;
          *(_BYTE *)(v53 + 304) = 0;
          *(_QWORD *)(v53 + 328) = 0;
          *(_BYTE *)(v53 + 336) = 0;
          *(_QWORD *)(v53 + 360) = 0;
          *(_BYTE *)(v53 + 368) = 0;
          *(_QWORD *)(v53 + 392) = 0;
          *(_BYTE *)(v53 + 400) = 0;
          *(_QWORD *)(v53 + 424) = 0x800000000LL;
          *(_QWORD *)(v53 + 528) = v53 + 544;
          *(_QWORD *)(v53 + 536) = 0x600000000LL;
          v27 = 0;
        }
        *(_QWORD *)(a1 + 32) = v31;
      }
      v96 = *(void **)v26;
      LODWORD(n) = *(_DWORD *)(v26 + 8);
      if ( v28 < v29 )
      {
        sub_2237220(v31 + 416, v31 + 432, v29, 12);
        v27 = *(unsigned int *)(v31 + 424);
      }
      v26 += 12;
      v30 = *(_QWORD *)(v31 + 416) + 12 * v27;
      *(_QWORD *)v30 = v96;
      *(_DWORD *)(v30 + 8) = n;
      ++*(_DWORD *)(v31 + 424);
    }
    while ( src != (void *)v26 );
    v9 = *a2;
  }
  v40 = *((char **)v9 + 66);
  v41 = &v40[64 * (unsigned __int64)*((unsigned int *)v9 + 134)];
  if ( v40 != v41 )
  {
    while ( 1 )
    {
      v42 = v40;
      if ( !*(_DWORD *)v40 || !*((_DWORD *)v40 + 1) )
        goto LABEL_60;
      v43 = *(_QWORD *)(a1 + 32);
      if ( v43 )
      {
        v44 = *(unsigned int *)(v43 + 536);
        v45 = *(unsigned int *)(v43 + 540);
        v46 = v44 + 1;
        v47 = v44 << 6;
      }
      else
      {
        v58 = *(_QWORD *)(a1 + 40);
        v59 = *(_DWORD *)(v58 + 14976);
        if ( v59 )
        {
          v60 = (unsigned int)(v59 - 1);
          *(_DWORD *)(v58 + 14976) = v60;
          v43 = *(_QWORD *)(v58 + 8 * v60 + 14848);
          v61 = *(unsigned int *)(v43 + 536);
          *(_BYTE *)v43 = 0;
          v62 = *(_QWORD *)(v43 + 528);
          *(_DWORD *)(v43 + 424) = 0;
          v63 = v62 + (v61 << 6);
          while ( v62 != v63 )
          {
            while ( 1 )
            {
              v63 -= 64;
              v64 = *(void **)(v63 + 24);
              if ( v64 == (void *)(v63 + 40) )
                break;
              v87 = v62;
              operator delete(v64);
              v62 = v87;
              if ( v87 == v63 )
                goto LABEL_84;
            }
          }
LABEL_84:
          *(_DWORD *)(v43 + 536) = 0;
          v45 = *(unsigned int *)(v43 + 540);
        }
        else
        {
          v45 = 6;
          v43 = operator new(0x3A0u);
          *(_BYTE *)v43 = 0;
          *(_QWORD *)(v43 + 96) = v43 + 112;
          *(_QWORD *)(v43 + 128) = v43 + 144;
          *(_QWORD *)(v43 + 160) = v43 + 176;
          *(_QWORD *)(v43 + 192) = v43 + 208;
          *(_QWORD *)(v43 + 224) = v43 + 240;
          *(_QWORD *)(v43 + 256) = v43 + 272;
          *(_QWORD *)(v43 + 288) = v43 + 304;
          *(_QWORD *)(v43 + 320) = v43 + 336;
          *(_QWORD *)(v43 + 352) = v43 + 368;
          *(_QWORD *)(v43 + 384) = v43 + 400;
          *(_QWORD *)(v43 + 416) = v43 + 432;
          *(_QWORD *)(v43 + 104) = 0;
          *(_BYTE *)(v43 + 112) = 0;
          *(_QWORD *)(v43 + 136) = 0;
          *(_BYTE *)(v43 + 144) = 0;
          *(_QWORD *)(v43 + 168) = 0;
          *(_BYTE *)(v43 + 176) = 0;
          *(_QWORD *)(v43 + 200) = 0;
          *(_BYTE *)(v43 + 208) = 0;
          *(_QWORD *)(v43 + 232) = 0;
          *(_BYTE *)(v43 + 240) = 0;
          *(_QWORD *)(v43 + 264) = 0;
          *(_BYTE *)(v43 + 272) = 0;
          *(_QWORD *)(v43 + 296) = 0;
          *(_BYTE *)(v43 + 304) = 0;
          *(_QWORD *)(v43 + 328) = 0;
          *(_BYTE *)(v43 + 336) = 0;
          *(_QWORD *)(v43 + 360) = 0;
          *(_BYTE *)(v43 + 368) = 0;
          *(_QWORD *)(v43 + 392) = 0;
          *(_BYTE *)(v43 + 400) = 0;
          *(_QWORD *)(v43 + 424) = 0x800000000LL;
          *(_QWORD *)(v43 + 528) = v43 + 544;
          *(_QWORD *)(v43 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(a1 + 32) = v43;
        v47 = 0;
        v46 = 1;
      }
      v48 = *(_QWORD *)(v43 + 528);
      v49 = v48 + v47;
      if ( v45 < v46 )
      {
        if ( v48 > (unsigned __int64)v40 || v49 <= (unsigned __int64)v40 )
        {
          v79 = sub_2237400(v43 + 528, v43 + 544, v46, 64, &v96);
          sub_9EF810((__int64 *)(v43 + 528), v79);
          v80 = (int)v96;
          v81 = *(void **)(v43 + 528);
          if ( v81 == (void *)(v43 + 544) )
          {
            v82 = *(unsigned int *)(v43 + 536);
            *(_QWORD *)(v43 + 528) = v79;
            *(_DWORD *)(v43 + 540) = v80;
          }
          else
          {
            v89 = (int)v96;
            free(v81);
            v82 = *(unsigned int *)(v43 + 536);
            *(_QWORD *)(v43 + 528) = v79;
            *(_DWORD *)(v43 + 540) = v89;
          }
          v49 = (v82 << 6) + v79;
        }
        else
        {
          v75 = &v40[-v48];
          v76 = sub_2237400(v43 + 528, v43 + 544, v46, 64, &v96);
          sub_9EF810((__int64 *)(v43 + 528), v76);
          v77 = (int)v96;
          v78 = *(void **)(v43 + 528);
          if ( v78 == (void *)(v43 + 544) )
          {
            *(_QWORD *)(v43 + 528) = v76;
            *(_DWORD *)(v43 + 540) = v77;
          }
          else
          {
            v88 = (int)v96;
            free(v78);
            *(_QWORD *)(v43 + 528) = v76;
            *(_DWORD *)(v43 + 540) = v88;
          }
          v42 = &v75[v76];
          v49 = ((unsigned __int64)*(unsigned int *)(v43 + 536) << 6) + v76;
        }
      }
      *(_QWORD *)v49 = *(_QWORD *)v42;
      *(_DWORD *)(v49 + 8) = *((_DWORD *)v42 + 2);
      *(_QWORD *)(v49 + 12) = *(_QWORD *)(v42 + 12);
      *(_DWORD *)(v49 + 20) = *((_DWORD *)v42 + 5);
      v50 = (_BYTE *)(v49 + 40);
      *(_QWORD *)(v49 + 24) = v49 + 40;
      v51 = *((_BYTE **)v42 + 3);
      v52 = *((_QWORD *)v42 + 4);
      if ( &v51[v52] && !v51 )
        goto LABEL_110;
      if ( (unsigned __int64)v52 > 0xF )
        break;
      if ( v52 == 1 )
      {
        *(_BYTE *)(v49 + 40) = *v51;
      }
      else if ( v52 )
      {
        goto LABEL_78;
      }
LABEL_59:
      *(_QWORD *)(v49 + 32) = v52;
      v50[v52] = 0;
      *(_BYTE *)(v49 + 56) = v42[56];
      ++*(_DWORD *)(v43 + 536);
LABEL_60:
      v40 += 64;
      if ( v41 == v40 )
        return a1;
    }
    srca = *((_BYTE **)v42 + 3);
    if ( v52 < 0 )
      goto LABEL_109;
    v85 = *((_QWORD *)v42 + 4);
    v50 = (_BYTE *)operator new(v52 + 1);
    v52 = v85;
    v51 = srca;
    *(_QWORD *)(v49 + 24) = v50;
    *(_QWORD *)(v49 + 40) = v85;
LABEL_78:
    v86 = v52;
    memcpy(v50, v51, v52);
    v50 = *(_BYTE **)(v49 + 24);
    v52 = v86;
    goto LABEL_59;
  }
  return a1;
}
