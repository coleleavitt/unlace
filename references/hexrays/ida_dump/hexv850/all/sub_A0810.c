__int64 __fastcall sub_A0810(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int32 v9; // r15d
  __int64 *v10; // rbp
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // eax
  __int64 v21; // r12
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  unsigned int *v28; // r12
  unsigned __int64 v29; // rdi
  char v30; // al
  char v31; // al
  __int64 v32; // r12
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // ecx
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  unsigned __int64 v44; // r15
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // r9d
  __int64 v50; // rax
  unsigned __int64 *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r15
  __int64 *v62; // rax
  __int64 v63; // rbp
  __int64 *v64; // r12
  __int64 v65; // rbx
  __int64 v66; // rdi
  char v67; // r12
  char v68; // al
  __int64 v69; // rsi
  __int64 v70; // rcx
  char v71; // r12
  __int64 v72; // rdx
  const void *v73; // rsi
  _QWORD *v74; // r12
  bool v75; // zf
  size_t v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rdx
  bool v81; // r8
  int v82; // edx
  __m128i v84; // [rsp+10h] [rbp-158h] BYREF
  __m128i v85; // [rsp+20h] [rbp-148h] BYREF
  __m128i v86; // [rsp+30h] [rbp-138h] BYREF
  __int64 v87; // [rsp+40h] [rbp-128h]
  size_t n; // [rsp+48h] [rbp-120h]
  __int64 *v89; // [rsp+50h] [rbp-118h]
  unsigned __int8 v90; // [rsp+5Ah] [rbp-10Eh]
  unsigned __int8 v91; // [rsp+5Bh] [rbp-10Dh]
  unsigned int v92; // [rsp+5Ch] [rbp-10Ch]
  int v93; // [rsp+6Ch] [rbp-FCh] BYREF
  __int64 v94; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v96[2]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v97[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+A8h] [rbp-C0h]
  __int64 v100; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-B0h]
  __int64 v102[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v103; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v104; // [rsp+E8h] [rbp-80h]
  __int64 v105; // [rsp+100h] [rbp-68h] BYREF
  __int64 v106; // [rsp+108h] [rbp-60h]
  __int64 v107; // [rsp+110h] [rbp-58h] BYREF
  __m128i v108; // [rsp+118h] [rbp-50h] BYREF
  unsigned __int64 v109; // [rsp+128h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 56);
  v87 = a2;
  v109 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    goto LABEL_4;
  }
  v7 = sub_11B7C0(v6, 0);
  v98 = 0;
  v99 = 0;
  v8 = v7;
  v100 = 0;
  v101 = 0;
  if ( !v7
    || *(_BYTE *)(v7 + 64) != 8
    || (v35 = *(_QWORD *)(v7 + 72)) == 0
    || (v36 = *(_QWORD *)(a1 + 64), (v37 = *(_DWORD *)(v36 + 120)) == 0) )
  {
LABEL_4:
    v9 = 0;
    if ( !a3 )
      goto LABEL_32;
    goto LABEL_5;
  }
  v38 = v37;
  v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v36 + 1440) + *(int *)(v35 + 12));
  v108 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  if ( v37 + v39 - 1 >= v39 )
  {
    v107 = qvector_reserve(&v107, 0, 1, 16);
    v51 = (unsigned __int64 *)(16 * v108.m128i_i64[0] + v107);
    *v51 = v39;
    v51[1] = v38;
    ++v108.m128i_i64[0];
  }
  v84.m128i_i64[0] = (__int64)&v105;
  sub_5F800(&v98, &v105);
  sub_3113F0(&v100, &v107);
  if ( v107 )
  {
    v108.m128i_i64[0] = 0;
    qfree(v107);
  }
  qfree(v105);
  v44 = sub_329F00(*(_QWORD *)(v8 + 72), *(_QWORD *)(a1 + 64));
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  if ( v44 + v40 - 1 >= v44 )
  {
    v85.m128i_i64[0] = v40;
    v50 = qvector_reserve(&v107, 0, 1, 16);
    v42 = v85.m128i_i64[0];
    v107 = v50;
    v40 = 16 * v108.m128i_i64[0];
    *(__m128i *)(v50 + 16 * v108.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v85.m128i_u64[0]);
  }
  sub_5FBC0(&v98, (__int64 *)v84.m128i_i64[0], v40, v41, v42, v43);
  sub_3123A0(&v100, &v107);
  if ( v107 )
  {
    v108.m128i_i64[0] = 0;
    qfree(v107);
  }
  v9 = 0;
  qfree(v105);
  if ( a3 )
  {
LABEL_5:
    v9 = 0;
    v10 = &v98;
    while ( 1 )
    {
      sub_122E60(v102, a1, a3, 1025);
      if ( !*a3 )
        goto LABEL_6;
      if ( !(unsigned __int8)sub_5FD00(v102, a4) && !(unsigned __int8)sub_312BB0(&v103, a4 + 2) )
      {
        if ( !(unsigned __int8)sub_5FE00(v102) || v104.m128i_i64[0] )
        {
          v84.m128i_i64[0] = (__int64)&v105;
LABEL_37:
          if ( *a3 - 56 > 1 )
            goto LABEL_38;
LABEL_60:
          if ( !*((_BYTE *)a3 + 64) || *((char *)a3 + 4) < 0 )
            goto LABEL_39;
          goto LABEL_62;
        }
        if ( *((_BYTE *)a3 + 64) )
          goto LABEL_68;
        if ( *a3 - 15 > 3 )
        {
          if ( *a3 - 56 > 1 )
          {
LABEL_68:
            v84.m128i_i64[0] = (__int64)&v105;
            goto LABEL_38;
          }
          v84.m128i_i64[0] = (__int64)&v105;
          goto LABEL_39;
        }
      }
      if ( !(unsigned __int8)sub_A03D0(a1, a3, v102, a4) )
        goto LABEL_52;
      if ( (unsigned __int8)sub_5FDA0(v102, a4) && (unsigned __int8)sub_312680(a4 + 2, &v103) )
        break;
      v16 = sub_9EF30(a1, a3, a4, 0);
      if ( !v16 )
        goto LABEL_84;
      v18 = *((_DWORD *)v16 + 1);
      v17 = (unsigned int)(*((_DWORD *)v16 + 17) - 1);
      BYTE1(v18) &= 0xF8u;
      if ( (unsigned int)v17 <= 7 )
        v18 |= dword_400900[v17];
      *((_DWORD *)v16 + 1) = v18;
      v15 = v103;
      ++v9;
      a3 = (unsigned int *)v16;
      if ( v103 )
      {
LABEL_16:
        v104.m128i_i64[0] = 0;
        qfree(v15);
LABEL_17:
        qfree(v102[0]);
        if ( !a3 )
        {
          if ( v9 )
          {
            v19 = *(_DWORD *)(a1 + 24);
            BYTE1(v19) &= ~2u;
            LOBYTE(v19) = v19 | 0x80;
            *(_DWORD *)(a1 + 24) = v19;
            sub_1E5960(a1);
          }
          goto LABEL_30;
        }
      }
      else
      {
        qfree(v102[0]);
      }
    }
    if ( !(unsigned __int8)sub_11BB20(a3) )
    {
LABEL_6:
      if ( *((char *)a3 + 4) < 0 )
      {
        sub_5F800((__int64 *)(a1 + 80), v102);
        sub_3113F0(a1 + 96, &v103);
      }
      sub_154F80(a3, v87, a1, a3, 0);
      ++v9;
      if ( *((char *)a3 + 4) >= 0
        && (!(unsigned __int8)sub_5FE00(v10) || (_QWORD)v101)
        && ((unsigned __int8)sub_5FD00(v102, v10) || (unsigned __int8)sub_312BB0(&v103, &v100)) )
      {
        sub_32B650(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 45, v11, v12, v13);
      }
      v14 = sub_9E8C0(a1, (__int64)a3);
      if ( v14 )
        a3 = *(unsigned int **)(v14 + 16);
      else
        a3 = *(unsigned int **)(a1 + 56);
      v15 = v103;
      if ( !v103 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_84:
    if ( *((_BYTE *)a3 + 64) == 8 )
    {
      v28 = a3;
      goto LABEL_51;
    }
    v29 = *a3;
    if ( *((_BYTE *)a3 + 32) != 4 )
      goto LABEL_53;
    v28 = *((unsigned int **)a3 + 5);
    if ( *((_BYTE *)v28 + 64) != 8 )
      goto LABEL_53;
    if ( (_DWORD)v29 != 4 )
    {
      if ( (_DWORD)v29 == 67 )
      {
        if ( a3[9] != a3[17] )
          goto LABEL_53;
      }
      else if ( (unsigned int)(v29 - 8) > 2 )
      {
        if ( (unsigned int)v29 > 0x1D )
          goto LABEL_53;
        v52 = 536873184;
        if ( !_bittest64(&v52, v29) )
          goto LABEL_53;
      }
    }
    if ( v28 )
    {
LABEL_51:
      if ( !v28[17] )
      {
LABEL_52:
        v29 = *a3;
        goto LABEL_53;
      }
      v105 = 0;
      v85.m128i_i64[0] = (__int64)(a3 + 16);
      v106 = 0;
      v107 = 0;
      v84.m128i_i64[0] = (__int64)&v105;
      v108 = 0;
      sub_123420(a1, &v105, a3 + 16, 1);
      if ( (unsigned __int8)sub_5FDA0(v84.m128i_i64[0], a4) && (unsigned __int8)sub_312680(a4 + 2, &v107) )
      {
        ++v9;
        if ( v28 == a3 )
        {
          v85.m128i_i64[0] = *((_QWORD *)v28 + 9);
          sub_5FE50((__int64 *)(v85.m128i_i64[0] + 240), (__int64 *)(v85.m128i_i64[0] + 96));
          v53 = (_QWORD *)v85.m128i_i64[0];
          v85.m128i_i64[0] = 0;
          v54 = v53[15];
          v86.m128i_i64[0] = v54;
          if ( v54 )
          {
            v89 = v53;
            n = 16 * v54;
            v85.m128i_i64[0] = qalloc_or_throw(16 * v54);
            v73 = (const void *)v89[14];
            v84.m128i_i64[0] = (__int64)v89;
            memcpy((void *)v85.m128i_i64[0], v73, n);
            v53 = (_QWORD *)v84.m128i_i64[0];
          }
          v55 = _mm_loadl_epi64(&v86);
          v56 = v53[32];
          v57 = _mm_unpacklo_epi64(v55, v55);
          if ( v56 )
          {
            v53[33] = 0;
            v84.m128i_i64[0] = (__int64)v53;
            v86 = v57;
            qfree(v56);
            v57 = _mm_load_si128(&v86);
            v53 = (_QWORD *)v84.m128i_i64[0];
          }
          v58 = v85.m128i_i64[0];
          *(__m128i *)(v53 + 33) = v57;
          v53[32] = v58;
          v59 = *((_QWORD *)v28 + 9);
          v60 = *(_QWORD *)(v59 + 56);
          if ( v60 )
          {
            v84.m128i_i32[0] = v9;
            v61 = v59;
            v62 = v10;
            v63 = 0;
            v85.m128i_i64[0] = (__int64)a3;
            v64 = v62;
            v65 = v60;
            do
            {
              v66 = v63++;
              sub_1181E0(*(_QWORD *)(v61 + 48) + 16 * v66);
            }
            while ( v65 != v63 );
            v59 = v61;
            a3 = (unsigned int *)v85.m128i_i64[0];
            v9 = v84.m128i_i32[0];
            v10 = v64;
          }
          *(_QWORD *)(v59 + 56) = 0;
        }
        else
        {
          *((_QWORD *)a3 + 5) = 0;
          *((_QWORD *)a3 + 4) = 0xFFFFFFFF00000000LL;
          sub_118CD0(a3, v28);
          sub_1181E0(v28 + 16);
          sub_1181E0(v28 + 12);
          sub_1181E0(v28 + 8);
          j__qfree(v28);
        }
        a3[17] = 0;
        goto LABEL_104;
      }
      v45 = *a3;
      if ( *a3 != 4 )
      {
        if ( v45 == 67 )
        {
          if ( a3[9] == a3[17] )
            goto LABEL_103;
        }
        else if ( v45 - 8 <= 2 )
        {
          goto LABEL_103;
        }
LABEL_104:
        if ( v107 )
        {
          v108.m128i_i64[0] = 0;
          qfree(v107);
        }
        qfree(v105);
        goto LABEL_52;
      }
LABEL_103:
      v90 = sub_11DA40(a3);
      if ( v90 )
        goto LABEL_104;
      v67 = sub_5FBC0((__int64 *)v84.m128i_i64[0], a4, v46, v47, v48, v49);
      v68 = sub_3123A0(&v107, a4 + 2);
      if ( !v67 && !v68 )
        goto LABEL_104;
      v69 = *(_QWORD *)(a1 + 64);
      v96[1] = 0;
      v70 = *(_QWORD *)(v69 + 128);
      v86.m128i_i64[0] = (__int64)v96;
      v96[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_118460(v96, v69, v84.m128i_i64[0], v70) )
        goto LABEL_145;
      if ( HIDWORD(v96[0]) == a3[17] )
        goto LABEL_145;
      v91 = sub_11CFF0(v85.m128i_i64[0], v96, &v93);
      if ( !v91 || v93 && v93 != a3[17] - HIDWORD(v96[0]) )
        goto LABEL_145;
      if ( *((_BYTE *)a3 + 64) == 15 )
      {
        v74 = (_QWORD *)(*((_QWORD *)a3 + 9) + 48LL);
      }
      else
      {
        if ( *a3 != 4 )
        {
LABEL_136:
          if ( !(unsigned __int8)sub_117EC0(HIDWORD(v96[0])) )
            goto LABEL_145;
          v71 = sub_12D600(a1, a3, v86.m128i_i64[0], *((_QWORD *)a3 + 1), v85.m128i_i64[0]);
          if ( v71 )
          {
            v71 = 0;
            v72 = 10;
          }
          else
          {
            if ( !(unsigned __int8)sub_12B630(a1, a3, v86.m128i_i64[0], *((_QWORD *)a3 + 1), v85.m128i_i64[0]) )
              goto LABEL_145;
            v72 = 11;
          }
LABEL_139:
          if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
          {
            *a3 = v72;
            goto LABEL_142;
          }
          if ( (unsigned __int8)sub_126B30(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v72, HIDWORD(v96[0]), 0) )
          {
LABEL_142:
            a3[1] &= ~0x10u;
            sub_9C070(*(_QWORD *)(a1 + 64), v85.m128i_i64[0], v86.m128i_i64[0]);
            if ( v71 )
            {
              *((_BYTE *)a3 + 65) |= 4u;
            }
            else if ( *((_BYTE *)a3 + 64) == 15
                   && (get_tinfo_property(*(_QWORD *)(*((_QWORD *)a3 + 9) + 48LL), 2) & 0x2F) == 0xD )
            {
              *((_BYTE *)a3 + 65) |= 2u;
            }
            v90 = v91;
          }
LABEL_145:
          sub_1181E0(v86.m128i_i64[0]);
          v9 += v90;
          goto LABEL_104;
        }
        v74 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 72LL) + 72LL);
      }
      if ( (get_tinfo_property(*v74, 2) & 0x2F) != 0xD )
        goto LABEL_136;
      v75 = *((_BYTE *)a3 + 64) == 15;
      v97[0] = 0;
      v97[1] = 0;
      if ( v75 )
      {
        v76 = *((_QWORD *)a3 + 9);
        n = (size_t)v97;
      }
      else
      {
        n = (size_t)v97;
        v76 = 0;
        if ( (unsigned __int8)sub_1C02B0(v85.m128i_i64[0], v97) )
          v76 = n;
      }
      v77 = *(_QWORD *)(a1 + 480);
      v89 = (__int64 *)v76;
      v78 = (int)a3[17];
      v94 = v93;
      if ( (unsigned __int8)sub_1C0340(v76, v77, &v94, SHIDWORD(v96[0]), v78) )
      {
        v80 = v94;
        v81 = 0;
        if ( v93 != v94 )
        {
          if ( !(unsigned __int8)sub_1BE390(v89, 0, 0, v79, 0) )
            goto LABEL_170;
          v80 = v94;
          v81 = v94 != 0;
        }
        v95 = 0;
        v89 = &v95;
        if ( (unsigned __int8)sub_32EFC0(&v95, v74, v80, SHIDWORD(v96[0]), v81) )
        {
          HIDWORD(v96[0]) = get_tinfo_size(0, v95, 0);
          if ( (get_tinfo_property(v95, 2) & 0x2F) == 0xD )
          {
            sub_1C4390(v86.m128i_i64[0], *(_QWORD *)(a1 + 64), v89);
            v71 = 0;
          }
          else
          {
            v71 = (get_tinfo_property(v95, 2) & 0xF) == 9;
          }
          v82 = 11;
          if ( !v94 )
            v82 = 10;
          v92 = v82;
          clear_tinfo_t(v89);
          cleanup_argloc(n);
          v72 = v92;
          goto LABEL_139;
        }
        clear_tinfo_t(v89);
      }
LABEL_170:
      cleanup_argloc(n);
      goto LABEL_145;
    }
LABEL_53:
    v30 = sub_119CE0(v29);
    v84.m128i_i64[0] = (__int64)&v105;
    if ( !v30 )
      goto LABEL_37;
    v31 = sub_11BB20(a3);
    v84.m128i_i64[0] = (__int64)&v105;
    if ( v31 )
      goto LABEL_37;
    sub_122E60(v84.m128i_i64[0], a1, a3, 1024);
    if ( (unsigned __int8)sub_5FE00(v84.m128i_i64[0]) && !v108.m128i_i64[0]
      || !(unsigned __int8)sub_5FDA0(v84.m128i_i64[0], a4)
      || !(unsigned __int8)sub_312680(a4 + 2, &v107)
      || !(unsigned __int8)sub_A03D0(a1, a3, v84.m128i_i64[0], a4) )
    {
      if ( v107 )
      {
        v108.m128i_i64[0] = 0;
        qfree(v107);
      }
      qfree(v105);
      if ( *a3 - 56 <= 1 )
        goto LABEL_60;
LABEL_38:
      if ( *((char *)a3 + 4) < 0 )
      {
LABEL_39:
        sub_11FAC0(v84.m128i_i64[0], a1, a3, 1);
        sub_5FE50(v102, (__int64 *)v84.m128i_i64[0]);
        v21 = v107;
        v107 = 0;
        v22 = _mm_loadu_si128(&v108);
        v108 = 0;
        if ( v103 )
        {
          v84 = v22;
          v104.m128i_i64[0] = 0;
          qfree(v103);
          v23 = _mm_load_si128(&v84);
          v103 = v21;
          v104 = v23;
          if ( v107 )
          {
            v108.m128i_i64[0] = 0;
            qfree(v107);
          }
        }
        else
        {
          v103 = v21;
          v104 = v22;
        }
        qfree(v105);
        sub_5FBC0(a4, v102, v24, v25, v26, v27);
        sub_3123A0(a4 + 2, &v103);
        a3 = *((unsigned int **)a3 + 2);
        if ( v103 )
        {
          v104.m128i_i64[0] = 0;
          qfree(v103);
        }
        goto LABEL_17;
      }
LABEL_62:
      sub_122E60(v84.m128i_i64[0], a1, a3, 0);
      sub_5FE50(v102, (__int64 *)v84.m128i_i64[0]);
      v32 = v107;
      v107 = 0;
      v33 = _mm_loadu_si128(&v108);
      v108 = 0;
      if ( v103 )
      {
        v85 = v33;
        v104.m128i_i64[0] = 0;
        qfree(v103);
        v34 = _mm_load_si128(&v85);
        v103 = v32;
        v104 = v34;
        if ( v107 )
        {
          v108.m128i_i64[0] = 0;
          qfree(v107);
        }
      }
      else
      {
        v103 = v32;
        v104 = v33;
      }
      qfree(v105);
      sub_5F800(a4, v102);
      sub_3113F0(a4 + 2, &v103);
      sub_11A710(a3, a4, *(_QWORD *)(a1 + 64));
      goto LABEL_39;
    }
    if ( v107 )
    {
      v108.m128i_i64[0] = 0;
      qfree(v107);
    }
    qfree(v105);
    goto LABEL_6;
  }
LABEL_30:
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
LABEL_32:
  qfree(v98);
  return v9;
}
