unsigned __int64 __fastcall sub_1FA7FA0(unsigned int *a1, __int64 p_ptr)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rax
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  unsigned int j; // eax
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  int v25; // edx
  __int64 v26; // rdi
  int v27; // r8d
  unsigned int v28; // edx
  int v29; // ecx
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned int v34; // ecx
  int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // esi
  unsigned __int64 v39; // rax
  unsigned int i; // eax
  __int64 v41; // rdi
  unsigned int v42; // eax
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
  unsigned int v66; // [rsp+8h] [rbp-4B0h]
  int v67; // [rsp+8h] [rbp-4B0h]
  __int64 v68; // [rsp+8h] [rbp-4B0h]
  __int64 v69; // [rsp+8h] [rbp-4B0h]
  int v70; // [rsp+8h] [rbp-4B0h]
  __int64 v71; // [rsp+10h] [rbp-4A8h]
  unsigned int v72; // [rsp+10h] [rbp-4A8h]
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

  v2 = a1[4];
  v3 = *(_QWORD *)p_ptr;
  v73 = a1[4];
  if ( *(_QWORD *)p_ptr )
  {
    while ( 1 )
    {
      v5 = v3;
      v6 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      v7 = (__int64)v6;
      v8 = (v5 >> 2) & 1;
      if ( v8 )
      {
        v7 = 0;
        if ( v6 )
          v7 = *v6;
      }
      v9 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 56LL) + 21LL) & 2) == 0 )
        break;
      if ( *(char *)(v7 + 29) < 0 )
      {
        v10 = (char *)sub_1F6AC90((_QWORD *)v7, p_ptr);
        v9 = *(_QWORD *)a1;
LABEL_8:
        if ( !*(_BYTE *)(v9 + 155) )
          goto LABEL_10;
        p_ptr = (__int64)v10;
        if ( v10[29] < 0 )
          goto LABEL_10;
        goto LABEL_43;
      }
      v10 = (char *)v7;
      if ( !*(_BYTE *)(v9 + 155) )
        goto LABEL_10;
      p_ptr = v7;
LABEL_43:
      v25 = *(_DWORD *)(v9 + 440);
      v26 = *(_QWORD *)(v9 + 424);
      if ( !v25 )
        goto LABEL_35;
      v27 = v25 - 1;
      v28 = (v25 - 1) & (((unsigned int)p_ptr >> 9) ^ ((unsigned int)p_ptr >> 4));
      v10 = *(char **)(v26 + 16LL * v28);
      if ( (char *)p_ptr != v10 )
      {
        v29 = 1;
        if ( v10 == (char *)-4096LL )
          goto LABEL_35;
        while ( 1 )
        {
          v30 = v29 + 1;
          v28 = v27 & (v29 + v28);
          v31 = *(_QWORD *)(v26 + 16LL * v28);
          if ( v31 == p_ptr )
            break;
          if ( v31 == -4096 )
            goto LABEL_35;
          v29 = v30;
        }
        v10 = (char *)p_ptr;
      }
