__int64 __fastcall sub_188C9F0(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  int v4; // r12d
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // r15
  int v21; // eax
  char v22; // r10
  char v23; // r12
  bool v24; // al
  char v25; // cl
  char v26; // dl
  char v27; // al
  unsigned int v28; // edx
  __int64 *v29; // r12
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r9
  char v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdi
  __int64 v45; // r9
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rsi
  char v53; // di
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  unsigned __int8 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // r13
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r13
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r13
  unsigned int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 *v83; // r14
  unsigned int v84; // edx
  __int64 *v85; // rsi
  __int64 v86; // r15
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  size_t v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int64 v97; // rax
  unsigned int *v98; // rdx
  unsigned int *v99; // r14
  unsigned int *v100; // rbx
  unsigned int v101; // edx
  char v102; // [rsp+8h] [rbp-180h]
  __int64 v103; // [rsp+10h] [rbp-178h]
  char v104; // [rsp+18h] [rbp-170h]
  char v105; // [rsp+18h] [rbp-170h]
  unsigned int *v106; // [rsp+18h] [rbp-170h]
  __int64 v108; // [rsp+28h] [rbp-160h]
  __int64 v109; // [rsp+30h] [rbp-158h]
  char v110; // [rsp+30h] [rbp-158h]
  unsigned __int64 v111; // [rsp+30h] [rbp-158h]
  __int64 v112; // [rsp+30h] [rbp-158h]
  unsigned __int8 v113; // [rsp+30h] [rbp-158h]
  __int64 v114; // [rsp+38h] [rbp-150h]
  unsigned __int8 v115; // [rsp+38h] [rbp-150h]
  unsigned __int64 v116; // [rsp+40h] [rbp-148h]
  char v117; // [rsp+4Bh] [rbp-13Dh]
  char v118; // [rsp+4Bh] [rbp-13Dh]
  int v119[4]; // [rsp+4Ch] [rbp-13Ch] BYREF
  bool v120; // [rsp+5Fh] [rbp-129h] BYREF
  unsigned __int64 v121; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 v122; // [rsp+68h] [rbp-120h] BYREF
  __int64 v123; // [rsp+70h] [rbp-118h] BYREF
  char v124; // [rsp+78h] [rbp-110h]
  __int64 v125[3]; // [rsp+80h] [rbp-108h] BYREF
  void *v126; // [rsp+98h] [rbp-F0h]
  __int64 v127; // [rsp+A8h] [rbp-E0h] BYREF
  __m128i v128; // [rsp+C0h] [rbp-C8h] BYREF
  int v129; // [rsp+D8h] [rbp-B0h]
  unsigned int *v130; // [rsp+F8h] [rbp-90h]

  v6 = (unsigned int *)a2;
  v119[0] = a3;
  v7 = sub_B72690(a2 + 72);
  if ( v7 )
    v7 -= 64LL;
  v121 = v7;
  if ( (unsigned __int8)sub_B8E180(v7 + 64) )
    return 0;
  v103 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2);
  LOBYTE(v8) = v103 == a2;
  v104 = (v103 == a2) & (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) >> 7);
  v9 = v119[0];
  LOBYTE(v4) = v119[0] == 0;
  LOBYTE(v9) = v119[0] == 5;
  v10 = (v9 | v4) ^ 1;
  v11 = sub_B76070(a2, a2, v8, v103);
  if ( (unsigned __int8)v10 == v11 - (unsigned __int8)sub_B981D0((_QWORD *)a2, a2) )
  {
    LOBYTE(v31) = sub_B748A0(a2, a2, (unsigned __int8)v10, v12);
    v102 = 0;
    v14 = v31;
    if ( (_BYTE)v31 )
    {
      if ( v104 )
      {
        v14 = 0;
        v102 = v104;
      }
      else
      {
        sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xE43u, 0);
        v86 = sub_184A780((__int64)&v128, v119);
        a2 = (unsigned __int64)v125;
        v125[0] = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 16LL))(v6);
        sub_1587DB0(v86, v125);
        sub_15F7200(&v128);
        v102 = 0;
      }
    }
  }
  else
  {
    sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xE40u, 0);
    v13 = sub_184A780((__int64)&v128, v119);
    a2 = (unsigned __int64)v125;
    v14 = 1;
    v125[0] = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 16LL))(v6);
    sub_1587DB0(v13, v125);
    sub_15F7200(&v128);
    v102 = 0;
  }
  v19 = (__int64 *)(*((_QWORD *)v6 + 6) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *v19;
  if ( *(_BYTE *)(*v19 + 16) != 26 )
    v20 = sub_F63050(*v19, a2, v15, v16);
  v21 = v119[0];
  if ( v119[0] == 1 )
  {
    v65 = v121;
    a2 = *(_QWORD *)(v121 + 104);
    sub_7052B0((__int64 *)(a2 + 96), a2, v15, v16, v17, v18);
    if ( *(char *)(*(_QWORD *)(v65 + 128) + 9LL) < 0 )
    {
      a2 = *(_QWORD *)(v65 + 104);
      sub_7052B0((__int64 *)(a2 + 96), a2, v66, v67, v68, v69);
      if ( (*(_BYTE *)(*(_QWORD *)(v65 + 128) + 1LL) & 8) != 0 )
      {
        v21 = v119[0];
        v117 = 1;
      }
      else
      {
        a2 = *(_QWORD *)(v65 + 104);
        sub_7052B0((__int64 *)(a2 + 96), a2, v87, v88, v89, v90);
        v21 = v119[0];
        v117 = (*(_BYTE *)(*(_QWORD *)(v65 + 128) + 9LL) & 0x40) != 0;
      }
    }
    else
    {
      v21 = v119[0];
      v117 = 0;
    }
  }
  else
  {
    v117 = 0;
    if ( v119[0] == 3 )
    {
      v70 = v121;
      a2 = *(_QWORD *)(v121 + 104);
      sub_7052B0((__int64 *)(a2 + 96), a2, v15, v16, v17, v18);
      v21 = v119[0];
      v117 = *(_BYTE *)(*(_QWORD *)(v70 + 128) + 10LL) & 1;
    }
  }
  v108 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
  if ( (unsigned int)(v21 - 3) <= 1 )
  {
    v114 = *(_QWORD *)(v20 + 24);
    v108 = v114;
    v128.m128i_i64[0] = sub_B987D0(v6, a2);
    v41 = sub_C1BEF0((__int64)&v128, a2, v39, v40);
    v44 = *(_QWORD *)(a1 + 248);
    v45 = v41;
    v46 = *(_QWORD *)(v121 + 48);
    if ( v46 )
    {
      v47 = v46 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v112 = v41;
      v80 = sub_A7AA70(v44, v121, v42, 0, v43, v41);
      v44 = *(_QWORD *)(a1 + 248);
      v45 = v112;
      v47 = v80;
    }
    v109 = v45;
    v48 = sub_A76250(v44, 6, 0, v47, 0);
    LODWORD(v49) = 0;
    v116 = v109 & 0xFFFFFFFFFFFFFFF0LL;
    v50 = *(_QWORD *)&byte_8[v109 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v50 & 8) != 0 )
      v49 = *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL));
    v110 = v109 & 7;
    v51 = sub_A70E70(*(_QWORD *)(a1 + 248), v48, (unsigned int)v49 >> 9);
    v122 = sub_A73030(*(_QWORD *)(a1 + 248), v51, 1u);
    v52 = *(_QWORD *)&byte_8[v114 & 0xFFFFFFFFFFFFFFF0LL];
    v53 = v52 | v114;
    a2 = v52 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (a2 | v53 & 7) != (*(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                          | ((unsigned __int8)*(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v122)
                          & 7) )
    {
      v14 = 1;
      sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0xE42u, 0);
      LOBYTE(v125[0]) = v119[0] == 4;
      v54 = sub_1588420((__int64)&v128, (unsigned __int8 *)v125);
      a2 = (unsigned __int64)&v122;
      sub_1605D30(v54, (__int64 *)&v122);
      sub_15F7200(&v128);
    }
    if ( (v110 & 1) != 0 || (a2 = v116, *(_DWORD *)(v116 + 8) & 1 | *(_QWORD *)(v116 + 8) & 4 | v110 & 4) )
    {
      if ( v104 )
      {
        v102 = v104;
      }
      else
      {
        v14 = 1;
        sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0xE41u, 0);
        LOBYTE(v123) = v119[0] == 4;
        v79 = sub_1588420((__int64)&v128, (unsigned __int8 *)&v123);
        a2 = (unsigned __int64)v125;
        LODWORD(v125[0]) = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0;
        sub_1588370(v79, (unsigned int *)v125);
        sub_15F7200(&v128);
      }
    }
    v55 = sub_B981D0(v6, a2);
    v59 = v55;
    if ( (_BYTE)v55 )
    {
      v123 = *(_QWORD *)(**((_QWORD **)v6 + 15) + 48LL);
      if ( (v123 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1
          || (v60 = v121,
              v115 = v55,
              v111 = sub_A7A9D0(*(_QWORD *)(a1 + 248), v121, v56, v57, v58, v55),
              v63 = sub_C1BEF0((__int64)&v123, v60, v61, v62),
              v59 = v115,
              v64 = *(_QWORD *)&byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL],
              LOBYTE(v63) = v64 | v63,
              a2 = v64 & 0xFFFFFFFFFFFFFFF8LL,
              (a2 | v63 & 7) != (*(_QWORD *)&byte_8[v111 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                               | ((unsigned __int8)*(_QWORD *)&byte_8[v111 & 0xFFFFFFFFFFFFFFF0LL]
                                | (unsigned __int8)v111)
                               & 7)) )
        {
          if ( v104 )
          {
            v102 = v104;
          }
          else
          {
            v113 = v59;
            sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0xE3Eu, 0);
            v120 = v119[0] == 4;
            v81 = sub_1588420((__int64)&v128, (unsigned __int8 *)&v120);
            v82 = sub_185AB80(v81, (__int64 *)&v121);
            a2 = (unsigned __int64)v125;
            v125[0] = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 16LL))(v6);
            sub_1587DB0(v82, v125);
            sub_15F7200(&v128);
            v14 = v113;
          }
        }
      }
    }
  }
  v22 = 0;
  if ( (_BYTE)v10 )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(v20 + 8LL * (unsigned __int8)sub_B981D0(v6, a2) + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
    {
      v14 = v10;
      sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0xE3Cu, 0);
      sub_15F7200(&v128);
      v22 = 0;
      goto LABEL_13;
    }
    v36 = sub_F68450(v34, a2, v32, v33, v35);
    LOBYTE(v37) = v10;
    if ( (v36 & 1) == 0 )
      v37 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
    v38 = v37 & (v117 ^ 1);
    if ( (v36 & 4) != 0 || (byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    {
      if ( v104 )
      {
        if ( v38 )
        {
          v102 = v37 & (v117 ^ 1);
          v22 = 1;
          goto LABEL_13;
        }
LABEL_54:
        v22 = v37;
        v102 = v104;
        goto LABEL_13;
      }
      v83 = (__int64 *)(a1 + 8);
      v105 = v37 & (v117 ^ 1);
      v118 = v37;
      sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0xE44u, 0);
      sub_184A780((__int64)&v128, v119);
      sub_15F7200(&v128);
      if ( !v105 )
      {
        v22 = v118;
        v14 = v10;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v38 )
      {
        v104 = v102;
        goto LABEL_54;
      }
      if ( v104 )
      {
        v22 = 1;
        v102 = v104;
        goto LABEL_13;
      }
      v83 = (__int64 *)(a1 + 8);
    }
    v84 = v6[6];
    v85 = v83;
    v14 = v10;
    if ( (v119[0] & 0xFFFFFFFD) == 1 )
    {
      sub_168B9F0((__int64)&v128, v85, v84, 0xE3Du, 0);
      LOBYTE(v125[0]) = v119[0] == 3;
    }
    else
    {
      sub_168B9F0((__int64)&v128, v85, v84, 0xE3Fu, 0);
      LOBYTE(v125[0]) = v119[0] == 4;
    }
    sub_1588420((__int64)&v128, (unsigned __int8 *)v125);
    sub_15F7200(&v128);
    v22 = 1;
  }
