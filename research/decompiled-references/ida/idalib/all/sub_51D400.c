unsigned __int64 __fastcall sub_51D400(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rax
  signed int v7; // edx
  int i; // eax
  __int64 *v9; // rbp
  __m128i *v10; // r15
  unsigned __int64 *v11; // r13
  const __m128i *v12; // rbx
  __int64 v13; // r12
  __m128i *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int64 *v17; // r15
  __int64 v18; // rax
  size_t v19; // r10
  size_t v20; // r9
  size_t v21; // r11
  __int64 v22; // r8
  __int64 v23; // rax
  char *v24; // r9
  signed __int64 v25; // rbx
  __int64 v26; // rax
  void **v27; // rdi
  const __m128i *v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  char *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  __int8 v36; // r8
  char *v37; // rsi
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // r10
  __m128i *v40; // rax
  __int64 v41; // rax
  size_t v42; // r12
  size_t v43; // r13
  size_t v44; // r9
  char *v45; // rsi
  size_t v46; // rax
  size_t v47; // r12
  __int64 v48; // rsi
  int v49; // ecx
  int v50; // ebp
  __int64 v51; // r8
  unsigned __int8 v52; // bp
  __int64 *v53; // r8
  __int64 *v54; // r12
  __int64 v55; // r15
  __int64 j; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r13
  __int64 v61; // rax
  char *v62; // rsi
  size_t v63; // rax
  int v65; // [rsp+Ch] [rbp-FCh]
  __int64 src; // [rsp+10h] [rbp-F8h]
  void *srcc; // [rsp+10h] [rbp-F8h]
  void *srce; // [rsp+10h] [rbp-F8h]
  void *srca; // [rsp+10h] [rbp-F8h]
  char *srcb; // [rsp+10h] [rbp-F8h]
  void *srcg; // [rsp+10h] [rbp-F8h]
  void *srcd; // [rsp+10h] [rbp-F8h]
  void *srcf; // [rsp+10h] [rbp-F8h]
  void *v74; // [rsp+18h] [rbp-F0h]
  void *v75; // [rsp+18h] [rbp-F0h]
  void *v76; // [rsp+18h] [rbp-F0h]
  __int8 v77; // [rsp+20h] [rbp-E8h]
  size_t v78; // [rsp+20h] [rbp-E8h]
  size_t v79; // [rsp+20h] [rbp-E8h]
  __int64 v80; // [rsp+28h] [rbp-E0h]
  signed int v81; // [rsp+30h] [rbp-D8h]
  unsigned int v82; // [rsp+34h] [rbp-D4h]
  unsigned __int64 v85; // [rsp+50h] [rbp-B8h]
  __int64 v86; // [rsp+58h] [rbp-B0h]
  void *v87; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v88; // [rsp+68h] [rbp-A0h]
  void *v89; // [rsp+80h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-80h]
  void *ptr; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-60h]
  _BYTE v93[5]; // [rsp+C3h] [rbp-45h] BYREF
  _QWORD v94[8]; // [rsp+C8h] [rbp-40h] BYREF

  v94[0] = __readfsqword(0x28u);
  v85 = a2 + a4;
  v6 = a1[1];
  v7 = *(_DWORD *)(v6 + 72);
  v81 = *(_DWORD *)(v6 + 68);
  if ( v81 <= v7 )
  {
    for ( i = *(_DWORD *)(v6 + 68); ; i = *(_DWORD *)(v6 + 68) )
    {
      v9 = (__int64 *)(a1[2] + ((__int64)(v81 - i) << 6));
      v10 = (__m128i *)sub_5168B0((unsigned __int64 **)v9, a2);
      if ( v10 == (__m128i *)(*v9 + 33 * v9[1]) )
        goto LABEL_34;
      if ( v10->m128i_i64[0] < a2 )
      {
        sub_51C400(*a1, a2, v81, v10[1].m128i_i64[0], 3u, 0);
        v10 = (__m128i *)sub_5168B0((unsigned __int64 **)v9, a2);
      }
      v11 = sub_5168B0((unsigned __int64 **)v9, v85);
      if ( v11 != (unsigned __int64 *)(*v9 + 33 * v9[1]) && *v11 < v85 )
      {
        sub_51C400(*a1, v85, v81, v10[1].m128i_i64[0], 3u, 0);
        v11 = sub_5168B0((unsigned __int64 **)v9, v85);
        v10 = (__m128i *)sub_5168B0((unsigned __int64 **)v9, a2);
      }
      v87 = nullptr;
      v88 = 0;
      if ( v10 == (__m128i *)v11 )
      {
        v12 = nullptr;
        v13 = 0;
        v14 = nullptr;
        goto LABEL_11;
      }
      v27 = &v87;
      v86 = 0xF83E0F83E0F83E1LL * ((char *)v11 - (char *)v10);
      v87 = (void *)qvector_reserve(&v87, 0, v86, 33);
      v28 = v10;
      v29 = a3 - a2;
      v82 = (unsigned __int8)(v81 - *(_BYTE *)(a1[1] + 68LL) + 97);
      do
      {
        if ( !a5 )
        {
          v33 = v82;
          v27 = (void **)(a1 + 6);
          BYTE1(v33) = BYTE1(v82) | 1;
          sub_7BE850(a1 + 6, *a1, v28->m128i_i64[0], v33);
        }
        v34 = v88;
        v35 = v28[1].m128i_i64[0];
        v36 = v28[1].m128i_i8[8];
        v37 = (char *)v87;
        v38 = v29 + v28->m128i_i64[0];
        v39 = v29 + v28->m128i_i64[1];
        if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
        {
          v27 = &v87;
          v80 = v28[1].m128i_i64[0];
          v77 = v28[1].m128i_i8[8];
          v74 = (void *)(v29 + v28->m128i_i64[1]);
          srcc = (void *)(v29 + v28->m128i_i64[0]);
          v87 = (void *)qvector_reserve(&v87, v87, v88 + 1, 33);
          v37 = (char *)v87;
          v35 = v80;
          v34 = v88;
          v36 = v77;
          v39 = (unsigned __int64)v74;
          v38 = (unsigned __int64)srcc;
        }
        v28 = (const __m128i *)((char *)v28 + 33);
        v30 = 32 * v34;
        v31 = &v37[33 * v34];
        *(_QWORD *)v31 = v38;
        *((_QWORD *)v31 + 1) = v39;
        *((_QWORD *)v31 + 2) = v35;
        v31[24] = v36;
        v31[32] = 1;
        v32 = v88 + 1;
        *(_QWORD *)&v88 = v88 + 1;
      }
      while ( v11 != (unsigned __int64 *)v28 );
      if ( v10 >= (__m128i *)v11 )
      {
        v14 = (__m128i *)v87;
        v13 = 33 * v32;
        v12 = (const __m128i *)((char *)v87 + 33 * v32);
        goto LABEL_11;
      }
      v89 = nullptr;
      *(_OWORD *)n = 0;
      if ( (unsigned __int8)must_journal(v27, v37, v30) )
      {
        v40 = v10;
        if ( (((_BYTE)v28 - (_BYTE)v10) & 1) == 0
          || (v40 = (__m128i *)((char *)v10 + 33), v10[2].m128i_i8[0] = 1, v28 != (const __m128i *)&v10[2].m128i_i8[1]) )
        {
          do
          {
            v40[2].m128i_i8[0] = 1;
            v40 = (__m128i *)((char *)v40 + 66);
            v40[-1].m128i_i8[15] = 1;
          }
          while ( v28 != v40 );
        }
        v41 = pack_dd(v93, v94, (unsigned int)v81) - (_QWORD)v93;
        v42 = v41;
        if ( v41 )
          break;
      }
LABEL_56:
      v47 = n[0];
      ptr = nullptr;
      v92 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v92 + 1) = v47;
        memcpy(ptr, v89, v47);
        *(_QWORD *)&v92 = v47;
      }
      sub_51D1A0((__int64 *)&ptr, v9, (__int64)v10, v10, v28, 0xBDu);
      if ( ptr )
      {
        *(_QWORD *)&v92 = 0;
        qfree(ptr);
      }
      memmove(v10, v28, *v9 + 33 * v9[1] - (_QWORD)v28);
      v9[1] -= v86;
      if ( v89 )
      {
        n[0] = 0;
        qfree(v89);
      }
      v14 = (__m128i *)v87;
      v13 = 33 * v88;
      v12 = (const __m128i *)((char *)v87 + 33 * v88);