LABEL_10:
      if ( *(_BYTE *)(v9 + 157) && !sub_B8D850((__int64)v10) && sub_1F6AD70((__int64)v10) )
        goto LABEL_35;
      p_ptr = (__int64)v10;
      v11 = sub_1F92240(*(_QWORD *)a1, (__int64)v10);
      v12 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      if ( !v12 )
        goto LABEL_32;
      v13 = *(_DWORD *)(v12 + 36);
      if ( v13 > 7 || ((1LL << v13) & 0xBC) == 0 )
        goto LABEL_32;
      if ( sub_1F6A440((__int64)v10) )
        goto LABEL_28;
      if ( !sub_B8CB30((__int64)v10)
        || (v14 = *(_BYTE *)(sub_B8DFE0((__int64)v10) + 8) & 0x7F, v14 != 24) && v14
        || (unsigned __int8)sub_B81B70((__int64)v10) != 2 )
      {
        if ( (v10[28] & 0x7F) != 0x21
          || (*(_BYTE *)(*((_QWORD *)a1 + 67) + 8LL) & 0x7F) != 0x18
          && (*(_BYTE *)(*((_QWORD *)a1 + 67) + 8LL) & 0x7F) != 0 )
        {
          goto LABEL_32;
        }
        if ( !sub_B8CAB0((__int64)v10) )
          goto LABEL_32;
        v43 = *(unsigned int *)(sub_B8CB30((__int64)v10) + 36);
        if ( (unsigned int)v43 > 7 || ((1LL << v43) & 0xBC) == 0 )
          goto LABEL_32;
        v46 = (_QWORD *)(*((_QWORD *)v10 + 2) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*((_QWORD *)v10 + 2) & 4) != 0 )
          v46 = (_QWORD *)*v46;
        if ( !v46 )
          BUG();
        p_ptr = *(v46 - 3);
        v47 = sub_B94050(*((_QWORD *)a1 + 67), p_ptr, *((_QWORD *)v10 + 2) & 4LL, v43, v44, v45);
        if ( v47 )
        {
          while ( 1 )
          {
            v48 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v47 & 4) == 0 )
              break;
            if ( !v48 || (*(_QWORD *)(*v48 + 8LL) & 7uLL) <= 2 )
              goto LABEL_32;
            v47 = v48[1];
            if ( !v47 )
              goto LABEL_26;
          }
          if ( (v48[1] & 7uLL) <= 2 )
          {
LABEL_32:
            v23 = a1[4];
            if ( v23 + 1 > (unsigned __int64)a1[5] )
            {
              p_ptr = (__int64)(a1 + 6);
              sub_2237220(a1 + 2, a1 + 6, v23 + 1, 8);
              v23 = a1[4];
            }
            *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v23) = v11;
            ++a1[4];
            goto LABEL_35;
          }
        }
