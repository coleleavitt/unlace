void __fastcall sub_15FA310(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rdx
  int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // rdx
  _BYTE *v8; // rsi
  signed __int64 v9; // r15
  _QWORD *v10; // rax
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  void **v15; // r15
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // si
  __int64 v20; // r15
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 *v30; // rbx
  unsigned __int8 *v31; // rdx
  int v32; // eax
  unsigned __int8 *v33; // rax
  size_t v34; // rdx
  char *v35; // rbx
  unsigned __int64 v36; // r10
  char *v37; // r13
  char *v38; // r15
  unsigned __int8 *v39; // r12
  __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // r14
  _BYTE *v46; // rax
  _BYTE *v47; // rsi
  signed __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  char *v51; // rcx
  char *v52; // rax
  char *v53; // rdi
  unsigned __int8 *v54; // rdx
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  char *v58; // r9
  char *v59; // rdx
  char *v60; // rdi
  unsigned __int8 *v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // r9
  _QWORD *v66; // rdx
  _QWORD *v67; // rdi
  unsigned __int8 *v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  char *v72; // rcx
  char *v73; // r14
  char *v74; // rdi
  size_t v75; // rdx
  _BYTE *v76; // rdi
  char *v77; // r14
  int v78; // edx
  unsigned __int8 *v79; // rdi
  void *v80; // rax
  __int64 v81; // r14
  int v82; // edx
  unsigned __int8 *v83; // rdi
  __int64 v84; // rcx
  char *srca; // [rsp+0h] [rbp-78h]
  void *srcb; // [rsp+0h] [rbp-78h]
  void *srcc; // [rsp+0h] [rbp-78h]
  char *srcd; // [rsp+0h] [rbp-78h]
  void *src; // [rsp+0h] [rbp-78h]
  int srce; // [rsp+0h] [rbp-78h]
  int srcf; // [rsp+0h] [rbp-78h]
  char *v92; // [rsp+8h] [rbp-70h]
  char *v93; // [rsp+8h] [rbp-70h]
  _QWORD *v94; // [rsp+8h] [rbp-70h]
  _BYTE *v95; // [rsp+8h] [rbp-70h]
  void *v96; // [rsp+8h] [rbp-70h]
  char *v97; // [rsp+10h] [rbp-68h]
  _QWORD *v98; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v99; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v100; // [rsp+18h] [rbp-60h]
  void *v101; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD dest[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = *a2;
          v19 = v2[(unsigned int)v6 + 1];
          if ( !v19 )
            break;
          v20 = *(_QWORD *)&v2[8 * (unsigned int)v6 + 16];
          if ( !v18 )
          {
            v54 = a2[1];
            v55 = *((_DWORD *)v54 + 3744);
            if ( v55 )
            {
              v56 = (unsigned int)(v55 - 1);
              *((_DWORD *)v54 + 3744) = v56;
              v18 = *(unsigned __int8 **)&v54[8 * v56 + 14848];
              v57 = *((unsigned int *)v18 + 134);
              *v18 = 0;
              v58 = *((char **)v18 + 66);
              *((_DWORD *)v18 + 106) = 0;
              v59 = &v58[64 * v57];
              while ( v58 != v59 )
              {
                while ( 1 )
                {
                  v59 -= 64;
                  v60 = *((char **)v59 + 3);
                  if ( v60 == v59 + 40 )
                    break;
                  v99 = v18;
                  v97 = v59;
                  v93 = v58;
                  operator delete(v60);
                  v58 = v93;
                  v59 = v97;
                  v18 = v99;
                  if ( v93 == v97 )
                    goto LABEL_68;
                }
              }
LABEL_68:
              *((_DWORD *)v18 + 134) = 0;
            }
            else
            {
              v18 = (unsigned __int8 *)operator new(0x3A0u);
              *v18 = 0;
              *((_QWORD *)v18 + 12) = v18 + 112;
              *((_QWORD *)v18 + 16) = v18 + 144;
              *((_QWORD *)v18 + 20) = v18 + 176;
              *((_QWORD *)v18 + 24) = v18 + 208;
              *((_QWORD *)v18 + 28) = v18 + 240;
              *((_QWORD *)v18 + 32) = v18 + 272;
              *((_QWORD *)v18 + 36) = v18 + 304;
              *((_QWORD *)v18 + 40) = v18 + 336;
              *((_QWORD *)v18 + 44) = v18 + 368;
              *((_QWORD *)v18 + 48) = v18 + 400;
              *((_QWORD *)v18 + 52) = v18 + 432;
              *((_QWORD *)v18 + 13) = 0;
              v18[112] = 0;
              *((_QWORD *)v18 + 17) = 0;
              v18[144] = 0;
              *((_QWORD *)v18 + 21) = 0;
              v18[176] = 0;
              *((_QWORD *)v18 + 25) = 0;
              v18[208] = 0;
              *((_QWORD *)v18 + 29) = 0;
              v18[240] = 0;
              *((_QWORD *)v18 + 33) = 0;
              v18[272] = 0;
              *((_QWORD *)v18 + 37) = 0;
              v18[304] = 0;
              *((_QWORD *)v18 + 41) = 0;
              v18[336] = 0;
              *((_QWORD *)v18 + 45) = 0;
              v18[368] = 0;
              *((_QWORD *)v18 + 49) = 0;
              v18[400] = 0;
              *((_QWORD *)v18 + 53) = 0x800000000LL;
              *((_QWORD *)v18 + 66) = v18 + 544;
              *((_QWORD *)v18 + 67) = 0x600000000LL;
            }
            *a2 = v18;
          }
          ++v6;
          v18[*v18 + 1] = v19;
          v21 = *a2;
          v22 = **a2;
          *v21 = v22 + 1;
          *(_QWORD *)&v21[8 * v22 + 16] = v20;
          v2 = *a1;
          if ( v5 == (_DWORD)v6 )
            goto LABEL_20;
        }
        v7 = (__int64)&v2[32 * v6 + 96];
        v8 = *(_BYTE **)v7;
        v9 = *(_QWORD *)(v7 + 8);
        if ( !v18 )
        {
          v61 = a2[1];
          v62 = *((_DWORD *)v61 + 3744);
          if ( v62 )
          {
            v63 = (unsigned int)(v62 - 1);
            *((_DWORD *)v61 + 3744) = v63;
            v18 = *(unsigned __int8 **)&v61[8 * v63 + 14848];
            v64 = *((unsigned int *)v18 + 134);
            *v18 = 0;
            v65 = *((_QWORD **)v18 + 66);
            *((_DWORD *)v18 + 106) = 0;
            v66 = &v65[8 * v64];
            while ( v65 != v66 )
            {
              while ( 1 )
              {
                v66 -= 8;
                v67 = (_QWORD *)v66[3];
                if ( v67 == v66 + 5 )
                  break;
                v100 = v18;
                v98 = v65;
                v94 = v66;
                operator delete(v67);
                v66 = v94;
                v65 = v98;
                v18 = v100;
                if ( v98 == v94 )
                  goto LABEL_74;
              }
            }
LABEL_74:
            *((_DWORD *)v18 + 134) = 0;
          }
          else
          {
            v18 = (unsigned __int8 *)operator new(0x3A0u);
            *v18 = 0;
            *((_QWORD *)v18 + 12) = v18 + 112;
            *((_QWORD *)v18 + 16) = v18 + 144;
            *((_QWORD *)v18 + 20) = v18 + 176;
            *((_QWORD *)v18 + 24) = v18 + 208;
            *((_QWORD *)v18 + 28) = v18 + 240;
            *((_QWORD *)v18 + 32) = v18 + 272;
            *((_QWORD *)v18 + 36) = v18 + 304;
            *((_QWORD *)v18 + 40) = v18 + 336;
            *((_QWORD *)v18 + 44) = v18 + 368;
            *((_QWORD *)v18 + 48) = v18 + 400;
            *((_QWORD *)v18 + 52) = v18 + 432;
            *((_QWORD *)v18 + 13) = 0;
            v18[112] = 0;
            *((_QWORD *)v18 + 17) = 0;
            v18[144] = 0;
            *((_QWORD *)v18 + 21) = 0;
            v18[176] = 0;
            *((_QWORD *)v18 + 25) = 0;
            v18[208] = 0;
            *((_QWORD *)v18 + 29) = 0;
            v18[240] = 0;
            *((_QWORD *)v18 + 33) = 0;
            v18[272] = 0;
            *((_QWORD *)v18 + 37) = 0;
            v18[304] = 0;
            *((_QWORD *)v18 + 41) = 0;
            v18[336] = 0;
            *((_QWORD *)v18 + 45) = 0;
            v18[368] = 0;
            *((_QWORD *)v18 + 49) = 0;
            v18[400] = 0;
            *((_QWORD *)v18 + 53) = 0x800000000LL;
            *((_QWORD *)v18 + 66) = v18 + 544;
            *((_QWORD *)v18 + 67) = 0x600000000LL;
          }
          *a2 = v18;
        }
        v18[*v18 + 1] = 0;
        v101 = dest;
        if ( &v8[v9] && !v8 )
LABEL_106:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v9 > 0xF )
          break;
        if ( v9 == 1 )
        {
          LOBYTE(dest[0]) = *v8;
          v10 = dest;
          goto LABEL_10;
        }
        v10 = dest;
        if ( v9 )
          goto LABEL_34;
