__int64 __fastcall sub_152EF40(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r14
  bool v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // edx
  unsigned int v10; // eax
  unsigned __int8 *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rax
  unsigned __int8 *v14; // r14
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // r15
  _QWORD *v18; // rax
  void **v19; // r13
  void **v20; // r14
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // r13
  void **v24; // r14
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rdx
  unsigned int v28; // eax
  bool v29; // si
  unsigned int v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  int v33; // eax
  _QWORD *v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // r15
  void *v45; // rdi
  __int64 v46; // r15
  __int64 v47; // r9
  unsigned __int64 *v48; // r15
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rbp
  unsigned __int64 *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // eax
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // r12
  unsigned __int8 v57; // r12
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // edx
  unsigned __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  int v68; // eax
  int v69; // esi
  __int64 v70; // r8
  bool v71; // zf
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  int *v78; // [rsp+8h] [rbp-140h]
  __int64 v79; // [rsp+8h] [rbp-140h]
  __int64 v80; // [rsp+8h] [rbp-140h]
  __int64 v81; // [rsp+8h] [rbp-140h]
  __int64 v82; // [rsp+8h] [rbp-140h]
  __int64 v83; // [rsp+8h] [rbp-140h]
  unsigned __int64 v84; // [rsp+10h] [rbp-138h]
  unsigned __int64 v85; // [rsp+10h] [rbp-138h]
  _BOOL8 v86; // [rsp+18h] [rbp-130h]
  __int64 v89; // [rsp+38h] [rbp-110h] BYREF
  __m128i v90; // [rsp+40h] [rbp-108h] BYREF
  __int64 v91; // [rsp+50h] [rbp-F8h] BYREF
  void *v92; // [rsp+60h] [rbp-E8h] BYREF
  void *ptr; // [rsp+68h] [rbp-E0h]
  __int64 v94; // [rsp+70h] [rbp-D8h]
  __int64 v95; // [rsp+78h] [rbp-D0h] BYREF
  void *v96; // [rsp+80h] [rbp-C8h]
  __int64 v97; // [rsp+90h] [rbp-B8h] BYREF
  __int16 v98; // [rsp+A0h] [rbp-A8h]
  void *v99[2]; // [rsp+B8h] [rbp-90h]
  __int64 v100; // [rsp+C8h] [rbp-80h]
  __int64 v101; // [rsp+D0h] [rbp-78h]
  __m128i v102; // [rsp+D8h] [rbp-70h]
  __int64 v103; // [rsp+E8h] [rbp-60h]
  __int64 v104; // [rsp+F0h] [rbp-58h]
  __int64 v105; // [rsp+F8h] [rbp-50h]
  __int64 v106; // [rsp+100h] [rbp-48h]

  if ( (unsigned __int8)sub_1569A00(a1, 22, 2192, a2, a3) )
    return 0;
  v5 = *(_QWORD **)(a1 + 8);
  v6 = 0;
  v7 = sub_6F3470((__int64)(v5 + 69), "__INTRIN_H", 0xAu);
  if ( (*(_BYTE *)(v7 + 3) & 2) == 0 )
  {
    v6 = 1;
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(v5[7] + 21LL) & 2) != 0 )
  {
    v46 = v5[213];
    v89 = v7;
    if ( (unsigned __int8)sub_12EC520((__int64 *)v46, &v89, &v90) )
    {
      v48 = (unsigned __int64 *)(v90.m128i_i64[0] + 8);
      goto LABEL_91;
    }
    v66 = *(unsigned int *)(v46 + 16);
    v67 = (_QWORD *)v90.m128i_i64[0];
    v68 = *(_DWORD *)(v46 + 8) + 1;
    v69 = 2 * v66;
    v70 = (unsigned int)(4 * v68);
    v92 = (void *)v90.m128i_i64[0];
    if ( (unsigned int)v70 < 3 * (int)v66 )
    {
      if ( (int)v66 - *(_DWORD *)(v46 + 12) - v68 > (unsigned int)v66 >> 3 )
      {
LABEL_128:
        v71 = *v67 == -4096;
        *(_DWORD *)(v46 + 8) = v68;
        if ( !v71 )
          --*(_DWORD *)(v46 + 12);
        v72 = v89;
        v67[1] = 0;
        v48 = v67 + 1;
        *v67 = v72;
LABEL_91:
        v49 = *v48;
        v50 = 0;
        if ( !*v48 )
          goto LABEL_98;
        v51 = (unsigned __int64 *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
        v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v49 & 4) != 0 )
        {
          v50 = 0;
          if ( !v51 )
            goto LABEL_98;
          v50 = *v51;
        }
        while ( v50 && (*(_BYTE *)(v50 + 12) & 3) == 2 )
          v50 = *(_QWORD *)v50;
LABEL_98:
        v52 = v89;
        if ( (*(_BYTE *)(v89 + 4) & 0x10) != 0 )
        {
          v81 = v89;
          sub_145CD30((__int64)v5);
          v52 = v81;
          if ( (*(_BYTE *)(v81 + 3) & 2) == 0 )
            goto LABEL_143;
        }
        else if ( (*(_BYTE *)(v89 + 3) & 2) == 0 )
        {
          v57 = 0;
          goto LABEL_145;
        }
        v53 = v5[7];
        if ( (*(_BYTE *)(v53 + 21) & 2) != 0 || *(char *)(v53 + 22) < 0 )
        {
          v54 = *(_DWORD *)(v5[213] + 48LL);
          if ( v54 )
          {
            v55 = *v48 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !*v48 || (*v48 & 4) == 0 || (v56 = *v48 & 0xFFFFFFFFFFFFFFF8LL, !v55) )
            {
              v75 = v5[16];
              v5[26] += 32LL;
              v76 = (v75 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              if ( v5[17] >= v76 + 32 && v75 )
              {
                v5[16] = v76 + 32;
                v56 = (v75 + 15) & 0xFFFFFFFFFFFFFFF0LL;
              }
              else
              {
                v84 = v55;
                v82 = v52;
                v77 = sub_986170((__int64)(v5 + 16), 32, 32, 4, v52, v55);
                v55 = v84;
                v52 = v82;
                v56 = v77;
                v76 = v77 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v56 = v55;
              *(_QWORD *)(v56 + 8) = 0;
              *(_DWORD *)(v56 + 16) = 0;
              *(_QWORD *)(v56 + 24) = 0;
              *(_BYTE *)(v56 + 20) = 0;
              *v48 = v76 | 4;
              v54 = *(_DWORD *)(v5[213] + 48LL);
            }
            if ( *(_DWORD *)(v56 + 16) != v54 )
              sub_14476F0((__int64)v5, v52, v56);
            v57 = *(_BYTE *)(v56 + 20);
LABEL_109:
            v58 = v89;
            if ( (*(_BYTE *)(v89 + 4) & 0x10) != 0 )
            {
              v79 = v89;
              sub_145CD30((__int64)v5);
              v58 = v79;
            }
            if ( (*(_BYTE *)(v58 + 3) & 2) != 0 )
            {
              v59 = v5[7];
              if ( (*(_BYTE *)(v59 + 21) & 2) == 0 )
              {
                v60 = 0;
                if ( *(char *)(v59 + 22) >= 0 )
                {
LABEL_122:
                  if ( !v50
                    || (*(_BYTE *)(v50 + 12) & 3) != 0
                    || !((unsigned __int16)(4 * v57) & 0xFFF8 | v50 & 0xFFFFFFFFFFFFFFF8LL) )
                  {
                    v6 = v60 == 0;
                  }
                  goto LABEL_5;
                }
              }
              v61 = *(_DWORD *)(v5[213] + 48LL);
              if ( v61 )
              {
                v62 = *v48 & 0xFFFFFFFFFFFFFFF8LL;
                if ( !*v48 || (*v48 & 4) == 0 || (v63 = *v48 & 0xFFFFFFFFFFFFFFF8LL, !v62) )
                {
                  v73 = v5[16];
                  v5[26] += 32LL;
                  v74 = (v73 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  if ( v5[17] >= v74 + 32 && v73 )
                  {
                    v5[16] = v74 + 32;
                    v63 = (v73 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  }
                  else
                  {
                    v85 = v62;
                    v83 = v58;
                    v63 = sub_986170((__int64)(v5 + 16), 32, 32, 4, v58, v62);
                    v62 = v85;
                    v58 = v83;
                    v74 = v63 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)(v63 + 8) = 0;
                  *(_DWORD *)(v63 + 16) = 0;
                  *(_QWORD *)(v63 + 24) = 0;
                  *(_QWORD *)v63 = v62;
                  *(_BYTE *)(v63 + 20) = 0;
                  *v48 = v74 | 4;
                  v61 = *(_DWORD *)(v5[213] + 48LL);
                }
                if ( *(_DWORD *)(v63 + 16) != v61 )
                {
                  v80 = v63;
                  sub_14476F0((__int64)v5, v58, v63);
                  v63 = v80;
                }
                v64 = *(_QWORD *)(v63 + 8);
                v65 = v64 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v64 & 4) != 0 )
                  v60 = *(unsigned int *)(v65 + 8);
                else
                  v60 = v65 != 0;
                goto LABEL_122;
              }
            }
LABEL_145:
            v60 = 0;
            goto LABEL_122;
          }
        }
LABEL_143:
        v57 = 0;
        goto LABEL_109;
      }
      v69 = v66;
    }
    sub_12F12D0(v46, v69, v90.m128i_i64[0], v66, v70, v47);
    sub_12EC520((__int64 *)v46, &v89, &v92);
    v67 = v92;
    v68 = *(_DWORD *)(v46 + 8) + 1;
    goto LABEL_128;
  }
