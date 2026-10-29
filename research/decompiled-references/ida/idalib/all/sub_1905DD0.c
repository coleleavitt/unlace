__int64 __fastcall sub_1905DD0(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE *v28; // r14
  char v29; // al
  int v30; // r15d
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // r9d
  __int64 v39; // r9
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned int v42; // edx
  __int64 *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  bool v51; // zf
  __int64 v52; // rax
  unsigned __int64 v53; // r15
  _QWORD *v54; // r8
  _QWORD *v55; // rax
  __int64 *v56; // rax
  __int64 *v57; // rax
  int v58; // r15d
  unsigned __int64 v59; // r11
  int v60; // r11d
  __int64 v61; // r9
  __int64 *i; // rax
  __int64 v63; // rcx
  __int64 v64; // r13
  __int64 v65; // r9
  _QWORD *v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rcx
  _QWORD **v71; // rsi
  unsigned int v72; // r9d
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r13
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  unsigned __int8 *v82; // r13
  _BYTE *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r13
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rcx
  int v94; // eax
  unsigned __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  _QWORD *v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // r12
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  void *v106; // rdi
  unsigned int v107; // [rsp+0h] [rbp-118h]
  __int64 *v108; // [rsp+0h] [rbp-118h]
  unsigned int v109; // [rsp+0h] [rbp-118h]
  _QWORD *v110; // [rsp+0h] [rbp-118h]
  unsigned int v111; // [rsp+0h] [rbp-118h]
  unsigned int v112; // [rsp+0h] [rbp-118h]
  int v113; // [rsp+0h] [rbp-118h]
  unsigned int v114; // [rsp+0h] [rbp-118h]
  __int64 v115; // [rsp+8h] [rbp-110h]
  __int64 v116; // [rsp+8h] [rbp-110h]
  __int64 v117; // [rsp+10h] [rbp-108h]
  __int64 v118; // [rsp+18h] [rbp-100h]
  int v119; // [rsp+2Ch] [rbp-ECh] BYREF
  __int64 v120; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v121; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v122; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD *v123; // [rsp+48h] [rbp-D0h] BYREF
  __m128 v124[12]; // [rsp+50h] [rbp-C8h] BYREF

  v8 = sub_B9ACA0(a1);
  if ( (unsigned int)sub_B7DD50(v8, *(_QWORD *)(a3 + 248)) )
    goto LABEL_2;
  v11 = sub_B81B70(v8);
  if ( !v11 )
    goto LABEL_131;
  if ( v11 <= 3u )
    goto LABEL_12;
  if ( v11 > 6u )
LABEL_131:
    BUG();
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(v8 + 97) & 0x20) != 0 )
    goto LABEL_13;
  if ( !(unsigned __int8)sub_15F1490(a3, v8) )
    goto LABEL_2;
LABEL_12:
  if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x2B )
    goto LABEL_16;
