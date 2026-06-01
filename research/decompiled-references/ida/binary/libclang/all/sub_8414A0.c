__int64 __fastcall sub_8414A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r9
  _BYTE *v13; // r10
  __int64 v14; // r8
  __int64 v15; // rax
  char *v16; // rdx
  char v17; // r15
  char *v18; // rdx
  char *v19; // rax
  char *v20; // rax
  char v21; // cl
  char v22; // si
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rdi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rsi
  _QWORD *v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rax
  bool v40; // cc
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned int v44; // eax
  unsigned __int8 **v45; // rax
  unsigned __int8 **v46; // r13
  __int64 v47; // rax
  void *v48; // r13
  __int64 v49; // r12
  unsigned int v50; // eax
  unsigned int v51; // ecx
  char v52; // r15
  unsigned int v53; // eax
  char v54; // al
  void *v55; // rdi
  __int64 v56; // r15
  unsigned int v57; // eax
  unsigned __int8 **v58; // rax
  unsigned __int8 **v59; // rbx
  void *v60; // rdi
  __int64 v61; // rax
  void *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  void *v65; // rax
  __int64 *v66; // r13
  __int64 *v67; // rbx
  __int64 v68; // rsi
  char *v69; // rdx
  __int64 v70; // rcx
  char *v71; // rax
  __int64 v72; // rcx
  char *v73; // r8
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v78; // [rsp+8h] [rbp-110h]
  char *v79; // [rsp+8h] [rbp-110h]
  char *v80; // [rsp+8h] [rbp-110h]
  char *v81; // [rsp+8h] [rbp-110h]
  _BYTE *v82; // [rsp+10h] [rbp-108h]
  void *v83; // [rsp+10h] [rbp-108h]
  char v84; // [rsp+10h] [rbp-108h]
  char *v85; // [rsp+10h] [rbp-108h]
  char *v86; // [rsp+10h] [rbp-108h]
  char *v87; // [rsp+10h] [rbp-108h]
  char *v88; // [rsp+10h] [rbp-108h]
  __int64 v89; // [rsp+18h] [rbp-100h]
  void *v90; // [rsp+18h] [rbp-100h]
  __int64 v91; // [rsp+18h] [rbp-100h]
  void *v92; // [rsp+18h] [rbp-100h]
  __int64 v93; // [rsp+20h] [rbp-F8h]
  char *v94; // [rsp+20h] [rbp-F8h]
  void *v95; // [rsp+28h] [rbp-F0h]
  void *v96; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v97; // [rsp+38h] [rbp-E0h]
  char v98; // [rsp+3Ch] [rbp-DCh]
  void *v99; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v100; // [rsp+48h] [rbp-D0h]
  char v101; // [rsp+4Ch] [rbp-CCh]
  void *v102; // [rsp+60h] [rbp-B8h] BYREF
  __int64 *v103; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __m128i si128; // [rsp+88h] [rbp-90h]
  char v106[8]; // [rsp+98h] [rbp-80h] BYREF
  void *v107; // [rsp+A0h] [rbp-78h] BYREF
  size_t v108; // [rsp+A8h] [rbp-70h] BYREF
  char *v109; // [rsp+B0h] [rbp-68h] BYREF

  v6 = a3;
  v9 = *(_QWORD *)(*a2 + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1E7 )
  {
    v11 = sub_70DA50(v9, a3);
    if ( (unsigned __int8)sub_B080B0(v6) )
    {
      v47 = sub_6BF060(*(_QWORD **)(*a2 + 16), v6 & 0xFFFFFFFFFFFFFFF0LL);
      v11 = (unsigned int)sub_2575E10(v47) >> 3;
    }
    v12 = v11 + a4;
    v13 = (_BYTE *)a2[1];
    ptr = v106;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E9A0);
    if ( v11 + a4 != a4 )
    {
      v14 = a4;
      v15 = 0;
      while ( 1 )
      {
        v16 = (char *)(*(_QWORD *)v13 + 2 * v14);
        if ( !v16[1] )
          break;
        v17 = *v16;
        if ( si128.m128i_i64[1] >= (unsigned __int64)(v15 + 1) )
        {
          ++v14;
          *((_BYTE *)ptr + v15) = v17;
          v15 = ++si128.m128i_i64[0];
          if ( v12 == v14 )
            goto LABEL_11;
        }
        else
        {
          v93 = v14;
          v89 = v12;
          v82 = v13;
          sub_25D6230(&ptr, v106, v15 + 1, 1);
          v12 = v89;
          v14 = v93 + 1;
          v13 = v82;
          *((_BYTE *)ptr + si128.m128i_i64[0]) = v17;
          v15 = ++si128.m128i_i64[0];
          if ( v89 == v93 + 1 )
          {
LABEL_11:
            if ( !v13[88] )
            {
              v18 = (char *)ptr;
              v19 = (char *)ptr + v15;
              if ( ptr != v19 )
              {
                v20 = v19 - 1;
                if ( ptr < v20 )
                {
                  do
                  {
                    v21 = *v18;
                    v22 = *v20;
                    ++v18;
                    --v20;
                    *(v18 - 1) = v22;
                    v20[1] = v21;
                  }
                  while ( v18 < v20 );
                }
              }
            }
            goto LABEL_15;
          }
        }
      }
      if ( a5 )
      {
        v6 = a5;
        if ( (unsigned __int8)sub_B089F0(a5) )
          goto LABEL_37;
      }
      else
      {
        v42 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v42 + 16) == 13 && (((*(_WORD *)(v42 + 18) >> 3) + 76) & 0x1FFu) <= 1 )
        {
LABEL_37:
          BYTE4(v107) &= ~1u;
          LODWORD(v107) = 1;
          sub_69F700(a1, (int *)&v107);
          v40 = (unsigned int)v107 <= 1;
          *(_BYTE *)(a1 + 56) = 1;
          if ( !v40 )
            sub_69F740((__int64)&v107);
          goto LABEL_39;
        }
      }
      v43 = *a2;
      v44 = sub_8124E0(a2[2]);
      v45 = (unsigned __int8 **)sub_A2E1A0(v43, v44, 2183, 0);
      v46 = v45;
      if ( v45 )
      {
        sub_8356A0(v45, v6 & 0xFFFFFFFFFFFFFFF0LL, 8u);
        sub_8356A0(v46, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 2160LL) + 46LL) & 0x40) != 0, 3u);
      }
      *(_BYTE *)(a1 + 56) = 0;
      goto LABEL_39;
    }
