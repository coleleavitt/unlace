__int64 __fastcall sub_CA3800(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  unsigned int v8; // eax
  unsigned int v9; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  size_t v14; // rbp
  char *v15; // rsi
  char v16; // r13
  __int64 v17; // r14
  unsigned __int8 v18; // r13
  __int64 v19; // r14
  __int16 v20; // ax
  unsigned int v21; // ebp
  __int16 v22; // ax
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rdx
  bool v25; // r13
  char *v26; // rcx
  __int64 v27; // rbp
  char *v28; // rax
  char *v29; // rdi
  const __m128i *v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  __m128d *v33; // rax
  const __m128i *v34; // rsi
  __m128d *v35; // r9
  __m128d v36; // xmm0
  __m128d v37; // xmm1
  char *v38; // rdx
  char *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r14
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned __int16 *i; // rbp
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  char v53; // r14
  __int64 v54; // r13
  _QWORD *v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rax
  char v58; // al
  int v59; // r14d
  int v60; // r12d
  unsigned int j; // ebp
  unsigned __int64 v62; // rax
  __int64 v63; // r14
  __int64 (__fastcall *v64)(__int64, __int64); // rbp
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  unsigned __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // r12d
  unsigned int v75; // ebp
  unsigned __int64 v76; // rax
  char *v77; // rdi
  unsigned __int64 v78; // rax
  __int64 v79; // r12
  int v80; // r13d
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // r14
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rax
  unsigned int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  unsigned int v91; // r13d
  unsigned __int64 v92; // rax
  int v93; // esi
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // [rsp+18h] [rbp-E0h]
  __int64 v99; // [rsp+20h] [rbp-D8h]
  unsigned int v100; // [rsp+28h] [rbp-D0h]
  int k; // [rsp+28h] [rbp-D0h]
  char v102; // [rsp+2Fh] [rbp-C9h]
  __int64 v103; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v105)(); // [rsp+40h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+48h] [rbp-B0h]
  __int64 v107; // [rsp+50h] [rbp-A8h]
  __int64 v108; // [rsp+58h] [rbp-A0h]
  int v109; // [rsp+60h] [rbp-98h]
  unsigned int v110; // [rsp+64h] [rbp-94h]
  char v111; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __int64 v113; // [rsp+78h] [rbp-80h]
  _BYTE v114[120]; // [rsp+80h] [rbp-78h] BYREF

  v4 = sub_BD7F30(*(_QWORD *)(a2 + 32));
  v7 = v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 34 > 5 )
    {
      v7 = 0;
    }
    else
    {
      v8 = sub_B51D10(v4, 0);
      if ( v8 )
        return (unsigned int)sub_C98940(a1, a2, v8);
      if ( sub_B523A0(v7, nullptr, nullptr) )
      {
        if ( (*(_DWORD *)(v7 + 40) & 7) == 6
          && ((v45 = *(_DWORD *)(*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFFFFFF8LL), v45 == 1) || v45 == 3) )
        {
          return (unsigned int)sub_C98940(a1, a2, 0xE3u);
        }
        else
        {
          return (unsigned int)sub_C98940(a1, a2, 0xE2u);
        }
      }
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x24 && *(char *)(v7 + 82) < 0 )
      {
        v64 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL);
        v65 = sub_C70940(a2);
        v9 = v64(a1, v65);
        if ( (_BYTE)v9 )
        {
          v104 = a2 | 4;
          if ( (unsigned __int8)sub_C873A0(a1, &v104)
            && (v105 = (__int64 (__fastcall **)())(a2 | 4), (unsigned __int8)sub_C7D450(a1, (__int64 *)&v105)) )
          {
            ptr = (void *)(a2 | 4);
            return (unsigned int)sub_C7EAC0(a1, (__int64 *)&ptr);
          }
          else
          {
            return 0;
          }
        }
        return v9;
      }
    }
  }
  v11 = *(_QWORD *)(a1 + 552);
  v106 = a1;
  v108 = 0;
  v107 = v11;
  *(_QWORD *)(a1 + 552) = &v105;
  v109 = 0;
  v111 = 0;
  v105 = &off_2B21658;
  v12 = sub_BD7980(a2, **(_QWORD **)(a1 + 488), v5, v6);
  v99 = sub_CC2440(*(_QWORD *)(a1 + 488), v12);
  v98 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v13 + 16) != 13 || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B3) && !BYTE4(v99) )
  {
    if ( *(_BYTE *)(a1 + 584) )
    {
      ptr = (void *)(a2 | 2);
      v89 = sub_C986D0(a1, (__int64 *)&ptr, 0, 0, 1, 0);
      if ( BYTE4(v89) )
      {
        ptr = (void *)(a2 | 4);
        v9 = sub_C80E60(a1, v89, (__int64 *)&ptr);
        if ( !(_BYTE)v9 )
        {
LABEL_37:
          v105 = &off_2B21658;
          sub_C974D0((__int64)&v105);
          return v9;
        }
      }
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 586) )
      {
        ptr = (void *)(a2 | 2);
        v88 = sub_C986D0(a1, (__int64 *)&ptr, 0, 0, 1, 0);
        if ( BYTE4(v88) )
        {
          ptr = (void *)(a2 | 4);
          v9 = sub_C80E60(a1, v88, (__int64 *)&ptr);
          if ( !(_BYTE)v9 )
            goto LABEL_37;
        }
      }
      ptr = (void *)(a2 | 4);
      v9 = sub_C7D320(a1, (__int64 *)&ptr);
      if ( !(_BYTE)v9 )
        goto LABEL_37;
    }
  }
  v14 = 8LL * *(unsigned int *)(a2 + 16);
  v15 = v114;
  v16 = *(_BYTE *)(a2 + 2) >> 3;
  v17 = 8LL * *(unsigned int *)(a2 + 16);
  ptr = v114;
  v18 = v16 & 1;
  v113 = 0x800000000LL;
  v19 = v17 >> 3;
  if ( v14 > 0x40 )
  {
    sub_22134E0(&ptr, v114, v19, 8);
    v77 = (char *)ptr + 8 * (unsigned int)v113;
  }
  else
  {
    if ( !v14 )
      goto LABEL_11;
    v77 = v114;
  }
  v15 = (char *)(a2 + 8LL * v18 + 40);
  memcpy(v77, v15, v14);
  LODWORD(v14) = v113;