LABEL_11:
      v9[3] = *v9 + 33 * v9[1];
      v17 = sub_5168B0((unsigned __int64 **)v9, a3);
      if ( v14 < v12 )
      {
        v89 = nullptr;
        *(_OWORD *)n = 0;
        if ( (unsigned __int8)must_journal(v9, a3, v15) )
        {
          v18 = pack_dd(v93, v94, (unsigned int)v81) - (_QWORD)v93;
          v19 = v18;
          if ( v18 )
          {
            v20 = n[0];
            v21 = n[0] + v18;
            if ( __CFADD__(n[0], v18) )
            {
              if ( n[0] > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( n[0] != 0x7FFFFFFFFFFFFFFFLL )
                  n[0] = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_18;
              }
              v21 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v62 = (char *)v89;
            v63 = n[0];
            if ( n[1] < v21 )
            {
              v79 = n[0];
              v76 = (void *)v19;
              srcf = (void *)v21;
              v89 = (void *)qvector_reserve(&v89, v89, v21, 1);
              v62 = (char *)v89;
              v63 = n[0];
              v20 = v79;
              v19 = (size_t)v76;
              v21 = (size_t)srcf;
            }
            v78 = v20;
            v75 = (void *)v19;
            srcg = (void *)v21;
            memset(&v62[v63], 0, v21 - v63);
            v19 = (size_t)v75;
            v20 = v78;
            n[0] = (size_t)srcg;
LABEL_18:
            memcpy((char *)v89 + v20, v93, v19);
          }
        }
        ptr = nullptr;
        v92 = 0;
        if ( n[0] )
        {
          srca = (void *)n[0];
          ptr = (void *)qalloc_or_throw(n[0]);
          *((_QWORD *)&v92 + 1) = srca;
          memcpy(ptr, v89, (size_t)srca);
          *(_QWORD *)&v92 = srca;
        }
        sub_51D1A0((__int64 *)&ptr, v9, (__int64)v17, v14, v12, 0xBCu);
        if ( ptr )
        {
          *(_QWORD *)&v92 = 0;
          qfree(ptr);
        }
        v22 = 0xF83E0F83E0F83E1LL * v13;
        if ( 0xF83E0F83E0F83E1LL * v13 )
        {
          v23 = v9[1];
          v24 = (char *)v17 - *v9;
          if ( v9[2] < (unsigned __int64)(v22 + v23) )
          {
            srcb = (char *)v17 - *v9;
            v61 = qvector_reserve(v9, *v9, v22 + v23, 33);
            v24 = srcb;
            v22 = 0xF83E0F83E0F83E1LL * v13;
            *v9 = v61;
            v17 = (unsigned __int64 *)&srcb[v61];
            v23 = v9[1];
          }
          src = v22;
          v25 = (char *)v12 - (char *)v14;
          memmove((char *)v17 + v13, v17, 33 * v23 - (_QWORD)v24);
          v26 = 0;
          do
          {
            *(__m128i *)((char *)v17 + v26) = _mm_loadu_si128((__m128i *)((char *)v14 + v26));
            *(__m128i *)((char *)v17 + v26 + 16) = _mm_loadu_si128((__m128i *)((char *)v14 + v26 + 16));
            *((_BYTE *)v17 + v26 + 32) = v14[2].m128i_i8[v26];
            v26 += 33;
          }
          while ( v25 != v26 );
          v9[1] += src;
        }
        if ( v89 )
        {
          n[0] = 0;
          qfree(v89);
        }
        v14 = (__m128i *)v87;
        v16 = *v9 + 33 * v9[1];
      }
      v9[3] = v16;
      if ( v14 )
      {
        *(_QWORD *)&v88 = 0;
        qfree(v14);
      }
LABEL_34:
      v6 = a1[1];
      ++v81;
      v7 = *(_DWORD *)(v6 + 72);
      if ( v7 < v81 )
        goto LABEL_64;
    }
    v43 = n[0];
    v44 = n[0] + v41;
    if ( __CFADD__(n[0], v41) )
    {
      if ( n[0] > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( n[0] != 0x7FFFFFFFFFFFFFFFLL )
          n[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_55;
      }
      v44 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v45 = (char *)v89;
    v46 = n[0];
    if ( n[1] < v44 )
    {
      srcd = (void *)v44;
      v89 = (void *)qvector_reserve(&v89, v89, v44, 1);
      v45 = (char *)v89;
      v46 = n[0];
      v44 = (size_t)srcd;
    }
    srce = (void *)v44;
    memset(&v45[v46], 0, v44 - v46);
    n[0] = (size_t)srce;
LABEL_55:
    memcpy((char *)v89 + v43, v93, v42);
    goto LABEL_56;
  }
LABEL_64:
  if ( a1[6] != -1 )
  {
    v48 = a1[3];
    if ( v48 )
    {
      v49 = *(_DWORD *)(v6 + 68);
      if ( v48 != v7 + 1 - v49 )
        sub_514510();
      if ( v49 <= *(_DWORD *)(v6 + 72) )
      {
        v65 = *(_DWORD *)(v6 + 68);
        do
        {
          v50 = v65 - *(_DWORD *)(v6 + 68);
          v51 = v50;
          v52 = v50 + 97;
          v53 = (__int64 *)(a1[2] + (v51 << 6));
          ptr = (void *)a1[6];
          v54 = v53;
          v55 = qword_2CCB598;
          for ( j = v53[5]; j; v54[5] = j )
          {
            sub_7BE850(&ptr, v55, *(_QWORD *)(v54[4] + 8 * j - 8), v52);
            v57 = v54[5];
            if ( !v57 )
              break;
            j = v57 - 1;
          }
          v58 = *v54;
          v59 = *v54;
          if ( v54[1] )
          {
            do
            {
              if ( *(_BYTE *)(v59 + 32) )
              {
                if ( !(unsigned __int8)sub_5143E0((_QWORD *)v59, (__int64)ptr, v52) )
                {
                  if ( !under_debugger )
                    interr(1173);
                  BUG();
                }
                *(_BYTE *)(v59 + 32) = 0;
                v58 = *v54;
              }
              v59 += 33;
            }
            while ( v59 != v58 + 33 * v54[1] );
          }
          v6 = a1[1];
          ++v65;
        }
        while ( v65 <= *(_DWORD *)(v6 + 72) );
      }
    }
  }
  return v94[0] - __readfsqword(0x28u);
}
