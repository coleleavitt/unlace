__int64 __fastcall sub_3EB2A0(__int64 a1, const char **a2, unsigned int a3, int a4, int a5)
{
  const char *v7; // r13
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // r12
  unsigned __int16 v11; // r15
  int v12; // edx
  const char *v13; // rdx
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __m128i si128; // xmm1
  __int64 v17; // rsi
  unsigned __int16 v18; // ax
  __int64 v19; // r9
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // eax
  _QWORD *v32; // r14
  unsigned __int64 v33; // rdx
  _QWORD *v34; // r8
  _QWORD *v35; // r13
  _QWORD *v36; // r15
  _QWORD *v37; // r12
  unsigned __int64 v38; // rcx
  _QWORD *v39; // rax
  bool v40; // al
  unsigned __int8 v41; // r15
  unsigned __int16 v42; // ax
  char *v43; // rbx
  __int64 v44; // rdi
  int v46; // eax
  _BYTE *v47; // rsi
  _QWORD *v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rcx
  _QWORD *v53; // rdi
  void *v54; // rax
  unsigned __int16 v55; // ax
  const char *v56; // rdx
  const char *v57; // rdx
  char v58; // al
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  _DWORD *v62; // rsi
  int v63; // eax
  _DWORD *v64; // rsi
  int v65; // eax
  _DWORD *v66; // rsi
  int v67; // eax
  _BYTE *v68; // rsi
  int v69; // eax
  _BYTE *v70; // rsi
  int tinfo_size; // eax
  _BYTE *v72; // rsi
  int v73; // eax
  _BYTE *v74; // rsi
  int v75; // eax
  __int16 v76; // ax
  _BYTE *v77; // rsi
  int v78; // eax
  _BYTE *v79; // rsi
  _BYTE *v80; // rsi
  int v81; // eax
  _BYTE *v82; // rsi
  int v83; // eax
  __int64 v84; // rsi
  _BYTE *v85; // rsi
  const char **v88; // [rsp+28h] [rbp-208h]
  __int64 v89; // [rsp+30h] [rbp-200h] BYREF
  __int64 v90; // [rsp+38h] [rbp-1F8h] BYREF
  unsigned __int8 v91[16]; // [rsp+40h] [rbp-1F0h] BYREF
  void *v92; // [rsp+50h] [rbp-1E0h] BYREF
  __int128 v93; // [rsp+58h] [rbp-1D8h]
  __int64 v94[2]; // [rsp+70h] [rbp-1C0h] BYREF
  __int64 *v95; // [rsp+80h] [rbp-1B0h] BYREF
  __int128 v96; // [rsp+88h] [rbp-1A8h]
  __int64 v97; // [rsp+A0h] [rbp-190h]
  __int64 v98; // [rsp+A8h] [rbp-188h]
  __int64 *v99; // [rsp+B0h] [rbp-180h] BYREF
  __int128 v100; // [rsp+B8h] [rbp-178h]
  __int64 v101; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v102; // [rsp+D8h] [rbp-158h]
  __int64 v103; // [rsp+E0h] [rbp-150h]
  __m128i v104; // [rsp+E8h] [rbp-148h] BYREF
  _BYTE v105[24]; // [rsp+100h] [rbp-130h] BYREF
  __int64 v106; // [rsp+118h] [rbp-118h]
  _BYTE *v107; // [rsp+120h] [rbp-110h] BYREF
  __int64 v108; // [rsp+128h] [rbp-108h]
  unsigned __int64 v109; // [rsp+130h] [rbp-100h]
  _BYTE v110[32]; // [rsp+150h] [rbp-E0h] BYREF
  _BYTE *v111; // [rsp+170h] [rbp-C0h] BYREF
  __int64 v112; // [rsp+178h] [rbp-B8h]
  unsigned __int64 v113; // [rsp+180h] [rbp-B0h]
  char v114[32]; // [rsp+1A0h] [rbp-90h] BYREF
  _QWORD v115[6]; // [rsp+1C0h] [rbp-70h] BYREF
  char v116; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v117; // [rsp+1F8h] [rbp-38h]

  v88 = a2;
  v117 = __readfsqword(0x28u);
  v7 = *a2;
  v93 = 0;
  v92 = nullptr;
  if ( v7 )
  {
    v8 = strlen(v7);
    v9 = v8 + 1;
    v10 = v8;
    a2 = (const char **)v7;
    v92 = (void *)qvector_reserve(&v92, 0, v8 + 1, 1);
    *(_QWORD *)&v93 = v9;
    memmove(v92, v7, v10);
    *((_BYTE *)v92 + v10) = 0;
  }
  v11 = *(_WORD *)(a1 + 842);
  if ( ((v11 - 4) & 0xFFFB) == 0 )
  {
    v89 = 1;
    v12 = *((_DWORD *)v88 + 3);
    if ( (v12 & 0x100) == 0 )
      goto LABEL_9;
    if ( v11 == 4 )
    {
      v101 = 9;
      copy_tinfo_t(&v89, &v101);
      clear_tinfo_t(&v101);
      v13 = "f";
      goto LABEL_8;
    }
LABEL_7:
    v101 = 25;
    copy_tinfo_t(&v89, &v101);
    clear_tinfo_t(&v101);
    v13 = "d";
LABEL_8:
    sub_3E53D0((__int64)&v92, "$", v13);
    v12 = *((_DWORD *)v88 + 3);
    goto LABEL_9;
  }
  if ( v11 != 16 || *(_WORD *)(a1 + 48) != 92 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE67u, (__int64)a2, 0.0);
    goto LABEL_163;
  }
  v89 = 1;
  v12 = *((_DWORD *)v88 + 3);
  if ( (v12 & 0x100) != 0 )
    goto LABEL_7;