LABEL_15:
    v97 = v11
        * sub_6F6DE0(
            *(_QWORD *)(*a2 + 16),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 18488LL) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v97 > 0x40 )
      sub_2585A50(&v96, 0, 0);
    else
      v96 = nullptr;
    v98 = 1;
    sub_2592D00(&v96, ptr, si128.m128i_u32[0]);
    v23 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_BYTE *)(v23 + 16);
    switch ( v24 )
    {
      case 13:
        if ( (((*(_WORD *)(v23 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        {
LABEL_19:
          v25 = v6;
          v26 = v6 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (unsigned __int8)sub_B080B0(v25) )
          {
            v27 = v26;
            v28 = *(_QWORD **)(*a2 + 16);
            v29 = sub_6BF060(v28, v26);
            v31 = sub_2575D20(v28, v27, v30);
            v32 = (void *)v31;
            if ( v29 == v31 )
            {
              v33 = v31;
              sub_2581430(&v99, v31, &v96);
            }
            else
            {
              v33 = v29;
              sub_2583C60(&v99, v29, &v96);
            }
            BYTE4(v107) &= ~1u;
            LODWORD(v107) = 0;
            v78 = sub_2575D00(&v99, v33, v34);
            sub_2580BE0(&v102, 0.0);
            sub_257EDC0(&v108, &v102, v78);
            sub_25769A0(&v102);
            LODWORD(v107) = 3;
            if ( v32 == v99 )
              sub_257D000(&v102, &v99, v35, v36);
            else
              sub_2576960(&v102, &v99);
            v39 = v102;
            if ( v32 == (void *)v108 )
            {
              v69 = v109;
              if ( v32 == v102 )
              {
                if ( v109 )
                {
                  v72 = *((_QWORD *)v109 - 1);
                  v73 = &v109[24 * v72];
                  if ( v73 != v109 )
                  {
                    do
                    {
                      v73 -= 24;
                      if ( *(void **)v73 == v39 )
                      {
                        v74 = *((_QWORD *)v73 + 1);
                        if ( v74 )
                        {
                          v75 = *(_QWORD *)(v74 - 8);
                          v76 = v74 + 24 * v75;
                          if ( v74 != v76 )
                          {
                            do
                            {
                              v95 = v39;
                              v94 = v69;
                              v91 = v74;
                              v87 = v73;
                              sub_5FF3B0((__int64 *)(v76 - 24));
                              v76 -= 24;
                              v74 = v91;
                              v73 = v87;
                              v69 = v94;
                              v39 = v95;
                            }
                            while ( v91 != v76 );
                            v75 = *(_QWORD *)(v91 - 8);
                          }
                          v92 = v39;
                          v88 = v69;
                          v81 = v73;
                          operator delete[]((void *)(v74 - 8), 24 * v75 + 8);
                          v73 = v81;
                          v69 = v88;
                          v39 = v92;
                        }
                        *((_QWORD *)v73 + 1) = 0;
                      }
                      else
                      {
                        v90 = v39;
                        v86 = v69;
                        v80 = v73;
                        sub_25769A0(v73);
                        v73 = v80;
                        v69 = v86;
                        v39 = v90;
                      }
                    }
                    while ( v73 != v69 );
                    v72 = *((_QWORD *)v69 - 1);
                  }
                  operator delete[](v69 - 8, 24 * v72 + 8);
                }
                v109 = nullptr;
                sub_257D000(&v108, &v102, v69, v38);
                goto LABEL_27;
              }
              if ( !v109 )
              {
LABEL_86:
                sub_2576960(&v108, &v102);
                goto LABEL_27;
              }
              v70 = *((_QWORD *)v109 - 1);
              v71 = &v109[24 * v70];
              if ( v71 != v109 )
              {
                do
                {
                  v85 = v69;
                  v79 = v71 - 24;
                  sub_5FF3B0((__int64 *)v71 - 3);
                  v71 = v79;
                  v69 = v85;
                }
                while ( v79 != v85 );
                v70 = *((_QWORD *)v85 - 1);
              }
              operator delete[](v69 - 8, 24 * v70 + 8);
              v65 = v102;
              v109 = nullptr;
            }
            else
            {
              if ( v32 != v102 )
              {
                sub_2576350(&v108, &v102, v37, v38);
LABEL_27:
                if ( v32 == v102 )
                {
                  v66 = v103;
                  if ( v103 )
                  {
                    v67 = &v103[3 * *(v103 - 1)];
                    if ( v103 == v67 )
                    {
                      v68 = 0;
                    }
                    else
                    {
                      do
                      {
                        v67 -= 3;
                        sub_5FF3B0(v67);
                      }
                      while ( v66 != v67 );
                      v68 = 24 * *(v66 - 1);
                    }
                    operator delete[](v66 - 1, v68 + 8);
                  }
                }
                else
                {
                  sub_25769A0(&v102);
                }
                sub_69F700(a1, (int *)&v107);
                v40 = (unsigned int)v107 <= 1;
                *(_BYTE *)(a1 + 56) = 1;
                if ( !v40 )
                  sub_69F740((__int64)&v107);
                sub_5FF3B0((__int64 *)&v99);
                goto LABEL_32;
              }
              sub_25769A0(&v108);
              v65 = v102;
            }
            if ( v65 == v32 )
            {
              sub_257D000(&v108, &v102, v63, v64);
              goto LABEL_27;
            }
            goto LABEL_86;
          }
          sub_8242A0(*a2, a2[2], v26);
          *(_BYTE *)(a1 + 56) = 0;
LABEL_32:
          if ( v97 > 0x40 && v96 )
            operator delete[](v96);
LABEL_39:
          if ( ptr != v106 )
            free(ptr);
          return a1;
        }
        break;
      case 46:
        v61 = sub_B14A40(v23);
        if ( (*(_BYTE *)(v61 + 74) & 1) == 0 && *(_QWORD *)(v61 + 128) <= 7u )
          goto LABEL_19;
        break;
      case 10:
        break;
      default:
        goto LABEL_19;
    }
    v98 = sub_B10310(v6) ^ 1;
    v50 = sub_70B280(*(_QWORD *)(*a2 + 16), v6 & 0xFFFFFFFFFFFFFFF0LL);
    v51 = v97;
    if ( v50 != v97 )
    {
      v52 = v98;
      sub_25877E0(&v107, &v96, v50);
      v101 = v52;
      v100 = v108;
      v99 = v107;
      if ( v52 )
      {
        sub_2587D60(&v107, &v99);
        v53 = v108;
        BYTE4(v103) = 1;
      }
      else
      {
        sub_2587BE0(&v107, &v99, v97);
        v53 = v108;
        BYTE4(v103) = 0;
      }
      LODWORD(v103) = v108;
      v102 = v107;
      if ( v53 <= 0x40 )
      {
        v54 = v102 == v96;
      }
      else
      {
        v83 = v102;
        v54 = sub_2586760(&v102, &v96);
        if ( v83 )
        {
          v55 = v83;
          v84 = v54;
          operator delete[](v55);
          v54 = v84;
        }
      }
      if ( !v54 )
      {
        v56 = *a2;
        v57 = sub_AC6DA0(a2[2]);
        v58 = (unsigned __int8 **)sub_A2E1A0(v56, v57, 2187, 0);
        v59 = v58;
        if ( v58 )
        {
          sub_8356A0(v58, v6 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          sub_83DF30((__int64 *)&v107, (int)&v96, 10, v98 ^ 1, 0, 1u, 0);
          sub_838D50(v59, v107, v108);
        }
        else
        {
          sub_83DF30((__int64 *)&v107, (int)&v96, 10, v98 ^ 1, 0, 1u, 0);
        }
        if ( v107 != &v109 )
          operator delete(v107, (unsigned __int64)(v109 + 1));
        v40 = v100 <= 0x40;
        *(_BYTE *)(a1 + 56) = 0;
        if ( v40 )
          goto LABEL_32;
        v60 = v99;
        if ( !v99 )
          goto LABEL_32;
        goto LABEL_64;
      }
      if ( v97 <= 0x40 && v100 <= 0x40 )
      {
        v97 = v100;
        v96 = v99;
        v98 = v101;
      }
      else
      {
        sub_2585EA0(&v96, &v99);
        v98 = v101;
        if ( v100 > 0x40 && v99 )
          operator delete[](v99);
      }
      v51 = v97;
    }
    LODWORD(v103) = v51;
    if ( v51 > 0x40 )
    {
      sub_2585B30(&v102);
      v51 = (unsigned int)v103;
      v62 = v102;
    }
    else
    {
      v62 = v96;
      v102 = v96;
    }
    BYTE4(v107) &= ~1u;
    LODWORD(v107) = 2;
    BYTE4(v103) = v98;
    LODWORD(v103) = 0;
    v108 = (size_t)v62;
    LODWORD(v109) = v51;
    BYTE4(v109) = v98;
    sub_69F700(a1, (int *)&v107);
    v40 = (unsigned int)v107 <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v40 )
      sub_69F740((__int64)&v107);
    if ( (unsigned int)v103 <= 0x40 )
      goto LABEL_32;
    v60 = v102;
    if ( !v102 )
      goto LABEL_32;
LABEL_64:
    operator delete[](v60);
    goto LABEL_32;
  }
  v102 = (void *)sub_6D4B20(v9, a3 & 0xFFFFFFFFFFFFFFF0LL);
  sub_69F1F0((__int64)&ptr, 0, 0, 0);
  v48 = ptr;
  v49 = si128.m128i_i64[0];
  BYTE4(v107) &= ~1u;
  LODWORD(v107) = 0;
  sub_6A37F0((__int64)&v107);
  sub_6A3550((__int64)&v107, (__int64)v48, v49, &v102, 1);
  sub_69F700(a1, (int *)&v107);
  v40 = (unsigned int)v107 <= 1;
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v40 )
    sub_69F740((__int64)&v107);
  return a1;
}

