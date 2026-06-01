__int64 __fastcall sub_1FA8920(_DWORD *a1, __int64 p_ptr)
{
  __int64 *v2; // rbp
  __int64 v3; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  char *v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  unsigned int i; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v23; // edx
  __int64 v24; // rdi
  int v25; // r8d
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r12
  int v32; // ecx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // esi
  unsigned __int64 v37; // rax
  unsigned int j; // eax
  __int64 v39; // rdi
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rax
  unsigned __int64 v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // r9
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // esi
  __int64 v57; // r8
  __m128i v58; // xmm0
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // esi
  __int64 v64; // r8
  int v65; // edx
  int v66; // [rsp+8h] [rbp-4B0h]
  int v67; // [rsp+8h] [rbp-4B0h]
  __int64 v68; // [rsp+8h] [rbp-4B0h]
  __int64 v69; // [rsp+8h] [rbp-4B0h]
  int v70; // [rsp+8h] [rbp-4B0h]
  __int64 v71; // [rsp+10h] [rbp-4A8h]
  int v72; // [rsp+10h] [rbp-4A8h]
  unsigned int v73; // [rsp+28h] [rbp-490h]
  int v74; // [rsp+2Ch] [rbp-48Ch]
  __int64 v75; // [rsp+30h] [rbp-488h] BYREF
  __int64 v76; // [rsp+38h] [rbp-480h] BYREF
  void *v77; // [rsp+40h] [rbp-478h] BYREF
  __int64 v78; // [rsp+48h] [rbp-470h]
  _QWORD v79[64]; // [rsp+50h] [rbp-468h] BYREF
  __m128i v80; // [rsp+250h] [rbp-268h] BYREF
  void *ptr; // [rsp+260h] [rbp-258h] BYREF
  __int64 v82; // [rsp+268h] [rbp-250h] BYREF
  __int64 v83; // [rsp+270h] [rbp-248h] BYREF
  _BYTE v84[576]; // [rsp+278h] [rbp-240h] BYREF

  v2 = *(__int64 **)p_ptr;
  v73 = a1[4];
  v3 = *(_QWORD *)p_ptr + 8LL * *(unsigned int *)(p_ptr + 8);
  if ( v3 == *(_QWORD *)p_ptr )
  {
    v21 = v73;
    return (v21 << 32) | v73;
  }
  do
  {
    v5 = *(_QWORD *)a1;
    v6 = *v2;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 56LL) + 21LL) & 2) == 0 )
    {
      v7 = (char *)*v2;
      goto LABEL_5;
    }
    if ( *(char *)(v6 + 29) < 0 )
    {
      v7 = (char *)sub_1F6AC90((_QWORD *)*v2, p_ptr);
      v5 = *(_QWORD *)a1;
LABEL_5:
      if ( !*(_BYTE *)(v5 + 155) )
        goto LABEL_7;
      p_ptr = (__int64)v7;
      if ( v7[29] < 0 )
        goto LABEL_7;
      goto LABEL_38;
    }
    v7 = (char *)*v2;
    if ( !*(_BYTE *)(v5 + 155) )
      goto LABEL_7;
    p_ptr = *v2;
LABEL_38:
    v23 = *(_DWORD *)(v5 + 440);
    v24 = *(_QWORD *)(v5 + 424);
    if ( !v23 )
      goto LABEL_32;
    v25 = v23 - 1;
    v26 = (v23 - 1) & (((unsigned int)p_ptr >> 9) ^ ((unsigned int)p_ptr >> 4));
    v7 = *(char **)(v24 + 16LL * v26);
    if ( (char *)p_ptr != v7 )
    {
      v27 = 1;
      if ( v7 == (char *)-4096LL )
        goto LABEL_32;
      while ( 1 )
      {
        v28 = v27 + 1;
        v26 = v25 & (v27 + v26);
        v29 = *(_QWORD *)(v24 + 16LL * v26);
        if ( v29 == p_ptr )
          break;
        if ( v29 == -4096 )
          goto LABEL_32;
        v27 = v28;
      }
      v7 = (char *)p_ptr;
    }