LABEL_9:
  v14 = (__m128i *)v105;
  v15.m128i_i64[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
  v17 = (__int64)v88;
  do
  {
    v14->m128i_i32[1] = -1;
    v14 += 5;
    v14[-5].m128i_i16[0] = 0;
    v14[-5].m128i_i16[1] = 0;
    v14[-5].m128i_i64[1] = 0;
    v14[-4] = si128;
    v14[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v14[-3] + 8) = 0;
    v14[-2].m128i_i32[2] = 0;
    v14[-1].m128i_i64[0] = 0;
    v14[-1].m128i_i32[2] = 0;
  }
  while ( v14 != (__m128i *)&v116 );
  v94[0] = 0;
  v94[1] = 0;
  v95 = nullptr;
  v97 = 0;
  v98 = 0;
  v99 = nullptr;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v96 = 0;
  v100 = 0;
  v104 = 0;
  if ( (v12 & 0x20) != 0 )
  {
    v17 = a3;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a3 )
    {
      v19 = (int)a3;
LABEL_23:
      v17 = 3;
      sub_1D1C90(a1, 3u, v11, 0, 0x3BEA45E214ADDC55LL, v19, 0);
      goto LABEL_16;
    }
  }
  if ( (v12 & 0x40) != 0 && **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a4 )
  {
    v19 = a4;
    goto LABEL_23;
  }
  if ( (v12 & 0x80) != 0 )
  {
    v19 = a5;
    if ( **(_DWORD **)(*(_QWORD *)(a1 + 832) + 632LL) == a5 )
      goto LABEL_23;
  }