LABEL_11:
  v20 = *(_WORD *)a2;
  v21 = v19 + v14;
  LODWORD(v113) = v21;
  v22 = v20 & 0x1FF;
  if ( v22 == 91 )
  {
    v23 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
    v24 = v23;
    v25 = v23 == 20 || v23 == 15;
    if ( v25 || v23 <= 0x1Du && (v73 = 871104512, _bittest64(&v73, v24)) )
    {
      v26 = (char *)ptr;
      v27 = 8LL * v21;
      v28 = (char *)ptr + v27;
      if ( ptr != (char *)ptr + v27 )
      {
        v29 = v28 - 8;
        if ( v28 - 8 > ptr )
        {
          v30 = (const __m128i *)ptr;
          v15 = (char *)(v27 - 9);
          v31 = (unsigned __int64)(v27 - 9) >> 4;
          v32 = v31 + 1;
          if ( (v27 <= 0 || (__int64)(v27 - 8 * v31 - 8) >= (__int64)(8 * (v31 + 1))) && (unsigned __int64)v15 > 0x1F )
          {
            v33 = (__m128d *)((char *)ptr + v27 - 16);
            v34 = (const __m128i *)v33;
            v35 = &v33[-(v32 >> 1)];
            do
            {
              v36 = (__m128d)_mm_loadu_si128(v30);
              v37 = (__m128d)_mm_loadu_si128(v34);
              --v33;
              ++v30;
              --v34;
              v30[-1] = (const __m128i)_mm_shuffle_pd(v37, v37, 1);
              v33[1] = _mm_shuffle_pd(v36, v36, 1);
            }
            while ( v35 != v33 );
            v15 = (char *)(v32 & 0xFFFFFFFFFFFFFFFELL);
            v38 = &v26[8 * (v32 & 0xFFFFFFFFFFFFFFFELL)];
            v39 = &v29[-8 * (v32 & 0xFFFFFFFFFFFFFFFELL)];
            if ( (v32 & 0xFFFFFFFFFFFFFFFELL) != v32 )
            {
              v40 = *(_QWORD *)v38;
              v15 = *(char **)v39;
              *(_QWORD *)v38 = *(_QWORD *)v39;
              *(_QWORD *)v39 = v40;
            }
          }
          else
          {
            do
            {
              v71 = *(_QWORD *)v26;
              v72 = *(_QWORD *)v29;
              v26 += 8;
              v29 -= 8;
              *((_QWORD *)v26 - 1) = v72;
              *((_QWORD *)v29 + 1) = v71;
            }
            while ( v29 > v26 );
          }
        }
      }
      v25 = 1;
    }
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 > 3 )
        goto LABEL_26;
      if ( sub_B73CB0((_QWORD *)v7) )
      {
        if ( !(unsigned __int8)sub_CA37C0(
                                 a1,
                                 *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                                 v41,
                                 v42,
                                 v43) )
          goto LABEL_66;
        v94 = v113;
        v95 = 8LL * (unsigned int)v113;
        v15 = (char *)ptr + 8;
        if ( (char *)ptr + 8 != (char *)ptr + v95 )
        {
          memmove(ptr, v15, v95 - 8);
          v94 = v113;
        }
        LODWORD(v113) = v94 - 1;
      }
      if ( (*(_WORD *)a2 & 0x1FF) != 0x5C )
      {
LABEL_26:
        v44 = *(_QWORD *)(a2 + 32);
        if ( (*(_WORD *)v44 & 0x1FF) != 0x66 )
        {
LABEL_49:
          v102 = 0;
          v52 = (unsigned int)v113;
          v53 = 0;
          v100 = 0;
LABEL_50:
          if ( !(unsigned __int8)sub_CA3500(a1, (unsigned __int64 *)ptr, v52, v7) )
            goto LABEL_66;
          if ( v25 )
          {
            v90 = sub_C8D6A0(a1, *(_QWORD *)ptr);
            v91 = v90;
            if ( !BYTE4(v90) )
              v91 = 13;
            v92 = sub_C8D6A0(a1, *((_QWORD *)ptr + 1));
            v93 = 13;
            if ( BYTE4(v92) )
              v93 = v92;
            v104 = a2 | 4;
            if ( !(unsigned __int8)sub_C7D480(a1, v93, v91, &v104) )
              goto LABEL_66;
          }
          goto LABEL_52;
        }
LABEL_75:
        v66 = a2 | 4;
        v104 = v66;
        if ( (unsigned __int8)sub_C7D040(a1, &v104) )
        {
          v70 = *(_QWORD *)(v44 + 16);
          if ( (*(_BYTE *)(v70 + 1) & 6) == 0 )
          {
            v9 = sub_CA37C0(a1, v70, v67, v68, v69);
            goto LABEL_67;
          }
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) )
          {
            v104 = v66;
            v9 = sub_C7D460(a1, &v104);
            goto LABEL_67;
          }
        }
        goto LABEL_66;
      }
