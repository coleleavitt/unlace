__int64 __fastcall sub_AF7CC0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  unsigned int v21; // edx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  int v24; // eax
  __m128i v25; // xmm1
  __m128i *v26; // r12
  __int32 v27; // r8d
  __int64 v28; // r9
  __m128i *v29; // r13
  int v30; // esi
  __int64 v31; // r8
  __m128i *v32; // r10
  __m128i *v33; // rax
  __m128i *v34; // rdi
  __int64 v35; // rdx
  unsigned int *v36; // r12
  unsigned int v37; // r13d
  unsigned int v38; // r14d
  __int64 v39; // rax
  _DWORD *v40; // rbp
  _DWORD *v41; // r12
  __int64 v42; // rbx
  unsigned int v43; // esi
  _QWORD *v44; // r8
  unsigned int v45; // edx
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // r12
  __m128i *v52; // rbx
  __int32 v53; // r8d
  __int64 v54; // r9
  __m128i *v55; // r12
  __int64 v56; // r8
  __m128i *v57; // rsi
  __m128i *v58; // rax
  __m128i *v59; // rcx
  int v60; // edx
  __int32 v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // ebx
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  __m128i *v69; // rax
  __int32 v70; // r10d
  __int64 v71; // rcx
  __m128i *v72; // rdx
  const __m128i *v73; // r13
  __m128i *v74; // r11
  __int64 v75; // rax
  __m128i *v76; // rdx
  __m128i *v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rax
  unsigned int v80; // r12d
  __int64 v81; // rax
  __int32 v82; // r10d
  __m128i *v83; // rdx
  __m128i *v84; // rax
  const __m128i *v85; // r14
  __m128i *v86; // r11
  __int64 v87; // rdx
  __m128i *v88; // rsi
  __m128i *v89; // rdx
  _QWORD *v90; // rax
  __m128i v91; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v92; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v93; // [rsp+20h] [rbp-98h] BYREF
  __int64 v94; // [rsp+30h] [rbp-88h]
  __int64 v95; // [rsp+38h] [rbp-80h]
  __int32 v96; // [rsp+44h] [rbp-74h]
  __m128i *v97; // [rsp+48h] [rbp-70h]
  char *v98; // [rsp+58h] [rbp-60h] BYREF
  __int64 v99[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(unsigned int *)(a1 + 104);
  v8 = *(__int64 **)(a1 + 96);
  v9 = *(_DWORD *)(v6 + 12);
  v10 = v7 - 1;
  v7 *= 16;
  v11 = (__int64 *)((char *)v8 + v7);
  v12 = 16LL * (v9 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v9 && v6 == v15 )
          goto LABEL_19;
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; v8 += 2 )
  {
    v62 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v62 + 12) == v9 && v6 == v62 )
      {
        i = v8;
LABEL_19:
        v19 = i[1];
        goto LABEL_20;
      }
    }
    else if ( !v62 )
    {
      break;
    }
  }