LABEL_7:
    if ( *(_BYTE *)(v5 + 157) && !sub_B8D850((__int64)v7) && sub_1F6AD70((__int64)v7) )
      goto LABEL_32;
    p_ptr = (__int64)v7;
    v8 = sub_1F92240(*(_QWORD *)a1, (__int64)v7);
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    if ( !v9 )
      goto LABEL_29;
    v10 = *(_DWORD *)(v9 + 36);
    if ( v10 > 7 || ((1LL << v10) & 0xBC) == 0 )
      goto LABEL_29;
    if ( sub_1F6A440((__int64)v7) )
      goto LABEL_25;
    if ( sub_B8CB30((__int64)v7) )
    {
      v11 = *(_BYTE *)(sub_B8DFE0((__int64)v7) + 8) & 0x7F;
      if ( (v11 == 24 || !v11) && (unsigned __int8)sub_B81B70((__int64)v7) == 2 )
      {
LABEL_17:
        sub_1EAAB80((__int64)&v80, *(_QWORD *)(v6 + 40));
        v71 = *((_QWORD *)a1 + 71);
        v66 = a1[146];
        if ( v66 )
        {
          v12 = sub_1EADE10((__int64)&v80);
          v13 = 1;
          p_ptr = v80.m128i_u32[0];
          for ( i = (v66 - 1) & v12; ; i = (v66 - 1) & v16 )
          {
            v15 = v71 + 544LL * i;
            if ( v80.m128i_i32[0] == *(_DWORD *)v15 && v80.m128i_i64[1] == *(_QWORD *)(v15 + 8) )
              break;
            if ( *(_DWORD *)v15 == -1 && *(_QWORD *)(v15 + 8) == 1 )
              goto LABEL_71;
            v16 = v13 + i;
            ++v13;
          }
          if ( v15 != *((_QWORD *)a1 + 71) + 544LL * (unsigned int)a1[146] )
          {
            v52 = *(unsigned int *)(v15 + 24);
            if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 28) )
            {
              p_ptr = v15 + 32;
              v69 = v15;
              sub_2237220(v15 + 16, v15 + 32, v52 + 1, 8);
              v15 = v69;
              v52 = *(unsigned int *)(v69 + 24);
            }
            *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8 * v52) = v8;
            ++*(_DWORD *)(v15 + 24);
            goto LABEL_32;
          }
        }
LABEL_71:
        v49 = *(_QWORD *)(v6 + 40);
        v79[0] = v8;
        v77 = v79;
        v78 = 0x4000000001LL;
        sub_1EAAB80((__int64)&v80, v49);
        ptr = &v83;
        v82 = 0x4000000000LL;
        if ( (_DWORD)v78 )
          sub_1F7DEB0((char ***)&ptr, (char ***)&v77);
        p_ptr = (__int64)&v80;
        if ( (unsigned __int8)sub_1F7E100((__int64 *)a1 + 71, (__int64)&v80, &v75) )
        {
LABEL_74:
          v51 = ptr;
          if ( ptr == &v83 )
            goto LABEL_76;
          goto LABEL_75;
        }
        v53 = (unsigned int)a1[146];
        v54 = v75;
        v55 = (unsigned int)(a1[144] + 1);
        v56 = 2 * v53;
        v57 = (unsigned int)(4 * v55);
        v76 = v75;
        if ( (unsigned int)v57 < 3 * (int)v53 )
        {
          if ( (int)v53 - a1[145] - (int)v55 > (unsigned int)v53 >> 3 )
            goto LABEL_86;
          v56 = v53;
        }
        sub_1FA7CF0((__int64)(a1 + 142), v56, v55, v53, v57, v50);
        sub_1F7E100((__int64 *)a1 + 71, (__int64)&v80, &v76);
        LODWORD(v55) = a1[144] + 1;
        v54 = v76;