LABEL_13:
  v12 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v12 = *(_QWORD *)v12;
  if ( ((*(_BYTE *)(v12 + 8) + 70) & 0x7Fu) > 3 || !sub_B735C0(v8) )
  {
LABEL_16:
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    v17 = *(unsigned int *)(a3 + 4232);
    v18 = a3 + 4216;
    v123 = v13;
    if ( (_DWORD)v17 )
    {
      v14 = *(_QWORD *)(a3 + 4216);
      v19 = (v17 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
      v20 = v14 + 16LL * v19;
      v21 = *(_QWORD *)v20;
      if ( v13 == *(_QWORD **)v20 )
      {
LABEL_18:
        sub_17AC880(v124, (_QWORD *)v20, (_QWORD *)(16 * v17 + v14), v18, 1);
        v22 = *(unsigned int *)(v124[0].m128_u64[0] + 8);
LABEL_19:
        v23 = *(_QWORD *)(a3 + 4240) + 16 * v22;
        if ( !*(_DWORD *)(v23 + 8) )
          *(_DWORD *)(v23 + 8) = a2;
        goto LABEL_2;
      }
      v58 = 1;
      v59 = 0;
      if ( v21 != -4096 )
      {
        while ( 1 )
        {
          if ( !v59 && v21 == -8192 )
            v59 = v20;
          v19 = (v17 - 1) & (v58 + v19);
          v20 = v14 + 16LL * v19;
          v21 = *(_QWORD *)v20;
          if ( v13 == *(_QWORD **)v20 )
            goto LABEL_18;
          if ( v21 == -4096 )
          {
            if ( v59 )
              v20 = v59;
            break;
          }
          ++v58;
        }
      }
      v60 = *(_DWORD *)(a3 + 4224);
      v16 = (unsigned int)(3 * v17);
      v124[0].m128_u64[0] = v20;
      v15 = (unsigned int)(v60 + 1);
      if ( 4 * (int)v15 < (unsigned int)v16 )
      {
        v61 = (unsigned int)(v17 - *(_DWORD *)(a3 + 4228) - v15);
        if ( (unsigned int)v61 > (unsigned int)v17 >> 3 )
          goto LABEL_51;
        v108 = (__int64 *)(a3 + 4216);
        sub_17E3690((__int64 *)(a3 + 4216), v17, v14, v18, v15, v61);
LABEL_50:
        sub_18C81F0(v108, (__int64 *)&v123, v124);
        v13 = v123;
        v14 = *(_QWORD *)(a3 + 4216);
        v20 = v124[0].m128_u64[0];
        LODWORD(v15) = *(_DWORD *)(a3 + 4224) + 1;
        v18 = (__int64)v108;
LABEL_51:
        v51 = *(_QWORD *)v20 == -4096;
        *(_DWORD *)(a3 + 4224) = v15;
        if ( !v51 )
          --*(_DWORD *)(a3 + 4228);
        *(_QWORD *)v20 = v13;
        *(_DWORD *)(v20 + 8) = 0;
        sub_17AC880(v124, (_QWORD *)v20, (_QWORD *)(16LL * *(unsigned int *)(a3 + 4232) + v14), v18, 1);
        v52 = *(unsigned int *)(a3 + 4248);
        v53 = v124[0].m128_u64[0];
        v54 = v123;
        if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 4252) )
        {
          v110 = v123;
          sub_2237220(a3 + 4240, a3 + 4256, v52 + 1, 16);
          v52 = *(unsigned int *)(a3 + 4248);
          v54 = v110;
        }
        v55 = (_QWORD *)(*(_QWORD *)(a3 + 4240) + 16 * v52);
        *v55 = v54;
        v55[1] = 0;
        v22 = *(unsigned int *)(a3 + 4248);
        *(_DWORD *)(a3 + 4248) = v22 + 1;
        *(_DWORD *)(v53 + 8) = v22;
        goto LABEL_19;
      }
    }
    else
    {
      v124[0].m128_u64[0] = 0;
    }
    v108 = (__int64 *)(a3 + 4216);
    sub_17E3690((__int64 *)(a3 + 4216), 2 * v17, v14, v18, v15, v16);
    goto LABEL_50;
  }