LABEL_13:
  v23 = sub_1888F20(a1, v121, (unsigned int)v119[0], v22, nullptr, 0);
  v24 = sub_B77D90((__int64)v6);
  if ( v24 )
  {
    v25 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
    v26 = v6[21] & 3;
    if ( v26 )
    {
      v23 = v24;
      if ( v25 < 0 )
      {
LABEL_20:
        if ( (unsigned int *)v103 == v6 )
        {
LABEL_21:
          if ( v26 != 2 )
            v26 = 1;
LABEL_23:
          *((_BYTE *)v6 + 84) = v6[21] & 0xFC | v26 & 3;
          if ( (*(_BYTE *)(v20 + 19) & 0x1E) == 0 )
          {
            sub_A5E110((__m128 *)&v128, v20);
            v129 = 9;
            v78 = *(_QWORD *)(a1 + 248);
            v130 = v6;
            *((_QWORD *)v6 + 6) = sub_A73610(
                                    v78,
                                    v108,
                                    (__int64 *)(v20 + 48),
                                    *(unsigned __int16 *)(v20 + 22),
                                    &v128,
                                    0);
          }
          if ( v102 )
            goto LABEL_26;
          goto LABEL_55;
        }
        goto LABEL_43;
      }
    }
    else if ( v25 < 0 )
    {
      goto LABEL_42;
    }
    v27 = v6[7] & 0x7F;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
      goto LABEL_17;
    goto LABEL_41;
  }
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
  {
    v27 = v6[7] & 0x7F;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
    {
LABEL_17:
      if ( v27 == 36 )
        goto LABEL_42;
      goto LABEL_18;
    }
LABEL_41:
    if ( v27 != 38 )
      goto LABEL_42;
  }
