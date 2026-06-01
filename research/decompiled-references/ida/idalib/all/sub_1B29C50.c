unsigned __int64 __fastcall sub_1B29C50(__int64 *a1, char *a2, __int64 a3, int a4, int a5)
{
  char *v5; // r15
  unsigned int **v6; // rbx
  char *v7; // rdx
  unsigned int *v8; // r12
  __int64 v9; // r13
  unsigned int v10; // r13d
  _QWORD *v11; // r12
  _BYTE *v12; // rax
  signed __int64 v13; // rdx
  _BYTE *v14; // r14
  unsigned int v15; // r14d
  unsigned int *v16; // r15
  unsigned int v17; // eax
  char v19; // al
  unsigned __int8 *v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r14
  __int64 v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r9
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  unsigned int **v69; // r12
  __int64 v70; // rbx
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // r14
  __int64 v77; // rbp
  unsigned int **v78; // r12
  __int64 v79; // rbx
  void *v80; // rdi
  unsigned int **v82; // [rsp+10h] [rbp-158h]
  unsigned int v83; // [rsp+18h] [rbp-150h]
  signed __int64 v84; // [rsp+18h] [rbp-150h]
  __int64 v85; // [rsp+18h] [rbp-150h]
  signed __int64 v86; // [rsp+18h] [rbp-150h]
  unsigned int v87; // [rsp+20h] [rbp-148h]
  unsigned int v88; // [rsp+24h] [rbp-144h]
  unsigned int *v89; // [rsp+30h] [rbp-138h]
  __int64 v90; // [rsp+38h] [rbp-130h]
  __int64 v95; // [rsp+58h] [rbp-110h]
  __int64 v96; // [rsp+58h] [rbp-110h]
  unsigned int v97; // [rsp+58h] [rbp-110h]
  _QWORD *v98; // [rsp+60h] [rbp-108h]
  _QWORD *v99; // [rsp+68h] [rbp-100h]
  __int64 v100; // [rsp+78h] [rbp-F0h] BYREF
  __m128i v101; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v102[16]; // [rsp+90h] [rbp-D8h] BYREF
  _BYTE v103[16]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v105; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-A0h]
  char v107; // [rsp+118h] [rbp-50h]
  unsigned int v108; // [rsp+120h] [rbp-48h]
  char v109; // [rsp+124h] [rbp-44h]

  v5 = &a2[8 * a3];
  if ( a2 == v5 )
  {
    sub_168B6E0((__int64)a1);
LABEL_57:
    v58 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F00320(v58, a4, a5, a2, a3, v59);
  }
  v6 = (unsigned int **)a2;
  v7 = a2;
  v8 = nullptr;
  v9 = 0;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)v7 + 8LL) == 37 )
      v9 = *(_QWORD *)v7;
    else
      v8 = *(unsigned int **)v7;
    v7 += 8;
  }
  while ( v5 != v7 );
  v89 = v8;
  v90 = v9;
  v10 = 106;
  v87 = 0;
  v88 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
  v11 = v103;
  v82 = (unsigned int **)v5;
  do
  {
    while ( 1 )
    {
      v16 = *v6;
      v17 = (*v6)[2];
      if ( v17 == 92 || v17 == 87 || v17 - 1 <= 1 )
        break;
LABEL_17:
      if ( v82 == ++v6 )
        goto LABEL_22;
    }
    if ( v10 != 106 )
    {
      sub_168B9F0((__int64)v11, a1, *v16, 0x1205u, 0);
      v12 = (_BYTE *)sub_20EAB70(36, v88);
      v14 = v12;
      if ( v107 )
      {
        sub_AEC220(&v105, v12, v13);
        if ( !v107 )
        {
LABEL_49:
          if ( !v109 )
            goto LABEL_10;
          v48 = sub_168B9E0(v11);
          v49 = v104;
          if ( v104 )
            v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104);
          v101.m128i_i64[0] = v49;
          v50 = sub_1587BC0(v48, v101.m128i_i64, v44, v45, v46, v47);
          sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v108 + 8), 1, 2u);
          v19 = v107;
LABEL_32:
          v15 = v16[1];
          v83 = *v16;
          if ( v19 )
          {
            v20 = v105;
            if ( v105 )
            {
              v21 = *((unsigned int *)v105 + 106);
              v22 = *((unsigned int *)v105 + 107);
              v23 = v21 + 1;
            }
            else
            {
              v60 = v106;
              v61 = *(_DWORD *)(v106 + 14976);
              if ( v61 )
              {
                v65 = (unsigned int)(v61 - 1);
                *(_DWORD *)(v106 + 14976) = v65;
                v20 = *(unsigned __int8 **)(v60 + 8 * v65 + 14848);
                v66 = *((unsigned int *)v20 + 134);
                *v20 = 0;
                v67 = *((_QWORD *)v20 + 66);
                *((_DWORD *)v20 + 106) = 0;
                v68 = v67 + (v66 << 6);
                if ( v67 == v68 )
                {
                  v23 = 1;
                  v21 = 0;
                }
                else
                {
                  v98 = v11;
                  v69 = v6;
                  v70 = v68;
                  do
                  {
                    while ( 1 )
                    {
                      v70 -= 64;
                      v71 = *(void **)(v70 + 24);
                      if ( v71 == (void *)(v70 + 40) )
                        break;
                      operator delete(v71);
                      if ( v67 == v70 )
                        goto LABEL_68;
                    }
                  }
                  while ( v67 != v70 );
LABEL_68:
                  v21 = *((unsigned int *)v20 + 106);
                  v6 = v69;
                  v11 = v98;
                  v23 = v21 + 1;
                }
                *((_DWORD *)v20 + 134) = 0;
                v22 = *((unsigned int *)v20 + 107);
              }
              else
              {
                v62 = operator new(0x3A0u);
                v22 = 8;
                v21 = 0;
                v20 = (unsigned __int8 *)v62;
                *(_BYTE *)v62 = 0;
                *(_QWORD *)(v62 + 96) = v62 + 112;
                *(_QWORD *)(v62 + 128) = v62 + 144;
                *(_QWORD *)(v62 + 160) = v62 + 176;
                *(_QWORD *)(v62 + 192) = v62 + 208;
                *(_QWORD *)(v62 + 224) = v62 + 240;
                *(_QWORD *)(v62 + 256) = v62 + 272;
                *(_QWORD *)(v62 + 288) = v62 + 304;
                *(_QWORD *)(v62 + 320) = v62 + 336;
                *(_QWORD *)(v62 + 352) = v62 + 368;
                *(_QWORD *)(v62 + 384) = v62 + 400;
                *(_QWORD *)(v62 + 416) = v62 + 432;
                *(_QWORD *)(v62 + 104) = 0;
                *(_BYTE *)(v62 + 112) = 0;
                *(_QWORD *)(v62 + 136) = 0;
                *(_BYTE *)(v62 + 144) = 0;
                *(_QWORD *)(v62 + 168) = 0;
                *(_BYTE *)(v62 + 176) = 0;
                *(_QWORD *)(v62 + 200) = 0;
                *(_BYTE *)(v62 + 208) = 0;
                *(_QWORD *)(v62 + 232) = 0;
                *(_BYTE *)(v62 + 240) = 0;
                *(_QWORD *)(v62 + 264) = 0;
                *(_BYTE *)(v62 + 272) = 0;
                *(_QWORD *)(v62 + 296) = 0;
                *(_BYTE *)(v62 + 304) = 0;
                *(_QWORD *)(v62 + 328) = 0;
                *(_BYTE *)(v62 + 336) = 0;
                *(_QWORD *)(v62 + 360) = 0;
                *(_BYTE *)(v62 + 368) = 0;
                *(_QWORD *)(v62 + 392) = 0;
                *(_BYTE *)(v62 + 400) = 0;
                *(_QWORD *)(v62 + 424) = 0x800000000LL;
                *(_QWORD *)(v62 + 536) = 0x600000000LL;
                *(_QWORD *)(v62 + 528) = v62 + 544;
                v23 = 1;
              }
              v105 = v20;
            }
            v101.m128i_i8[8] = 1;
            v101.m128i_i64[0] = __PAIR64__(v15, v83);
            if ( v23 > v22 )
            {
              sub_2237220(v20 + 416, v20 + 432, v23, 12);
              v21 = *((unsigned int *)v20 + 106);
            }
            v24 = 3 * v21;
            goto LABEL_38;
          }
LABEL_11:
          if ( !v109 )
          {
LABEL_12:
            sub_15F7200(v11);
            sub_168B9F0((__int64)v11, a1, v87, 0x182Eu, 0);
            sub_1AF81E0(&v101, v10);
            if ( v107 )
            {
              sub_AEC220(&v105, v101.m128i_i64[0], v101.m128i_i64[1]);
            }
            else if ( v109 )
            {
              v55 = sub_168B9E0(v11);
              v56 = v104;
              if ( v104 )
                v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104);
              v100 = v56;
              v57 = sub_1587BC0(v55, &v100, v51, v52, v53, v54);
              sub_AEC220((unsigned __int8 **)(*v57 + 32LL * v108 + 8), v101.m128i_i64[0], v101.m128i_i64[1]);
            }
            if ( (_BYTE *)v101.m128i_i64[0] != v102 )
              operator delete((void *)v101.m128i_i64[0]);
            sub_15F7200(v11);
            goto LABEL_17;
          }
          v30 = sub_168B9E0(v11);
          v31 = v104;
          if ( v104 )
            v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104);
          v100 = v31;
          v32 = sub_1587BC0(v30, &v100, v26, v27, v28, v29);
          v33 = *v32 + 32LL * v108;
          v20 = *(unsigned __int8 **)(v33 + 8);
          if ( v20 )
          {
            v34 = *((unsigned int *)v20 + 106);
            v35 = *((unsigned int *)v20 + 107);
            v36 = v34 + 1;
          }
          else
          {
            v63 = *(_QWORD *)(v33 + 16);
            v64 = *(_DWORD *)(v63 + 14976);
            if ( v64 )
            {
              v72 = (unsigned int)(v64 - 1);
              *(_DWORD *)(v63 + 14976) = v72;
              v20 = *(unsigned __int8 **)(v63 + 8 * v72 + 14848);
              v73 = *((unsigned int *)v20 + 134);
              *v20 = 0;
              v74 = *((_QWORD *)v20 + 66);
              *((_DWORD *)v20 + 106) = 0;
              v75 = v74 + (v73 << 6);
              if ( v74 == v75 )
              {
                v36 = 1;
                v34 = 0;
              }
              else
              {
                v97 = v15;
                v76 = v33;
                v77 = v74;
                v99 = v11;
                v78 = v6;
                v79 = v75;
                do
                {
                  while ( 1 )
                  {
                    v79 -= 64;
                    v80 = *(void **)(v79 + 24);
                    if ( v80 == (void *)(v79 + 40) )
                      break;
                    operator delete(v80);
                    if ( v77 == v79 )
                      goto LABEL_76;
                  }
                }
                while ( v77 != v79 );
LABEL_76:
                v34 = *((unsigned int *)v20 + 106);
                v6 = v78;
                v33 = v76;
                v15 = v97;
                v11 = v99;
                v36 = v34 + 1;
              }
              *((_DWORD *)v20 + 134) = 0;
              v35 = *((unsigned int *)v20 + 107);
            }
            else
            {
              v96 = v33;
              v35 = 8;
              v34 = 0;
              v20 = (unsigned __int8 *)operator new(0x3A0u);
              *v20 = 0;
              *((_QWORD *)v20 + 12) = v20 + 112;
              *((_QWORD *)v20 + 16) = v20 + 144;
              *((_QWORD *)v20 + 20) = v20 + 176;
              *((_QWORD *)v20 + 24) = v20 + 208;
              *((_QWORD *)v20 + 28) = v20 + 240;
              *((_QWORD *)v20 + 32) = v20 + 272;
              *((_QWORD *)v20 + 36) = v20 + 304;
              *((_QWORD *)v20 + 40) = v20 + 336;
              *((_QWORD *)v20 + 44) = v20 + 368;
              *((_QWORD *)v20 + 48) = v20 + 400;
              *((_QWORD *)v20 + 52) = v20 + 432;
              *((_QWORD *)v20 + 13) = 0;
              v20[112] = 0;
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
              *((_QWORD *)v20 + 53) = 0x800000000LL;
              v33 = v96;
              *((_QWORD *)v20 + 67) = 0x600000000LL;
              *((_QWORD *)v20 + 66) = v20 + 544;
              v36 = 1;
            }
            *(_QWORD *)(v33 + 8) = v20;
          }
          v101.m128i_i8[8] = 1;
          v101.m128i_i64[0] = __PAIR64__(v15, v83);
          if ( v36 > v35 )
          {
            sub_2237220(v20 + 416, v20 + 432, v36, 12);
            v34 = *((unsigned int *)v20 + 106);
          }
          v24 = 3 * v34;
