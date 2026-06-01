__int64 __fastcall sub_15F8200(__m128 *a1, _BYTE *a2, _DWORD *a3, __int64 *a4)
{
  void *v6; // rcx
  char *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rbp
  int v14; // eax
  bool v15; // zf
  __int64 v16; // rax
  int v17; // edx
  _BYTE *v18; // rax
  __int64 *v19; // rcx
  _BYTE *v20; // r15
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // r13
  _BYTE *v26; // rsi
  __int64 *v27; // rax
  size_t v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // r12
  unsigned __int64 v31; // rdi
  __int64 *v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  int v35; // r12d
  _BYTE *v36; // rdi
  char *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r10
  char *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rbx
  _BYTE *v45; // r15
  int v46; // eax
  __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rbp
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rdi
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  int v57; // r14d
  _BYTE *v58; // rdi
  char *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // r8
  char *v64; // rsi
  __int64 v65; // rdx
  _QWORD *v66; // rbx
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rax
  _QWORD *v69; // r14
  _QWORD *v70; // rbp
  _QWORD *v71; // rdi
  void *v72; // rdi
  void **v73; // rbp
  void **v74; // r14
  __m128 *v75; // rcx
  __int64 result; // rax
  __m128 v77; // xmm0
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // r12
  void *v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // r12
  __int64 v86; // r14
  __int64 v87; // r12
  void *v88; // rdi
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 *v95; // [rsp+0h] [rbp-88h]
  __int64 v96; // [rsp+0h] [rbp-88h]
  _BYTE *v97; // [rsp+8h] [rbp-80h]
  __int64 *v99; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v100; // [rsp+20h] [rbp-68h]
  __int64 v101; // [rsp+28h] [rbp-60h]
  void *v102; // [rsp+30h] [rbp-58h]
  unsigned __int64 v103; // [rsp+38h] [rbp-50h]
  __int64 v104; // [rsp+40h] [rbp-48h]
  __m128 *v105; // [rsp+48h] [rbp-40h]

  v6 = (void *)a1->m128_u64[0];
  v97 = (_BYTE *)a1->m128_u64[1];
  v7 = &a2[-a1->m128_u64[0]];
  v8 = (__int64)&v97[-a1->m128_u64[0]] >> 5;
  v105 = a1;
  v102 = v6;
  if ( !v8 )
  {
    v103 = 1;
    goto LABEL_113;
  }
  v9 = 2 * v8;
  v103 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x7FFFFFFFFFFFFFFLL )
  {
    v103 = -32;
LABEL_4:
    v104 = operator new(v103);
    goto LABEL_5;
  }
  v104 = 0;
  if ( v9 )
  {
LABEL_113:
    v103 *= 32LL;
    goto LABEL_4;
  }