LABEL_86:
        a1[144] = v55;
        if ( *(_DWORD *)v54 != -1 || *(_QWORD *)(v54 + 8) != 1 )
          --a1[145];
        v58 = _mm_load_si128(&v80);
        p_ptr = 0x4000000000LL;
        *(_QWORD *)(v54 + 16) = v54 + 32;
        *(__m128i *)v54 = v58;
        *(_QWORD *)(v54 + 24) = 0x4000000000LL;
        if ( (_DWORD)v82 )
        {
          p_ptr = (__int64)&ptr;
          sub_1F7DEB0((char ***)(v54 + 16), (char ***)&ptr);
        }
        goto LABEL_74;
      }
    }
    if ( (v7[28] & 0x7F) == 0x21
      && ((*(_BYTE *)(*((_QWORD *)a1 + 67) + 8LL) & 0x7F) == 0x18 || (*(_BYTE *)(*((_QWORD *)a1 + 67) + 8LL) & 0x7F) == 0) )
    {
      v41 = *((_QWORD *)v7 + 1) & 7LL;
      if ( v7[29] < 0 )
      {
        if ( !v41 )
          goto LABEL_29;
        v42 = sub_B8C660((__int64)v7);
      }
      else
      {
        if ( !v41 )
          goto LABEL_29;
        v42 = *((_QWORD *)v7 - 1);
      }
      if ( !v42 )
        goto LABEL_29;
      v43 = *(unsigned int *)(sub_B8CB30((__int64)v7) + 36);
      if ( (unsigned int)v43 > 7 || ((1LL << v43) & 0xBC) == 0 )
        goto LABEL_29;
      v46 = (_QWORD *)(*((_QWORD *)v7 + 2) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*((_QWORD *)v7 + 2) & 4) != 0 )
        v46 = (_QWORD *)*v46;
      if ( !v46 )
        BUG();
      p_ptr = *(v46 - 3);
      v47 = sub_B94050(*((_QWORD *)a1 + 67), p_ptr, *((_QWORD *)v7 + 2) & 4LL, v43, v44, v45);
      if ( v47 )
      {
        while ( 1 )
        {
          v48 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v47 & 4) == 0 )
            break;
          if ( !v48 || (*(_QWORD *)(*v48 + 8LL) & 7uLL) <= 2 )
            goto LABEL_29;
          v47 = v48[1];
          if ( !v47 )
            goto LABEL_23;
        }
        if ( (v48[1] & 7uLL) <= 2 )
          goto LABEL_29;
      }
LABEL_23:
      if ( sub_B8D850((__int64)v7) || (unsigned __int8)sub_B8D170((__int64)v7) )
        goto LABEL_17;
LABEL_25:
      v17 = *(_QWORD *)(v6 + 8) & 7LL;
      if ( *(char *)(v6 + 29) >= 0 )
      {
        if ( v17 )
          v18 = *(_QWORD *)(v6 - 8);
        else
          v18 = 0;
LABEL_28:
        v19 = sub_1EACC10(v18);
        if ( v19 )
          goto LABEL_47;
        goto LABEL_29;
      }
      v18 = 0;
      if ( !v17 )
        goto LABEL_28;
      v30 = sub_B8C660(v6);
      v19 = sub_1EACC10(v30);
      if ( !v19 )
        goto LABEL_29;
