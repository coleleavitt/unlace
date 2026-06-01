__int64 __fastcall sub_7A2290(unsigned int *a1, _QWORD *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rsi
  int v16; // eax
  __int64 *v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  size_t v24; // rsi
  _DWORD *v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // rax
  char *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rbx
  __m128i *v33; // r11
  __int64 v34; // rcx
  __m128i *v35; // rdi
  __int64 v36; // r15
  unsigned __int64 v37; // rdx
  __m128i *v38; // rdi
  __m128i *v39; // r11
  const __m128i *v40; // rsi
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  __int8 v43; // r13
  __m128i v44; // xmm0
  unsigned __int64 v45; // r9
  __int64 i; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rcx
  __m128i *v50; // rdx
  __int8 v51; // di
  __m128i v52; // xmm0
  __int64 v53; // r10
  __int8 v54; // cl
  __int64 v55; // r10
  __m128i *v56; // r10
  __int64 v57; // rax
  __int64 v58; // r15
  _QWORD *v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rsi
  int v62; // eax
  __int64 *v63; // rsi
  char *v64; // r15
  __int64 v65; // rax
  int v66; // r8d
  int v67; // r9d
  unsigned __int64 v68; // rsi
  __m128i *v69; // r10
  __int8 v70; // r9
  __m128i v71; // xmm0
  unsigned __int64 v72; // rcx
  __m128i *v73; // rdx
  __int64 v74; // r10
  __int8 v75; // cl
  __int64 v76; // r10
  __m128i *v77; // r10
  unsigned int v78; // r8d
  size_t v79; // rsi
  _DWORD *v80; // rax
  __int64 v81; // rsi
  __int64 v82; // r10
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r10
  int v86; // edx
  __int64 v87; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rax
  int v94; // [rsp+0h] [rbp-B8h]
  int v95[2]; // [rsp+8h] [rbp-B0h]
  int v96[2]; // [rsp+8h] [rbp-B0h]
  int v97; // [rsp+10h] [rbp-A8h]
  int v98[2]; // [rsp+10h] [rbp-A8h]
  int v99; // [rsp+18h] [rbp-A0h]
  int v100[2]; // [rsp+18h] [rbp-A0h]
  int v101; // [rsp+18h] [rbp-A0h]
  __m128i *v102; // [rsp+20h] [rbp-98h]
  int v103; // [rsp+20h] [rbp-98h]
  void *v104; // [rsp+28h] [rbp-90h]
  __m128i *v105; // [rsp+30h] [rbp-88h]
  int v106; // [rsp+38h] [rbp-80h]
  unsigned int v107; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v108; // [rsp+3Ch] [rbp-7Ch]
  __int64 v109; // [rsp+40h] [rbp-78h]
  char *v110; // [rsp+48h] [rbp-70h]
  int v111[2]; // [rsp+58h] [rbp-60h] BYREF
  int v112[2]; // [rsp+60h] [rbp-58h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v6 == sub_79EFD0 )
    v7 = a2[18];
  else
    v7 = v6((__int64)a2);
  *(_QWORD *)v95 = v7;
  v8 = (_QWORD *)a2[1041];
  v104 = *(void **)(v7 + 848);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a2[1040];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_10;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_10:
    v8 = (_QWORD *)a2[1041];
    if ( v8 )
LABEL_11:
      *((_DWORD *)v8 - 1) = 0;
  }
  v99 = 0;
  v97 = 0;
  if ( a1[6] < a1[7] )
  {
    *(_QWORD *)v111 = *(_QWORD *)(*(_QWORD *)v95 + 840LL);
    sub_180C5A0(v112, "comm");
    v92 = sub_15E3510(*(_QWORD *)v95, v112, 1, v111, v104, 0);
    v99 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    sub_180C5A0(v112, "cc");
    v93 = sub_15E3510(*(_QWORD *)v95, v112, 1, v111, v104, 0);
    v97 = v93;
    if ( v93 )
      ++*(_DWORD *)(v93 + 8);
  }
  v13 = a1[4];
  v14 = 4 * v13;
  if ( (unsigned int)v13 < a1[5] )
  {
    while ( 1 )
    {
      v18 = a2[291];
      v19 = *(_DWORD *)(a2[1028] + v14);
      v20 = v19 >> 1;
      if ( !v18 )
        goto LABEL_22;
      if ( (unsigned int)v20 < *(_DWORD *)(v18 - 4) )
        break;
      v21 = (_QWORD *)a2[1041];
      v18 = 0;
      if ( v21 )
      {
LABEL_23:
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v112, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v102) = (3 * v22 + 1) >> 1;
          v25 = (_DWORD *)sub_186B300(v21 - 1, v24);
          v26 = (unsigned int)v25[1];
          v21 = v25 + 2;
          a2[1041] = v25 + 2;
          *v25 = (_DWORD)v102;
          LODWORD(v25) = v26;
          v17 = &v21[v26];
          v16 = (_DWORD)v25 + 1;
        }
        else
        {
          v15 = v22;
          v16 = v22 + 1;
          v17 = &v21[v15];
        }
        goto LABEL_16;
      }
