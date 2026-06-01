void __fastcall sub_14264A0(__int64 a1, int *a2, char a3, __m128i a4, double a5)
{
  unsigned __int16 v7; // bx
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  unsigned int *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned __int16 v20; // r14
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // r15
  unsigned __int64 v28; // rdi
  bool v29; // dl
  int v30; // eax
  char v31; // al
  __int64 v32; // rax
  int v33; // r14d
  unsigned __int64 v34; // r12
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r15d
  __int64 v39; // rdi
  __int64 v40; // rsi
  unsigned __int16 v41; // r15
  char v42; // al
  __int64 v43; // rsi
  unsigned __int16 v44; // r14
  __int64 *v45; // rax
  char v46; // al
  char v47; // al
  __int64 v48; // r15
  __int64 *v49; // r14
  char *v50; // r15
  size_t v51; // rax
  size_t v52; // rcx
  char *v53; // r15
  size_t v54; // rax
  size_t v55; // rcx
  int v56; // eax
  unsigned __int16 v57; // r12
  char v58; // al
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int32 v61; // edx
  int v62; // ecx
  _DWORD *v63; // rdi
  int v64; // edx
  unsigned int v65; // esi
  int v66; // eax
  char v67; // al
  __int64 *v68; // rax
  __int64 v69; // rdx
  int v70; // eax
  __int32 v71; // r8d
  __int64 v72; // r15
  int v73; // r12d
  unsigned int v74; // eax
  int *v75; // rdx
  int v76; // ecx
  unsigned int v77; // eax
  int v78; // r12d
  _DWORD *v79; // rdi
  int v80; // r14d
  unsigned int v81; // esi
  int v82; // eax
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 *v87; // rax
  size_t v88; // rax
  int v89; // edx
  int v90; // esi
  int v91; // ecx
  int *v92; // rsi
  int v93; // eax
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  bool v101; // [rsp+8h] [rbp-E0h]
  __int32 v102; // [rsp+8h] [rbp-E0h]
  bool n; // [rsp+10h] [rbp-D8h]
  unsigned __int16 na; // [rsp+10h] [rbp-D8h]
  size_t nb; // [rsp+10h] [rbp-D8h]
  size_t nc; // [rsp+10h] [rbp-D8h]
  int nd; // [rsp+10h] [rbp-D8h]
  unsigned __int16 ne; // [rsp+10h] [rbp-D8h]
  __int64 v109; // [rsp+18h] [rbp-D0h]
  __int64 v110; // [rsp+20h] [rbp-C8h]
  size_t v111; // [rsp+20h] [rbp-C8h]
  char v112; // [rsp+33h] [rbp-B5h] BYREF
  int v113; // [rsp+34h] [rbp-B4h] BYREF
  int *v114; // [rsp+38h] [rbp-B0h] BYREF
  __m128i v115; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int16 v116; // [rsp+50h] [rbp-98h]
  __m128 v117; // [rsp+60h] [rbp-88h] BYREF
  __int64 v118; // [rsp+70h] [rbp-78h]

  ++*(_DWORD *)(a1 + 2300);
  sub_141B710(a1, (__int64)&v115, 1, &v112, a4, a5);
  v7 = v116;
  if ( v116 != 2 )
  {
    v8 = sub_141A630(v116);
    if ( v7 == 1 || v8 )
      BUG();
    v12 = v115.m128i_i64[1];
    v13 = *(_BYTE *)(v115.m128i_i64[1] + 3);
    if ( (v13 & 2) == 0 && (v13 & 4) != 0 && (*(_BYTE *)(v115.m128i_i64[1] + 5) & 2) != 0 )
      sub_145FCF0(a1, &v115, 0);
    v14 = *(_QWORD *)(a1 + 1112);
    if ( v14 )
      *(_BYTE *)(v14 + 146) = (*(_BYTE *)(a1 + 544) & 2) != 0;
    v15 = sub_1420400(a1, &v115, a3, v9, v10, v11);
    v17 = (unsigned int *)v15;
    if ( v15 )
    {
      v18 = *(_DWORD *)(v15 + 28);
      if ( !v112 )
      {
LABEL_9:
        if ( !v18 )
        {
LABEL_13:
          v20 = v116;
          goto LABEL_14;
        }
        v19 = *((_QWORD *)v17 + 2);
        v20 = *(_WORD *)(v19 + 16);
LABEL_11:
        if ( v20 == 68 )
        {
          sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *(_DWORD *)v19, 1101);
          sub_AEA040((__int64)&v117);
          return;
        }
        v21 = v19 + 24LL * (v18 - 1);
        if ( *(_WORD *)(v21 + 16) == 68 )
        {
          sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *(_DWORD *)v21, 1100);
          sub_AEA040((__int64)&v117);
          return;
        }
        goto LABEL_13;
      }
      v20 = v116;
      if ( v18 != 1 )
      {
        LOBYTE(v16) = v116 == 157;
        if ( (unsigned __int16)(v116 - 80) <= 0x16u )
          v16 |= (0x400081uLL >> ((unsigned __int8)v116 - 80)) & 1;
        if ( (_BYTE)v16 && !v18 )
        {
LABEL_14:
          v22 = (v20 == 1) | sub_141A630(v20);
          if ( !*(_BYTE *)(a1 + 2401) )
            goto LABEL_15;
          if ( v22 )
            BUG();
          if ( (*(_BYTE *)(v115.m128i_i64[1] + 3) & 2) == 0 )
            goto LABEL_55;
          sub_1423DB0((__int64)&v117, (_QWORD *)a1, v115.m128i_i64[1], v23, v24, v25);
          if ( (v117.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( !v118 )
            {
              v87 = sub_13F1C60((__int64 *)(v117.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL));
              if ( !v87 )
                goto LABEL_55;
              v40 = v87[2];
LABEL_53:
              if ( v40 && (unsigned __int8)sub_13F10C0((__int64)v17, v40, a1, **(char **)(a1 + 56) < 0) )
              {
LABEL_59:
                if ( **(char **)(a1 + 56) >= 0 )
                  return;
                v44 = v116;
                v22 = (v44 == 1) | sub_141A630(v116);
LABEL_15:
                if ( v22 )
                  BUG();
                v26 = v115.m128i_i64[1];
                if ( (*(_BYTE *)(v115.m128i_i64[1] + 3) & 2) == 0 )
                {
LABEL_36:
                  v32 = *(_QWORD *)(a1 + 128);
                  v33 = *v17;
                  *(_QWORD *)(a1 + 208) += 24LL;
                  v34 = (v32 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                  if ( *(_QWORD *)(a1 + 136) >= v34 + 24 && v32 )
                    *(_QWORD *)(a1 + 128) = v34 + 24;
                  else
                    v34 = sub_986170(a1 + 128, 24, 24, 4, v24, v25);
                  v35 = *(_BYTE *)(v34 + 12);
                  *(_QWORD *)v34 = 0;
                  *(_DWORD *)(v34 + 8) = v33;
                  *(_QWORD *)(v34 + 16) = v17;
                  *(_BYTE *)(v34 + 12) = v35 & 0xF0 | 8;
                  sub_144BC70(a1, v26);
                  if ( !sub_1021600(*(_QWORD *)(a1 + 88), *v17) )
                    goto LABEL_42;
                  v38 = *v17;
                  if ( (unsigned __int8)sub_FD3830(
                                          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                                          0x50Cu,
                                          *v17,
                                          *(_QWORD *)(a1 + 48),
                                          v36,
                                          v37) == 1
                    || (*(_BYTE *)(a1 + 544) & 0x40) != 0 )
                  {
                    goto LABEL_42;
                  }
                  v79 = *(_DWORD **)(a1 + 88);
                  v80 = *(_DWORD *)(a1 + 2392);
                  v81 = v38 & 0x7FFFFFFF;
                  if ( (v38 & 0x7FFFFFFFu) < v79[119] || v81 >= v79[120] )
                    v82 = sub_101D590((__int64)v79, v81);
                  else
                    v82 = v79[118];
                  if ( v80 == v82 )
                    goto LABEL_42;
                  *((_BYTE *)v17 + 37) |= 2u;
                  v113 = *v17;
                  if ( (unsigned __int8)sub_141C540(a1 + 2104, &v113, &v114) )
                  {
                    if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
                    {
                      v85 = a1 + 2112;
                      v86 = 128;
                    }
                    else
                    {
                      v85 = *(_QWORD *)(a1 + 2112);
                      v86 = 4LL * *(unsigned int *)(a1 + 2120);
                    }
                    sub_F958E0(&v117, v114, (int *)(v85 + v86), a1 + 2104, 1);
LABEL_42:
                    v39 = *(_QWORD *)(a1 + 1192);
                    if ( v39 )
                      (*(void (__fastcall **)(__int64, __m128i *, unsigned __int64))(*(_QWORD *)v39 + 256LL))(
                        v39,
                        &v115,
                        v34);
                    return;
                  }
                  v92 = v114;
                  v93 = *(_DWORD *)(a1 + 2104) >> 1;
                  v117.m128_u64[0] = (unsigned __int64)v114;
                  v94 = v93 + 1;
                  if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
                  {
                    v96 = 96;
                    v95 = 32;
                  }
                  else
                  {
                    v95 = *(unsigned int *)(a1 + 2120);
                    v96 = (unsigned int)(3 * v95);
                  }
                  if ( 4 * v94 >= (unsigned int)v96 )
                  {
                    sub_1426090((char *)(a1 + 2104), 2 * v95, v95, v96, v83, v84);
                  }
                  else
                  {
                    v97 = (unsigned int)v95 >> 3;
                    if ( (int)v95 - (v94 + *(_DWORD *)(a1 + 2108)) > (unsigned int)v97 )
                    {
LABEL_161:
                      *(_DWORD *)(a1 + 2104) = *(_DWORD *)(a1 + 2104) & 1 | (2 * v94);
                      if ( *v92 != -1 )
                        --*(_DWORD *)(a1 + 2108);
                      *v92 = v113;
                      v114 = v92;
                      if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
                      {
                        v98 = a1 + 2112;
                        v99 = 128;
                      }
                      else
                      {
                        v98 = *(_QWORD *)(a1 + 2112);
                        v99 = 4LL * *(unsigned int *)(a1 + 2120);
                      }
                      sub_F958E0(&v117, v92, (int *)(v98 + v99), a1 + 2104, 1);
                      goto LABEL_42;
                    }
                    sub_1426090((char *)(a1 + 2104), v95, v95, v97, v83, v84);
                  }
                  sub_141C540(a1 + 2104, &v113, &v117);
                  v92 = (int *)v117.m128_u64[0];
                  v94 = (*(_DWORD *)(a1 + 2104) >> 1) + 1;
                  goto LABEL_161;
                }
                sub_1423DB0((__int64)&v117, (_QWORD *)a1, v115.m128i_i64[1], v23, v24, v25);
                if ( (v117.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                {
                  if ( !v118 )
                  {
                    v45 = sub_13F1C60((__int64 *)(v117.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL));
                    if ( !v45 )
                      goto LABEL_32;
                    v27 = v45[2];
LABEL_20:
                    v28 = v116;
                    v29 = v116 == 1;
                    n = v116 == 1;
                    if ( !v27 )
                    {
LABEL_33:
                      v101 = v29;
                      if ( sub_141A630(v28) || v101 )
                        v26 = 0;
                      else
                        v26 = v115.m128i_i64[1];
                      goto LABEL_36;
                    }
                    if ( sub_141A630(v116) || n )
                      BUG();
                    if ( (*(_BYTE *)(v115.m128i_i64[1] + 5) & 2) != 0 )
                      sub_145FCF0(a1, &v115, 0);
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 2LL) & 4) != 0 )
                    {
                      v63 = *(_DWORD **)(a1 + 88);
                      v64 = *(_DWORD *)(a1 + 2392);
                      v65 = *(_DWORD *)v27 & 0x7FFFFFFF;
                      if ( v65 >= v63[119] && v65 < v63[120] )
                      {
                        v66 = v63[118];
                      }
                      else
                      {
                        nd = *(_DWORD *)(a1 + 2392);
                        v66 = sub_101D590((__int64)v63, v65);
                        v64 = nd;
                      }
                      if ( v64 == v66 )
                      {
                        ne = v116;
                        v67 = sub_141A630(v116);
                        if ( ne == 1 || v67 )
                          BUG();
                        v68 = *(__int64 **)(v115.m128i_i64[1] + 16);
                        v69 = *v68;
                        if ( (unsigned int)*v68 == 8 )
                        {
                          if ( v68[2] == 0x676E6F7274735F5FLL )
                          {
LABEL_114:
                            if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL) + 24LL) & 0x10) == 0
                               || !*a2
                               || (v70 = sub_1021680(*(_QWORD *)(a1 + 88), *a2)) == 0
                               || v70 == 3)
                              && !(unsigned __int8)sub_13F10C0((__int64)v17, v27, a1, **(char **)(a1 + 56) < 0) )
                            {
                              sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *v17, 1385);
                              sub_AEA040((__int64)&v117);
                            }
                            return;
                          }
                        }
                        else if ( (_DWORD)v69 == 6 )
                        {
                          if ( *((_DWORD *)v68 + 4) == 1702322015 && *((_WORD *)v68 + 10) == 27489 )
                            goto LABEL_114;
                        }
                        else if ( (_DWORD)v69 == 19 )
                        {
                          if ( !(v68[2] ^ 0x656661736E755F5FLL | v68[3] ^ 0x69617465726E755FLL)
                            && *((_WORD *)v68 + 16) == 25966
                            && *((_BYTE *)v68 + 34) == 100 )
                          {
                            goto LABEL_114;
                          }
                        }
                        else if ( (_DWORD)v69 == 15
                               && v68[2] == 0x65726F7475615F5FLL
                               && *((_DWORD *)v68 + 6) == 1935762796
                               && *((_WORD *)v68 + 14) == 28265
                               && *((_BYTE *)v68 + 30) == 103 )
                        {
                          goto LABEL_114;
                        }
                      }
                    }
                    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL) + 24LL) & 0x10) != 0 )
                    {
                      if ( *a2 )
                      {
                        v30 = sub_1021680(*(_QWORD *)(a1 + 88), *a2);
                        if ( v30 )
                        {
                          if ( v30 != 3 )
                            goto LABEL_30;
                        }
                      }
                    }
                    if ( *(char *)(v27 + 36) >= 0 && (*(_BYTE *)(v27 + 37) & 2) != 0 )
                    {
                      sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *(_DWORD *)v27, 1292);
                      sub_AEA040((__int64)&v117);
                    }
                    if ( sub_141A500(
                           *(__int64 **)(a1 + 88),
                           v27,
                           (_WORD *)(*(_QWORD *)(v12 + 16) + 16LL),
                           **(unsigned int **)(v12 + 16)) )
                    {
                      v60 = *(_QWORD *)(a1 + 48);
                      v61 = v115.m128i_i32[0];
                      v62 = 1250;
                    }
                    else
                    {
                      v31 = *(_BYTE *)(v27 + 37);
                      if ( (v31 & 1) != 0 )
                      {
LABEL_31:
                        if ( (v31 & 2) != 0 )
                        {
                          v71 = *(_DWORD *)v27;
                          if ( (*(_BYTE *)(a1 + 2104) & 1) != 0 )
                          {
                            v72 = a1 + 2112;
                            v73 = 31;
                          }
                          else
                          {
                            v78 = *(_DWORD *)(a1 + 2120);
                            v72 = *(_QWORD *)(a1 + 2112);
                            if ( !v78 )
                              goto LABEL_32;
                            v73 = v78 - 1;
                          }
                          v117.m128_i32[0] = v71;
                          v102 = v71;
                          v74 = v73 & sub_101AC30(&v117);
                          v75 = (int *)(v72 + 4LL * v74);
                          v76 = *v75;
                          if ( v102 != *v75 )
                          {
                            v89 = 1;
                            if ( v76 == -1 )
                              goto LABEL_32;
                            while ( 1 )
                            {
                              v90 = v89 + 1;
                              v74 = v73 & (v89 + v74);
                              v75 = (int *)(v72 + 4LL * v74);
                              v91 = *v75;
                              if ( v102 == *v75 )
                                break;
                              v89 = v90;
                              if ( v91 == -1 )
                                goto LABEL_32;
                            }
                          }
                          *v75 = -2;
                          v77 = *(_DWORD *)(a1 + 2104);
                          ++*(_DWORD *)(a1 + 2108);
                          *(_DWORD *)(a1 + 2104) = (2 * (v77 >> 1) - 2) | v77 & 1;
                        }
LABEL_32:
                        v28 = v116;
                        v29 = v116 == 1;
                        goto LABEL_33;
                      }
                      if ( (unsigned __int8)sub_13F10C0((__int64)v17, v27, a1, **(char **)(a1 + 56) < 0) )
                      {
LABEL_30:
                        v31 = *(_BYTE *)(v27 + 37);
                        goto LABEL_31;
                      }
                      sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *v17, 1247);
                      v57 = v116;
                      v58 = sub_141A630(v116);
                      if ( v57 == 1 || v58 )
                        v59 = 0;
                      else
                        v59 = v115.m128i_i64[1];
                      sub_AE9DF0((unsigned __int8 **)&v117, v59, 5u);
                      sub_AEA040((__int64)&v117);
                      v60 = *(_QWORD *)(a1 + 48);
                      v61 = *(_DWORD *)v27;
                      v62 = 113;
                    }
                    sub_FC70B0((__int64)&v117, v60, v61, v62);
                    sub_AEA040((__int64)&v117);
                    goto LABEL_30;
                  }
                }
                else if ( !v118 )
                {
                  goto LABEL_32;
                }
                v27 = *(_QWORD *)(*(_QWORD *)(v117.m128_u64[1] + 8 * v118 - 8) + 16LL);
                goto LABEL_20;
              }
