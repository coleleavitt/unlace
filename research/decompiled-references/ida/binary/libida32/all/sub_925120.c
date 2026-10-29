char *__fastcall sub_925120(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // r15
  unsigned int v9; // r10d
  __int64 v10; // rsi
  __m128i *v11; // rax
  int v12; // r8d
  bool v13; // cc
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // ecx
  int v17; // edx
  unsigned __int64 v18; // r12
  int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // edx
  bool v23; // r10
  unsigned __int64 v24; // rdx
  _DWORD *v25; // rcx
  __int64 v26; // r8
  __int8 *v29; // r8
  char *v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbp
  __int64 v35; // r8
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r14
  int v38; // ebp
  unsigned int v39; // edx
  unsigned int v40; // edx
  int v41; // r15d
  unsigned __int64 v42; // rcx
  _DWORD *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  __m128i *v46; // rax
  __int64 v47; // r11
  __int64 v48; // rdi
  __int8 *v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned int v54; // edx
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rbp
  const __m128i *v57; // r15
  unsigned __int64 v58; // r9
  unsigned __int64 v59; // r12
  bool v60; // r11
  __m128i *v61; // rdi
  unsigned __int64 v62; // rbp
  const __m128i *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r11
  unsigned int v68; // ebp
  unsigned int v69; // eax
  unsigned int v71; // edx
  signed __int64 v72; // rax
  __m128i *v73; // rdi
  signed __int64 v74; // r9
  signed __int64 v75; // r10
  unsigned __int64 v76; // r9
  __int64 v77; // rax
  unsigned int v78; // ebx
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  __m128i *v82; // r8
  __m128i *v83; // rax
  char *v84; // rdx
  const __m128i *v85; // r15
  __m128i *v86; // rax
  __m128i v87; // xmm0
  _QWORD *v88; // rsi
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int v95; // ecx
  __m128i *v96; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v98; // [rsp+18h] [rbp-C0h]
  unsigned int v99; // [rsp+20h] [rbp-B8h]
  int v100; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v101; // [rsp+28h] [rbp-B0h]
  int v102; // [rsp+28h] [rbp-B0h]
  __int64 v103; // [rsp+38h] [rbp-A0h]
  const __m128i *v104; // [rsp+40h] [rbp-98h]
  unsigned __int64 v105; // [rsp+58h] [rbp-80h]
  unsigned __int64 v106; // [rsp+60h] [rbp-78h]
  unsigned int v107; // [rsp+68h] [rbp-70h]
  unsigned int v108; // [rsp+6Ch] [rbp-6Ch]
  __m128i *v109; // [rsp+70h] [rbp-68h]
  __m128i *v110; // [rsp+78h] [rbp-60h]
  unsigned int v112; // [rsp+88h] [rbp-50h]
  bool v113; // [rsp+8Fh] [rbp-49h]
  _QWORD v114[9]; // [rsp+90h] [rbp-48h] BYREF

  v6 = a4;
  v9 = a3[1];
  v10 = *(unsigned int *)(a1 + 24);
  v114[1] = __readfsqword(0x28u);
  v11 = (__m128i *)(a4 + a5);
  v12 = *(_DWORD *)(a1 + 40);
  v107 = v9;
  v96 = v11;
  v13 = *(_DWORD *)(a1 + 272) <= 6u;
  v98 = (unsigned __int64)&v11[-1].m128i_u64[1];
  v14 = *(_QWORD *)(a1 + 8);
  v112 = 0;
  v15 = v14 + v10;
  v16 = 6;
  if ( v13 )
    v16 = *(_DWORD *)(a1 + 272);
  v17 = 4;
  v106 = v14 + v10;
  if ( v16 >= 4 )
    v17 = v16;
  v100 = v17;
  v99 = *a3;
  v18 = v6 + ((_DWORD)v6 == v15);
  v19 = v6 + ((_DWORD)v6 == v15) - v14;
  v20 = 1 << *(_DWORD *)(a1 + 256);
  v21 = v19 - v10;
  if ( v20 < v19 - (int)v10 )
    LODWORD(v10) = v19 - v20;
  v22 = v19 - v10;
  if ( !v12 )
    v21 = v22;
  if ( v9 > v21 )
  {
    v112 = v9;
    v107 = 0;
  }
  v23 = v99 != 0;
  if ( v99 <= v21 )
  {
    v113 = 0;
    v108 = 0;
  }
  else
  {
    v108 = *a3;
    v99 = 0;
    v113 = v23;
    v23 = 0;
  }
  *(_DWORD *)(a1 + 300) = 0;
  if ( v98 <= v18 )
    goto LABEL_80;
  v105 = (unsigned __int64)&v96[-1].m128i_u64[1] + 1;
  v109 = (__m128i *)((char *)v96 - 3);
  v110 = (__m128i *)((char *)v96 - 1);
  do
  {
    if ( *(_DWORD *)(v18 - v99 + 1) != *(_DWORD *)(v18 + 1) || !v99 )
    {
      v30 = nullptr;
      goto LABEL_21;
    }
    v24 = v18 + 5;
    v25 = (_DWORD *)(v18 - v99 + 5);
    if ( v18 + 5 >= v105 )
    {
      v82 = (__m128i *)(v18 + 5);
      goto LABEL_105;
    }
    v26 = *(_QWORD *)(v18 + 5);
    if ( *(_QWORD *)v25 == v26 )
    {
      v82 = (__m128i *)(v18 + 13);
      v88 = (_QWORD *)(v18 - v99 + 13);
      if ( v105 <= v18 + 13 )
        goto LABEL_134;
      v89 = *(_QWORD *)(v18 - v99 + 13);
      v90 = *(_QWORD *)(v18 + 13);
      if ( v90 == v89 )
      {
        while ( 1 )
        {
          v82 = (__m128i *)((char *)v82 + 8);
          ++v88;
          if ( v105 <= (unsigned __int64)v82 )
            break;
          v90 = *v88;
          v89 = v82->m128i_i64[0];
          if ( *v88 != v82->m128i_i64[0] )
            goto LABEL_120;
        }
LABEL_134:
        v25 = v88;
LABEL_105:
        if ( v82 < v109 && *v25 == v82->m128i_i32[0] )
        {
          v82 = (__m128i *)((char *)v82 + 4);
          ++v25;
        }
        if ( v82 < v110 && *(_WORD *)v25 == v82->m128i_i16[0] )
        {
          v82 = (__m128i *)((char *)v82 + 2);
          v25 = (_DWORD *)((char *)v25 + 2);
        }
        if ( v96 > v82 )
          v82 = (__m128i *)((char *)v82 + (*(_BYTE *)v25 == v82->m128i_i8[0]));
        v29 = &v82->m128i_i8[-v24];
        goto LABEL_20;
      }
LABEL_120:
      _RAX = v89 ^ v90;
      __asm { tzcnt   rax, rax }
      v29 = &v82->m128i_i8[((unsigned int)_RAX >> 3) - v24];
    }
    else
    {
      _RAX = v26 ^ *(_QWORD *)v25;
      __asm { tzcnt   r8, rax }
      v29 = (__int8 *)((unsigned int)_R8 >> 3);
    }
LABEL_20:
    v30 = v29 + 4;
LABEL_21:
    v101 = (unsigned __int64)v30;
    v114[0] = 999999999;
    if ( v100 == 5 )
    {
      v80 = sub_907F40(a1, (_QWORD *)v18, v96, v114);
      v32 = v101;
      v33 = v80;
    }
    else
    {
      if ( v100 == 6 )
        v31 = sub_908250(a1, (_QWORD *)v18, v96, v114);
      else
        v31 = sub_907C50(a1, (_DWORD *)v18, (unsigned __int64)v96, v114);
      v32 = v101;
      v33 = v31;
    }
    if ( v32 < v33 )
    {
      v35 = v114[0];
      v34 = v18;
    }
    else
    {
      v33 = v32;
      v34 = v18 + 1;
      v35 = 1;
    }
    if ( v33 <= 3 )
    {
      v23 = v99 != 0;
      v81 = ((v18 - v6) >> 8) + 1;
      v18 += v81;
      *(_DWORD *)(a1 + 300) = v81 > 8;
      continue;
    }
    v104 = (const __m128i *)v6;
    v36 = v35;
    v103 = a2;
    v37 = v34;
    do
    {
      ++v18;
      v38 = v33;
      if ( !v36 )
      {
        v41 = 32;
        v102 = 0;
        goto LABEL_50;
      }
      _BitScanReverse(&v39, v36);
      v102 = v36;
      v40 = v39 ^ 0x1F;
      v41 = v40;
      if ( *(_DWORD *)(v18 - v99) != *(_DWORD *)v18 || !v99 )
        goto LABEL_50;
      v42 = v18 + 4;
      v43 = (_DWORD *)(4LL - v99 + v18);
      if ( v105 <= v18 + 4 )
      {
        v46 = (__m128i *)(v18 + 4);
LABEL_38:
        if ( v46 < v109 && *v43 == v46->m128i_i32[0] )
        {
          v46 = (__m128i *)((char *)v46 + 4);
          ++v43;
        }
        if ( v46 < v110 && *(_WORD *)v43 == v46->m128i_i16[0] )
        {
          v46 = (__m128i *)((char *)v46 + 2);
          v43 = (_DWORD *)((char *)v43 + 2);
        }
        if ( v96 > v46 )
          v46 = (__m128i *)((char *)v46 + (*(_BYTE *)v43 == v46->m128i_i8[0]));
        v51 = &v46->m128i_i8[-v42];
        goto LABEL_47;
      }
      v44 = *(_QWORD *)(v18 - v99 + 4);
      v45 = *(_QWORD *)(v18 + 4);
      if ( v44 == v45 )
      {
        v46 = (__m128i *)(v18 + 12);
        v43 = (_DWORD *)(v18 - v99 + 12);
        if ( v105 <= v18 + 12 )
          goto LABEL_38;
        v47 = *(_QWORD *)(v18 - v99 + 12);
        v48 = *(_QWORD *)(v18 + 12);
        if ( v48 == v47 )
        {
          do
          {
            v46 = (__m128i *)((char *)v46 + 8);
            v43 += 2;
            if ( v105 <= (unsigned __int64)v46 )
              goto LABEL_38;
            v48 = *(_QWORD *)v43;
            v47 = v46->m128i_i64[0];
          }
          while ( *(_QWORD *)v43 == v46->m128i_i64[0] );
        }
        _RDI = v47 ^ v48;
        __asm { tzcnt   rsi, rdi }
        v51 = &v46->m128i_i8[((unsigned int)_RSI >> 3) - v42];
      }
      else
      {
        _RAX = v45 ^ v44;
        __asm { tzcnt   rax, rax }
        v51 = (__int8 *)((unsigned int)_RAX >> 3);
      }
LABEL_47:
      v52 = (unsigned __int64)(v51 + 4);
      if ( 3 * (int)v52 > (int)(3 * v33 - 30 + v40) && v52 > 3 )
      {
        v102 = 1;
        v38 = v52;
        v37 = v18;
        v33 = v52;
        v41 = 31;
        v36 = 1;
      }
LABEL_50:
      v114[0] = 999999999;
      if ( v100 == 5 )
      {
        v53 = sub_907F40(a1, (_QWORD *)v18, v96, v114);
      }
      else if ( v100 == 6 )
      {
        v53 = sub_908250(a1, (_QWORD *)v18, v96, v114);
      }
      else
      {
        v53 = sub_907C50(a1, (_DWORD *)v18, (unsigned __int64)v96, v114);
      }
      _BitScanReverse(&v54, v114[0]);
      if ( (int)((v54 ^ 0x1F) + 4 * v53 - 31) <= v41 + 4 * v38 - 27 || v53 <= 3 )
      {
        v55 = v36;
        v56 = v37;
        v57 = v104;
        a2 = v103;
        if ( v36 <= 3 )
          goto LABEL_67;
        goto LABEL_57;
      }
      v36 = v114[0];
      v33 = v53;
      v37 = v18;
    }
    while ( v98 > v18 );
    v55 = v114[0];
    v56 = v18;
    a2 = v103;
    v57 = v104;
    v102 = v114[0];
    if ( v114[0] <= 3u )
    {
LABEL_67:
      v58 = v56;
      v59 = v33;
      v23 = v99 != 0;
      v60 = v107 != 0;
      goto LABEL_68;
    }
LABEL_57:
    if ( v106 < v56 + 3 - v55 && v56 > (unsigned __int64)v57 && *(_BYTE *)(v56 + 2 - v55) == *(_BYTE *)(v56 - 1) )
    {
      v58 = v56;
      do
      {
        --v58;
        v59 = v56 + v33 - v58;
      }
      while ( v106 < 3 - v55 + v58 && v58 > (unsigned __int64)v57 && *(_BYTE *)(v58 - 1) == *(_BYTE *)(v58 + 2 - v55) );
    }
    else
    {
      v59 = v33;
      v58 = v56;
    }
    v60 = v99 != 0;
    v107 = v99;
    v23 = v102 != 3;
    v99 = v102 - 3;
LABEL_68:
    v61 = *(__m128i **)(a2 + 24);
    v62 = v58 - (_QWORD)v57;
    v63 = v96 - 2;
    if ( v58 > (unsigned __int64)&v96[-2] )
    {
      sub_9079D0(v61, v57, v58, v96 - 2);
LABEL_97:
      *(_QWORD *)(a2 + 24) += v62;
      v64 = *(_QWORD *)(a2 + 8);
      if ( v62 > 0xFFFF )
      {
        v79 = v64 - *(_QWORD *)a2;
        *(_DWORD *)(a2 + 72) = 1;
        *(_DWORD *)(a2 + 76) = v79 >> 3;
      }
      goto LABEL_71;
    }
    *v61 = _mm_loadu_si128(v57);
    if ( v62 > 0x10 )
    {
      v83 = *(__m128i **)(a2 + 24);
      v83[1] = _mm_loadu_si128(v57 + 1);
      if ( (__int64)(v62 - 16) > 16 )
      {
        v84 = &v83->m128i_i8[v62];
        v85 = v57 + 2;
        v86 = v83 + 2;
        do
        {
          v87 = _mm_loadu_si128(v85);
          v86 += 2;
          v85 += 2;
          v86[-2] = v87;
          v86[-1] = _mm_loadu_si128(v85 - 1);
        }
        while ( v84 > (char *)v86 );
      }
      goto LABEL_97;
    }
    *(_QWORD *)(a2 + 24) += v62;
    v64 = *(_QWORD *)(a2 + 8);
LABEL_71:
    *(_WORD *)(v64 + 4) = v62;
    **(_DWORD **)(a2 + 8) = v102;
    v65 = *(_QWORD *)(a2 + 8);
    if ( v59 - 3 > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v65 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v65 + 6) = v59 - 3;
    v18 = v58 + v59;
    *(_QWORD *)(a2 + 8) += 8LL;
    if ( *(_DWORD *)(a1 + 300) )
      *(_DWORD *)(a1 + 300) = 0;
    if ( v98 >= v18 && v60 && (v66 = v107, v67 = 4, v68 = v99, *(_DWORD *)v18 == *(_DWORD *)(v18 - v107)) )
    {
      while ( 1 )
      {
        v72 = sub_907A60((_QWORD *)(v18 + 4), (_QWORD *)(v18 + v67 - v66), (unsigned __int64)v96);
        v73 = *(__m128i **)(a2 + 24);
        v74 = v72;
        v75 = v72 + 4;
        if ( (unsigned __int64)v63 >= v18 )
          *v73 = _mm_loadu_si128((const __m128i *)v18);
        else
          sub_9079D0(v73, (const __m128i *)v18, v18, v63);
        v76 = v74 + 1;
        *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
        **(_DWORD **)(a2 + 8) = 1;
        v77 = *(_QWORD *)(a2 + 8);
        if ( v76 > 0xFFFF )
        {
          *(_DWORD *)(a2 + 72) = 2;
          *(_DWORD *)(a2 + 76) = (v77 - *(_QWORD *)a2) >> 3;
        }
        v18 += v75;
        *(_WORD *)(v77 + 6) = v76;
        *(_QWORD *)(a2 + 8) += 8LL;
        v23 = v107 != 0;
        if ( v98 < v18 || !v68 )
          break;
        v66 = v68;
        if ( *(_DWORD *)(v18 - v68) != *(_DWORD *)v18 )
        {
          v78 = v107;
          v6 = v18;
          v107 = v68;
          v99 = v78;
          goto LABEL_79;
        }
        v71 = v107;
        v107 = v68;
        v68 = v71;
      }
      v95 = v107;
      v6 = v18;
      v107 = v68;
      v99 = v95;
    }
    else
    {
      v6 = v18;
    }
LABEL_79:
    ;
  }
  while ( v98 > v18 );
LABEL_80:
  if ( !v113 || !v23 )
  {
    if ( !v99 )
      v99 = v108;
    v108 = v112;
  }
  *a3 = v99;
  v69 = v107;
  if ( !v107 )
    v69 = v108;
  a3[1] = v69;
  return (char *)v96 - v6;
}