LABEL_2:
  v120 = 0;
  v9 = *(_QWORD *)(a3 + 232);
  v121 = 0;
  if ( *(_DWORD *)(v9 + 64) )
    sub_1AF3D40(*(_QWORD *)(a3 + 760), a1);
  sub_1903850(a3, a1, a2, 0, 0, 1u, &v120, &v121, a4);
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 232) + 60LL) & 0x10) == 0 || sub_9B48E0(v8) )
    return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
  v28 = *(_BYTE **)(a3 + 544);
  if ( v28 )
  {
    v29 = v28[8];
    v28 -= 72;
    if ( (v29 & 0x7Fu) - 34 >= 6 )
      v28 = nullptr;
  }
  v30 = sub_178EB70(*(_QWORD *)(a3 + 664), v8, v24, v25, v26, v27);
  v34 = sub_178EA20(*(_QWORD *)(a3 + 664), (__int64)v28, nullptr, v31, v32, v33);
  v38 = v34;
  if ( v30 == 1 )
  {
    if ( v34 > 1 && v34 != 3 )
      return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
    v45 = *(_QWORD *)(a3 + 232);
    if ( (*(_BYTE *)(v45 + 89) & 4) == 0 || (*(_BYTE *)(v45 + 97) & 1) != 0 )
      return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
    v107 = v38;
    sub_1606D30((__int64)v124, (_QWORD *)a3, a2, 4914, 0);
    v119 = 2;
    v46 = sub_1587D10((__int64)v124, &v119);
    LODWORD(v122) = 1;
    v47 = sub_1587D10(v46, (int *)&v122);
    v48 = v47;
    if ( *(_BYTE *)(v47 + 120) )
    {
      v71 = (_QWORD **)v8;
      sub_AE9DF0((unsigned __int8 **)(v47 + 32), v8, 0xAu);
      v72 = v107;
    }
    else
    {
      if ( !*(_BYTE *)(v47 + 132) )
      {
LABEL_45:
        sub_15F7200(v124);
        v49 = *(_QWORD *)(v8 + 48);
        v50 = 5862;
        if ( (v49 & 1) == 0 )
          v50 = (*(_DWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 ? 5866 : 5862;
        sub_1606D30((__int64)v124, (_QWORD *)a3, *(unsigned int *)(v8 + 24), v50, 0);
        sub_15F7200(v124);
        return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
      }
      v73 = sub_168B9E0((_QWORD *)v47);
      v77 = v107;
      v78 = v73;
      v79 = *(_QWORD **)(v48 + 16);
      if ( v79 )
      {
        v79 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v79 + 32LL))(
                          *(_QWORD *)(v48 + 16),
                          &v122,
                          *v79,
                          v75,
                          v76,
                          v107);
        v77 = v107;
      }
      v71 = &v123;
      v111 = v77;
      v123 = v79;
      v80 = sub_1587BC0(v78, (__int64 *)&v123, v74, v75, v76, v77);
      v72 = v111;
      v81 = *v80 + 32LL * *(unsigned int *)(v48 + 128);
      v82 = *(unsigned __int8 **)(v81 + 8);
      if ( !v82 )
      {
        v93 = *(_QWORD *)(v81 + 16);
        v94 = *(_DWORD *)(v93 + 14976);
        if ( v94 )
        {
          v102 = (unsigned int)(v94 - 1);
          *(_DWORD *)(v93 + 14976) = v102;
          v82 = *(unsigned __int8 **)(v93 + 8 * v102 + 14848);
          v103 = *((unsigned int *)v82 + 134);
          *v82 = 0;
          v104 = *((_QWORD *)v82 + 66);
          *((_DWORD *)v82 + 106) = 0;
          v105 = v104 + (v103 << 6);
          while ( v104 != v105 )
          {
            while ( 1 )
            {
              v105 -= 64;
              v106 = *(void **)(v105 + 24);
              v71 = (_QWORD **)(v105 + 40);
              if ( v106 == (void *)(v105 + 40) )
                break;
              v118 = v105;
              v117 = v104;
              v116 = v81;
              v114 = v72;
              operator delete(v106);
              v104 = v117;
              v105 = v118;
              v72 = v114;
              v81 = v116;
              if ( v117 == v118 )
                goto LABEL_122;
            }
          }
LABEL_122:
          *((_DWORD *)v82 + 134) = 0;
        }
        else
        {
          v115 = v81;
          v82 = (unsigned __int8 *)operator new(0x3A0u);
          *v82 = 0;
          *((_QWORD *)v82 + 12) = v82 + 112;
          *((_QWORD *)v82 + 16) = v82 + 144;
          *((_QWORD *)v82 + 20) = v82 + 176;
          *((_QWORD *)v82 + 24) = v82 + 208;
          *((_QWORD *)v82 + 28) = v82 + 240;
          *((_QWORD *)v82 + 32) = v82 + 272;
          *((_QWORD *)v82 + 36) = v82 + 304;
          *((_QWORD *)v82 + 40) = v82 + 336;
          *((_QWORD *)v82 + 44) = v82 + 368;
          *((_QWORD *)v82 + 48) = v82 + 400;
          *((_QWORD *)v82 + 52) = v82 + 432;
          v82[112] = 0;
          *((_QWORD *)v82 + 13) = 0;
          *((_QWORD *)v82 + 17) = 0;
          v82[144] = 0;
          *((_QWORD *)v82 + 21) = 0;
          v82[176] = 0;
          *((_QWORD *)v82 + 25) = 0;
          v82[208] = 0;
          *((_QWORD *)v82 + 29) = 0;
          v82[240] = 0;
          *((_QWORD *)v82 + 33) = 0;
          v82[272] = 0;
          *((_QWORD *)v82 + 37) = 0;
          v82[304] = 0;
          *((_QWORD *)v82 + 41) = 0;
          v82[336] = 0;
          *((_QWORD *)v82 + 45) = 0;
          v82[368] = 0;
          *((_QWORD *)v82 + 49) = 0;
          v82[400] = 0;
          *((_QWORD *)v82 + 53) = 0x800000000LL;
          v72 = v111;
          *((_QWORD *)v82 + 66) = v82 + 544;
          v81 = v115;
          *((_QWORD *)v82 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v81 + 8) = v82;
      }
      v82[*v82 + 1] = 10;
      v83 = *(_BYTE **)(v81 + 8);
      v84 = (unsigned __int8)*v83;
      *v83 = v84 + 1;
      *(_QWORD *)&v83[8 * v84 + 16] = v8;
    }
    if ( *(_BYTE *)(v48 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v48 + 32), (int)v72, 2u);
    }
    else if ( *(_BYTE *)(v48 + 132) )
    {
      v112 = v72;
      v85 = sub_168B9E0((_QWORD *)v48);
      v89 = v112;
      v90 = v85;
      v91 = *(_QWORD **)(v48 + 16);
      if ( v91 )
      {
        v91 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **, _QWORD, __int64, __int64, _QWORD))(*v91 + 32LL))(
                          *(_QWORD *)(v48 + 16),
                          v71,
                          *v91,
                          v87,
                          v88,
                          v112);
        v89 = v112;
      }
      v113 = v89;
      v123 = v91;
      v92 = sub_1587BC0(v90, (__int64 *)&v123, v86, v87, v88, v89);
      sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * *(unsigned int *)(v48 + 128) + 8), v113, 2u);
    }
    goto LABEL_45;
  }
  if ( v30 )
    return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
  {
LABEL_28:
    v39 = v38 - 2;
    if ( (unsigned int)v39 > 1 )
      return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
    if ( (*(_BYTE *)(v8 + 96) & 5) == 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 232) + 89LL) & 0x40) == 0
        || v28 && (sub_B77A30((__int64)v28) || (unsigned int)sub_A7BFC0(*(_QWORD *)(a3 + 248), v28) != 3) )
      {
        return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
      }
      v40 = *(_QWORD *)(a3 + 248);
      v123 = (_QWORD *)v8;
      v41 = *(unsigned int *)(v40 + 22792);
      if ( (_DWORD)v41 )
      {
        v39 = *(_QWORD *)(v40 + 22776);
        v42 = (v41 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v43 = (__int64 *)(v39 + 8LL * v42);
        v44 = *v43;
        if ( v8 == *v43 )
        {
LABEL_36:
          sub_1795210(v124, v43, (_QWORD *)(v39 + 8 * v41), v40 + 22776, 1);
          return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
        }
        v37 = 1;
        v95 = 0;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v95 )
              v95 = (unsigned __int64)v43;
            v42 = (v41 - 1) & (v37 + v42);
            v43 = (__int64 *)(v39 + 8LL * v42);
            v44 = *v43;
            if ( v8 == *v43 )
              goto LABEL_36;
            if ( v44 == -4096 )
            {
              if ( v95 )
                goto LABEL_108;
              break;
            }
            v37 = (unsigned int)(v37 + 1);
          }
        }
        v95 = (unsigned __int64)v43;