LABEL_8:
  v16 = *(_QWORD *)(a1 + 24);
  v17 = sub_186B270(0x228u);
  v18 = *(_QWORD *)(a2 + 16);
  v19 = v17;
  v20 = sub_16649E0(a1 + 56, v18);
  *(_QWORD *)(v19 + 32) = v18;
  *(_QWORD *)v19 = v16;
  *(_QWORD *)(v19 + 8) = 0;
  *(_QWORD *)(v19 + 16) = v16;
  *(_DWORD *)(v19 + 24) = v20;
  *(_QWORD *)(v19 + 40) = 0;
  *(_DWORD *)(v19 + 48) = 0;
  *(_QWORD *)(v19 + 56) = 0;
  sub_AFC790(v19 + 64);
  *(_OWORD *)(v19 + 432) = 0;
  v91 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v19 + 432), (__m128i)(unsigned __int64)(v19 + 432));
  sub_180C0A0(v19 + 448);
  v21 = *(_DWORD *)(a1 + 104);
  v22 = _mm_load_si128(&v91);
  *(_QWORD *)(v19 + 528) = off_1C4F498;
  v23 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v19 + 536) = v19 + 488;
  v24 = *(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 112);
  *(__m128i *)(v19 + 488) = v22;
  *(_QWORD *)(v19 + 520) = 0;
  *(_QWORD *)(v19 + 544) = 0;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v19);
  *(_OWORD *)(v19 + 504) = 0;
  if ( 3 * v21 < 4 * v24 )
  {
    v94 = v23;
    v92.m128i_i32[0] = 2 * v21;
    v93 = v25;
    v91.m128i_i64[0] = 32LL * v21;
    v81 = sub_186B270(v91.m128i_u64[0]);
    v82 = v92.m128i_i32[0];
    v28 = v91.m128i_i64[0];
    v26 = (__m128i *)v81;
    v83 = (__m128i *)v81;
    v23 = v94;
    v25 = _mm_load_si128(&v93);
    v84 = (__m128i *)(v91.m128i_i64[0] + v81);
    if ( v92.m128i_i32[0] )
    {
      if ( (((_BYTE)v84 - (_BYTE)v26) & 0x10) == 0 || (v83 = v26 + 1, *v26 = 0, &v26[1] != v84) )
      {
        do
        {
          *v83 = 0;
          v83 += 2;
          v83[-1] = 0;
        }
        while ( v83 != v84 );
      }
    }
    v85 = *(const __m128i **)(a1 + 96);
    v27 = v82 - 1;
    v29 = v84;
    v86 = (__m128i *)&v85[*(unsigned int *)(a1 + 104)];
    if ( v85 != v86 )
    {
      do
      {
        if ( v85->m128i_i64[0] > 1uLL )
        {
          v87 = 16LL * (*(_DWORD *)(v85->m128i_i64[0] + 12) & (unsigned int)v27);
          v88 = &v26[(unsigned __int64)v87 / 0x10];
          if ( v28 == v87 )
          {
LABEL_109:
            if ( v26 == v88 )
            {
LABEL_122:
              v97 = v84;
              v96 = v82;
              v95 = v28;
              v93.m128i_i32[0] = v82 - 1;
              v94 = (__int64)v86;
              v91.m128i_i64[0] = v23;
              v92 = v25;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v89 = v26;
            while ( v89->m128i_i64[0] )
            {
              if ( v88 == ++v89 )
                goto LABEL_122;
            }
          }
          else
          {
            v89 = &v26[(unsigned __int64)v87 / 0x10];
            while ( v89->m128i_i64[0] )
            {
              if ( v84 == ++v89 )
                goto LABEL_109;
            }
          }
          *v89 = _mm_loadu_si128(v85);
        }
        ++v85;
      }
      while ( v86 != v85 );
      v86 = *(__m128i **)(a1 + 96);
    }
    if ( v86 )
    {
      LODWORD(v95) = v82;
      v93.m128i_i64[0] = v28;
      LODWORD(v94) = v82 - 1;
      v91.m128i_i64[0] = v23;
      v92 = v25;
      sub_186B220(v86);
      v82 = v95;
      v28 = v93.m128i_i64[0];
      v27 = v94;
      v25 = _mm_load_si128(&v92);
      v23 = v91.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 96) = v26;
    *(_DWORD *)(a1 + 104) = v82;
    *(_DWORD *)(a1 + 112) = 0;
  }
  else
  {
    v26 = *(__m128i **)(a1 + 96);
    v27 = v21 - 1;
    v28 = 16LL * v21;
    v29 = (__m128i *)((char *)v26 + v28);
  }
  v30 = *(_DWORD *)(v23 + 12);
  v31 = 16LL * (v30 & (unsigned int)v27);
  v32 = &v26[(unsigned __int64)v31 / 0x10];
  if ( v31 != v28 )
  {
    v33 = &v26[(unsigned __int64)v31 / 0x10];
    v34 = nullptr;
    while ( 1 )
    {
      v35 = v33->m128i_i64[0];
      if ( v33->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v35 + 12) == v30 && v23 == v35 )
        {
          *v33 = v25;
          goto LABEL_90;
        }
      }
      else
      {
        if ( !v35 )
        {
          if ( v34 )
            goto LABEL_119;
          v34 = v33;
          goto LABEL_120;
        }
        v34 = v33;
      }
      if ( ++v33 == v29 )
        goto LABEL_53;
    }
  }
  v34 = nullptr;
  while ( 1 )
  {
LABEL_53:
    if ( v32 == v26 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v63 = v26->m128i_i64[0];
    if ( v26->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v63 + 12) == v30 && v23 == v63 )
    {
      *v26 = v25;
      goto LABEL_90;
    }
LABEL_52:
    ++v26;
  }
  if ( v63 )
  {
    v34 = v26;
    goto LABEL_52;
  }
  if ( v34 )