LABEL_38:
          v25 = *((_QWORD *)v20 + 52) + 4 * v24;
          *(_QWORD *)v25 = v101.m128i_i64[0];
          *(_DWORD *)(v25 + 8) = v101.m128i_i32[2];
          ++*((_DWORD *)v20 + 106);
          goto LABEL_12;
        }
      }
      else
      {
        if ( !v109 )
        {
LABEL_10:
          v15 = v16[1];
          v83 = *v16;
          goto LABEL_11;
        }
        v84 = v13;
        v37 = sub_168B9E0(v11);
        v40 = v84;
        v41 = v37;
        v42 = v104;
        if ( v104 )
        {
          v95 = v84;
          v85 = v41;
          v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 32LL))(v104);
          v40 = v95;
          v41 = v85;
        }
        v86 = v40;
        v101.m128i_i64[0] = v42;
        v43 = sub_1587BC0(v41, v101.m128i_i64, v40, v41, v38, v39);
        sub_AEC220((unsigned __int8 **)(*v43 + 32LL * v108 + 8), v14, v86);
        if ( !v107 )
          goto LABEL_49;
      }
      sub_AE9DF0(&v105, 1, 2u);
      v19 = v107;
      goto LABEL_32;
    }
    v87 = *v16;
    v10 = (*v6++)[2];
  }
  while ( v82 != v6 );
LABEL_22:
  if ( !v90 || !v89 )
    goto LABEL_57;
  sub_168B9F0((__int64)v103, a1, *(_DWORD *)(v90 + 12), 0x1193u, 0);
  sub_1AF81E0(&v101, v89[2]);
  sub_1682AF0((__int64)v103, (__int64)&v101);
  if ( (_BYTE *)v101.m128i_i64[0] != v102 )
    operator delete((void *)v101.m128i_i64[0]);
  sub_15F7200(v103);
  sub_168B9F0((__int64)v103, a1, *v89, 0x181Bu, 0);
  sub_1AF81E0(&v101, v89[2]);
  sub_1682AF0((__int64)v103, (__int64)&v101);
  if ( (_BYTE *)v101.m128i_i64[0] != v102 )
    operator delete((void *)v101.m128i_i64[0]);
  sub_15F7200(v103);
  return 1;
}
