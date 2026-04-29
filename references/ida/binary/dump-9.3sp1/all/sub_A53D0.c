__int64 __fastcall sub_A53D0(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
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
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  __int64 v23; // r12
  __m128i v24; // xmm1
  __m128i v25; // xmm1
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // r12
  unsigned __int64 v31; // rdi
  char v32; // al
  char v33; // al
  __int64 v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  unsigned __int64 v46; // r15
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rax
  unsigned __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  _QWORD *v57; // rcx
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r15
  __int64 *v66; // rax
  __int64 v67; // rbp
  __int64 *v68; // r12
  __int64 v69; // rbx
  __int64 v70; // rdi
  char v71; // r12
  char v72; // al
  __int64 v73; // rsi
  __int64 v74; // rcx
  char v75; // r12
  __int64 v76; // rdx
  const void *v77; // rsi
  __int64 v78; // r12
  bool v79; // zf
  size_t v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rdx
  bool v85; // r8
  int v86; // edx
  int v87; // [rsp+0h] [rbp-168h]
  __int64 *v88; // [rsp+8h] [rbp-160h]
  __m128i v89; // [rsp+10h] [rbp-158h] BYREF
  __m128i v90; // [rsp+20h] [rbp-148h] BYREF
  __m128i v91; // [rsp+30h] [rbp-138h] BYREF
  __int64 v92; // [rsp+40h] [rbp-128h]
  size_t n; // [rsp+48h] [rbp-120h]
  __int64 *v94; // [rsp+50h] [rbp-118h]
  unsigned __int8 v95; // [rsp+5Ah] [rbp-10Eh]
  unsigned __int8 v96; // [rsp+5Bh] [rbp-10Dh]
  unsigned int v97; // [rsp+5Ch] [rbp-10Ch]
  int v98; // [rsp+6Ch] [rbp-FCh] BYREF
  __int64 v99; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v101[2]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v102[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-C0h]
  __int64 v105; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v106; // [rsp+B8h] [rbp-B0h]
  __int64 v107[2]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v109; // [rsp+E8h] [rbp-80h]
  __int64 v110; // [rsp+100h] [rbp-68h] BYREF
  __int64 v111; // [rsp+108h] [rbp-60h]
  __int64 v112; // [rsp+110h] [rbp-58h] BYREF
  __m128i v113; // [rsp+118h] [rbp-50h] BYREF
  unsigned __int64 v114; // [rsp+128h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 56);
  v92 = a2;
  v88 = a4;
  v114 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v103 = 0;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    goto LABEL_4;
  }
  v7 = sub_120380(v6, 0);
  v103 = 0;
  v104 = 0;
  v8 = v7;
  v105 = 0;
  v106 = 0;
  if ( !v7
    || *(_BYTE *)(v7 + 64) != 8
    || (v37 = *(_QWORD *)(v7 + 72)) == 0
    || (v38 = *(_QWORD *)(a1 + 64), (v39 = *(_DWORD *)(v38 + 120)) == 0) )
  {
LABEL_4:
    v9 = 0;
    if ( !a3 )
      goto LABEL_32;
    goto LABEL_5;
  }
  v40 = v39;
  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v38 + 1440) + *(int *)(v37 + 12));
  v113 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  if ( v39 + v41 - 1 >= v41 )
  {
    v112 = qvector_reserve((__int64)&v112, 0, 1, 16);
    v53 = (unsigned __int64 *)(16 * v113.m128i_i64[0] + v112);
    *v53 = v41;
    v53[1] = v40;
    ++v113.m128i_i64[0];
  }
  v89.m128i_i64[0] = (__int64)&v110;
  sub_64280(&v103, &v110);
  sub_316CB0(&v105, &v112);
  if ( v112 )
  {
    v113.m128i_i64[0] = 0;
    qfree(v112);
  }
  qfree(v110);
  v46 = sub_32FA90(*(_QWORD *)(v8 + 72), *(_QWORD *)(a1 + 64));
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  if ( v46 + v42 - 1 >= v46 )
  {
    v90.m128i_i64[0] = v42;
    v52 = qvector_reserve((__int64)&v112, 0, 1, 16);
    v44 = v90.m128i_i64[0];
    v112 = v52;
    v42 = 16 * v113.m128i_i64[0];
    *(__m128i *)(v52 + 16 * v113.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v90.m128i_u64[0]);
  }
  sub_64640(&v103, (__int64 *)v89.m128i_i64[0], v42, v43, v44, v45);
  sub_317C60(&v105, &v112);
  if ( v112 )
  {
    v113.m128i_i64[0] = 0;
    qfree(v112);
  }
  v9 = 0;
  qfree(v110);
  if ( a3 )
  {
LABEL_5:
    v9 = 0;
    v10 = &v103;
    while ( 1 )
    {
      sub_127A20(v107, a1, a3, 1025);
      if ( !*a3 )
        goto LABEL_6;
      if ( !(unsigned __int8)sub_64780(v107, v88) && !(unsigned __int8)sub_318470(&v108, v88 + 2) )
      {
        if ( !(unsigned __int8)sub_64880(v107) || v109.m128i_i64[0] )
        {
          v89.m128i_i64[0] = (__int64)&v110;
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
            v89.m128i_i64[0] = (__int64)&v110;
            goto LABEL_38;
          }
          v89.m128i_i64[0] = (__int64)&v110;
          goto LABEL_39;
        }
      }
      if ( !(unsigned __int8)sub_A4F90(a1, a3, v107, v88) )
        goto LABEL_52;
      if ( (unsigned __int8)sub_64820(v107, v88) && (unsigned __int8)sub_317F40(v88 + 2, &v108) )
        break;
      v16 = sub_A3AF0(a1, a3, v88, 0);
      if ( !v16 )
        goto LABEL_84;
      v20 = *((_DWORD *)v16 + 1);
      v19 = (unsigned int)(*((_DWORD *)v16 + 17) - 1);
      BYTE1(v20) &= 0xF8u;
      if ( (unsigned int)v19 <= 7 )
        v20 |= dword_424FC0[v19];
      *((_DWORD *)v16 + 1) = v20;
      v15 = v108;
      ++v9;
      a3 = (unsigned int *)v16;
      if ( v108 )
      {
LABEL_16:
        v109.m128i_i64[0] = 0;
        qfree(v15);
LABEL_17:
        qfree(v107[0]);
        if ( !a3 )
        {
          if ( v9 )
          {
            v21 = *(_DWORD *)(a1 + 24);
            BYTE1(v21) &= ~2u;
            LOBYTE(v21) = v21 | 0x80;
            *(_DWORD *)(a1 + 24) = v21;
            sub_1EAD20(a1);
          }
          goto LABEL_30;
        }
      }
      else
      {
        qfree(v107[0]);
      }
    }
    if ( !(unsigned __int8)sub_1206E0(a3) )
    {
LABEL_6:
      if ( *((char *)a3 + 4) < 0 )
      {
        sub_64280((__int64 *)(a1 + 80), v107);
        sub_316CB0(a1 + 96, &v108);
      }
      sub_159B40(a3, v92, a1, a3, 0);
      ++v9;
      if ( *((char *)a3 + 4) >= 0
        && (!(unsigned __int8)sub_64880(v10) || (_QWORD)v106)
        && ((unsigned __int8)sub_64780(v107, v10) || (unsigned __int8)sub_318470(&v108, &v105)) )
      {
        sub_3311F0(*(_QWORD *)(a1 + 64), *((_QWORD *)a3 + 3), 45, v11, v12, v13);
      }
      v14 = sub_A3480(a1, (__int64)a3);
      if ( v14 )
        a3 = *(unsigned int **)(v14 + 16);
      else
        a3 = *(unsigned int **)(a1 + 56);
      v15 = v108;
      if ( !v108 )
        goto LABEL_17;
      goto LABEL_16;
    }