LABEL_119:
    --*(_DWORD *)(a1 + 112);
  else
    v34 = v26;
LABEL_120:
  *v34 = v25;
  ++*(_DWORD *)(a1 + 108);
LABEL_90:
  v79 = *(_QWORD *)(a1 + 80);
  if ( v79 )
  {
    v80 = 0;
    do
    {
      if ( v80 >= *(_DWORD *)(v79 - 4) )
        break;
      ++v80;
      sub_AF1C60(v19);
      v79 = *(_QWORD *)(a1 + 80);
    }
    while ( v79 );
  }
LABEL_20:
  v36 = *(unsigned int **)(a2 + 40);
  v91.m128i_i32[0] = sub_AEFC30(a1, *(unsigned int **)(a2 + 32));
  v37 = sub_AEFC30(a1, v36);
  v38 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
  sub_8F1CE0(*(_QWORD *)(a1 + 16), v38, *(_DWORD *)(a1 + 8));
  v39 = sub_186B270(0x28u);
  *(_DWORD *)v39 = v38;
  v40 = (_DWORD *)v39;
  *(_QWORD *)(v39 + 8) = v19;
  *(_BYTE *)(v39 + 16) = 1;
  LODWORD(v39) = v91.m128i_i32[0];
  v40[6] = v37;
  v40[5] = v39;
  sub_AF7690((_QWORD *)v19, v39);
  sub_AF7690((_QWORD *)v19, v37);
  v92.m128i_i32[0] = 2 * v38;
  v41 = (_DWORD *)sub_186B270(0x10u);
  v42 = v19 + 64;
  v43 = v91.m128i_i32[0];
  v41[2] = 2 * v38;
  *(_QWORD *)v41 = 0x100000002LL;
  v98 = (char *)(v41 + 2);
  v92.m128i_i64[0] = (__int64)&v98;
  v40[7] = sub_AF1F90(v42, v43, v37, 0, &v98);
  v44 = (_QWORD *)v92.m128i_i64[0];
  v45 = v91.m128i_i32[0];
  v41[2] = 2 * v38 + 1;
  v40[8] = sub_AF1F90(v42, v37, v45, -1, v44);
  sub_186B220(v41);
  v46 = *(_QWORD **)(a1 + 72);
  if ( v46 )
  {
    v47 = *((_DWORD *)v46 - 1);
    if ( v47 == *((_DWORD *)v46 - 2) )
    {
      v64 = (3 * v47 + 1) >> 1;
      v65 = 8 * v64 + 8;
      if ( 8 * v47 + 8 >= (unsigned int)v65 || v47 >= v64 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v99, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v99);
        sub_233E40((__int64)v99);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (unsigned int *)sub_186B300(v46 - 1, v65);
      v67 = v66[1];
      v46 = v66 + 2;
      *v66 = v64;
      *(_QWORD *)(a1 + 72) = v66 + 2;
      LODWORD(v66) = v67;
      v50 = &v46[v67];
      v49 = (_DWORD)v66 + 1;
    }
    else
    {
      v48 = v47;
      v49 = v47 + 1;
      v50 = &v46[v48];
    }
  }
  else
  {
    v90 = (_QWORD *)sub_186B270(0x18u);
    v46 = v90 + 1;
    *v90 = 2;
    v49 = 1;
    *(_QWORD *)(a1 + 72) = v46;
    v50 = v46;
  }
  *v50 = v40;
  *((_DWORD *)v46 - 1) = v49;
  v51 = *(unsigned int *)(a1 + 128);
  if ( 3 * (int)v51 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    LODWORD(v94) = 2 * v51;
    v92.m128i_i64[0] = 24LL * (unsigned int)(2 * v51);
    v91.m128i_i64[0] = v92.m128i_i64[0];
    v69 = (__m128i *)sub_186B270(v92.m128i_u64[0]);
    v70 = v94;
    v71 = v91.m128i_i64[0];
    v54 = v92.m128i_i64[0];
    v52 = v69;
    if ( (_DWORD)v94 )
    {
      v72 = &v69[3 * (v51 & 0x7FFFFFFF)];
      do
      {
        v69->m128i_i64[0] = 0;
        v69 += 3;
        v69[-2].m128i_i64[1] = 0;
      }
      while ( v69 != v72 );
    }
    v73 = *(const __m128i **)(a1 + 120);
    v53 = v70 - 1;
    v55 = (__m128i *)((char *)v52 + v71);
    v74 = (__m128i *)((char *)v73 + 24 * *(unsigned int *)(a1 + 128));
    if ( v73 != v74 )
    {
      do
      {
        while ( v73->m128i_i32[1] != 2 )
        {
          v73 = (const __m128i *)((char *)v73 + 24);
          if ( v74 == v73 )
            goto LABEL_76;
        }
        v75 = 24LL * (v73->m128i_i32[0] & (unsigned int)v53);
        v76 = (__m128i *)((char *)v52 + v75);
        if ( v71 == v75 )
        {
LABEL_81:
          if ( v52 == v76 )
          {
LABEL_88:
            v95 = v71;
            v93.m128i_i32[0] = v70;
            v94 = v54;
            v92.m128i_i32[0] = v70 - 1;
            v91.m128i_i64[0] = (__int64)v74;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v77 = v52;
          while ( v77->m128i_i32[1] )
          {
            v77 = (__m128i *)((char *)v77 + 24);
            if ( v76 == v77 )
              goto LABEL_88;
          }
        }
        else
        {
          v77 = (__m128i *)((char *)v52 + v75);
          while ( v77->m128i_i32[1] )
          {
            v77 = (__m128i *)((char *)v77 + 24);
            if ( v55 == v77 )
              goto LABEL_81;
          }
        }
        v78 = _mm_loadu_si128(v73);
        v73 = (const __m128i *)((char *)v73 + 24);
        *v77 = v78;
        v77[1].m128i_i64[0] = v73[-1].m128i_i64[1];
      }
      while ( v74 != v73 );
LABEL_76:
      v74 = *(__m128i **)(a1 + 120);
    }
    if ( v74 )
    {
      LODWORD(v94) = v70;
      v92.m128i_i64[0] = v54;
      v91.m128i_i32[0] = v70 - 1;
      sub_186B220(v74);
      v70 = v94;
      v54 = v92.m128i_i64[0];
      v53 = v91.m128i_i32[0];
    }
    *(_QWORD *)(a1 + 120) = v52;
    *(_DWORD *)(a1 + 128) = v70;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v52 = *(__m128i **)(a1 + 120);
    v53 = v51 - 1;
    v54 = 24 * v51;
    v55 = (__m128i *)((char *)v52 + 24 * v51);
  }
  v56 = v38 & v53;
  v57 = (__m128i *)((char *)v52 + 24 * v56);
  if ( 24 * v56 != v54 )
  {
    v58 = (__m128i *)((char *)v52 + 24 * v56);
    v59 = nullptr;
    while ( 1 )
    {
      v60 = v58->m128i_i32[1];
      if ( v60 == 2 )
      {
        if ( v38 == v58->m128i_i32[0] && v38 == v58->m128i_i32[2] )
        {
          v58->m128i_i32[2] = v38;
          v58[1].m128i_i64[0] = (__int64)v40;
          v58->m128i_i32[1] = 2;
          return 1;
        }
      }
      else
      {
        if ( !v60 )
        {
          if ( v59 )
            goto LABEL_61;
          v59 = v58;
          goto LABEL_62;
        }
        v59 = v58;
      }
      v58 = (__m128i *)((char *)v58 + 24);
      if ( v58 == v55 )
        goto LABEL_37;
    }
  }
  v59 = nullptr;
LABEL_37:
  while ( 2 )
  {
    if ( v57 == v52 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v61 = v52->m128i_i32[1];
    if ( v61 == 2 )
    {
      if ( v38 == v52->m128i_i32[0] && v38 == v52->m128i_i32[2] )
      {
        v52->m128i_i32[2] = v38;
        v52[1].m128i_i64[0] = (__int64)v40;
        v52->m128i_i32[1] = 2;
        return 1;
      }
      goto LABEL_36;
    }
    if ( v61 )
    {
      v59 = v52;
LABEL_36:
      v52 = (__m128i *)((char *)v52 + 24);
      continue;
    }
    break;
  }
  if ( v59 )
LABEL_61:
    --*(_DWORD *)(a1 + 136);
  else
    v59 = v52;
LABEL_62:
  v59->m128i_i32[2] = v38;
  v59[1].m128i_i64[0] = (__int64)v40;
  v59->m128i_i32[1] = 2;
  v59->m128i_i32[0] = v38;
  ++*(_DWORD *)(a1 + 132);
  return 1;
}

