__int64 __fastcall sub_A4640(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
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
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v20; // r12
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  unsigned int *v27; // r12
  unsigned __int64 v28; // rdi
  char v29; // al
  char v30; // al
  __int64 v31; // r12
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r9d
  unsigned __int64 v43; // r15
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rax
  unsigned __int64 *v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r15
  __int64 *v60; // rax
  __int64 v61; // rbp
  __int64 *v62; // r12
  __int64 v63; // rbx
  __int64 v64; // rdi
  char v65; // r12
  char v66; // al
  __int64 v67; // rsi
  __int64 v68; // rcx
  char v69; // r12
  __int64 v70; // rdx
  const void *v71; // rsi
  __int64 v72; // r12
  bool v73; // zf
  size_t v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // rdx
  bool v79; // r8
  int v80; // edx
  __m128i v82; // [rsp+10h] [rbp-158h] BYREF
  __m128i v83; // [rsp+20h] [rbp-148h] BYREF
  __m128i v84; // [rsp+30h] [rbp-138h] BYREF
  __int64 v85; // [rsp+40h] [rbp-128h]
  size_t n; // [rsp+48h] [rbp-120h]
  __int64 *v87; // [rsp+50h] [rbp-118h]
  unsigned __int8 v88; // [rsp+5Ah] [rbp-10Eh]
  unsigned __int8 v89; // [rsp+5Bh] [rbp-10Dh]
  unsigned int v90; // [rsp+5Ch] [rbp-10Ch]
  int v91; // [rsp+6Ch] [rbp-FCh] BYREF
  __int64 v92; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v93; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v94[2]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v95[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v96; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-C0h]
  __int64 v98; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v99; // [rsp+B8h] [rbp-B0h]
  __int64 v100[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v102; // [rsp+E8h] [rbp-80h]
  __int64 v103; // [rsp+100h] [rbp-68h] BYREF
  __int64 v104; // [rsp+108h] [rbp-60h]
  __int64 v105; // [rsp+110h] [rbp-58h] BYREF
  __m128i v106; // [rsp+118h] [rbp-50h] BYREF
  unsigned __int64 v107; // [rsp+128h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 56);
  v85 = a2;
  v107 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v96 = 0;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    goto LABEL_4;
  }
  v7 = sub_11DF40(v6, 0);
  v96 = 0;
  v97 = 0;
  v8 = v7;
  v98 = 0;
  v99 = 0;
  if ( !v7
    || *(_BYTE *)(v7 + 64) != 8
    || (v34 = *(_QWORD *)(v7 + 72)) == 0
    || (v35 = *(_QWORD *)(a1 + 64), (v36 = *(_DWORD *)(v35 + 120)) == 0) )
  {
LABEL_4:
    v9 = 0;
    if ( !a3 )
      goto LABEL_32;
    goto LABEL_5;
  }
  v37 = v36;
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v35 + 1440) + *(int *)(v34 + 12));
  v106 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  if ( v36 + v38 - 1 >= v38 )
  {
    v105 = qvector_reserve();
    v50 = (unsigned __int64 *)(16 * v106.m128i_i64[0] + v105);
    *v50 = v38;
    v50[1] = v37;
    ++v106.m128i_i64[0];
  }
  v82.m128i_i64[0] = (__int64)&v103;
  sub_63980(&v96, &v103);
  sub_313730(&v98, &v105);
  if ( v105 )
  {
    v106.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  v43 = sub_32C630(*(_QWORD *)(v8 + 72), *(_QWORD *)(a1 + 64));
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  if ( v43 + v39 - 1 >= v43 )
  {
    v83.m128i_i64[0] = v39;
    v49 = qvector_reserve();
    v41 = v83.m128i_i64[0];
    v105 = v49;
    v39 = 16 * v106.m128i_i64[0];
    *(__m128i *)(v49 + 16 * v106.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v43, (__m128i)v83.m128i_u64[0]);
  }
  sub_63D40(&v96, (__int64 *)v82.m128i_i64[0], v39, v40, v41, v42);
  sub_314710(&v98, &v105);
  if ( v105 )
  {
    v106.m128i_i64[0] = 0;
    qfree();
  }
  v9 = 0;
  qfree();
  if ( a3 )
  {
LABEL_5:
    v9 = 0;
    v10 = &v96;
    while ( 1 )
    {
      sub_125510(v100, a1, a3, 1025);
      if ( !*a3 )
        goto LABEL_6;
      if ( !(unsigned __int8)sub_63E80(v100, a4) && !(unsigned __int8)sub_314F20(&v101, a4 + 2) )
      {
        if ( !(unsigned __int8)sub_63F80(v100) || v102.m128i_i64[0] )
        {
          v82.m128i_i64[0] = (__int64)&v103;
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
            v82.m128i_i64[0] = (__int64)&v103;
            goto LABEL_38;
          }
          v82.m128i_i64[0] = (__int64)&v103;
          goto LABEL_39;
        }
      }
      if ( !(unsigned __int8)sub_A4200(a1, a3, v100, a4) )
        goto LABEL_52;
      if ( (unsigned __int8)sub_63F20(v100, a4) && (unsigned __int8)sub_3149F0(a4 + 2, &v101) )
        break;
      v15 = sub_A2D60(a1, a3, a4, 0);
      if ( !v15 )
        goto LABEL_84;
      v17 = *((_DWORD *)v15 + 1);
      v16 = (unsigned int)(*((_DWORD *)v15 + 17) - 1);
      BYTE1(v17) &= 0xF8u;
      if ( (unsigned int)v16 <= 7 )
        v17 |= dword_426380[v16];
      *((_DWORD *)v15 + 1) = v17;
      ++v9;
      a3 = (unsigned int *)v15;
      if ( v101 )
      {
LABEL_16:
        v102.m128i_i64[0] = 0;
        qfree();
LABEL_17:
        qfree();
        if ( !a3 )
        {
          if ( v9 )
          {
            v18 = *(_DWORD *)(a1 + 24);
            BYTE1(v18) &= ~2u;
            LOBYTE(v18) = v18 | 0x80;
            *(_DWORD *)(a1 + 24) = v18;
            sub_1E8140(a1);
          }
          goto LABEL_30;
        }
      }
      else
      {
        qfree();
      }
    }
    if ( !(unsigned __int8)sub_11E2A0(a3) )
    {
LABEL_6:
      if ( *((char *)a3 + 4) < 0 )
      {
        sub_63980((__int64 *)(a1 + 80), v100);
        sub_313730(a1 + 96, &v101);
      }
      sub_157480(a3, v85, a1, a3, 0);
      ++v9;
      if ( *((char *)a3 + 4) >= 0
        && (!(unsigned __int8)sub_63F80(v10) || (_QWORD)v99)
        && ((unsigned __int8)sub_63E80(v100, v10) || (unsigned __int8)sub_314F20(&v101, &v98)) )
      {
        sub_32DD50(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 45, v11, v12, v13);
      }
      v14 = sub_A26F0(a1, (__int64)a3);
      if ( v14 )
        a3 = *(unsigned int **)(v14 + 16);
      else
        a3 = *(unsigned int **)(a1 + 56);
      if ( !v101 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_84:
    if ( *((_BYTE *)a3 + 64) == 8 )
    {
      v27 = a3;
      goto LABEL_51;
    }
    v28 = *a3;
    if ( *((_BYTE *)a3 + 32) != 4 )
      goto LABEL_53;
    v27 = (unsigned int *)*((_QWORD *)a3 + 5);
    if ( *((_BYTE *)v27 + 64) != 8 )
      goto LABEL_53;
    if ( (_DWORD)v28 != 4 )
    {
      if ( (_DWORD)v28 == 67 )
      {
        if ( a3[9] != a3[17] )
          goto LABEL_53;
      }
      else if ( (unsigned int)(v28 - 8) > 2 )
      {
        if ( (unsigned int)v28 > 0x1D )
          goto LABEL_53;
        v51 = 536873184;
        if ( !_bittest64(&v51, v28) )
          goto LABEL_53;
      }
    }
    if ( v27 )
    {
LABEL_51:
      if ( !v27[17] )
      {
LABEL_52:
        v28 = *a3;
        goto LABEL_53;
      }
      v103 = 0;
      v83.m128i_i64[0] = (__int64)(a3 + 16);
      v104 = 0;
      v105 = 0;
      v82.m128i_i64[0] = (__int64)&v103;
      v106 = 0;
      sub_125AC0(a1, &v103, a3 + 16, 1);
      if ( (unsigned __int8)sub_63F20(v82.m128i_i64[0], a4) && (unsigned __int8)sub_3149F0(a4 + 2, &v105) )
      {
        ++v9;
        if ( v27 == a3 )
        {
          v83.m128i_i64[0] = *((_QWORD *)v27 + 9);
          sub_63FD0((__int64 *)(v83.m128i_i64[0] + 240), (__int64 *)(v83.m128i_i64[0] + 96));
          v52 = (_QWORD *)v83.m128i_i64[0];
          v83.m128i_i64[0] = 0;
          v53 = v52[15];
          v84.m128i_i64[0] = v53;
          if ( v53 )
          {
            v87 = v52;
            n = 16 * v53;
            v83.m128i_i64[0] = qalloc_or_throw();
            v71 = (const void *)v87[14];
            v82.m128i_i64[0] = (__int64)v87;
            memcpy((void *)v83.m128i_i64[0], v71, n);
            v52 = (_QWORD *)v82.m128i_i64[0];
          }
          v54 = _mm_loadl_epi64(&v84);
          v55 = _mm_unpacklo_epi64(v54, v54);
          if ( v52[32] )
          {
            v52[33] = 0;
            v82.m128i_i64[0] = (__int64)v52;
            v84 = v55;
            qfree();
            v55 = _mm_load_si128(&v84);
            v52 = (_QWORD *)v82.m128i_i64[0];
          }
          v56 = v83.m128i_i64[0];
          *(__m128i *)(v52 + 33) = v55;
          v52[32] = v56;
          v57 = *((_QWORD *)v27 + 9);
          v58 = *(_QWORD *)(v57 + 56);
          if ( v58 )
          {
            v82.m128i_i32[0] = v9;
            v59 = v57;
            v60 = v10;
            v61 = 0;
            v83.m128i_i64[0] = (__int64)a3;
            v62 = v60;
            v63 = v58;
            do
            {
              v64 = v61++;
              sub_11A960(*(_QWORD *)(v59 + 48) + 16 * v64);
            }
            while ( v63 != v61 );
            v57 = v59;
            a3 = (unsigned int *)v83.m128i_i64[0];
            v9 = v82.m128i_i32[0];
            v10 = v62;
          }
          *(_QWORD *)(v57 + 56) = 0;
        }
        else
        {
          *((_QWORD *)a3 + 5) = 0;
          *((_QWORD *)a3 + 4) = 0xFFFFFFFF00000000LL;
          sub_11B450(a3, v27);
          sub_11A960(v27 + 16);
          sub_11A960(v27 + 12);
          sub_11A960(v27 + 8);
          j__qfree();
        }
        a3[17] = 0;
        goto LABEL_104;
      }
      v44 = *a3;
      if ( *a3 != 4 )
      {
        if ( v44 == 67 )
        {
          if ( a3[9] == a3[17] )
            goto LABEL_103;
        }
        else if ( v44 - 8 <= 2 )
        {
          goto LABEL_103;
        }
LABEL_104:
        if ( v105 )
        {
          v106.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        goto LABEL_52;
      }
LABEL_103:
      v88 = sub_120100(a3);
      if ( v88 )
        goto LABEL_104;
      v65 = sub_63D40((__int64 *)v82.m128i_i64[0], a4, v45, v46, v47, v48);
      v66 = sub_314710(&v105, a4 + 2);
      if ( !v65 && !v66 )
        goto LABEL_104;
      v67 = *(_QWORD *)(a1 + 64);
      v94[1] = 0;
      v68 = *(_QWORD *)(v67 + 128);
      v84.m128i_i64[0] = (__int64)v94;
      v94[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_11ABE0(v94, v67, v82.m128i_i64[0], v68) )
        goto LABEL_145;
      if ( HIDWORD(v94[0]) == a3[17] )
        goto LABEL_145;
      v89 = sub_11F6A0(v83.m128i_i64[0], v94, &v91);
      if ( !v89 || v91 && v91 != a3[17] - HIDWORD(v94[0]) )
        goto LABEL_145;
      if ( *((_BYTE *)a3 + 64) == 15 )
      {
        v72 = *((_QWORD *)a3 + 9) + 48LL;
      }
      else
      {
        if ( *a3 != 4 )
        {
LABEL_136:
          if ( !(unsigned __int8)sub_11A640(HIDWORD(v94[0])) )
            goto LABEL_145;
          v69 = sub_12FCA0(a1, a3, v84.m128i_i64[0], *((_QWORD *)a3 + 1), v83.m128i_i64[0]);
          if ( v69 )
          {
            v69 = 0;
            v70 = 10;
          }
          else
          {
            if ( !(unsigned __int8)sub_12DCD0(a1, a3, v84.m128i_i64[0], *((_QWORD *)a3 + 1), v83.m128i_i64[0]) )
              goto LABEL_145;
            v70 = 11;
          }
LABEL_139:
          if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
          {
            *a3 = v70;
            goto LABEL_142;
          }
          if ( (unsigned __int8)sub_1291D0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v70, HIDWORD(v94[0]), 0) )
          {
LABEL_142:
            a3[1] &= ~0x10u;
            sub_9FF00(*(_QWORD *)(a1 + 64), v83.m128i_i64[0], v84.m128i_i64[0]);
            if ( v69 )
            {
              *((_BYTE *)a3 + 65) |= 4u;
            }
            else if ( *((_BYTE *)a3 + 64) == 15 && (get_tinfo_property() & 0x2F) == 0xD )
            {
              *((_BYTE *)a3 + 65) |= 2u;
            }
            v88 = v89;
          }
LABEL_145:
          sub_11A960(v84.m128i_i64[0]);
          v9 += v88;
          goto LABEL_104;
        }
        v72 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 72LL) + 72LL;
      }
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        goto LABEL_136;
      v73 = *((_BYTE *)a3 + 64) == 15;
      v95[0] = 0;
      v95[1] = 0;
      if ( v73 )
      {
        v74 = *((_QWORD *)a3 + 9);
        n = (size_t)v95;
      }
      else
      {
        n = (size_t)v95;
        v74 = 0;
        if ( (unsigned __int8)sub_1C2590(v83.m128i_i64[0], v95) )
          v74 = n;
      }
      v75 = *(_QWORD *)(a1 + 480);
      v87 = (__int64 *)v74;
      v76 = (int)a3[17];
      v92 = v91;
      if ( (unsigned __int8)sub_1C2640(v74, v75, &v92, SHIDWORD(v94[0]), v76) )
      {
        v78 = v92;
        v79 = 0;
        if ( v91 != v92 )
        {
          if ( !(unsigned __int8)sub_1C0700(v87, 0, 0, v77, 0) )
            goto LABEL_170;
          v78 = v92;
          v79 = v92 != 0;
        }
        v93 = 0;
        v87 = &v93;
        if ( (unsigned __int8)sub_3318A0(&v93, v72, v78, SHIDWORD(v94[0]), v79) )
        {
          HIDWORD(v94[0]) = get_tinfo_size();
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            sub_1C6790(v84.m128i_i64[0], *(_QWORD *)(a1 + 64), v87);
            v69 = 0;
          }
          else
          {
            v69 = (get_tinfo_property() & 0xF) == 9;
          }
          v80 = 11;
          if ( !v92 )
            v80 = 10;
          v90 = v80;
          clear_tinfo_t();
          cleanup_argloc();
          v70 = v90;
          goto LABEL_139;
        }
        clear_tinfo_t();
      }
LABEL_170:
      cleanup_argloc();
      goto LABEL_145;
    }
LABEL_53:
    v29 = sub_11C460(v28);
    v82.m128i_i64[0] = (__int64)&v103;
    if ( !v29 )
      goto LABEL_37;
    v30 = sub_11E2A0(a3);
    v82.m128i_i64[0] = (__int64)&v103;
    if ( v30 )
      goto LABEL_37;
    sub_125510(v82.m128i_i64[0], a1, a3, 1024);
    if ( (unsigned __int8)sub_63F80(v82.m128i_i64[0]) && !v106.m128i_i64[0]
      || !(unsigned __int8)sub_63F20(v82.m128i_i64[0], a4)
      || !(unsigned __int8)sub_3149F0(a4 + 2, &v105)
      || !(unsigned __int8)sub_A4200(a1, a3, v82.m128i_i64[0], a4) )
    {
      if ( v105 )
      {
        v106.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( *a3 - 56 <= 1 )
        goto LABEL_60;
LABEL_38:
      if ( *((char *)a3 + 4) < 0 )
      {
LABEL_39:
        sub_122180(v82.m128i_i64[0], a1, a3, 1);
        sub_63FD0(v100, (__int64 *)v82.m128i_i64[0]);
        v20 = v105;
        v105 = 0;
        v21 = _mm_loadu_si128(&v106);
        v106 = 0;
        if ( v101 )
        {
          v82 = v21;
          v102.m128i_i64[0] = 0;
          qfree();
          v22 = _mm_load_si128(&v82);
          v101 = v20;
          v102 = v22;
          if ( v105 )
          {
            v106.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          v101 = v20;
          v102 = v21;
        }
        qfree();
        sub_63D40(a4, v100, v23, v24, v25, v26);
        sub_314710(a4 + 2, &v101);
        a3 = (unsigned int *)*((_QWORD *)a3 + 2);
        if ( v101 )
        {
          v102.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_17;
      }
LABEL_62:
      sub_125510(v82.m128i_i64[0], a1, a3, 0);
      sub_63FD0(v100, (__int64 *)v82.m128i_i64[0]);
      v31 = v105;
      v105 = 0;
      v32 = _mm_loadu_si128(&v106);
      v106 = 0;
      if ( v101 )
      {
        v83 = v32;
        v102.m128i_i64[0] = 0;
        qfree();
        v33 = _mm_load_si128(&v83);
        v101 = v31;
        v102 = v33;
        if ( v105 )
        {
          v106.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        v101 = v31;
        v102 = v32;
      }
      qfree();
      sub_63980(a4, v100);
      sub_313730(a4 + 2, &v101);
      sub_11CE90(a3, a4, *(_QWORD *)(a1 + 64));
      goto LABEL_39;
    }
    if ( v105 )
    {
      v106.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    goto LABEL_6;
  }
LABEL_30:
  if ( v98 )
  {
    *(_QWORD *)&v99 = 0;
    qfree();
  }
LABEL_32:
  qfree();
  return v9;
}
