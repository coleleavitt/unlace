__int64 __fastcall sub_3F2660(__int64 a1, unsigned int a2, int a3)
{
  _WORD *v3; // rax
  __int64 v4; // rsi
  int v6; // edx
  __m128i si128; // xmm1
  __m128i *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // r12d
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(_DWORD *, unsigned int); // rax
  _DWORD *v21; // r10
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(_DWORD *, unsigned int); // rax
  __int64 v25; // r10
  int v26; // r12d
  _BYTE *v27; // rax
  int i; // r8d
  __int64 v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // r12
  int v32; // eax
  __m128i v33; // xmm0
  _BYTE *j; // r14
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // esi
  int v38; // r12d
  int v39; // eax
  __int64 v40; // rax
  _BYTE *v41; // r12
  int v42; // eax
  int v43; // edx
  int v44; // esi
  int v45; // edx
  __int64 v46; // rax
  int v47; // esi
  int v48; // eax
  __int64 v49; // r12
  unsigned __int8 v50; // al
  __int64 v51; // r12
  unsigned __int8 v52; // al
  int tinfo_size; // eax
  int v54; // eax
  int v55; // eax
  _QWORD *v56; // rax
  __int64 v57; // r12
  unsigned __int8 v58; // al
  int v59; // ecx
  __int64 v60; // r12
  unsigned __int8 v61; // al
  unsigned int v62; // [rsp+4h] [rbp-3ACh]
  char v63; // [rsp+8h] [rbp-3A8h]
  char v64; // [rsp+8h] [rbp-3A8h]
  unsigned int dtype_size; // [rsp+8h] [rbp-3A8h]
  __int64 v66; // [rsp+8h] [rbp-3A8h]
  __int64 v67; // [rsp+8h] [rbp-3A8h]
  __int64 v68; // [rsp+8h] [rbp-3A8h]
  __int64 v69; // [rsp+10h] [rbp-3A0h]
  int v70; // [rsp+18h] [rbp-398h]
  int v71; // [rsp+18h] [rbp-398h]
  int v73; // [rsp+20h] [rbp-390h]
  _BYTE *v74; // [rsp+20h] [rbp-390h]
  unsigned int v75; // [rsp+20h] [rbp-390h]
  __int64 v76; // [rsp+20h] [rbp-390h]
  __int64 v77; // [rsp+20h] [rbp-390h]
  __int64 v78; // [rsp+20h] [rbp-390h]
  __int64 v79; // [rsp+28h] [rbp-388h]
  unsigned int v80; // [rsp+28h] [rbp-388h]
  int v81; // [rsp+28h] [rbp-388h]
  _BYTE *v82; // [rsp+28h] [rbp-388h]
  int v83; // [rsp+28h] [rbp-388h]
  __int64 v84; // [rsp+28h] [rbp-388h]
  __int64 v85; // [rsp+28h] [rbp-388h]
  __int64 v86; // [rsp+28h] [rbp-388h]
  __int64 v87; // [rsp+28h] [rbp-388h]
  __int64 v88; // [rsp+28h] [rbp-388h]
  const char *v89; // [rsp+30h] [rbp-380h]
  __int64 *v90; // [rsp+30h] [rbp-380h]
  __int64 v91; // [rsp+38h] [rbp-378h]
  __int64 v92; // [rsp+38h] [rbp-378h]
  __int64 v94; // [rsp+50h] [rbp-360h] BYREF
  __int64 v95; // [rsp+58h] [rbp-358h] BYREF
  __int64 v96[2]; // [rsp+60h] [rbp-350h] BYREF
  __int64 *v97; // [rsp+70h] [rbp-340h] BYREF
  __int128 v98; // [rsp+78h] [rbp-338h]
  __int64 v99[2]; // [rsp+90h] [rbp-320h] BYREF
  __int64 *v100; // [rsp+A0h] [rbp-310h] BYREF
  __int128 v101; // [rsp+A8h] [rbp-308h]
  __int128 v102; // [rsp+C0h] [rbp-2F0h] BYREF
  __int64 *v103; // [rsp+D0h] [rbp-2E0h] BYREF
  __int128 v104; // [rsp+D8h] [rbp-2D8h]
  _BYTE v105[24]; // [rsp+F0h] [rbp-2C0h] BYREF
  _BYTE v106[56]; // [rsp+108h] [rbp-2A8h] BYREF
  _BYTE v107[24]; // [rsp+140h] [rbp-270h] BYREF
  _BYTE v108[456]; // [rsp+158h] [rbp-258h] BYREF
  _BYTE v109[80]; // [rsp+320h] [rbp-90h] BYREF
  char v110; // [rsp+370h] [rbp-40h] BYREF
  unsigned __int64 v111; // [rsp+378h] [rbp-38h]

  v3 = &unk_4D6C08;
  v4 = *(unsigned __int16 *)(a1 + 48);
  v111 = __readfsqword(0x28u);
  v6 = 0;
  while ( *v3 != (_WORD)v4 )
  {
    ++v6;
    v3 += 8;
    if ( v6 == 71 )
      return 0;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
  v69 = v6;
  v89 = (&off_4D6C00)[2 * v6];
  v8 = (__m128i *)v105;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v110 );
  v94 = 0;
  v96[0] = 0;
  v96[1] = 0;
  v97 = nullptr;
  v99[0] = 0;
  v99[1] = 0;
  v100 = nullptr;
  v95 = 0;
  v98 = 0;
  v101 = 0;
  if ( (unsigned __int16)v4 > 0x116u )
  {
    if ( (unsigned __int16)v4 > 0x4B3u )
    {
      if ( (unsigned __int16)v4 > 0x821u )
      {
        if ( (_WORD)v4 == 2499 )
          goto LABEL_91;
        goto LABEL_83;
      }
      if ( (unsigned __int16)v4 > 0x81Du )
      {
LABEL_73:
        *(_QWORD *)&v102 = 1;
        copy_tinfo_t(&v94, &v102);
        clear_tinfo_t(&v102);
        v63 = 0;
        v73 = 0;
LABEL_30:
        if ( !v89 )
          goto LABEL_19;
LABEL_31:
        v27 = v105;
        for ( i = 0; i != 8; ++i )
        {
          if ( !*v27 )
            break;
          v27 += 80;
        }
        v29 = sub_331530(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v89, &v94, i, (__int64)v105, v73);
        v30 = *(_QWORD *)(v29 + 72);
        v31 = (_QWORD *)v29;
        *(_DWORD *)(v30 + 284) = 0;
        v32 = *(_DWORD *)(v30 + 280);
        *(_DWORD *)(v30 + 280) = v32 | 4;
        if ( *((_BYTE *)&off_4D6C00 + 16 * v69 + 10) )
          *(_DWORD *)(v30 + 280) = v32 | 0x14;
        v90 = (__int64 *)v30;
        sub_60840((__int64 *)(v30 + 136), v96);
        sub_312B30(v90 + 19, &v97);
        v90 += 27;
        sub_312B30(v90, &v97);
        sub_312B30(v90, &v100);
        if ( v63 )
          *((_DWORD *)v31 + 1) |= 0x80000u;
        if ( v73 )
        {
          v33 = _mm_cvtsi32_si128(*((_DWORD *)v31 + 17));
          LODWORD(v102) = 1;
          *(_QWORD *)((char *)&v102 + 4) = _mm_unpacklo_epi32(v33, _mm_cvtsi32_si128(a2)).m128i_u64[0];
          v31 = sub_121820((__int64)v31, (unsigned __int8 *)&v102);
          sub_119360((__int64)&v102);
        }
        sub_B1850(*(_QWORD **)(a1 + 16), (__int64)v31);
        if ( get_tinfo_size(0, v94, 0) )
        {
          tinfo_size = get_tinfo_size(0, v94, 0);
          sub_3EC840(a1, a2, tinfo_size);
        }
        v16 = 1;
        goto LABEL_43;
      }
      if ( (_WORD)v4 != 1293 )
        goto LABEL_83;
    }
    else
    {
      if ( (unsigned __int16)v4 > 0x4B1u )
        goto LABEL_76;
      if ( (_WORD)v4 != 619 )
      {
        if ( (unsigned __int16)v4 <= 0x26Bu )
        {
          if ( (_WORD)v4 == 590 || (_WORD)v4 == 612 || (_WORD)v4 == 371 )
            goto LABEL_91;
          goto LABEL_83;
        }
        if ( (_WORD)v4 != 636 )
        {
          if ( (_WORD)v4 == 802 )
            goto LABEL_91;
LABEL_83:
          if ( !under_debugger )
            sub_37EEE0(0xC900u, v4, 0.0);
          BUG();
        }
      }
    }
    *(_QWORD *)&v102 = 9;
    copy_tinfo_t(&v95, &v102);
    clear_tinfo_t(&v102);
    v54 = get_tinfo_size(0, v95, 0);
    sub_32AD90((__int64)v105, a3, v54, (__int64)&v95);
    *(_QWORD *)&v102 = 9;
    copy_tinfo_t(&v94, &v102);
    clear_tinfo_t(&v102);
    goto LABEL_18;
  }
  if ( (unsigned __int16)v4 > 0xD9u )
  {
    LOWORD(v4) = v4 - 218;
    switch ( v4 )
    {
      case 0LL:
        if ( (*(_BYTE *)(a1 + 68) & 8) != 0 )
        {
          *(_QWORD *)&v102 = 39;
          v49 = *(_QWORD *)(a1 + 72);
          v84 = *(_QWORD *)(a1 + 40);
          v76 = *(_QWORD *)(a1 + 832);
          copy_tinfo_t(v106, &v102);
          clear_tinfo_t(&v102);
          v50 = getinf(59);
          sub_11CFD0((__int64)v105, v76, (int)v49, v50, v84, 0);
          *(_QWORD *)&v102 = 39;
          v51 = *(_QWORD *)(a1 + 112);
          v85 = *(_QWORD *)(a1 + 40);
          v77 = *(_QWORD *)(a1 + 832);
          copy_tinfo_t(v108, &v102);
          clear_tinfo_t(&v102);
          v52 = getinf(59);
          sub_11CFD0((__int64)v107, v77, (int)v51, v52, v85, 0);
        }
        goto LABEL_76;
      case 1LL:
      case 2LL:
        v64 = 7;
        goto LABEL_99;
      case 6LL:
      case 7LL:
        v64 = 2;
LABEL_99:
        *(_QWORD *)&v102 = 39;
        v60 = *(_QWORD *)(a1 + 72);
        v88 = *(_QWORD *)(a1 + 40);
        v78 = *(_QWORD *)(a1 + 832);
        copy_tinfo_t(v106, &v102);
        clear_tinfo_t(&v102);
        v61 = getinf(59);
        sub_11CFD0((__int64)v105, v78, (int)v60, v61, v88, 0);
        v81 = 1;
        v74 = v107;
        goto LABEL_23;
      case 19LL:
      case 20LL:
        goto LABEL_73;
      case 21LL:
      case 22LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
      case 32LL:
      case 33LL:
      case 34LL:
      case 35LL:
      case 36LL:
      case 37LL:
      case 38LL:
      case 39LL:
      case 40LL:
        v74 = v105;
        v81 = 0;
        v64 = 2;
        goto LABEL_23;
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
      case 45LL:
      case 46LL:
      case 47LL:
      case 48LL:
      case 49LL:
      case 50LL:
      case 51LL:
      case 52LL:
      case 53LL:
      case 54LL:
      case 55LL:
      case 56LL:
      case 57LL:
      case 58LL:
      case 59LL:
      case 60LL:
        v74 = v105;
        v81 = 0;
        v64 = 7;
LABEL_23:
        v18 = *(_QWORD *)(a1 + 832);
        v19 = *(unsigned __int16 *)(a1 + 110);
        v20 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v18 + 168LL);
        if ( v20 == sub_3E59C0 )
        {
          v70 = sub_3E59C0(*(_DWORD **)(a1 + 832), v19);
        }
        else
        {
          v70 = ((__int64 (__fastcall *)(_QWORD, __int64, double))v20)(*(_QWORD *)(a1 + 832), v19, 0.0);
          v18 = *(_QWORD *)(a1 + 832);
        }
        v62 = v64;
        dtype_size = get_dtype_size((unsigned int)v64);
        sub_328100((__int64 *)&v102, v18, dtype_size, 2);
        sub_32AD90((__int64)v74, v70, dtype_size, (__int64)&v102);
        clear_tinfo_t(&v102);
        v21 = *(_DWORD **)(a1 + 832);
        v22 = 80LL * (v81 + 1);
        if ( *(_BYTE *)(a1 + 145) == 5 )
        {
          v68 = *(_QWORD *)(a1 + 832);
          *(_QWORD *)&v102 = 39;
          v57 = *(_QWORD *)(a1 + 152);
          v87 = *(_QWORD *)(a1 + 40);
          copy_tinfo_t(&v105[v22 + 24], &v102);
          clear_tinfo_t(&v102);
          v58 = getinf(59);
          sub_11CFD0((__int64)&v105[v22], v68, (int)v57, v58, v87, 0);
        }
        else
        {
          v82 = &v105[80 * v81 + 80];
          v23 = *(unsigned __int16 *)(a1 + 150);
          v24 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v21 + 168LL);
          if ( v24 == sub_3E59C0 )
          {
            v26 = sub_3E59C0(v21, v23);
          }
          else
          {
            v26 = ((__int64 (__fastcall *)(_DWORD *, __int64, double))v24)(v21, v23, 0.0);
            v25 = *(_QWORD *)(a1 + 832);
          }
          v66 = v25;
          v75 = get_dtype_size(v62);
          sub_328100((__int64 *)&v102, v66, v75, 2);
          sub_32AD90((__int64)v82, v26, v75, (__int64)&v102);
          clear_tinfo_t(&v102);
        }
        *(_QWORD *)&v102 = 1;
        copy_tinfo_t(&v94, &v102);
        clear_tinfo_t(&v102);
        v63 = 1;
        v73 = 0;
        goto LABEL_30;
      default:
        goto LABEL_83;
    }
  }
  if ( (unsigned __int16)v4 > 0x53u )
  {
    if ( (_WORD)v4 == 169 )
    {
      v36 = *(_QWORD *)(a1 + 832);
      v37 = *(_DWORD *)(v36 + 376);
      *(_QWORD *)&v102 = 7;
      v38 = *(_DWORD *)(v36 + 352);
      v83 = v37;
      v39 = get_tinfo_size(0, 7, 0);
      sub_32AD90((__int64)v105, v38, v39, (__int64)&v102);
      clear_tinfo_t(&v102);
      v40 = *(_QWORD *)(a1 + 800);
      v71 = *(_DWORD *)(*(_QWORD *)(v40 + 112) + 80LL);
      if ( *(_BYTE *)(v40 + 145) )
        v71 = -*(_DWORD *)(*(_QWORD *)(v40 + 112) + 80LL);
      v41 = v109;
      do
      {
        v67 = v40 + 232;
        v42 = get_tinfo_size(0, *(_QWORD *)(v40 + 232), 0);
        sub_32AD90((__int64)v41, v83, v42, v67);
        v41 -= 80;
        v83 -= v71;
        v40 = *(_QWORD *)(a1 + 800);
      }
      while ( v105 != v41 );
      v43 = *(_DWORD *)(*(_QWORD *)(v40 + 112) + 80LL);
      v44 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 352LL);
      v102 = 0u;
      sub_60440((__int64 *)&v102, v44, v43);
      v103 = nullptr;
      v104 = 0;
      sub_60840(v96, (__int64 *)&v102);
      sub_312B30((__int64 *)&v97, &v103);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      qfree(v102);
      v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
      v46 = *(_QWORD *)(a1 + 832);
      v47 = *(_DWORD *)(v46 + 380);
      v48 = *(_DWORD *)(v46 + 364);
      if ( v47 >= v48 )
      {
        v59 = v47;
        v47 = v48;
        v48 = v59;
      }
      v102 = 0u;
      sub_60440((__int64 *)&v102, v47, v48 + v45 - v47);
      v103 = nullptr;
      v104 = 0;
      sub_60840(v96, (__int64 *)&v102);
      sub_312B30((__int64 *)&v97, &v103);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      qfree(v102);
      v102 = 0u;
      v103 = nullptr;
      v104 = 0;
      v103 = (__int64 *)qvector_reserve(&v103, 0, 1, 16);
      *(__m128i *)&v103[2 * v104] = _mm_load_si128((const __m128i *)&xmmword_411C00);
      *(_QWORD *)&v104 = v104 + 1;
      sub_60840(v96, (__int64 *)&v102);
      sub_312B30((__int64 *)&v97, &v103);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      qfree(v102);
      v102 = 0u;
      v103 = nullptr;
      v104 = 0;
      v103 = (__int64 *)qvector_reserve(&v103, 0, 1, 16);
      *(__m128i *)&v103[2 * v104] = _mm_load_si128((const __m128i *)&xmmword_411C00);
      *(_QWORD *)&v104 = v104 + 1;
      sub_60840(v99, (__int64 *)&v102);
      sub_312B30((__int64 *)&v100, &v103);
      if ( v103 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v103);
      }
      qfree(v102);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 152LL) == 18 )
      {
        v63 = 1;
        v89 = "linux_syscall";
        v73 = 0;
        goto LABEL_31;
      }
      goto LABEL_70;
    }
    goto LABEL_83;
  }
  if ( (unsigned __int16)v4 <= 0x15u )
  {
    if ( (_WORD)v4 == 21 )
    {
      v86 = *(_QWORD *)(a1 + 832);
      v92 = *(_QWORD *)(a1 + 800);
      v56 = (_QWORD *)operator new(0x10u);
      *v56 = off_4D6A78;
      v56[1] = v92;
      *(_QWORD *)(v86 + 4512) = v56;
      sub_14DC90(*(_QWORD *)(v92 + 112), (__int64)v56);
      v11 = 7;
      goto LABEL_15;
    }
    goto LABEL_83;
  }
  v9 = 1LL << ((unsigned __int8)v4 - 22);
  if ( (v9 & 0x350400008000000LL) != 0 )
  {
LABEL_91:
    *(_QWORD *)&v102 = 25;
    copy_tinfo_t(&v95, &v102);
    clear_tinfo_t(&v102);
    v55 = get_tinfo_size(0, v95, 0);
    sub_32AD90((__int64)v105, a3, v55, (__int64)&v95);
    *(_QWORD *)&v102 = 25;
    copy_tinfo_t(&v94, &v102);
    clear_tinfo_t(&v102);
    goto LABEL_18;
  }
  if ( (_WORD)v4 == 83 )
  {
LABEL_76:
    *(_QWORD *)&v102 = 1;
    copy_tinfo_t(&v94, &v102);
    clear_tinfo_t(&v102);
LABEL_70:
    v63 = 1;
    v73 = 0;
    goto LABEL_30;
  }
  if ( (v9 & 1) == 0 )
    goto LABEL_83;
  v79 = *(_QWORD *)(a1 + 832);
  v91 = *(_QWORD *)(a1 + 800);
  v10 = (_QWORD *)operator new(0x10u);
  *v10 = off_4D6A78;
  v10[1] = v91;
  *(_QWORD *)(v79 + 4512) = v10;
  sub_14DC90(*(_QWORD *)(v91 + 112), (__int64)v10);
  v11 = 2;