LABEL_55:
              sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), *v17, 1381);
              v41 = v116;
              v42 = sub_141A630(v116);
              if ( v41 == 1 || v42 )
                v43 = 0;
              else
                v43 = v115.m128i_i64[1];
              sub_AE9DF0((unsigned __int8 **)&v117, v43, 5u);
              sub_AEA040((__int64)&v117);
              goto LABEL_59;
            }
          }
          else if ( !v118 )
          {
            goto LABEL_55;
          }
          v40 = *(_QWORD *)(*(_QWORD *)(v117.m128_u64[1] + 8 * v118 - 8) + 16LL);
          goto LABEL_53;
        }
        goto LABEL_66;
      }
      v19 = *((_QWORD *)v17 + 2);
      na = *(_WORD *)(v19 + 16);
      if ( na == v116 )
        goto LABEL_11;
      v46 = sub_141A630(v116);
      if ( v20 == 1 || v46 )
        BUG();
      v47 = sub_141A630(na);
      if ( na == 1 )
        goto LABEL_66;
      if ( v47 )
        goto LABEL_66;
      v48 = *(_QWORD *)(v19 + 8);
      if ( !v48 )
        goto LABEL_66;
      v49 = *(__int64 **)(v115.m128i_i64[1] + 16);
      v109 = *v49;
      if ( !sub_FDE0B0((_WORD *)v48, *(_QWORD *)(a1 + 56)) )
        goto LABEL_66;
      v50 = *(char **)(v48 + 16);
      v110 = *(_QWORD *)v50;
      nb = (unsigned int)*(_QWORD *)v50;
      v51 = j__strlen("__");
      if ( nb < v51 || v51 && memcmp(v50 + 16, "__", v51) )
      {
        v88 = j__strlen("_");
        if ( nb < v88 || v88 && memcmp(v50 + 16, "_", v88) )
        {
LABEL_66:
          sub_FC70B0((__int64)&v117, *(_QWORD *)(a1 + 48), v115.m128i_i32[0], 1382);
          sub_AEA040((__int64)&v117);
LABEL_67:
          v18 = v17[7];
          goto LABEL_9;
        }
        if ( !nb )
        {
          if ( !(_DWORD)v109 )
            goto LABEL_67;
          goto LABEL_66;
        }
        v53 = v50 + 17;
        v55 = nb - 1;
LABEL_90:
        if ( (unsigned int)v109 == v55 && (!v55 || !memcmp(v53, v49 + 2, v55)) )
          goto LABEL_67;
        goto LABEL_66;
      }
      v52 = (unsigned int)v110 & 0xFFFFFFFE;
      if ( (v110 & 0xFFFFFFFE) != 0 )
      {
        v52 = nb - 2;
        if ( nb == 1 )
        {
          v53 = v50 + 18;
          v54 = j__strlen("__");
          v55 = -1;
LABEL_86:
          if ( !v54 || (nc = v55, v56 = memcmp(&v53[v55 - v54], "__", v54), v55 = nc, !v56) )
          {
            if ( v55 >= 2 )
              v55 -= 2LL;
          }
          goto LABEL_90;
        }
        nb = 2;
      }
      v111 = v52;
      v54 = j__strlen("__");
      v55 = v111;
      v53 = &v50[nb + 16];
      if ( v54 > v111 )
        goto LABEL_90;
      goto LABEL_86;
    }
  }
}