LABEL_16:
  v18 = *((_WORD *)v88 + 4);
  if ( v18 > 0xA1u )
  {
    if ( v18 > 0x1B6u )
    {
      if ( v18 != 439 )
      {
        if ( (unsigned __int16)(v18 - 553) <= 3u )
        {
          if ( v11 == 8 )
            v90 = 37;
          else
            v90 = 36;
          *(_QWORD *)v91 = 7;
          copy_tinfo_t(&v89, v91);
          clear_tinfo_t(v91);
          tinfo_size = get_tinfo_size(0, v90, 0);
          sub_329E10((__int64)v105, a4, tinfo_size, (__int64)&v90);
          v72 = v107;
          if ( v109 <= 1 )
          {
            v107 = (_BYTE *)qvector_reserve(&v107, v107, 2, 1);
            v72 = v107;
          }
          v108 = 2;
          *v72 = 97;
          v107[1] = 0;
          v73 = get_tinfo_size(0, v90, 0);
          sub_329E10((__int64)v110, a5, v73, (__int64)&v90);
          v74 = v111;
          if ( v113 <= 1 )
          {
            v111 = (_BYTE *)qvector_reserve(&v111, v111, 2, 1);
            v74 = v111;
          }
          v112 = 2;
          *v74 = 98;
          v111[1] = 0;
          clear_tinfo_t(&v90);
          goto LABEL_116;
        }
LABEL_25:
        v20 = 0;
        a3 = -1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v18 > 0x1B4u )
        goto LABEL_74;
      if ( v18 == 384 )
      {
        v57 = "r";
        v58 = *(_BYTE *)(a1 + 52) & 0x70;
        if ( v58 != 80 )
        {
          v57 = "i";
          if ( v58 == 96 )
            v57 = "w";
        }
        sub_3E53D0((__int64)&v92, "$", v57);
        v59 = *(_QWORD *)(a1 + 800);
        *(_QWORD *)v91 = 0;
        copy_tinfo_t(v91, v59 + 232);
        v60 = get_tinfo_size(0, *(_QWORD *)v91, 0);
        sub_329E10((__int64)v105, a3, v60, (__int64)v91);
        clear_tinfo_t(v91);
        v61 = v106;
        if ( (_BYTE)v106 )
        {
          LOBYTE(v61) = v106 & 0x3F | 0x80;
          v106 = v61;
        }
        v62 = v107;
        if ( v109 <= 4 )
        {
          v107 = (_BYTE *)qvector_reserve(&v107, v107, 5, 1);
          v62 = v107;
        }
        a3 = -1;
        v20 = 1;
        v108 = 5;
        *v62 = 1919181921;
        v107[4] = 0;
        goto LABEL_26;
      }
      if ( v18 <= 0x180u )
      {
        if ( v18 != 363 )
          goto LABEL_25;
LABEL_74:
        if ( v11 == 4 )
        {
          *(_QWORD *)v91 = 36;
          copy_tinfo_t(&v89, v91);
          clear_tinfo_t(v91);
          sub_3E53D0((__int64)&v92, "$", "ulong");
        }
        else
        {
          *(_QWORD *)v91 = 37;
          copy_tinfo_t(&v89, v91);
          clear_tinfo_t(v91);
          sub_3E53D0((__int64)&v92, "$", "uint64");
        }
        v46 = get_tinfo_size(0, v89, 0);
        sub_329E10((__int64)v105, a4, v46, (__int64)&v89);
        v47 = v107;
        if ( v109 <= 3 )
        {
          v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
          v47 = v107;
        }
        v108 = 4;
        *(_WORD *)v47 = 24950;
        v47[2] = 108;
        v107[3] = 0;
        goto LABEL_79;
      }
      if ( (unsigned __int16)(v18 - 435) > 1u )
        goto LABEL_25;
    }
    *(_QWORD *)v91 = (v11 != 4) + 36LL;
    copy_tinfo_t(&v89, v91);
    clear_tinfo_t(v91);
    v75 = get_tinfo_size(0, v89, 0);
    sub_329E10((__int64)v105, a4, v75, (__int64)&v89);
LABEL_120:
    v68 = v107;
    if ( v109 <= 3 )
    {
      v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
      v68 = v107;
    }
    v108 = 4;
    *(_WORD *)v68 = 29281;
    v68[2] = 103;
    v107[3] = 0;
LABEL_79:
    v20 = 1;
    goto LABEL_26;
  }
  if ( v18 > 0x66u )
  {
    switch ( *((_WORD *)v88 + 4) )
    {
      case 0x67:
      case 0x84:
        v67 = get_tinfo_size(0, v89, 0);
        sub_329E10((__int64)v105, a4, v67, (__int64)&v89);
        goto LABEL_120;
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
        v63 = get_tinfo_size(0, v89, 0);
        sub_329E10((__int64)v105, a4, v63, (__int64)&v89);
        v64 = v107;
        if ( v109 <= 4 )
        {
          v107 = (_BYTE *)qvector_reserve(&v107, v107, 5, 1);
          v64 = v107;
        }
        v108 = 5;
        *v64 = 812085857;
        v107[4] = 0;
        v65 = get_tinfo_size(0, v89, 0);
        sub_329E10((__int64)v110, a5, v65, (__int64)&v89);
        v66 = v111;
        if ( v113 <= 4 )
        {
          v111 = (_BYTE *)qvector_reserve(&v111, v111, 5, 1);
          v66 = v111;
        }
        v112 = 5;
        *v66 = 828863073;
        v111[4] = 0;
        goto LABEL_116;
      case 0x91:
        *(_QWORD *)v91 = (v11 != 4) + 36LL;
        copy_tinfo_t(&v89, v91);
        clear_tinfo_t(v91);
        goto LABEL_118;
      case 0x9E:
      case 0xA0:
        *(_QWORD *)v91 = 36;
        copy_tinfo_t(&v89, v91);
        clear_tinfo_t(v91);
LABEL_118:
        v20 = 0;
        break;
      case 0xA1:
        *(_QWORD *)v91 = 36;
        v69 = get_tinfo_size(0, 36, 0);
        sub_329E10((__int64)v105, a4, v69, (__int64)v91);
        clear_tinfo_t(v91);
        v70 = v107;
        if ( v109 <= 3 )
        {
          v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
          v70 = v107;
        }
        v20 = 1;
        v108 = 4;
        *(_WORD *)v70 = 29281;
        v70[2] = 103;
        a3 = -1;
        v107[3] = 0;
        break;
      default:
        goto LABEL_25;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int16)(v18 - 81) > 0xBu )
    goto LABEL_25;
  v55 = *(_WORD *)(a1 + 48) - 90;
  switch ( v11 )
  {
    case 8u:
      *(_QWORD *)v91 = v55 < 2u ? 37LL : 21LL;
      copy_tinfo_t(&v89, v91);
      clear_tinfo_t(v91);
      v56 = "d";
      break;
    case 0x10u:
      *(_QWORD *)v91 = 22;
      copy_tinfo_t(&v89, v91);
      clear_tinfo_t(v91);
      v56 = "q";
      break;
    case 4u:
      *(_QWORD *)v91 = v55 < 2u ? 36LL : 20LL;
      copy_tinfo_t(&v89, v91);
      clear_tinfo_t(v91);
      v56 = "w";
      break;
    default:
      if ( !under_debugger )
        sub_37DDE0(0, v17, 0.0);
LABEL_163:
      BUG();
  }
  sub_3E53D0((__int64)&v92, "$", v56);
  v76 = *(_WORD *)(a1 + 48);
  if ( v76 == 81 )
  {
    sub_3E7FD0(a1, (__int64)v105, (__int64)&v89, 0x80u, a4);
    v85 = v107;
    if ( v109 <= 3 )
    {
      v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
      v85 = v107;
    }
    v108 = 4;
    *(_WORD *)v85 = 29808;
    v85[2] = 114;
    v107[3] = 0;
    goto LABEL_79;
  }
  if ( v76 != 92 )
  {
    sub_3E7FD0(a1, (__int64)v105, (__int64)&v89, 0x80u, a5);
    v77 = v107;
    if ( v109 <= 3 )
    {
      v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
      v77 = v107;
    }
    v108 = 4;
    *(_WORD *)v77 = 29808;
    v77[2] = 114;
    v107[3] = 0;
    v78 = get_tinfo_size(0, v89, 0);
    sub_329E10((__int64)v110, a4, v78, (__int64)&v89);
    v79 = v111;
    if ( v113 <= 3 )
    {
      v111 = (_BYTE *)qvector_reserve(&v111, v111, 4, 1);
      v79 = v111;
    }
    v112 = 4;
    *(_WORD *)v79 = 24950;
    v79[2] = 108;
    v111[3] = 0;
LABEL_116:
    v20 = 2;
    goto LABEL_26;
  }
  sub_3E7FD0(a1, (__int64)v105, (__int64)&v89, 0x80u, a5);
  v80 = v107;
  if ( v109 <= 3 )
  {
    v107 = (_BYTE *)qvector_reserve(&v107, v107, 4, 1);
    v80 = v107;
  }
  v108 = 4;
  *(_WORD *)v80 = 29808;
  v80[2] = 114;
  v107[3] = 0;
  v81 = get_tinfo_size(0, v89, 0);
  sub_329E10((__int64)v110, a3, v81, (__int64)&v89);
  v82 = v111;
  if ( v113 <= 6 )
  {
    v111 = (_BYTE *)qvector_reserve(&v111, v111, 7, 1);
    v82 = v111;
  }
  v112 = 7;
  *(_DWORD *)v82 = 1986292847;
  *((_WORD *)v82 + 2) = 27745;
  v111[6] = 0;
  v83 = get_tinfo_size(0, v89, 0);
  sub_329E10((__int64)v114, a4, v83, (__int64)&v89);
  v84 = v115[0];
  if ( v115[2] <= 6u )
  {
    v115[0] = qvector_reserve(v115, v115[0], 7, 1);
    v84 = v115[0];
  }
  v115[1] = 7;
  v20 = 3;
  *(_DWORD *)v84 = 1987536238;
  *(_WORD *)(v84 + 4) = 27745;
  *(_BYTE *)(v115[0] + 6LL) = 0;