LABEL_5:
  if ( *(_WORD *)(a1 + 32) != 5 )
    goto LABEL_45;
  v78 = (int *)(a1 + 16);
  v86 = v6;
  while ( 1 )
  {
    v8 = *(_DWORD **)(a1 + 24);
    v9 = *(_DWORD *)(a1 + 16);
    v10 = (unsigned __int16)(*v8 >> 9);
    if ( v10 == 65534 || v10 <= 0x23 || v10 == 36 )
    {
      sub_FC70B0((__int64)&v92, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), v9, 2206);
      v11 = (unsigned __int8 *)v92;
      if ( !v92 )
      {
        v34 = ptr;
        v35 = *((_DWORD *)ptr + 3744);
        if ( v35 )
        {
          v41 = (unsigned int)(v35 - 1);
          *((_DWORD *)ptr + 3744) = v41;
          v11 = (unsigned __int8 *)v34[v41 + 1856];
          v42 = *((unsigned int *)v11 + 134);
          *v11 = 0;
          v43 = *((_QWORD *)v11 + 66);
          *((_DWORD *)v11 + 106) = 0;
          v44 = v43 + (v42 << 6);
          while ( v43 != v44 )
          {
            while ( 1 )
            {
              v44 -= 64;
              v45 = *(void **)(v44 + 24);
              if ( v45 == (void *)(v44 + 40) )
                break;
              operator delete(v45);
              if ( v43 == v44 )
                goto LABEL_76;
            }
          }
LABEL_76:
          *((_DWORD *)v11 + 134) = 0;
        }
        else
        {
          v11 = (unsigned __int8 *)operator new(0x3A0u);
          *v11 = 0;
          *((_QWORD *)v11 + 12) = v11 + 112;
          *((_QWORD *)v11 + 16) = v11 + 144;
          *((_QWORD *)v11 + 20) = v11 + 176;
          *((_QWORD *)v11 + 24) = v11 + 208;
          *((_QWORD *)v11 + 28) = v11 + 240;
          *((_QWORD *)v11 + 32) = v11 + 272;
          *((_QWORD *)v11 + 36) = v11 + 304;
          *((_QWORD *)v11 + 40) = v11 + 336;
          *((_QWORD *)v11 + 44) = v11 + 368;
          *((_QWORD *)v11 + 48) = v11 + 400;
          *((_QWORD *)v11 + 52) = v11 + 432;
          *((_QWORD *)v11 + 13) = 0;
          v11[112] = 0;
          *((_QWORD *)v11 + 17) = 0;
          v11[144] = 0;
          *((_QWORD *)v11 + 21) = 0;
          v11[176] = 0;
          *((_QWORD *)v11 + 25) = 0;
          v11[208] = 0;
          *((_QWORD *)v11 + 29) = 0;
          v11[240] = 0;
          *((_QWORD *)v11 + 33) = 0;
          v11[272] = 0;
          *((_QWORD *)v11 + 37) = 0;
          v11[304] = 0;
          *((_QWORD *)v11 + 41) = 0;
          v11[336] = 0;
          *((_QWORD *)v11 + 45) = 0;
          v11[368] = 0;
          *((_QWORD *)v11 + 49) = 0;
          v11[400] = 0;
          *((_QWORD *)v11 + 53) = 0x800000000LL;
          *((_QWORD *)v11 + 66) = v11 + 544;
          *((_QWORD *)v11 + 67) = 0x600000000LL;
        }
        v92 = v11;
      }
      v11[*v11 + 1] = 5;
      v12 = v92;
      v13 = *(unsigned __int8 *)v92;
      *(_BYTE *)v92 = v13 + 1;
      v12[v13 + 2] = v8;
      v14 = (unsigned __int8 *)v92;
      if ( !v92 )
      {
        v32 = ptr;
        v33 = *((_DWORD *)ptr + 3744);
        if ( v33 )
        {
          v36 = (unsigned int)(v33 - 1);
          *((_DWORD *)ptr + 3744) = v36;
          v14 = (unsigned __int8 *)v32[v36 + 1856];
          v37 = *((unsigned int *)v14 + 134);
          *v14 = 0;
          v38 = *((_QWORD *)v14 + 66);
          *((_DWORD *)v14 + 106) = 0;
          v39 = v38 + (v37 << 6);
          while ( v38 != v39 )
          {
            while ( 1 )
            {
              v39 -= 64;
              v40 = *(void **)(v39 + 24);
              if ( v40 == (void *)(v39 + 40) )
                break;
              operator delete(v40);
              if ( v38 == v39 )
                goto LABEL_71;
            }
          }
LABEL_71:
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
        v92 = v14;
      }
      v14[*v14 + 1] = 2;
      v15 = v92;
      v16 = *(unsigned __int8 *)v92;
      *(_BYTE *)v92 = v16 + 1;
      v15[v16 + 2] = v86;
      if ( (_BYTE)v98 )
      {
        sub_FC7790(v94, (__int64 *)&v92, SHIBYTE(v98));
        v94 = 0;
        v98 = 0;
      }
      if ( v96 != &v97 )
        operator delete(v96);
      v17 = (void **)v92;
      if ( v92 )
      {
        v18 = ptr;
        if ( ptr )
        {
          if ( v92 < ptr || v92 > (char *)ptr + 14848 )
          {
            v19 = *((void ***)v92 + 66);
            v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v92 + 134)];
            if ( v19 != v20 )
            {
              do
              {
                while ( 1 )
                {
                  v20 -= 8;
                  v21 = (void **)v20[3];
                  if ( v21 == v20 + 5 )
                    break;
                  operator delete(v21);
                  if ( v19 == v20 )
                    goto LABEL_21;
                }
              }
              while ( v19 != v20 );
LABEL_21:
              v20 = (void **)v17[66];
            }
            if ( v20 != v17 + 68 )
              free(v20);
            v22 = (void **)v17[52];
            v23 = v17 + 52;
            if ( v22 != v17 + 54 )
              free(v22);
            v24 = v17 + 12;
            do
            {
              while ( 1 )
              {
                v23 -= 4;
                if ( *v23 == v23 + 2 )
                  break;
                operator delete(*v23);
                if ( v23 == v24 )
                  goto LABEL_29;
              }
            }
            while ( v23 != v24 );
LABEL_29:
            operator delete(v17, 0x3A0u);
          }
          else
          {
            v31 = *((unsigned int *)ptr + 3744);
            *((_DWORD *)ptr + 3744) = v31 + 1;
            v18[v31 + 1856] = v17;
          }
        }
      }
      v9 = *(_DWORD *)(a1 + 16);
    }
    v90.m128i_i32[2] = v9;
    v90.m128i_i64[0] = (__int64)v8;
    sub_B85890(&v91, (__int64)v8);
    v25 = *(_QWORD *)(a1 + 96);
    v26 = _mm_load_si128(&v90);
    ptr = &v95;
    v101 = v25;
    v94 = 0x800000000LL;
    v103 = v91;
    *(_OWORD *)v99 = 0;
    v102 = v26;
    v106 = 0x101010000LL;
    v92 = nullptr;
    v100 = 0;
    v104 = 0;
    v105 = 0;
    sub_1A395A0(&v92);
    sub_1A49A10(*(_QWORD *)(a1 + 96), &v92, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 0, 0);
    v27 = (unsigned int)v94;
    if ( !(_DWORD)v94 )
    {
      v28 = (unsigned __int16)(*v8 >> 9);
      if ( v28 > 0x23 )
      {
        v29 = v28 != 65534;
        v30 = v28 - 36;
        if ( v29 )
          v27 = v30;
      }
      sub_17B8B50(
        *(_QWORD *)(a1 + 96),
        v8,
        v27,
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
        1,
        *(unsigned int *)(a1 + 16));
    }
    sub_14634E0(*(__int64 **)(a1 + 8), v78);
    if ( *(_WORD *)(a1 + 32) != 66 )
      break;
    sub_14634E0(*(__int64 **)(a1 + 8), v78);
    if ( !BYTE3(v106) )
      goto LABEL_52;
    if ( (_DWORD)v92 == 5 )
    {
      if ( !BYTE4(v106) )
        goto LABEL_41;
LABEL_54:
      sub_1A445B0(v101, &v92);
      goto LABEL_41;
    }
    if ( v99[1] && (*(_BYTE *)(*(_QWORD *)(v101 + 232) + 46LL) & 0x20) != 0 )
    {
      sub_1663B80(v101, &v92);
LABEL_52:
      if ( BYTE4(v106) && (_DWORD)v92 == 5 )
        goto LABEL_54;
    }