LABEL_28:
      v27 = (_QWORD *)sub_186B270(0x18u);
      v21 = v27 + 1;
      *v27 = 2;
      v16 = 1;
      a2[1041] = v21;
      v17 = v21;
LABEL_16:
      *v17 = v18;
      LODWORD(v13) = v13 + 1;
      v14 += 4;
      *((_DWORD *)v21 - 1) = v16;
      if ( (unsigned int)v13 >= a1[5] )
        goto LABEL_32;
    }
    v18 = *(_QWORD *)(v18 + 8 * v20);
    if ( v18 )
    {
      if ( (v19 & 1) == 0 || (v18 = sub_15EC2C0(a2[18], v18)) != 0 )
        ++*(_DWORD *)(v18 + 8);
    }
LABEL_22:
    v21 = (_QWORD *)a2[1041];
    if ( v21 )
      goto LABEL_23;
    goto LABEL_28;
  }
LABEL_32:
  v28 = (char *)a2[293];
  v29 = a1[7];
  v30 = a1[6];
  v31 = 32 * v29;
  v32 = 32 * v30;
  if ( 32 * v29 == 32 * v30 )
    goto LABEL_45;
  v33 = (__m128i *)&v28[v31];
  v34 = v31 - v32;
  v35 = (__m128i *)&v28[v32];
  v36 = (__int64)&v28[v32 + 32];
  if ( v34 >> 5 )
  {
    _BitScanReverse64(&v37, v34 >> 5);
    v110 = (char *)a2[293];
    v109 = v34;
    v107 = a1[7];
    v105 = v33;
    v102 = (__m128i *)&v28[v32];
    sub_7A00B0(v35, v33, 2LL * (int)v37);
    v38 = v102;
    v39 = v105;
    LODWORD(v29) = v107;
    v28 = v110;
    if ( v109 > 512 )
    {
      v40 = v102 + 32;
      do
      {
        v41 = *(_QWORD *)(v36 + 8);
        v42 = v36;
        v36 += 32;
        v43 = *(_BYTE *)(v36 - 32);
        v44 = _mm_loadu_si128((const __m128i *)(v36 - 16));
        if ( v41 < v102->m128i_i64[1] )
        {
          v90 = (v42 - (__int64)v102) >> 5;
          if ( v42 - (__int64)v102 > 0 )
          {
            do
            {
              v91 = *(_QWORD *)(v42 - 8);
              v42 -= 32;
              *(_QWORD *)(v42 + 56) = v91;
              *(_QWORD *)(v42 + 48) = *(_QWORD *)(v42 + 16);
              *(_QWORD *)(v42 + 40) = *(_QWORD *)(v42 + 8);
              *(_BYTE *)(v42 + 32) = *(_BYTE *)v42;
              --v90;
            }
            while ( v90 );
          }
          v102->m128i_i64[1] = v41;
          v102->m128i_i8[0] = v43;
          v102[1] = v44;
        }
        else
        {
          v45 = *(_QWORD *)(v36 - 56);
          for ( i = v36 - 64; v41 < v45; i -= 32 )
          {
            v47 = *(_QWORD *)(i + 24);
            *(_QWORD *)(i + 40) = v45;
            *(_QWORD *)(i + 56) = v47;
            *(_QWORD *)(i + 48) = *(_QWORD *)(i + 16);
            *(_BYTE *)(i + 32) = *(_BYTE *)i;
            v42 = i;
            v45 = *(_QWORD *)(i - 24);
          }
          *(_QWORD *)(v42 + 8) = v41;
          *(_BYTE *)v42 = v43;
          *(__m128i *)(v42 + 16) = v44;
        }
      }
      while ( v40 != (const __m128i *)v36 );
      for ( ; v105 != v40; v56[1] = v52 )
      {
        v48 = v40->m128i_u64[1];
        v49 = v40[-2].m128i_u64[1];
        v50 = (__m128i *)&v40[-2];
        v51 = v40->m128i_i8[0];
        v52 = _mm_loadu_si128(v40 + 1);
        if ( v48 >= v49 )
        {
          v56 = (__m128i *)v40;
        }
        else
        {
          do
          {
            v53 = v50[1].m128i_i64[1];
            v50[2].m128i_i64[1] = v49;
            v54 = v50->m128i_i8[0];
            v50[3].m128i_i64[1] = v53;
            v55 = v50[1].m128i_i64[0];
            v50[2].m128i_i8[0] = v54;
            v50[3].m128i_i64[0] = v55;
            v56 = v50;
            v49 = v50[-2].m128i_u64[1];
            v50 -= 2;
          }
          while ( v48 < v49 );
        }
        v40 += 2;
        v56->m128i_i64[1] = v48;
        v56->m128i_i8[0] = v51;
      }
      goto LABEL_45;
    }
  }
  else
  {
    v109 = a2[293];
    v108 = a1[7];
    v105 = v33;
    v102 = (__m128i *)&v28[v32];
    sub_7A00B0(v35, v33, -2);
    v38 = v102;
    v39 = v105;
    LODWORD(v29) = v108;
    v28 = (char *)v109;
  }
  while ( v39 != (__m128i *)v36 )
  {
    v68 = *(_QWORD *)(v36 + 8);
    v69 = (__m128i *)v36;
    v36 += 32;
    v70 = *(_BYTE *)(v36 - 32);
    v71 = _mm_loadu_si128((const __m128i *)(v36 - 16));
    if ( v68 < v38->m128i_i64[1] )
    {
      v82 = (char *)v69 - (char *)v38;
      v83 = v36;
      v84 = v82 >> 5;
      if ( v82 > 0 )
      {
        do
        {
          v85 = *(_QWORD *)(v83 - 40);
          v83 -= 32;
          *(_QWORD *)(v83 + 24) = v85;
          *(_QWORD *)(v83 + 16) = *(_QWORD *)(v83 - 16);
          *(_QWORD *)(v83 + 8) = *(_QWORD *)(v83 - 24);
          *(_BYTE *)v83 = *(_BYTE *)(v83 - 32);
          --v84;
        }
        while ( v84 );
      }
      v38->m128i_i64[1] = v68;
      v38->m128i_i8[0] = v70;
      v38[1] = v71;
    }
    else
    {
      v72 = *(_QWORD *)(v36 - 56);
      v73 = (__m128i *)(v36 - 64);
      if ( v68 >= v72 )
      {
        v69->m128i_i64[1] = v68;
        v69->m128i_i8[0] = v70;
        v69[1] = v71;
      }
      else
      {
        do
        {
          v74 = v73[1].m128i_i64[1];
          v73[2].m128i_i64[1] = v72;
          v75 = v73->m128i_i8[0];
          v73[3].m128i_i64[1] = v74;
          v76 = v73[1].m128i_i64[0];
          v73[2].m128i_i8[0] = v75;
          v73[3].m128i_i64[0] = v76;
          v77 = v73;
          v72 = v73[-2].m128i_u64[1];
          v73 -= 2;
        }
        while ( v68 < v72 );
        v77->m128i_i64[1] = v68;
        v77->m128i_i8[0] = v70;
        v77[1] = v71;
      }
    }
  }