LABEL_26:
  v21 = s1;
  if ( (_QWORD)v93 )
    v21 = (const char *)v92;
  v22 = sub_330570(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 40),
          (__int64)v21,
          &v89,
          v20,
          (__int64)v105,
          (*((_BYTE *)v88 + 12) & 0x10) == 0);
  v23 = *(_QWORD *)(v22 + 72);
  v24 = *(_DWORD *)(v23 + 280);
  *(_DWORD *)(v23 + 280) = v24 | 4;
  v25 = *((_DWORD *)v88 + 3);
  if ( (v25 & 2) != 0 )
  {
    *(_DWORD *)(v23 + 280) = v24 | 0xC;
    v25 = *((_DWORD *)v88 + 3);
  }
  if ( (v25 & 1) != 0 )
    *(_DWORD *)(v23 + 280) |= 0x10u;
  if ( !(unsigned __int8)sub_60500(v94) || (_QWORD)v96 )
  {
    if ( !(unsigned __int8)sub_60500(&v101) || v104.m128i_i64[0] )
      **(_DWORD **)(a1 + 8) |= 0x40u;
    v26 = *(_QWORD *)(v22 + 72);
    sub_5FF00((__int64 *)(v26 + 136), v94);
    sub_311BB0((__int64 *)(v26 + 152), &v95);
    sub_311BB0((__int64 *)(*(_QWORD *)(v22 + 72) + 216LL), &v95);
    v27 = *(_QWORD *)(v22 + 72);
    v28 = *(_QWORD *)(v27 + 176);
    *(_QWORD *)(v27 + 176) = v101;
    v101 = v28;
    v29 = *(_QWORD *)(v27 + 184);
    *(_QWORD *)(v27 + 184) = v102;
    v102 = v29;
    v30 = *(_QWORD *)(v27 + 192);
    *(_QWORD *)(v27 + 192) = v103;
    v15 = _mm_loadu_si128((const __m128i *)(v27 + 200));
    *(__m128i *)(v27 + 200) = _mm_loadu_si128(&v104);
    v103 = v30;
    v104 = v15;
  }
  sub_311BB0((__int64 *)(*(_QWORD *)(v22 + 72) + 216LL), &v99);
  v31 = *((_DWORD *)v88 + 3);
  if ( (v31 & 4) != 0 )
  {
    *(_DWORD *)(v22 + 4) |= 0x80000u;
    v31 = *((_DWORD *)v88 + 3);
  }
  if ( (v31 & 0x10) == 0 )
  {
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(v22 + 68));
    *(_DWORD *)v91 = 1;
    v15.m128i_i64[0] = _mm_unpacklo_epi32(v15, _mm_cvtsi32_si128(a3)).m128i_u64[0];
    *(_QWORD *)&v91[4] = v15.m128i_i64[0];
    v22 = (__int64)sub_120DA0(v22, v91);
    sub_1188E0((__int64)v91);
    v31 = *((_DWORD *)v88 + 3);
  }
  if ( (v31 & 8) != 0 )
    *(_DWORD *)(v22 + 4) |= 0x20000u;
  sub_B0DD0(*(_QWORD **)(a1 + 16), v22);
  v32 = *(_QWORD **)(a1 + 8);
  v33 = *(_QWORD *)(a1 + 40);
  v34 = (_QWORD *)v32[127];
  v35 = v32 + 126;
  v36 = v32 + 126;
  if ( v34 )
  {
    v37 = (_QWORD *)v32[127];
    while ( 1 )
    {
      while ( 1 )
      {
        v38 = v37[4];
        if ( v38 >= v33 )
          break;
        v37 = (_QWORD *)v37[3];
        if ( !v37 )
          goto LABEL_49;
      }
      v39 = (_QWORD *)v37[2];
      if ( v33 >= v38 )
        break;
      v36 = v37;
      v37 = (_QWORD *)v37[2];
      if ( !v39 )
      {
LABEL_49:
        v40 = v35 == v36;
        goto LABEL_50;
      }
    }
    v48 = (_QWORD *)v37[3];
    if ( v48 )
    {
      do
      {
        while ( 1 )
        {
          v49 = v48[2];
          v50 = v48[3];
          if ( v33 >= v48[4] )
            break;
          v36 = v48;
          v48 = (_QWORD *)v48[2];
          if ( !v49 )
            goto LABEL_85;
        }
        v48 = (_QWORD *)v48[3];
      }
      while ( v50 );
    }
LABEL_85:
    if ( v39 )
    {
      do
      {
        while ( 1 )
        {
          v51 = v39[2];
          v52 = v39[3];
          if ( v39[4] < v33 )
            break;
          v37 = v39;
          v39 = (_QWORD *)v39[2];
          if ( !v51 )
            goto LABEL_90;
        }
        v39 = (_QWORD *)v39[3];
      }
      while ( v52 );
    }
LABEL_90:
    if ( (_QWORD *)v32[128] == v37 && v36 == v35 )
      goto LABEL_52;
    for ( ; v36 != v37; --v32[130] )
    {
      v53 = v37;
      v37 = (_QWORD *)std::_Rb_tree_increment(v37);
      v54 = (void *)std::_Rb_tree_rebalance_for_erase(v53, v35);
      operator delete(v54, 0x28u);
    }
  }
  else
  {
    v40 = 1;
LABEL_50:
    if ( (_QWORD *)v32[128] == v36 && v40 )
    {
LABEL_52:
      sub_3E6130(v34);
      v32[128] = v35;
      v32[127] = 0;
      v32[129] = v35;
      v32[130] = 0;
    }
  }
  if ( (*((_BYTE *)v88 + 12) & 0x10) == 0 )
  {
    v41 = (unsigned int)get_tinfo_property(v89, 3) == 1;
    v42 = get_tinfo_size(0, v89, 0);
    sub_3EB140(a1, a3, v42, v41, *(double *)v15.m128i_i64);
  }
  if ( v103 )
  {
    v104.m128i_i64[0] = 0;
    qfree(v103);
  }
  qfree(v101);
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree(v99);
  }
  qfree(v97);
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
  qfree(v94[0]);
  v43 = &v116;
  do
  {
    v43 -= 80;
    cleanup_argloc(v43 + 56);
    v44 = *((_QWORD *)v43 + 4);
    if ( v44 )
    {
      *((_QWORD *)v43 + 5) = 0;
      qfree(v44);
    }
    clear_tinfo_t(v43 + 24);
    sub_1188E0((__int64)v43);
  }
  while ( v43 != v105 );
  clear_tinfo_t(&v89);
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92);
  }
  return 1;
}