LABEL_47:
      v31 = *(_QWORD *)(v6 + 40);
      v67 = v19 - 1;
      sub_1EAAB80((__int64)&v80, v31);
      v32 = a1[140];
      v33 = v67;
      v34 = *((_QWORD *)a1 + 68);
      LODWORD(ptr) = v67;
      v68 = v34;
      v72 = v32;
      if ( v32 )
      {
        v74 = v33;
        v35 = sub_1EADE10((__int64)&v80);
        v33 = v74;
        v36 = 1;
        v37 = 0xBF58476D1CE4E5B9LL * ((unsigned int)(37 * v74) | (unsigned __int64)(v35 << 32));
        for ( j = (v72 - 1) & ((v37 >> 31) ^ v37); ; j = (v72 - 1) & v40 )
        {
          v39 = v68 + 552LL * j;
          if ( v80.m128i_i32[0] == *(_DWORD *)v39
            && v80.m128i_i64[1] == *(_QWORD *)(v39 + 8)
            && (_DWORD)ptr == *(_DWORD *)(v39 + 16) )
          {
            break;
          }
          if ( *(_DWORD *)v39 == -1 && *(_QWORD *)(v39 + 8) == 1 && *(_DWORD *)(v39 + 16) == -1 )
            goto LABEL_94;
          v40 = v36 + j;
          ++v36;
        }
        if ( v39 != *((_QWORD *)a1 + 68) + 552LL * (unsigned int)a1[140] )
        {
          p_ptr = v8;
          sub_1F70460(v39 + 24, v8);
          goto LABEL_32;
        }
      }
LABEL_94:
      v70 = v33;
      v79[0] = v8;
      v77 = v79;
      v78 = 0x4000000001LL;
      sub_1EAAB80((__int64)&v80, v31);
      v82 = (__int64)v84;
      LODWORD(ptr) = v70;
      v83 = 0x4000000000LL;
      if ( (_DWORD)v78 )
        sub_1F7DEB0((char ***)&v82, (char ***)&v77);
      p_ptr = (__int64)&v80;
      if ( (unsigned __int8)sub_1F7DFF0((__int64 *)a1 + 68, (__int64)&v80, &v75) )
      {
LABEL_97:
        v51 = (void *)v82;
        if ( (_BYTE *)v82 == v84 )
        {
LABEL_76:
          if ( v77 != v79 )
            free(v77);
          goto LABEL_32;
        }
LABEL_75:
        free(v51);
        goto LABEL_76;
      }
      v60 = (unsigned int)a1[140];
      v61 = v75;
      v62 = (unsigned int)(a1[138] + 1);
      v63 = 2 * v60;
      v64 = (unsigned int)(4 * v62);
      v76 = v75;
      if ( (unsigned int)v64 < 3 * (int)v60 )
      {
        if ( (int)v60 - a1[139] - (int)v62 > (unsigned int)v60 >> 3 )
          goto LABEL_111;
        v63 = v60;
      }
      sub_1FA7AE0((__int64)(a1 + 136), v63, v62, v60, v64, v59);
      sub_1F7DFF0((__int64 *)a1 + 68, (__int64)&v80, &v76);
      LODWORD(v62) = a1[138] + 1;
      v61 = v76;
LABEL_111:
      a1[138] = v62;
      if ( *(_DWORD *)v61 != -1 || *(_QWORD *)(v61 + 8) != 1 || *(_DWORD *)(v61 + 16) != -1 )
        --a1[139];
      *(__m128i *)v61 = _mm_load_si128(&v80);
      v65 = (int)ptr;
      *(_QWORD *)(v61 + 32) = 0x4000000000LL;
      *(_DWORD *)(v61 + 16) = v65;
      p_ptr = (unsigned int)v83;
      *(_QWORD *)(v61 + 24) = v61 + 40;
      if ( (_DWORD)p_ptr )
      {
        p_ptr = (__int64)&v82;
        sub_1F7DEB0((char ***)(v61 + 24), (char ***)&v82);
      }
      goto LABEL_97;
    }
LABEL_29:
    v20 = (unsigned int)a1[4];
    if ( v20 + 1 > (unsigned __int64)(unsigned int)a1[5] )
    {
      p_ptr = (__int64)(a1 + 6);
      sub_2237220(a1 + 2, a1 + 6, v20 + 1, 8);
      v20 = (unsigned int)a1[4];
    }
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v20) = v8;
    ++a1[4];
LABEL_32:
    ++v2;
  }
  while ( (__int64 *)v3 != v2 );
  v21 = (unsigned int)a1[4];
  return (v21 << 32) | v73;
}