LABEL_45:
  if ( (unsigned int)v30 < (unsigned int)v29 )
  {
    while ( 1 )
    {
      v64 = &v28[v32];
      v65 = sub_15E1B70(v95[0]);
      if ( *v64 )
      {
        *(_QWORD *)v112 = v65;
        v57 = sub_15DC610(
                v95[0],
                v99,
                1,
                (int)v112,
                v66,
                v67,
                v94,
                v95[0],
                v97,
                v99,
                (int)v102,
                (char)v104,
                (int)v105,
                v106,
                v109,
                v110);
      }
      else
      {
        *(_QWORD *)v111 = v65;
        v57 = sub_15DC610(
                v95[0],
                v97,
                1,
                (int)v111,
                v66,
                v67,
                v94,
                v95[0],
                v97,
                v99,
                (int)v102,
                (char)v104,
                (int)v105,
                v106,
                v109,
                v110);
      }
      v58 = v57;
      if ( v57 )
        ++*(_DWORD *)(v57 + 8);
      v59 = (_QWORD *)a2[1041];
      if ( v59 )
      {
        v60 = *((_DWORD *)v59 - 1);
        if ( v60 == *((_DWORD *)v59 - 2) )
        {
          v78 = (3 * v60 + 1) >> 1;
          v79 = 8 * v78 + 8;
          if ( 8 * v60 + 8 >= (unsigned int)v79 || v60 >= v78 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v112, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v102) = (3 * v60 + 1) >> 1;
          v80 = (_DWORD *)sub_186B300(v59 - 1, v79);
          v81 = (unsigned int)v80[1];
          v59 = v80 + 2;
          a2[1041] = v80 + 2;
          *v80 = (_DWORD)v102;
          LODWORD(v80) = v81;
          v63 = &v59[v81];
          v62 = (_DWORD)v80 + 1;
        }
        else
        {
          v61 = v60;
          v62 = v60 + 1;
          v63 = &v59[v61];
        }
      }
      else
      {
        v89 = (_QWORD *)sub_186B270(0x18u);
        v59 = v89 + 1;
        *v89 = 2;
        v62 = 1;
        a2[1041] = v59;
        v63 = v59;
      }
      *v63 = v58;
      LODWORD(v30) = v30 + 1;
      v32 += 32;
      *((_DWORD *)v59 - 1) = v62;
      if ( (unsigned int)v30 >= a1[7] )
        break;
      v28 = (char *)a2[293];
    }
  }
  else
  {
    v59 = (_QWORD *)a2[1041];
    if ( !v59 )
    {
      v86 = 0;
      goto LABEL_70;
    }
  }
  v86 = *((_DWORD *)v59 - 1);
LABEL_70:
  v87 = sub_15E3760(v95[0], (int)a1 + 8, v86, (int)v59, (char)v104, v94, v95[0], v97, v99, (int)v102, v104);
  if ( *(_QWORD *)v100 )
  {
    v103 = *(_DWORD *)(*(_QWORD *)v100 + 8LL);
    *(_DWORD *)(*(_QWORD *)v100 + 8LL) = v103 - 1;
    if ( v103 == 1 )
      sub_15D7BC0(*(_QWORD *)v96, *(_QWORD *)v100);
  }
  if ( *(_QWORD *)v98 )
  {
    v101 = *(_DWORD *)(*(_QWORD *)v98 + 8LL);
    *(_DWORD *)(*(_QWORD *)v98 + 8LL) = v101 - 1;
    if ( v101 == 1 )
      sub_15D7BC0(*(_QWORD *)v96, *(_QWORD *)v98);
  }
  return v87;
}