LABEL_41:
      v46 = sub_C70940(a2);
      v48 = *(_QWORD *)(a1 + 744);
      if ( v48 && (*(_BYTE *)(v48 + 28) & 0x7D) == 0x24 )
      {
        for ( i = (unsigned __int16 *)v46; ; i = *((unsigned __int16 **)i + 2) )
        {
          v50 = *i;
          for ( LOWORD(v50) = v50 & 0x1FF; (_WORD)v50 == 20; LOWORD(v50) = v50 & 0x1FF )
          {
            i = *((unsigned __int16 **)i + 3);
            v50 = *i;
          }
          v51 = (unsigned int)(v50 + 433);
          LOWORD(v51) = (v50 + 433) & 0x1FF;
          if ( (unsigned __int16)v51 > 9u )
            break;
          if ( ((i[1] >> 3) & 0x7D) != 5 )
            goto LABEL_48;
        }
        if ( (_WORD)v50 == 98 )
        {
          v96 = sub_F44710(*(_QWORD *)(*((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFFF0LL), v15, v50, v51, v47);
          v97 = sub_F3F530(*(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL));
          v7 = sub_B79FD0(v7, v97, 0);
          v53 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)a1 + 40LL))(a1, i);
          if ( !v53 )
            goto LABEL_66;
          v52 = (unsigned int)v113;
          v102 = 0;
          v100 = 0;
          goto LABEL_50;
        }
      }