LABEL_15:
  v12 = *(_QWORD *)(a1 + 832);
  v80 = get_dtype_size(v11);
  sub_328100((__int64 *)&v102, v12, v80, 2);
  sub_32AD90((__int64)v105, a3, v80, (__int64)&v102);
  clear_tinfo_t(&v102);
  v13 = 2;
  v14 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v14 + 80) == 8 )
    v13 = 7;
  v15 = get_dtype_size(v13);
  sub_328100((__int64 *)&v102, v14, v15, 2);
  copy_tinfo_t(&v94, &v102);
  clear_tinfo_t(&v102);
LABEL_18:
  v63 = 0;
  v73 = 1;
  if ( v89 )
    goto LABEL_31;
LABEL_19:
  v16 = 0;
LABEL_43:
  clear_tinfo_t(&v95);
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  qfree(v99[0]);
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree(v97);
  }
  qfree(v96[0]);
  clear_tinfo_t(&v94);
  for ( j = v109; ; j -= 80 )
  {
    cleanup_argloc(j + 56);
    v35 = *((_QWORD *)j + 4);
    if ( v35 )
    {
      *((_QWORD *)j + 5) = 0;
      qfree(v35);
    }
    clear_tinfo_t(j + 24);
    sub_119360((__int64)j);
    if ( v105 == j )
      break;
  }
  return v16;
}