LABEL_26:
        if ( !sub_B8D850((__int64)v10) && !(unsigned __int8)sub_B8D170((__int64)v10) )
        {
LABEL_28:
          v20 = *(_QWORD *)(v7 + 8) & 7LL;
          if ( *(char *)(v7 + 29) >= 0 )
          {
            if ( v20 )
              v21 = *(_QWORD *)(v7 - 8);
            else
              v21 = 0;
            goto LABEL_31;
          }
          v21 = 0;
          if ( v20 )
          {
            v32 = sub_B8C660(v7);
            v22 = sub_1EACC10(v32);
            if ( !v22 )
              goto LABEL_32;
          }
          else
          {
LABEL_31:
            v22 = sub_1EACC10(v21);
            if ( !v22 )
              goto LABEL_32;
          }
          v33 = *(_QWORD *)(v7 + 40);
          v67 = v22 - 1;
          sub_1EAAB80((__int64)&v80, v33);
          v34 = a1[140];
          v35 = v67;
          v36 = *((_QWORD *)a1 + 68);
          LODWORD(ptr) = v67;
          v68 = v36;
          v72 = v34;
          if ( !v34 )
            goto LABEL_96;
          v74 = v35;
          v37 = sub_1EADE10((__int64)&v80);
          v35 = v74;
          v38 = 1;
          v39 = 0xBF58476D1CE4E5B9LL * ((unsigned int)(37 * v74) | (unsigned __int64)(v37 << 32));
          for ( i = (v72 - 1) & ((v39 >> 31) ^ v39); ; i = (v72 - 1) & v42 )
          {
            v41 = v68 + 552LL * i;
            if ( v80.m128i_i32[0] == *(_DWORD *)v41
              && v80.m128i_i64[1] == *(_QWORD *)(v41 + 8)
              && (_DWORD)ptr == *(_DWORD *)(v41 + 16) )
            {
              break;
            }
            if ( *(_DWORD *)v41 == -1 && *(_QWORD *)(v41 + 8) == 1 && *(_DWORD *)(v41 + 16) == -1 )
              goto LABEL_96;
            v42 = v38 + i;
            ++v38;
          }
          if ( v41 == *((_QWORD *)a1 + 68) + 552LL * a1[140] )
          {
LABEL_96:
            v70 = v35;
            v79[0] = v11;
            v77 = v79;
            v78 = 0x4000000001LL;
            sub_1EAAB80((__int64)&v80, v33);
            v82 = (__int64)v84;
            LODWORD(ptr) = v70;
            v83 = 0x4000000000LL;
            if ( (_DWORD)v78 )
              sub_1F7DEB0((char ***)&v82, (char ***)&v77);
            p_ptr = (__int64)&v80;
            if ( (unsigned __int8)sub_1F7DFF0((__int64 *)a1 + 68, (__int64)&v80, &v75) )
            {
LABEL_99:
              v51 = (void *)v82;
              if ( (_BYTE *)v82 == v84 )
              {
LABEL_78:
                if ( v77 != v79 )
                  free(v77);
                goto LABEL_35;
              }
LABEL_77:
              free(v51);
              goto LABEL_78;
            }
            v60 = a1[140];
            v61 = v75;
            v62 = a1[138] + 1;
            v63 = 2 * v60;
            v64 = (unsigned int)(4 * v62);
            v76 = v75;
            if ( (unsigned int)v64 < 3 * (int)v60 )
            {
              if ( (unsigned int)v60 - a1[139] - (unsigned int)v62 > (unsigned int)v60 >> 3 )
                goto LABEL_110;
              v63 = v60;
            }
            sub_1FA7AE0((__int64)(a1 + 136), v63, v62, v60, v64, v59);
            sub_1F7DFF0((__int64 *)a1 + 68, (__int64)&v80, &v76);
            LODWORD(v62) = a1[138] + 1;
            v61 = v76;
LABEL_110:
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
            goto LABEL_99;
          }
          p_ptr = v11;
          sub_1F70460(v41 + 24, v11);
          goto LABEL_35;
        }
      }
      sub_1EAAB80((__int64)&v80, *(_QWORD *)(v7 + 40));
      v71 = *((_QWORD *)a1 + 71);
      v66 = a1[146];
      if ( !v66 )
        goto LABEL_73;
      v15 = sub_1EADE10((__int64)&v80);
      v16 = 1;
      p_ptr = v80.m128i_u32[0];
      for ( j = (v66 - 1) & v15; ; j = (v66 - 1) & v19 )
      {
        v18 = v71 + 544LL * j;
        if ( v80.m128i_i32[0] == *(_DWORD *)v18 && v80.m128i_i64[1] == *(_QWORD *)(v18 + 8) )
          break;
        if ( *(_DWORD *)v18 == -1 && *(_QWORD *)(v18 + 8) == 1 )
          goto LABEL_73;
        v19 = v16 + j;
        ++v16;
      }
      if ( v18 == *((_QWORD *)a1 + 71) + 544LL * a1[146] )
      {
LABEL_73:
        v49 = *(_QWORD *)(v7 + 40);
        v79[0] = v11;
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
LABEL_76:
          v51 = ptr;
          if ( ptr == &v83 )
            goto LABEL_78;
          goto LABEL_77;
        }
        v53 = a1[146];
        v54 = v75;
        v55 = a1[144] + 1;
        v56 = 2 * v53;
        v57 = (unsigned int)(4 * v55);
        v76 = v75;
        if ( (unsigned int)v57 < 3 * (int)v53 )
        {
          if ( (unsigned int)v53 - a1[145] - (unsigned int)v55 > (unsigned int)v53 >> 3 )
            goto LABEL_88;
          v56 = v53;
        }
        sub_1FA7CF0((__int64)(a1 + 142), v56, v55, v53, v57, v50);
        sub_1F7E100((__int64 *)a1 + 71, (__int64)&v80, &v76);
        LODWORD(v55) = a1[144] + 1;
        v54 = v76;
LABEL_88:
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
        goto LABEL_76;
      }
      v52 = *(unsigned int *)(v18 + 24);
      if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 28) )
      {
        p_ptr = v18 + 32;
        v69 = v18;
        sub_2237220(v18 + 16, v18 + 32, v52 + 1, 8);
        v18 = v69;
        v52 = *(unsigned int *)(v69 + 24);
      }
      *(_QWORD *)(*(_QWORD *)(v18 + 16) + 8 * v52) = v11;
      ++*(_DWORD *)(v18 + 24);
LABEL_35:
      if ( v8 )
      {
        if ( v6 )
        {
          v3 = v6[1];
          if ( v3 )
            continue;
        }
      }
      v2 = a1[4];
      return v73 | (unsigned __int64)(v2 << 32);
    }
    v10 = (char *)v7;
    goto LABEL_8;
  }
  return v73 | (unsigned __int64)(v2 << 32);
}