LABEL_18:
  v26 = v6[21] & 3;
  if ( v26 )
  {
    if ( !v23 )
    {
      if ( !(unsigned int)sub_B778D0((__int64)v6) )
      {
        if ( (v6[21] & 3) != 2
          && (v75 = v121,
              sub_7052B0((__int64 *)(*(_QWORD *)(v121 + 104) + 96LL), *(_QWORD *)(v121 + 104), v71, v72, v73, v74),
              *(_DWORD *)(*(_QWORD *)(v75 + 128) + 20LL)) )
        {
          v92 = sub_B73090((__int64)v6);
          sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v92, 0xF88u, 0);
          sub_184A780((__int64)&v128, v119);
          sub_15F7200(&v128);
          v97 = sub_18455E0(v121, (__int64)v119, v93, v94, v95, v96);
          if ( (unsigned int *)v97 != v98 )
          {
            v106 = v6;
            v99 = v98;
            v100 = (unsigned int *)v97;
            do
            {
              v101 = *v100;
              v100 += 6;
              sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v101, 0x16D6u, 0);
              sub_15F7200(&v128);
            }
            while ( v99 != v100 );
            v6 = v106;
          }
          v14 = 1;
        }
        else
        {
          v14 = 1;
          v76 = sub_B73090((__int64)v6);
          sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v76, 0xF87u, 0);
          v77 = sub_184A780((__int64)&v128, v119);
          LOBYTE(v125[0]) = (v6[21] & 3) == 2;
          sub_1588420(v77, (unsigned __int8 *)v125);
          sub_15F7200(&v128);
        }
      }
      if ( (unsigned int *)v103 == v6 )
      {
        v26 = 0;
        goto LABEL_23;
      }
      goto LABEL_43;
    }
    goto LABEL_20;
  }