LABEL_48:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v46) )
        goto LABEL_66;
      goto LABEL_49;
    }
    v44 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v44 & 0x1FF) == 0x66 )
      goto LABEL_75;
LABEL_141:
    v104 = v44 | 2;
    v100 = sub_C9B2B0(a1, &v104, 13, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v44) )
      goto LABEL_66;
    v104 = a2 | 4;
    v102 = sub_C81650(a1, 13, v100, &v104);
    if ( !v102 )
      goto LABEL_66;
    v52 = (unsigned int)v113;
    v53 = 0;
    v7 = 0;
    goto LABEL_50;
  }
  if ( v22 != 92 )
  {
    v44 = *(_QWORD *)(a2 + 32);
    if ( (*(_WORD *)v44 & 0x1FF) == 0x66 )
      goto LABEL_75;
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_CA3500(a1, (unsigned __int64 *)ptr, v21, v7) )
        goto LABEL_66;
      v102 = 0;
      v53 = 0;
      v100 = 0;
LABEL_52:
      if ( v7 )
      {
        v54 = sub_C8D570(a1);
        if ( !v54 )
          goto LABEL_66;
        v55 = *(_QWORD **)(a2 + 32);
        LOBYTE(v56) = 0;
        if ( (*(_WORD *)v55 & 0x1FF) == 0x2E )
          v56 = (*v55 >> 20) & 1LL;
        if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 <= 3
          && !v53
          && ((v57 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, v7),
               (*(_QWORD *)(v57 + 80) & 0x40000LL) != 0)
           || ((*(_QWORD *)(v57 + 80) >> 16) & 8) != 0
           || (unsigned int)sub_B747A0(v57)) )
        {
          v58 = *(_BYTE *)(v54 + 504);
          if ( !(_BYTE)v56 )
          {
            v59 = *(_DWORD *)(a2 + 16);
            v60 = 0;
            for ( j = *(_DWORD *)(v54 + 392) + ((*(_WORD *)a2 & 0x1FF) == 91) - ((v58 & 4) != 0) - ((v58 & 8) != 0);
                  j != v59;
                  v60 += (sub_E05440(13) + 7) & 0xFFFFFFF8 )
            {
              while ( 1 )
              {
                v62 = sub_C8D6A0(a1, *(_QWORD *)(a2 + 8 * (j + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40));
                if ( !BYTE4(v62) )
                  break;
                ++j;
                v60 += (sub_E05440((unsigned int)v62) + 7) & 0xFFFFFFF8;
                if ( v59 == j )
                  goto LABEL_65;
              }
              ++j;
            }
LABEL_65:
            v63 = a2 | 4;
            v104 = a2 | 4;
            if ( !(unsigned __int8)sub_C86AF0((_QWORD *)a1, v54, v60, &v104) )
              goto LABEL_66;
            goto LABEL_112;
          }
        }
        else
        {
          v58 = *(_BYTE *)(v54 + 504);
        }
        v63 = a2 | 4;
        if ( (v58 & 0x40) != 0 )
        {
          v74 = 0;
          v75 = *(_DWORD *)(v54 + 392) + ((*(_WORD *)a2 & 0x1FF) == 91) - ((v58 & 4) != 0) - ((v58 & 8) != 0);
          for ( k = *(_DWORD *)(a2 + 16); v75 != k; v74 += (sub_E05440(13) + 7) & 0xFFFFFFF8 )
          {
            while ( 1 )
            {
              v76 = sub_C8D6A0(a1, *(_QWORD *)(a2 + 8 * (v75 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40));
              if ( !BYTE4(v76) )
                break;
              ++v75;
              v74 += (sub_E05440((unsigned int)v76) + 7) & 0xFFFFFFF8;
              if ( k == v75 )
                goto LABEL_89;
            }
            ++v75;
          }
LABEL_89:
          v104 = a2 | 4;
          if ( !(unsigned __int8)sub_C86960((_QWORD *)a1, v54, v74, &v104) )
            goto LABEL_66;
          goto LABEL_112;
        }
        v104 = a2 | 4;
        if ( !(unsigned __int8)sub_C837F0((_QWORD *)a1, v54, 0, &v104) )
          goto LABEL_66;
        goto LABEL_112;
      }
LABEL_102:
      v80 = *(_DWORD *)(a2 + 16);
      if ( v80 )
      {
        v81 = (unsigned int)(v80 - 1);
        v82 = 0;
        v80 = 0;
        v83 = 8 * v81 + 8;
        do
        {
          v84 = sub_C8D6A0(a1, *(_QWORD *)(v82 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
          v85 = (unsigned int)v84;
          if ( !BYTE4(v84) )
            v85 = 13;
          v82 += 8;
          v80 += (sub_E05440(v85) + 7) & 0xFFFFFFF8;
        }
        while ( v83 != v82 );
      }
      v63 = a2 | 4;
      if ( (*(_WORD *)a2 & 0x1FF) == 0x5C && v102 )
      {
        v104 = a2 | 4;
        if ( !(unsigned __int8)sub_C80B80(a1, 14, v100, &v104) )
          goto LABEL_66;
        v104 = a2 | 4;
        if ( !(unsigned __int8)sub_C7E160(a1, &v104) )
          goto LABEL_66;
      }
      else
      {
        v104 = a2 | 4;
        if ( !(unsigned __int8)sub_C80B80(a1, 13, v100, &v104) )
          goto LABEL_66;
      }
      v104 = a2 | 4;
      if ( !(unsigned __int8)sub_C83C30((_QWORD *)a1, v80, a2, &v104) )
      {
LABEL_66:
        v9 = 0;
        goto LABEL_67;
      }
LABEL_112:
      if ( !*(_BYTE *)(a1 + 584)
        || (v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v98 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v86 + 16) == 13)
        && ((*(_WORD *)(v86 + 18) >> 3) & 0x1FF) == 0x1B3
        || !BYTE4(v99) )
      {
        v9 = 1;
        if ( !v111 )
          goto LABEL_67;
        goto LABEL_117;
      }
      v103 = v63;
      v9 = sub_C7EAD0(a1, v99, &v103);
      if ( (_BYTE)v9 && v111 )
      {
LABEL_117:
        v87 = sub_C97CD0((__int64)&v105, 0);
        v104 = 4;
        v9 = v87;
        sub_C807C0(v106, v110, &v104);
      }
LABEL_67:
      if ( ptr != v114 )
        free(ptr);
      goto LABEL_37;
    }
    v25 = 0;
    goto LABEL_141;
  }
  if ( v7 )
  {
LABEL_40:
    v25 = 0;
    goto LABEL_41;
  }
  v15 = *(char **)(a2 + 32);
  v78 = sub_C8D6A0(a1, (__int64)v15);
  if ( BYTE4(v78) )
  {
    if ( (_DWORD)v78 == 14 )
    {
      v79 = *(_QWORD *)(a2 + 32);
      v104 = v79 | 2;
      v100 = sub_C9B2B0(a1, &v104, 14, 1u, 0, 1, 0);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v79) )
        goto LABEL_66;
      v104 = a2 | 4;
      if ( !(unsigned __int8)sub_C81650(a1, 14, v100, &v104) )
        goto LABEL_66;
      v104 = a2 | 4;
      if ( !(unsigned __int8)sub_C80B80(a1, 14, v100, &v104) )
        goto LABEL_66;
      v104 = a2 | 4;
      if ( !(unsigned __int8)sub_C7E150(a1, &v104) )
        goto LABEL_66;
      v102 = sub_CA3500(a1, (unsigned __int64 *)ptr, (unsigned int)v113, 0);
      if ( !v102 )
        goto LABEL_66;
      goto LABEL_102;
    }
    goto LABEL_40;
  }
  return sub_CA46F0();
}