LABEL_84:
    if ( *((_BYTE *)a3 + 64) == 8 )
    {
      v30 = (__int64)a3;
      goto LABEL_51;
    }
    v31 = *a3;
    if ( *((_BYTE *)a3 + 32) != 4 )
      goto LABEL_53;
    v30 = *((_QWORD *)a3 + 5);
    if ( *(_BYTE *)(v30 + 64) != 8 )
      goto LABEL_53;
    if ( (_DWORD)v31 != 4 )
    {
      if ( (_DWORD)v31 == 67 )
      {
        if ( a3[9] != a3[17] )
          goto LABEL_53;
      }
      else if ( (unsigned int)(v31 - 8) > 2 )
      {
        if ( (unsigned int)v31 > 0x1D )
          goto LABEL_53;
        v54 = 536873184;
        if ( !_bittest64(&v54, v31) )
          goto LABEL_53;
      }
    }
    if ( v30 )
    {
LABEL_51:
      if ( !*(_DWORD *)(v30 + 68) )
      {
LABEL_52:
        v31 = *a3;
        goto LABEL_53;
      }
      v110 = 0;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      sub_127FE0(
        a1,
        (__int64)&v110,
        (__int64)(a3 + 16),
        1u,
        v17,
        v18,
        v87,
        (int)v88,
        (int)&v110,
        v89.m128i_i32[2],
        (__int64)(a3 + 16));
      if ( (unsigned __int8)sub_64820(v89.m128i_i64[0], v88) && (unsigned __int8)sub_317F40(v88 + 2, &v112) )
      {
        ++v9;
        if ( (unsigned int *)v30 == a3 )
        {
          v55 = *(_QWORD *)(v30 + 72);
          v56 = v55 + 96;
          v90.m128i_i64[0] = v55;
          sub_648D0((__int64 *)(v55 + 240), (__int64 *)(v55 + 96));
          v57 = (_QWORD *)v90.m128i_i64[0];
          v90.m128i_i64[0] = 0;
          v58 = v57[15];
          v91.m128i_i64[0] = v58;
          if ( v58 )
          {
            v94 = v57;
            n = 16 * v58;
            v90.m128i_i64[0] = qalloc_or_throw(16 * v58, v56, 16 * v58, (__int64)v57);
            v77 = (const void *)v94[14];
            v89.m128i_i64[0] = (__int64)v94;
            memcpy((void *)v90.m128i_i64[0], v77, n);
            v57 = (_QWORD *)v89.m128i_i64[0];
          }
          v59 = _mm_loadl_epi64(&v91);
          v60 = v57[32];
          v61 = _mm_unpacklo_epi64(v59, v59);
          if ( v60 )
          {
            v57[33] = 0;
            v89.m128i_i64[0] = (__int64)v57;
            v91 = v61;
            qfree(v60);
            v61 = _mm_load_si128(&v91);
            v57 = (_QWORD *)v89.m128i_i64[0];
          }
          v62 = v90.m128i_i64[0];
          *(__m128i *)(v57 + 33) = v61;
          v57[32] = v62;
          v63 = *(_QWORD *)(v30 + 72);
          v64 = *(_QWORD *)(v63 + 56);
          if ( v64 )
          {
            v89.m128i_i32[0] = v9;
            v65 = v63;
            v66 = v10;
            v67 = 0;
            v90.m128i_i64[0] = (__int64)a3;
            v68 = v66;
            v69 = v64;
            do
            {
              v70 = v67++;
              sub_11CDA0(*(_QWORD *)(v65 + 48) + 16 * v70);
            }
            while ( v69 != v67 );
            v63 = v65;
            a3 = (unsigned int *)v90.m128i_i64[0];
            v9 = v89.m128i_i32[0];
            v10 = v68;
          }
          *(_QWORD *)(v63 + 56) = 0;
        }
        else
        {
          *((_QWORD *)a3 + 5) = 0;
          *((_QWORD *)a3 + 4) = 0xFFFFFFFF00000000LL;
          sub_11D890(a3, v30);
          sub_11CDA0(v30 + 64);
          sub_11CDA0(v30 + 48);
          sub_11CDA0(v30 + 32);
          j__qfree(v30);
        }
        a3[17] = 0;
        goto LABEL_104;
      }
      v47 = *a3;
      if ( *a3 != 4 )
      {
        if ( v47 == 67 )
        {
          if ( a3[9] == a3[17] )
            goto LABEL_103;
        }
        else if ( v47 - 8 <= 2 )
        {
          goto LABEL_103;
        }
LABEL_104:
        if ( v112 )
        {
          v113.m128i_i64[0] = 0;
          qfree(v112);
        }
        qfree(v110);
        goto LABEL_52;
      }
LABEL_103:
      v95 = sub_122600(a3);
      if ( v95 )
        goto LABEL_104;
      v71 = sub_64640((__int64 *)v89.m128i_i64[0], v88, v48, v49, v50, v51);
      v72 = sub_317C60(&v112, v88 + 2);
      if ( !v71 && !v72 )
        goto LABEL_104;
      v73 = *(_QWORD *)(a1 + 64);
      v101[1] = 0;
      v74 = *(_QWORD *)(v73 + 128);
      v91.m128i_i64[0] = (__int64)v101;
      v101[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_11D020(v101, v73, v89.m128i_i64[0], v74) )
        goto LABEL_145;
      if ( HIDWORD(v101[0]) == a3[17] )
        goto LABEL_145;
      v96 = sub_121BB0(v90.m128i_i64[0], v101, &v98);
      if ( !v96 || v98 && v98 != a3[17] - HIDWORD(v101[0]) )
        goto LABEL_145;
      if ( *((_BYTE *)a3 + 64) == 15 )
      {
        v78 = *((_QWORD *)a3 + 9) + 48LL;
      }
      else
      {
        if ( *a3 != 4 )
        {
LABEL_136:
          if ( !(unsigned __int8)sub_11CA80(HIDWORD(v101[0])) )
            goto LABEL_145;
          v75 = sub_1321C0(a1, a3, v91.m128i_i64[0], *((_QWORD *)a3 + 1), v90.m128i_i64[0]);
          if ( v75 )
          {
            v75 = 0;
            v76 = 10;
          }
          else
          {
            if ( !(unsigned __int8)sub_1301F0(a1, a3, v91.m128i_i64[0], *((_QWORD *)a3 + 1), v90.m128i_i64[0]) )
              goto LABEL_145;
            v76 = 11;
          }
LABEL_139:
          if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
          {
            *a3 = v76;
            goto LABEL_142;
          }
          if ( (unsigned __int8)sub_12B6F0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v76, HIDWORD(v101[0]), 0) )
          {
LABEL_142:
            a3[1] &= ~0x10u;
            sub_A0C30(*(_QWORD *)(a1 + 64), v90.m128i_i64[0], v91.m128i_i64[0]);
            if ( v75 )
            {
              *((_BYTE *)a3 + 65) |= 4u;
            }
            else if ( *((_BYTE *)a3 + 64) == 15 && (get_tinfo_property() & 0x2F) == 0xD )
            {
              *((_BYTE *)a3 + 65) |= 2u;
            }
            v95 = v96;
          }
LABEL_145:
          sub_11CDA0(v91.m128i_i64[0]);
          v9 += v95;
          goto LABEL_104;
        }
        v78 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 72LL) + 72LL;
      }
      if ( (get_tinfo_property() & 0x2F) != 0xD )
        goto LABEL_136;
      v79 = *((_BYTE *)a3 + 64) == 15;
      v102[0] = 0;
      v102[1] = 0;
      if ( v79 )
      {
        v80 = *((_QWORD *)a3 + 9);
        n = (size_t)v102;
      }
      else
      {
        n = (size_t)v102;
        v80 = 0;
        if ( (unsigned __int8)sub_1C5030(v90.m128i_i64[0], v102) )
          v80 = n;
      }
      v81 = *(_QWORD *)(a1 + 480);
      v94 = (__int64 *)v80;
      v82 = (int)a3[17];
      v99 = v98;
      if ( (unsigned __int8)sub_1C50C0(v80, v81, &v99, SHIDWORD(v101[0]), v82) )
      {
        v84 = v99;
        v85 = 0;
        if ( v98 != v99 )
        {
          if ( !(unsigned __int8)sub_1C3110(v94, 0, 0, v83, 0) )
            goto LABEL_170;
          v84 = v99;
          v85 = v99 != 0;
        }
        v100 = 0;
        v94 = &v100;
        if ( (unsigned __int8)sub_334D20(&v100, v78, v84, SHIDWORD(v101[0]), v85) )
        {
          HIDWORD(v101[0]) = get_tinfo_size();
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            sub_1C9210(v91.m128i_i64[0], *(_QWORD *)(a1 + 64), v94);
            v75 = 0;
          }
          else
          {
            v75 = (get_tinfo_property() & 0xF) == 9;
          }
          v86 = 11;
          if ( !v99 )
            v86 = 10;
          v97 = v86;
          clear_tinfo_t();
          cleanup_argloc();
          v76 = v97;
          goto LABEL_139;
        }
        clear_tinfo_t();
      }