LABEL_42:
  if ( (unsigned int *)v103 == v6 )
  {
    v26 = 0;
    if ( !v23 )
      goto LABEL_23;
    v26 = *(_BYTE *)(v103 + 84) & 3;
    goto LABEL_21;
  }
LABEL_43:
  if ( v102 )
  {
    v28 = v6[6];
LABEL_45:
    v14 = 1;
    sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v28, 0x1280u, 0);
    sub_184A780((__int64)&v128, v119);
    sub_15F7200(&v128);
    if ( *((char *)v6 + 28) >= 0 )
      sub_1887DE0(a1, (__int64)v6, v119[0], 0, 1u);
    return v14;
  }
LABEL_55:
  if ( *((char *)v6 + 28) < 0 || !(unsigned __int8)sub_1887DE0(a1, (__int64)v6, v119[0], 0, 0) )
    return v14;
LABEL_26:
  v28 = v6[6];
  if ( (unsigned int *)v103 != v6 )
    goto LABEL_45;
  sub_1869020(a1, (__int64)v6, v28, 0);
  if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) && !(_BYTE)v14 )
  {
    v29 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0x1A9Eu, 0);
    sub_184A780((__int64)&v128, v119);
    sub_15F7200(&v128);
    if ( !v102 )
    {
      if ( *(char *)(v103 + 28) < 0 || !(unsigned __int8)sub_1887DE0(a1, v103, v119[0], 0, 1u) || !a4 )
        return 0;
      sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), a4, 0x18D3u, 0);
      v91 = j__strlen("delete");
      LODWORD(v123) = a4;
      HIDWORD(v123) = a4;
      v124 = 1;
      sub_1839360((__int64)v125, v123, 1, "delete", v91);
      sub_1589170((__int64)&v128, v125);
      if ( v126 != &v127 )
        operator delete(v126);
LABEL_33:
      sub_15F7200(&v128);
      return 0;
    }
    sub_168B9F0((__int64)&v128, (__int64 *)(a1 + 8), v6[6], 0x1715u, 0);
    sub_184A780((__int64)&v128, v119);
    sub_15F7200(&v128);
LABEL_32:
    sub_168B9F0((__int64)&v128, v29, v6[6], 0x1A51u, 0);
    sub_184A780((__int64)&v128, v119);
    goto LABEL_33;
  }
  if ( (_BYTE)v14 != 1 && v102 )
  {
    v29 = (__int64 *)(a1 + 8);
    goto LABEL_32;
  }
  return v14;
}