LABEL_10:
        n = v9;
        *((_BYTE *)v10 + v9) = 0;
        v11 = *a2;
        v12 = **a2;
        *v11 = v12 + 1;
        v13 = (unsigned __int8)v12;
        v14 = 32 * (v12 + 3);
        v15 = (void **)&v11[v14];
        v16 = *(unsigned __int8 **)&v11[v14];
        if ( v101 == dest )
        {
          v34 = n;
          if ( n )
          {
            if ( n == 1 )
            {
              *v16 = dest[0];
              v75 = n;
              v76 = *v15;
              v15[1] = (void *)n;
              v76[v75] = 0;
              v16 = (unsigned __int8 *)v101;
              goto LABEL_14;
            }
            memcpy(v16, dest, n);
            v34 = n;
            v16 = (unsigned __int8 *)*v15;
          }
          v15[1] = (void *)v34;
          v16[v34] = 0;
          v16 = (unsigned __int8 *)v101;
        }
        else
        {
          if ( v16 == &v11[v14 + 16] )
          {
            *v15 = v101;
            v15[1] = (void *)n;
            v15[2] = (void *)dest[0];
LABEL_55:
            v101 = dest;
            v16 = (unsigned __int8 *)dest;
            goto LABEL_14;
          }
          v17 = *(_QWORD *)&v11[32 * v13 + 112];
          *v15 = v101;
          v15[1] = (void *)n;
          v15[2] = (void *)dest[0];
          if ( !v16 )
            goto LABEL_55;
          v101 = v16;
          dest[0] = v17;
        }