LABEL_170:
      cleanup_argloc();
      goto LABEL_145;
    }
LABEL_53:
    v32 = sub_11E8A0(v31);
    v89.m128i_i64[0] = (__int64)&v110;
    if ( !v32 )
      goto LABEL_37;
    v33 = sub_1206E0(a3);
    v89.m128i_i64[0] = (__int64)&v110;
    if ( v33 )
      goto LABEL_37;
    sub_127A20(v89.m128i_i64[0], a1, a3, 1024);
    if ( (unsigned __int8)sub_64880(v89.m128i_i64[0]) && !v113.m128i_i64[0]
      || !(unsigned __int8)sub_64820(v89.m128i_i64[0], v88)
      || !(unsigned __int8)sub_317F40(v88 + 2, &v112)
      || !(unsigned __int8)sub_A4F90(a1, a3, v89.m128i_i64[0], v88) )
    {
      if ( v112 )
      {
        v113.m128i_i64[0] = 0;
        qfree(v112);
      }
      qfree(v110);
      if ( *a3 - 56 <= 1 )
        goto LABEL_60;
LABEL_38:
      if ( *((char *)a3 + 4) < 0 )
      {
LABEL_39:
        sub_124680(v89.m128i_i64[0], a1, a3, 1);
        sub_648D0(v107, (__int64 *)v89.m128i_i64[0]);
        v23 = v112;
        v112 = 0;
        v24 = _mm_loadu_si128(&v113);
        v113 = 0;
        if ( v108 )
        {
          v89 = v24;
          v109.m128i_i64[0] = 0;
          qfree(v108);
          v25 = _mm_load_si128(&v89);
          v108 = v23;
          v109 = v25;
          if ( v112 )
          {
            v113.m128i_i64[0] = 0;
            qfree(v112);
          }
        }
        else
        {
          v108 = v23;
          v109 = v24;
        }
        qfree(v110);
        sub_64640(v88, v107, v26, v27, v28, v29);
        sub_317C60(v88 + 2, &v108);
        a3 = *((unsigned int **)a3 + 2);
        if ( v108 )
        {
          v109.m128i_i64[0] = 0;
          qfree(v108);
        }
        goto LABEL_17;
      }
LABEL_62:
      sub_127A20(v89.m128i_i64[0], a1, a3, 0);
      sub_648D0(v107, (__int64 *)v89.m128i_i64[0]);
      v34 = v112;
      v112 = 0;
      v35 = _mm_loadu_si128(&v113);
      v113 = 0;
      if ( v108 )
      {
        v90 = v35;
        v109.m128i_i64[0] = 0;
        qfree(v108);
        v36 = _mm_load_si128(&v90);
        v108 = v34;
        v109 = v36;
        if ( v112 )
        {
          v113.m128i_i64[0] = 0;
          qfree(v112);
        }
      }
      else
      {
        v108 = v34;
        v109 = v35;
      }
      qfree(v110);
      sub_64280(v88, v107);
      sub_316CB0(v88 + 2, &v108);
      sub_11F2D0(a3, v88, *(_QWORD *)(a1 + 64));
      goto LABEL_39;
    }
    if ( v112 )
    {
      v113.m128i_i64[0] = 0;
      qfree(v112);
    }
    qfree(v110);
    goto LABEL_6;
  }
LABEL_30:
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
LABEL_32:
  qfree(v103);
  return v9;
}