LABEL_41:
    if ( v99[0] )
      sub_1A39780(v99[0]);
    if ( ptr == &v95 )
    {
      if ( *(_WORD *)(a1 + 32) != 5 )
        goto LABEL_45;
    }
    else
    {
      free(ptr);
      if ( *(_WORD *)(a1 + 32) != 5 )
        goto LABEL_45;
    }
  }
  if ( !BYTE3(v106) )
  {
LABEL_79:
    if ( !BYTE4(v106) || (_DWORD)v92 != 5 )
      goto LABEL_81;
LABEL_132:
    sub_1A445B0(v101, &v92);
    goto LABEL_81;
  }
  if ( (_DWORD)v92 == 5 )
  {
    if ( !BYTE4(v106) )
      goto LABEL_81;
    goto LABEL_132;
  }
  if ( v99[1] && (*(_BYTE *)(*(_QWORD *)(v101 + 232) + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v101, &v92);
    goto LABEL_79;
  }
LABEL_81:
  if ( v99[0] )
    sub_1A39780(v99[0]);
  if ( ptr != &v95 )
    free(ptr);
LABEL_45:
  if ( (unsigned __int8)sub_1569A00(a1, 23, 2196, a2, a3) )
    return 0;
  return (unsigned int)sub_1569A00(a1, 1, 2202, a2, a3) ^ 1;
}