LABEL_108:
        v124[0].m128_u64[0] = v95;
        v35 = (unsigned int)(*(_DWORD *)(v40 + 22784) + 1);
        v36 = (unsigned int)(3 * v41);
        if ( 4 * (int)v35 < (unsigned int)v36 )
        {
          v96 = (unsigned int)(v41 - *(_DWORD *)(v40 + 22788) - v35);
          v97 = (unsigned int)v41 >> 3;
          if ( (unsigned int)v96 <= (unsigned int)v97 )
          {
            sub_1901D40(v40 + 22776, v41, v96, v97, v37, v39);
            sub_18C97F0((__int64 *)(v40 + 22776), (__int64 *)&v123, v124);
          }
          goto LABEL_111;
        }
      }
      else
      {
        v124[0].m128_u64[0] = 0;
      }
      sub_1901D40(v40 + 22776, 2 * v41, v35, v36, v37, v39);
      sub_18C97F0((__int64 *)(v40 + 22776), (__int64 *)&v123, v124);
LABEL_111:
      v98 = (_QWORD *)v124[0].m128_u64[0];
      ++*(_DWORD *)(v40 + 22784);
      if ( *v98 != -4096 )
        --*(_DWORD *)(v40 + 22788);
      v99 = *(unsigned int *)(v40 + 22792);
      *v98 = v123;
      sub_1795210(v124, v98, (_QWORD *)(*(_QWORD *)(v40 + 22776) + 8 * v99), v40 + 22776, 1);
      v100 = *(unsigned int *)(v40 + 22808);
      v101 = v123;
      if ( v100 + 1 > (unsigned __int64)*(unsigned int *)(v40 + 22812) )
      {
        sub_2237220(v40 + 22800, v40 + 22816, v100 + 1, 8);
        v100 = *(unsigned int *)(v40 + 22808);
      }
      *(_QWORD *)(*(_QWORD *)(v40 + 22800) + 8 * v100) = v101;
      ++*(_DWORD *)(v40 + 22808);
      return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
    }
    v64 = *(_QWORD *)(a3 + 248);
    v122 = v8;
    if ( (unsigned __int8)sub_9F4410((__int64 *)(v64 + 22752), &v122, &v123) )
    {
      sub_9FC8E0(
        v124,
        v123,
        (_QWORD *)(*(_QWORD *)(v64 + 22752) + 8LL * *(unsigned int *)(v64 + 22768)),
        v64 + 22752,
        1);
      return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
    }
    v66 = v123;
    v67 = (unsigned int)(*(_DWORD *)(v64 + 22760) + 1);
    v68 = *(unsigned int *)(v64 + 22768);
    v124[0].m128_u64[0] = (unsigned __int64)v123;
    v69 = (unsigned int)(4 * v67);
    if ( (unsigned int)v69 >= 3 * (int)v68 )
    {
      sub_9FC950(v64 + 22752, 2 * v68, v67, (unsigned int)(2 * v68), v69, v65);
    }
    else
    {
      v70 = (unsigned int)(v68 - *(_DWORD *)(v64 + 22764) - v67);
      if ( (unsigned int)v70 > (unsigned int)v68 >> 3 )
      {
LABEL_77:
        v51 = *v66 == -4096;
        *(_DWORD *)(v64 + 22760) = v67;
        if ( !v51 )
          --*(_DWORD *)(v64 + 22764);
        *v66 = v122;
        v123 = v66;
        sub_9FC8E0(v124, v66, (_QWORD *)(*(_QWORD *)(v64 + 22752) + 8 * v68), v64 + 22752, 1);
        return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
      }
      sub_9FC950(v64 + 22752, v68, v67, v70, v69, v65);
    }
    sub_9F4410((__int64 *)(v64 + 22752), &v122, v124);
    v66 = (_QWORD *)v124[0].m128_u64[0];
    v68 = *(unsigned int *)(v64 + 22768);
    LODWORD(v67) = *(_DWORD *)(v64 + 22760) + 1;
    goto LABEL_77;
  }
  v109 = v34;
  v56 = sub_B8C3D0(v8, (__int64)v28, v35, v36, v37, v34);
  v38 = v109;
  v35 = *v56;
  v36 = *v56 + 8LL * *((unsigned int *)v56 + 2);
  if ( *v56 >= v36 )
  {
    if ( v35 != v36 )
    {
      if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) == 168 )
        return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
      for ( i = (__int64 *)(v36 + 8); ; ++i )
      {
        v36 = (unsigned __int64)i;
        if ( (__int64 *)v35 == i )
          break;
        v63 = *i;
        if ( *(_WORD *)(v63 + 36) == 168 )
          return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
      }
    }
    goto LABEL_28;
  }
  v57 = (__int64 *)*v56;
  while ( 1 )
  {
    v35 = *v57;
    if ( *(_WORD *)(*v57 + 36) == 168 )
      break;
    if ( (__int64 *)v36 == ++v57 )
      goto LABEL_28;
  }
  if ( (__int64 *)v36 == v57 )
    goto LABEL_28;
  return sub_B8C4D0(a1, *(_QWORD *)(a3 + 248));
}