LABEL_14:
        n = 0;
        *v16 = 0;
        if ( v101 != dest )
          operator delete(v101);
        ++v6;
        v2 = *a1;
        if ( v5 == (_DWORD)v6 )
          goto LABEL_20;
      }
      if ( v9 < 0 )
LABEL_105:
        std::__throw_length_error("basic_string::_M_create");
      v10 = (_QWORD *)operator new(v9 + 1);
      dest[0] = v9;
      v101 = v10;
LABEL_34:
      memcpy(v10, v8, v9);
      v10 = v101;
      goto LABEL_10;
    }
LABEL_20:
    v23 = *((_QWORD *)v2 + 52);
    v24 = v23 + 12LL * *((unsigned int *)v2 + 106);
    if ( v23 != v24 )
    {
      v25 = *((_QWORD *)v2 + 52);
      do
      {
        v30 = *a2;
        if ( *a2 )
        {
          v26 = *((unsigned int *)v30 + 106);
          v27 = *((unsigned int *)v30 + 107);
          v28 = v26 + 1;
        }
        else
        {
          v31 = a2[1];
          v32 = *((_DWORD *)v31 + 3744);
          if ( v32 )
          {
            v49 = (unsigned int)(v32 - 1);
            *((_DWORD *)v31 + 3744) = v49;
            v30 = *(unsigned __int8 **)&v31[8 * v49 + 14848];
            v50 = *((unsigned int *)v30 + 134);
            *v30 = 0;
            v51 = *((char **)v30 + 66);
            *((_DWORD *)v30 + 106) = 0;
            v52 = &v51[64 * v50];
            if ( v51 == v52 )
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
                  v52 -= 64;
                  v53 = *((char **)v52 + 3);
                  if ( v53 == v52 + 40 )
                    break;
                  v92 = v52;
                  srca = v51;
                  operator delete(v53);
                  v51 = srca;
                  v52 = v92;
                  if ( srca == v92 )
                    goto LABEL_59;
                }
              }
              while ( v51 != v52 );
LABEL_59:
              v26 = *((unsigned int *)v30 + 106);
              v28 = v26 + 1;
            }
            *((_DWORD *)v30 + 134) = 0;
            v27 = *((unsigned int *)v30 + 107);
          }
          else
          {
            v33 = (unsigned __int8 *)operator new(0x3A0u);
            v27 = 8;
            v28 = 1;
            v30 = v33;
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
            v26 = 0;
          }
          *a2 = v30;
        }
        v101 = *(void **)v25;
        LODWORD(n) = *(_DWORD *)(v25 + 8);
        if ( v28 > v27 )
        {
          sub_2237220(v30 + 416, v30 + 432, v28, 12);
          v26 = *((unsigned int *)v30 + 106);
        }
        v25 += 12;
        v29 = *((_QWORD *)v30 + 52) + 12 * v26;
        *(_QWORD *)v29 = v101;
        *(_DWORD *)(v29 + 8) = n;
        ++*((_DWORD *)v30 + 106);
      }
      while ( v24 != v25 );
      v2 = *a1;
    }
    v35 = *((char **)v2 + 66);
    v36 = (unsigned __int64)*((unsigned int *)v2 + 134) << 6;
    v37 = &v35[v36];
    if ( v35 != &v35[v36] )
    {
      while ( 1 )
      {
        v38 = v35;
        if ( !*(_DWORD *)v35 || !*((_DWORD *)v35 + 1) )
          goto LABEL_52;
        v39 = *a2;
        if ( *a2 )
        {
          v40 = *((unsigned int *)v39 + 134);
          v41 = *((unsigned int *)v39 + 135);
          v42 = v40 + 1;
          v43 = v40 << 6;
        }
        else
        {
          v68 = a2[1];
          v69 = *((_DWORD *)v68 + 3744);
          if ( v69 )
          {
            v70 = (unsigned int)(v69 - 1);
            *((_DWORD *)v68 + 3744) = v70;
            v39 = *(unsigned __int8 **)&v68[8 * v70 + 14848];
            v71 = *((unsigned int *)v39 + 134);
            v72 = *((char **)v39 + 66);
            *v39 = 0;
            *((_DWORD *)v39 + 106) = 0;
            v73 = &v72[64 * v71];
            while ( v72 != v73 )
            {
              while ( 1 )
              {
                v73 -= 64;
                v74 = *((char **)v73 + 3);
                if ( v74 == v73 + 40 )
                  break;
                srcd = v72;
                operator delete(v74);
                v72 = srcd;
                if ( srcd == v73 )
                  goto LABEL_89;
              }
            }
LABEL_89:
            *((_DWORD *)v39 + 134) = 0;
            v41 = *((unsigned int *)v39 + 135);
          }
          else
          {
            v41 = 6;
            v39 = (unsigned __int8 *)operator new(0x3A0u);
            *v39 = 0;
            *((_QWORD *)v39 + 12) = v39 + 112;
            *((_QWORD *)v39 + 16) = v39 + 144;
            *((_QWORD *)v39 + 20) = v39 + 176;
            *((_QWORD *)v39 + 24) = v39 + 208;
            *((_QWORD *)v39 + 28) = v39 + 240;
            *((_QWORD *)v39 + 32) = v39 + 272;
            *((_QWORD *)v39 + 36) = v39 + 304;
            *((_QWORD *)v39 + 40) = v39 + 336;
            *((_QWORD *)v39 + 44) = v39 + 368;
            *((_QWORD *)v39 + 48) = v39 + 400;
            *((_QWORD *)v39 + 52) = v39 + 432;
            *((_QWORD *)v39 + 13) = 0;
            v39[112] = 0;
            *((_QWORD *)v39 + 17) = 0;
            v39[144] = 0;
            *((_QWORD *)v39 + 21) = 0;
            v39[176] = 0;
            *((_QWORD *)v39 + 25) = 0;
            v39[208] = 0;
            *((_QWORD *)v39 + 29) = 0;
            v39[240] = 0;
            *((_QWORD *)v39 + 33) = 0;
            v39[272] = 0;
            *((_QWORD *)v39 + 37) = 0;
            v39[304] = 0;
            *((_QWORD *)v39 + 41) = 0;
            v39[336] = 0;
            *((_QWORD *)v39 + 45) = 0;
            v39[368] = 0;
            *((_QWORD *)v39 + 49) = 0;
            v39[400] = 0;
            *((_QWORD *)v39 + 53) = 0x800000000LL;
            *((_QWORD *)v39 + 66) = v39 + 544;
            *((_QWORD *)v39 + 67) = 0x600000000LL;
          }
          *a2 = v39;
          v43 = 0;
          v42 = 1;
        }
        v44 = *((_QWORD *)v39 + 66);
        v45 = v44 + v43;
        if ( v42 > v41 )
        {
          if ( v44 > (unsigned __int64)v35 || v45 <= (unsigned __int64)v35 )
          {
            v81 = sub_2237400(v39 + 528, v39 + 544, v42, 64, &v101);
            sub_9EF810((__int64 *)v39 + 66, v81);
            v82 = (int)v101;
            v83 = *((unsigned __int8 **)v39 + 66);
            if ( v83 == v39 + 544 )
            {
              v84 = *((unsigned int *)v39 + 134);
              *((_QWORD *)v39 + 66) = v81;
              *((_DWORD *)v39 + 135) = v82;
            }
            else
            {
              srcf = (int)v101;
              free(v83);
              v84 = *((unsigned int *)v39 + 134);
              *((_QWORD *)v39 + 66) = v81;
              *((_DWORD *)v39 + 135) = srcf;
            }
            v45 = (v84 << 6) + v81;
          }
          else
          {
            v77 = &v35[-v44];
            src = (void *)sub_2237400(v39 + 528, v39 + 544, v42, 64, &v101);
            sub_9EF810((__int64 *)v39 + 66, (__int64)src);
            v78 = (int)v101;
            v79 = *((unsigned __int8 **)v39 + 66);
            v80 = src;
            if ( v79 == v39 + 544 )
            {
              *((_QWORD *)v39 + 66) = src;
              *((_DWORD *)v39 + 135) = v78;
            }
            else
            {
              v96 = src;
              srce = (int)v101;
              free(v79);
              v80 = v96;
              *((_QWORD *)v39 + 66) = v96;
              *((_DWORD *)v39 + 135) = srce;
            }
            v38 = &v77[(_QWORD)v80];
            v45 = (unsigned __int64)v80 + 64 * (unsigned __int64)*((unsigned int *)v39 + 134);
          }
        }
        *(_QWORD *)v45 = *(_QWORD *)v38;
        *(_DWORD *)(v45 + 8) = *((_DWORD *)v38 + 2);
        *(_QWORD *)(v45 + 12) = *(_QWORD *)(v38 + 12);
        *(_DWORD *)(v45 + 20) = *((_DWORD *)v38 + 5);
        v46 = (_BYTE *)(v45 + 40);
        *(_QWORD *)(v45 + 24) = v45 + 40;
        v47 = *((_BYTE **)v38 + 3);
        v48 = *((_QWORD *)v38 + 4);
        if ( &v47[v48] && !v47 )
          goto LABEL_106;
        if ( (unsigned __int64)v48 > 0xF )
          break;
        if ( v48 == 1 )
        {
          *(_BYTE *)(v45 + 40) = *v47;
        }
        else if ( v48 )
        {
          goto LABEL_79;
        }
LABEL_51:
        *(_QWORD *)(v45 + 32) = v48;
        v46[v48] = 0;
        *(_BYTE *)(v45 + 56) = v38[56];
        ++*((_DWORD *)v39 + 134);
LABEL_52:
        v35 += 64;
        if ( v37 == v35 )
          return;
      }
      v95 = *((_BYTE **)v38 + 3);
      if ( v48 < 0 )
        goto LABEL_105;
      srcb = *((void **)v38 + 4);
      v46 = (_BYTE *)operator new(v48 + 1);
      v48 = (signed __int64)srcb;
      v47 = v95;
      *(_QWORD *)(v45 + 24) = v46;
      *(_QWORD *)(v45 + 40) = srcb;
LABEL_79:
      srcc = (void *)v48;
      memcpy(v46, v47, v48);
      v46 = *(_BYTE **)(v45 + 24);
      v48 = (signed __int64)srcc;
      goto LABEL_51;
    }
  }
}