LABEL_5:
  v10 = &v7[v104];
  v11 = v104;
  *(_DWORD *)v10 = *a3;
  *((_DWORD *)v10 + 6) = *((_DWORD *)a4 + 4);
  *((_QWORD *)v10 + 2) = a4[1];
  v12 = *a4;
  *a4 = 0;
  v13 = v102;
  for ( *((_QWORD *)v10 + 1) = v12; a2 != (_BYTE *)v13; v11 += 32 )
  {
    v14 = *(_DWORD *)v13;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    v15 = v13[1] == 0;
    *(_DWORD *)v11 = v14;
    *(_DWORD *)(v11 + 24) = *((_DWORD *)v13 + 6);
    v16 = v13[2];
    *(_QWORD *)(v11 + 16) = v16;
    if ( !v15 )
    {
      v17 = *(_DWORD *)(v16 + 14976);
      if ( v17 )
      {
        v79 = (unsigned int)(v17 - 1);
        *(_DWORD *)(v16 + 14976) = v79;
        v20 = *(_BYTE **)(v16 + 8 * v79 + 14848);
        v80 = *((unsigned int *)v20 + 134);
        *v20 = 0;
        v81 = *((_QWORD *)v20 + 66);
        *((_DWORD *)v20 + 106) = 0;
        v82 = v81 + (v80 << 6);
        while ( v81 != v82 )
        {
          while ( 1 )
          {
            v82 -= 64;
            v83 = *(void **)(v82 + 24);
            if ( v83 == (void *)(v82 + 40) )
              break;
            operator delete(v83);
            if ( v81 == v82 )
              goto LABEL_91;
          }
        }
LABEL_91:
        v19 = (__int64 *)(v20 + 112);
        *((_DWORD *)v20 + 134) = 0;
        v95 = (__int64 *)(v20 + 432);
      }
      else
      {
        v18 = (_BYTE *)operator new(0x3A0u);
        v19 = (__int64 *)(v18 + 112);
        v20 = v18;
        *v18 = 0;
        v18 += 144;
        *((_QWORD *)v18 - 6) = v19;
        *((_QWORD *)v18 - 5) = 0;
        *(v18 - 32) = 0;
        *((_QWORD *)v20 + 16) = v18;
        *((_QWORD *)v20 + 20) = v20 + 176;
        *((_QWORD *)v20 + 24) = v20 + 208;
        *((_QWORD *)v20 + 28) = v20 + 240;
        *((_QWORD *)v20 + 32) = v20 + 272;
        *((_QWORD *)v20 + 36) = v20 + 304;
        *((_QWORD *)v20 + 40) = v20 + 336;
        *((_QWORD *)v20 + 44) = v20 + 368;
        *((_QWORD *)v20 + 48) = v20 + 400;
        v95 = (__int64 *)(v20 + 432);
        *((_QWORD *)v20 + 17) = 0;
        v20[144] = 0;
        *((_QWORD *)v20 + 21) = 0;
        v20[176] = 0;
        *((_QWORD *)v20 + 25) = 0;
        v20[208] = 0;
        *((_QWORD *)v20 + 29) = 0;
        v20[240] = 0;
        *((_QWORD *)v20 + 33) = 0;
        v20[272] = 0;
        *((_QWORD *)v20 + 37) = 0;
        v20[304] = 0;
        *((_QWORD *)v20 + 41) = 0;
        v20[336] = 0;
        *((_QWORD *)v20 + 45) = 0;
        v20[368] = 0;
        *((_QWORD *)v20 + 49) = 0;
        v20[400] = 0;
        *((_QWORD *)v20 + 52) = v20 + 432;
        *((_QWORD *)v20 + 53) = 0x800000000LL;
        *((_QWORD *)v20 + 66) = v20 + 544;
        *((_QWORD *)v20 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v11 + 8) = v20;
      v21 = v13[1];
      *v20 = *(_BYTE *)v21;
      v20[1] = *(_BYTE *)(v21 + 1);
      v20[2] = *(_BYTE *)(v21 + 2);
      v20[3] = *(_BYTE *)(v21 + 3);
      v20[4] = *(_BYTE *)(v21 + 4);
      v20[5] = *(_BYTE *)(v21 + 5);
      v20[6] = *(_BYTE *)(v21 + 6);
      v20[7] = *(_BYTE *)(v21 + 7);
      v20[8] = *(_BYTE *)(v21 + 8);
      v20[9] = *(_BYTE *)(v21 + 9);
      v20[10] = *(_BYTE *)(v21 + 10);
      *((_QWORD *)v20 + 2) = *(_QWORD *)(v21 + 16);
      *((_QWORD *)v20 + 3) = *(_QWORD *)(v21 + 24);
      *((_QWORD *)v20 + 4) = *(_QWORD *)(v21 + 32);
      *((_QWORD *)v20 + 5) = *(_QWORD *)(v21 + 40);
      v22 = *(_QWORD *)(v21 + 48);
      v101 = v11;
      v23 = v19;
      *((_QWORD *)v20 + 6) = v22;
      v24 = *(_QWORD *)(v21 + 56);
      v100 = v13;
      *((_QWORD *)v20 + 7) = v24;
      *((_QWORD *)v20 + 8) = *(_QWORD *)(v21 + 64);
      *((_QWORD *)v20 + 9) = *(_QWORD *)(v21 + 72);
      *((_QWORD *)v20 + 10) = *(_QWORD *)(v21 + 80);
      *((_QWORD *)v20 + 11) = *(_QWORD *)(v21 + 88);
      v25 = (__int64 *)(v21 + 96);
      do
      {
        if ( v25 != v23 - 2 )
        {
          v27 = (__int64 *)*(v23 - 2);
          v28 = v25[1];
          if ( v27 == v23 )
            v29 = 15;
          else
            v29 = *v23;
          if ( v28 > v29 )
          {
            if ( (v28 & 0x8000000000000000LL) != 0LL )
              std::__throw_length_error("basic_string::_M_create");
            v30 = 2 * v29;
            if ( v28 < v30 )
            {
              v31 = v30 + 1;
              if ( v30 < 0 )
              {
                v31 = 0x8000000000000000LL;
                v30 = 0x7FFFFFFFFFFFFFFFLL;
              }
            }
            else
            {
              v31 = v28 + 1;
              v30 = v25[1];
            }
            v27 = (__int64 *)operator new(v31);
            v32 = (__int64 *)*(v23 - 2);
            if ( v32 != v23 )
            {
              v99 = v27;
              operator delete(v32);
              v27 = v99;
            }
            *(v23 - 2) = (__int64)v27;
            *v23 = v30;
          }
          if ( v28 )
          {
            v26 = (_BYTE *)*v25;
            if ( v28 == 1 )
              *(_BYTE *)v27 = *v26;
            else
              memcpy(v27, v26, v28);
            v27 = (__int64 *)*(v23 - 2);
          }
          *(v23 - 1) = v28;
          *((_BYTE *)v27 + v28) = 0;
        }
        v25 += 4;
        v23 += 4;
      }
      while ( v95 != v23 );
      v13 = v100;
      v11 = v101;
      if ( v20 + 416 != (_BYTE *)(v21 + 416) )
      {
        v33 = *(unsigned int *)(v21 + 424);
        v34 = *((unsigned int *)v20 + 106);
        v35 = *(_DWORD *)(v21 + 424);
        if ( v33 <= v34 )
        {
          if ( *(_DWORD *)(v21 + 424) )
          {
            v92 = *((_QWORD *)v20 + 52);
            v93 = *(_QWORD *)(v21 + 416);
            v94 = 0;
            do
            {
              *(_QWORD *)(v92 + v94) = *(_QWORD *)(v93 + v94);
              *(_BYTE *)(v92 + v94 + 8) = *(_BYTE *)(v93 + v94 + 8);
              v94 += 12;
            }
            while ( 12 * v33 != v94 );
          }
        }
        else
        {
          if ( v33 > *((unsigned int *)v20 + 107) )
          {
            *((_DWORD *)v20 + 106) = 0;
            sub_2237220(v20 + 416, v95, v33, 12);
            v37 = *(char **)(v21 + 416);
            v36 = *((_BYTE **)v20 + 52);
            v41 = 0;
            v33 = *(unsigned int *)(v21 + 424);
            v42 = v37;
          }
          else
          {
            v36 = *((_BYTE **)v20 + 52);
            v37 = *(char **)(v21 + 416);
            if ( *((_DWORD *)v20 + 106) )
            {
              v38 = 3 * v34;
              v39 = 0;
              v40 = 4 * v38;
              v41 = v40;
              do
              {
                *(_QWORD *)&v36[v39] = *(_QWORD *)&v37[v39];
                v36[v39 + 8] = v37[v39 + 8];
                v39 += 12;
              }
              while ( v40 != v39 );
              v33 = *(unsigned int *)(v21 + 424);
              v36 += v40;
              v42 = &v37[v40];
            }
            else
            {
              v42 = *(char **)(v21 + 416);
              v41 = 0;
            }
          }
          v43 = 12 * v33;
          if ( v42 != &v37[v43] )
            memcpy(v36, v42, v43 - v41);
        }
        *((_DWORD *)v20 + 106) = v35;
      }
      sub_9EED30((__int64)(v20 + 528), (__int64 *)(v21 + 528));
    }
    v13 += 4;
  }
  v99 = (__int64 *)(v11 + 32);
  v44 = v11 + 32;
  v45 = a2;
  if ( a2 != v97 )
  {
    do
    {
      v46 = *(_DWORD *)v45;
      v15 = *((_QWORD *)v45 + 1) == 0;
      *(_QWORD *)(v44 + 8) = 0;
      *(_DWORD *)v44 = v46;
      *(_DWORD *)(v44 + 24) = *((_DWORD *)v45 + 6);
      v47 = *((_QWORD *)v45 + 2);
      *(_QWORD *)(v44 + 16) = v47;
      if ( !v15 )
      {
        v48 = *(_DWORD *)(v47 + 14976);
        if ( v48 )
        {
          v84 = (unsigned int)(v48 - 1);
          *(_DWORD *)(v47 + 14976) = v84;
          v49 = *(_QWORD *)(v47 + 8 * v84 + 14848);
          v85 = *(unsigned int *)(v49 + 536);
          *(_BYTE *)v49 = 0;
          v86 = *(_QWORD *)(v49 + 528);
          *(_DWORD *)(v49 + 424) = 0;
          v87 = v86 + (v85 << 6);
          while ( v86 != v87 )
          {
            while ( 1 )
            {
              v87 -= 64;
              v88 = *(void **)(v87 + 24);
              if ( v88 == (void *)(v87 + 40) )
                break;
              operator delete(v88);
              if ( v86 == v87 )
                goto LABEL_96;
            }
          }
LABEL_96:
          *(_DWORD *)(v49 + 536) = 0;
        }
        else
        {
          v49 = operator new(0x3A0u);
          *(_BYTE *)v49 = 0;
          *(_QWORD *)(v49 + 96) = v49 + 112;
          *(_QWORD *)(v49 + 128) = v49 + 144;
          *(_QWORD *)(v49 + 160) = v49 + 176;
          *(_QWORD *)(v49 + 192) = v49 + 208;
          *(_QWORD *)(v49 + 224) = v49 + 240;
          *(_QWORD *)(v49 + 256) = v49 + 272;
          *(_QWORD *)(v49 + 288) = v49 + 304;
          *(_QWORD *)(v49 + 320) = v49 + 336;
          *(_QWORD *)(v49 + 352) = v49 + 368;
          *(_QWORD *)(v49 + 384) = v49 + 400;
          *(_QWORD *)(v49 + 416) = v49 + 432;
          *(_QWORD *)(v49 + 104) = 0;
          *(_BYTE *)(v49 + 112) = 0;
          *(_QWORD *)(v49 + 136) = 0;
          *(_BYTE *)(v49 + 144) = 0;
          *(_QWORD *)(v49 + 168) = 0;
          *(_BYTE *)(v49 + 176) = 0;
          *(_QWORD *)(v49 + 200) = 0;
          *(_BYTE *)(v49 + 208) = 0;
          *(_QWORD *)(v49 + 232) = 0;
          *(_BYTE *)(v49 + 240) = 0;
          *(_QWORD *)(v49 + 264) = 0;
          *(_BYTE *)(v49 + 272) = 0;
          *(_QWORD *)(v49 + 296) = 0;
          *(_BYTE *)(v49 + 304) = 0;
          *(_QWORD *)(v49 + 328) = 0;
          *(_BYTE *)(v49 + 336) = 0;
          *(_QWORD *)(v49 + 360) = 0;
          *(_BYTE *)(v49 + 368) = 0;
          *(_QWORD *)(v49 + 392) = 0;
          *(_BYTE *)(v49 + 400) = 0;
          *(_QWORD *)(v49 + 424) = 0x800000000LL;
          *(_QWORD *)(v49 + 528) = v49 + 544;
          *(_QWORD *)(v49 + 536) = 0x600000000LL;
        }
        v50 = *((_QWORD *)v45 + 1);
        *(_QWORD *)(v44 + 8) = v49;
        v51 = v49 + 96;
        v52 = v50 + 96;
        *(_BYTE *)v49 = *(_BYTE *)v50;
        *(_BYTE *)(v49 + 1) = *(_BYTE *)(v50 + 1);
        *(_BYTE *)(v49 + 2) = *(_BYTE *)(v50 + 2);
        *(_BYTE *)(v49 + 3) = *(_BYTE *)(v50 + 3);
        *(_BYTE *)(v49 + 4) = *(_BYTE *)(v50 + 4);
        *(_BYTE *)(v49 + 5) = *(_BYTE *)(v50 + 5);
        *(_BYTE *)(v49 + 6) = *(_BYTE *)(v50 + 6);
        *(_BYTE *)(v49 + 7) = *(_BYTE *)(v50 + 7);
        *(_BYTE *)(v49 + 8) = *(_BYTE *)(v50 + 8);
        *(_BYTE *)(v49 + 9) = *(_BYTE *)(v50 + 9);
        *(_BYTE *)(v49 + 10) = *(_BYTE *)(v50 + 10);
        *(_QWORD *)(v49 + 16) = *(_QWORD *)(v50 + 16);
        *(_QWORD *)(v49 + 24) = *(_QWORD *)(v50 + 24);
        *(_QWORD *)(v49 + 32) = *(_QWORD *)(v50 + 32);
        *(_QWORD *)(v49 + 40) = *(_QWORD *)(v50 + 40);
        *(_QWORD *)(v49 + 48) = *(_QWORD *)(v50 + 48);
        *(_QWORD *)(v49 + 56) = *(_QWORD *)(v50 + 56);
        *(_QWORD *)(v49 + 64) = *(_QWORD *)(v50 + 64);
        *(_QWORD *)(v49 + 72) = *(_QWORD *)(v50 + 72);
        *(_QWORD *)(v49 + 80) = *(_QWORD *)(v50 + 80);
        *(_QWORD *)(v49 + 88) = *(_QWORD *)(v50 + 88);
        v96 = v50 + 416;
        do
        {
          v53 = v52;
          v54 = v51;
          v52 += 32;
          v51 += 32;
          sub_9EE8A0(v54, v53);
        }
        while ( v96 != v52 );
        if ( v49 + 416 != v96 )
        {
          v55 = *(unsigned int *)(v50 + 424);
          v56 = *(unsigned int *)(v49 + 424);
          v57 = *(_DWORD *)(v50 + 424);
          if ( v55 <= v56 )
          {
            if ( *(_DWORD *)(v50 + 424) )
            {
              v89 = *(_QWORD *)(v49 + 416);
              v90 = *(_QWORD *)(v50 + 416);
              v91 = 0;
              do
              {
                *(_QWORD *)(v89 + v91) = *(_QWORD *)(v90 + v91);
                *(_BYTE *)(v89 + v91 + 8) = *(_BYTE *)(v90 + v91 + 8);
                v91 += 12;
              }
              while ( 12 * v55 != v91 );
            }
          }
          else
          {
            if ( v55 > *(unsigned int *)(v49 + 428) )
            {
              *(_DWORD *)(v49 + 424) = 0;
              sub_2237220(v49 + 416, v49 + 432, v55, 12);
              v59 = *(char **)(v50 + 416);
              v58 = *(_BYTE **)(v49 + 416);
              v63 = 0;
              v55 = *(unsigned int *)(v50 + 424);
              v64 = v59;
            }
            else
            {
              v58 = *(_BYTE **)(v49 + 416);
              v59 = *(char **)(v50 + 416);
              if ( *(_DWORD *)(v49 + 424) )
              {
                v60 = 3 * v56;
                v61 = 0;
                v62 = 4 * v60;
                v63 = v62;
                do
                {
                  *(_QWORD *)&v58[v61] = *(_QWORD *)&v59[v61];
                  v58[v61 + 8] = v59[v61 + 8];
                  v61 += 12;
                }
                while ( v62 != v61 );
                v55 = *(unsigned int *)(v50 + 424);
                v58 += v62;
                v64 = &v59[v62];
              }
              else
              {
                v64 = *(char **)(v50 + 416);
                v63 = 0;
              }
            }
            v65 = 12 * v55;
            if ( v64 != &v59[v65] )
              memcpy(v58, v64, v65 - v63);
          }
          *(_DWORD *)(v49 + 424) = v57;
        }
        sub_9EED30(v49 + 528, (__int64 *)(v50 + 528));
      }
      v45 += 32;
      v44 += 32;
    }
    while ( v45 != v97 );
    v99 = (__int64 *)((char *)v99 + ((v97 - a2 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32);
  }
  v66 = v102;
  if ( v102 != v97 )
  {
    do
    {
      v67 = v66[1];
      if ( v67 )
      {
        v68 = v66[2];
        if ( v68 )
        {
          if ( v67 < v68 || v67 > v68 + 14848 )
          {
            v69 = *(_QWORD **)(v67 + 528);
            v70 = &v69[8 * (unsigned __int64)*(unsigned int *)(v67 + 536)];
            if ( v69 != v70 )
            {
              do
              {
                while ( 1 )
                {
                  v70 -= 8;
                  v71 = (_QWORD *)v70[3];
                  if ( v71 == v70 + 5 )
                    break;
                  operator delete(v71);
                  if ( v69 == v70 )
                    goto LABEL_64;
                }
              }
              while ( v69 != v70 );
LABEL_64:
              v70 = *(_QWORD **)(v67 + 528);
            }
            if ( v70 != (_QWORD *)(v67 + 544) )
              free(v70);
            v72 = *(void **)(v67 + 416);
            if ( v72 != (void *)(v67 + 432) )
              free(v72);
            v73 = (void **)(v67 + 384);
            v74 = (void **)(v67 + 64);
            do
            {
              while ( *v73 != v73 + 2 )
              {
                operator delete(*v73);
                v73 -= 4;
                if ( v73 == v74 )
                  goto LABEL_72;
              }
              v73 -= 4;
            }
            while ( v73 != v74 );
LABEL_72:
            operator delete((void *)v67, 0x3A0u);
          }
          else
          {
            v78 = *(unsigned int *)(v68 + 14976);
            *(_DWORD *)(v68 + 14976) = v78 + 1;
            *(_QWORD *)(v68 + 8 * v78 + 14848) = v67;
          }
        }
      }
      v66 += 4;
    }
    while ( v97 != (_BYTE *)v66 );
  }
  if ( v102 )
    operator delete(v102);
  v75 = v105;
  result = v103 + v104;
  v77 = _mm_loadh_ps((const double *)&v99);
  v105[1].m128_u64[0] = v103 + v104;
  *v75 = v77;
  return result;
}
