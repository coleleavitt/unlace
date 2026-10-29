void __fastcall sub_10DA210(__int64 a1, char *a2, size_t a3)
{
  char *v3; // rbp
  bool v5; // zf
  unsigned int v6; // r15d
  void **v7; // rdi
  size_t v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *v13; // rsi
  __m128i si128; // xmm1
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rdx
  void **v23; // rsi
  __m128i *v24; // rdi
  __int64 v25; // r14
  size_t v26; // rax
  __int64 v27; // r12
  __m128i *v28; // rsi
  size_t v29; // r13
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rbp
  void *v33; // rdx
  __int64 v34; // rax
  _BYTE *v35; // rdx
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rcx
  __m128i v40; // xmm5
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i *v43; // rbp
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  __m128i *v46; // r12
  size_t v47; // rax
  __m128i v48; // xmm3
  __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // rax
  __m128i v52; // xmm4
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // r15
  size_t v57; // r14
  _BYTE *v58; // r12
  __int64 v59; // rax
  _BYTE *v60; // rdx
  _BYTE *v61; // rsi
  __int64 v62; // rdx
  bool v63; // [rsp+0h] [rbp-E8h]
  size_t n; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+8h] [rbp-E0h]
  __int64 s2; // [rsp+10h] [rbp-D8h]
  void **s2a; // [rsp+10h] [rbp-D8h]
  __m128i v68; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+40h] [rbp-A8h]
  __int128 v71; // [rsp+50h] [rbp-98h] BYREF
  __int64 v72; // [rsp+60h] [rbp-88h]
  __int128 v73; // [rsp+70h] [rbp-78h] BYREF
  __int64 v74; // [rsp+80h] [rbp-68h]
  void *v75[2]; // [rsp+90h] [rbp-58h] BYREF
  __m128i v76[4]; // [rsp+A0h] [rbp-48h] BYREF

  v3 = a2;
  if ( a3 != j__strlen(&byte_22CD811) || a3 && (a2 = (char *)&byte_22CD811, memcmp(v3, &byte_22CD811, a3)) )
  {
    v5 = *(_DWORD *)(a1 + 16) == 4;
    v6 = 1;
    v7 = (void **)",";
    v69 = 0;
    if ( v5 )
      v6 = 16;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v8 = j__strlen(",");
    v63 = 0;
    if ( a3 >= v8 )
    {
      v63 = 1;
      if ( v8 )
      {
        a2 = ",";
        v7 = (void **)&v3[a3 - v8];
        v63 = memcmp(v7, ",", v8) == 0;
      }
    }
    v68.m128i_i64[0] = (__int64)v3;
    v68.m128i_i64[1] = a3;
    if ( !a3 )
      goto LABEL_24;
    do
    {
      sub_103B480(v75, v68.m128i_i64, (__int64)",", 1);
      v13 = v75[0];
      v7 = v75;
      si128 = _mm_load_si128(v76);
      v75[0] = v76;
      v68 = si128;
      sub_10B5070(v75, v13, (__int64)&v13[(unsigned __int64)v75[1]]);
      a2 = *((char **)&v71 + 1);
      if ( *((_QWORD *)&v71 + 1) == v72 )
      {
        sub_A5EC30((void ***)&v71, *((const __m128i **)&v71 + 1), (__m128i *)v75);
        v7 = (void **)v75[0];
        if ( v75[0] != v76 )
          operator delete(v75[0]);
      }
      else
      {
        **((_QWORD **)&v71 + 1) = *((_QWORD *)&v71 + 1) + 16LL;
        if ( v75[0] == v76 )
        {
          *((__m128i *)a2 + 1) = _mm_load_si128(v76);
        }
        else
        {
          *(void **)a2 = v75[0];
          *((_QWORD *)a2 + 2) = v76[0].m128i_i64[0];
        }
        *((void **)a2 + 1) = v75[1];
        *((_QWORD *)&v71 + 1) += 32LL;
      }
    }
    while ( v68.m128i_i64[1] );
    n = *((_QWORD *)&v71 + 1);
    v15 = v71;
    v16 = (__int64)(*((_QWORD *)&v71 + 1) - v71) >> 7;
    v17 = (__int64)(*((_QWORD *)&v71 + 1) - v71) >> 5;
    s2 = v16;
    if ( v16 > 0 )
    {
      v18 = v71;
      v19 = v71 + (v16 << 7);
      while ( 1 )
      {
        a2 = "-Xclang";
        v7 = (void **)v18;
        if ( !sub_990D60(v18, "-Xclang") )
          break;
        v20 = v18;
        v18 += 32;
        a2 = "-Xclang";
        v7 = (void **)v18;
        if ( !sub_990D60(v18, "-Xclang") )
          break;
        v18 = v20 + 64;
        a2 = "-Xclang";
        v7 = (void **)(v20 + 64);
        if ( !sub_990D60(v20 + 64, "-Xclang") )
          break;
        v18 = v20 + 96;
        a2 = "-Xclang";
        v7 = (void **)(v20 + 96);
        if ( !sub_990D60(v20 + 96, "-Xclang") )
          break;
        v18 = v20 + 128;
        if ( v20 + 128 == v19 )
        {
          v17 = (__int64)(n - v18) >> 5;
          goto LABEL_44;
        }
      }
      if ( n == v18 )
        goto LABEL_48;
      goto LABEL_23;
    }
    v18 = v71;
LABEL_44:
    if ( v17 != 2 )
    {
      if ( v17 != 3 )
      {
        v9 = v17 - 1;
        if ( v9 )
        {
LABEL_61:
          v18 = n;
          goto LABEL_62;
        }
        goto LABEL_60;
      }
      a2 = "-Xclang";
      v7 = (void **)v18;
      if ( !sub_990D60(v18, "-Xclang") )
        goto LABEL_71;
      v18 += 32;
    }
    a2 = "-Xclang";
    v7 = (void **)v18;
    if ( !sub_990D60(v18, "-Xclang") )
      goto LABEL_71;
    v18 += 32;
LABEL_60:
    a2 = "-Xclang";
    v7 = (void **)v18;
    if ( sub_990D60(v18, "-Xclang") )
      goto LABEL_61;
LABEL_71:
    if ( n != v18 )
    {
LABEL_23:
      v6 = 4;
LABEL_24:
      v21 = sub_10E2140(v7, a2, v9, v10, v11, v12);
      v22 = (__int64)(*((_QWORD *)&v71 + 1) - v71) >> 5;
      if ( !v22 )
        std::__throw_out_of_range_fmt("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
      v39 = 32 * (v22 - 1);
      s2a = *(void ***)(v71 + v39);
      na = *(_QWORD *)(v71 + v39 + 8);
      if ( v22 != 1 )
      {
        sub_219B1C0(&v73, v21, *(_QWORD *)(v71 + v39 - 32), *(_QWORD *)(v71 + v39 - 32 + 8), s2a, na);
        v40 = _mm_load_si128(&v69);
        v76[0].m128i_i64[0] = v70;
        *(__m128i *)v75 = v40;
        v41 = *((_QWORD *)&v73 + 1);
        v69.m128i_i64[0] = v73;
        v73 = 0;
        v69.m128i_i64[1] = v41;
        v42 = v74;
        v74 = 0;
        v70 = v42;
        sub_990CF0((void ***)v75);
        sub_990CF0((void ***)&v73);
      }
      v43 = (__m128i *)v69.m128i_i64[1];
      v44 = v69.m128i_i64[0];
      if ( v69.m128i_i64[1] != v69.m128i_i64[0] )
        goto LABEL_78;
      v47 = j__strlen(&byte_22CD811);
      v23 = (void **)v21;
      sub_219B1C0(&v73, v21, s2a, na, &byte_22CD811, v47);
      v48 = _mm_load_si128(&v69);
      v76[0].m128i_i64[0] = v70;
      *(__m128i *)v75 = v48;
      v49 = *((_QWORD *)&v73 + 1);
      v69.m128i_i64[0] = v73;
      v73 = 0;
      v69.m128i_i64[1] = v49;
      v50 = v74;
      v74 = 0;
      v70 = v50;
      sub_990CF0((void ***)v75);
      sub_990CF0((void ***)&v73);
      v43 = (__m128i *)v69.m128i_i64[1];
      v44 = v69.m128i_i64[0];
      if ( v69.m128i_i64[1] != v69.m128i_i64[0] )
        goto LABEL_78;
      if ( v63 && *((_QWORD *)&v71 + 1) != (_QWORD)v71 )
      {
        v59 = sub_22598C0(&v73, v21);
        v60 = *(_BYTE **)(v59 + 32);
        if ( (unsigned __int64)v60 >= *(_QWORD *)(v59 + 24) )
        {
          sub_2257CD0(v59, 10);
        }
        else
        {
          *(_QWORD *)(v59 + 32) = v60 + 1;
          *v60 = 10;
        }
LABEL_38:
        sub_990CF0((void ***)&v71);
        sub_990CF0((void ***)&v69);
        return;
      }
      v24 = (__m128i *)"=";
      v51 = j__strlen("=");
      if ( na < v51 || v51 && (v23 = (void **)"=", v24 = (__m128i *)((char *)s2a + na - v51), memcmp(v24, "=", v51)) )
      {
        v23 = (void **)v21;
        sub_21992A0(&v73, v21, s2a, na, v6, 640);
        v52 = _mm_load_si128(&v69);
        v76[0].m128i_i64[0] = v70;
        *(__m128i *)v75 = v52;
        v53 = *((_QWORD *)&v73 + 1);
        v69.m128i_i64[0] = v73;
        v73 = 0;
        v69.m128i_i64[1] = v53;
        v54 = v74;
        v74 = 0;
        v70 = v54;
        sub_990CF0((void ***)v75);
        sub_990CF0((void ***)&v73);
        sub_FB23A0((__int64)&v73);
        v55 = *((_QWORD *)&v73 + 1);
        v56 = v73;
        if ( *((_QWORD *)&v73 + 1) != (_QWORD)v73 )
        {
          if ( na )
          {
            do
            {
              v57 = *(_QWORD *)(v56 + 8);
              if ( na <= v57 )
              {
                v58 = *(_BYTE **)v56;
                v23 = s2a;
                if ( !memcmp(*(const void **)v56, s2a, na) )
                {
                  v75[0] = v76;
                  sub_10B5070(v75, v58, (__int64)&v58[v57]);
                  v23 = v75;
                  sub_A5EF20((__int64)&v69, (__m128i *)v75);
                  if ( v75[0] != v76 )
                    operator delete(v75[0]);
                }
              }
              v56 += 32;
            }
            while ( v55 != v56 );
          }
          else
          {
            do
            {
              v61 = *(_BYTE **)v56;
              v62 = *(_QWORD *)(v56 + 8);
              v75[0] = v76;
              sub_10B5070(v75, v61, (__int64)&v61[v62]);
              v23 = v75;
              sub_A5EF20((__int64)&v69, (__m128i *)v75);
              if ( v75[0] != v76 )
                operator delete(v75[0]);
              v56 += 32;
            }
            while ( v55 != v56 );
          }
        }
        v24 = (__m128i *)&v73;
        sub_990CF0((void ***)&v73);
        v43 = (__m128i *)v69.m128i_i64[1];
        v44 = v69.m128i_i64[0];
      }
      if ( v43 != (__m128i *)v44 )
      {
LABEL_78:
        _BitScanReverse64(&v45, ((__int64)v43->m128i_i64 - v44) >> 5);
        sub_10D9970(v44, v43, 2LL * (int)(63 - (v45 ^ 0x3F)));
        if ( (__int64)v43->m128i_i64 - v44 <= 512 )
        {
          v23 = (void **)v43;
          v24 = (__m128i *)v44;
          sub_10B59F0(v44, (__int64)v43);
        }
        else
        {
          v46 = (__m128i *)(v44 + 512);
          v24 = (__m128i *)v44;
          v23 = (void **)(v44 + 512);
          sub_10B59F0(v44, v44 + 512);
          if ( (__m128i *)(v44 + 512) != v43 )
          {
            do
            {
              v24 = v46;
              v46 += 2;
              sub_10B5710(v24);
            }
            while ( v43 != v46 );
          }
        }
      }
      v25 = sub_22598C0(v24, v23);
      v26 = j__strlen("\n");
      v27 = v69.m128i_i64[1];
      v28 = v76;
      v29 = v26;
      v75[0] = v76;
      v75[1] = nullptr;
      v76[0].m128i_i8[0] = 0;
      if ( v69.m128i_i64[1] == v69.m128i_i64[0] )
      {
        v33 = nullptr;
      }
      else
      {
        v30 = v26 * (((v69.m128i_i64[1] - v69.m128i_i64[0]) >> 5) - 1);
        v31 = v69.m128i_i64[0];
        do
        {
          v30 += *(_QWORD *)(v31 + 8);
          v31 += 32;
        }
        while ( v69.m128i_i64[1] != v31 );
        v32 = v69.m128i_i64[0] + 32;
        sub_971EF0((__int64)v75, v30);
        sub_9CA820(v75, *(_BYTE **)(v32 - 32), *(_QWORD *)(v32 - 24));
        while ( v27 != v32 )
        {
          if ( v29 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v75[1] )
            std::__throw_length_error("basic_string::append");
          v32 += 32;
          sub_9CA820(v75, "\n", v29);
          sub_9CA820(v75, *(_BYTE **)(v32 - 32), *(_QWORD *)(v32 - 24));
        }
        v33 = v75[1];
        v28 = (__m128i *)v75[0];
      }
      v34 = sub_22581D0(v25, v28, v33);
      v35 = *(_BYTE **)(v34 + 32);
      if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 24) )
      {
        sub_2257CD0(v34, 10);
      }
      else
      {
        *(_QWORD *)(v34 + 32) = v35 + 1;
        *v35 = 10;
      }
      if ( v75[0] != v76 )
        operator delete(v75[0]);
      goto LABEL_38;
    }
LABEL_62:
    if ( s2 > 0 )
    {
LABEL_48:
      v36 = v15 + (s2 << 7);
      do
      {
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( !sub_990D60(v15, "-cc1") )
          goto LABEL_54;
        v37 = v15;
        v15 += 32;
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( !sub_990D60(v15, "-cc1") )
          goto LABEL_54;
        v15 = v37 + 64;
        a2 = "-cc1";
        v7 = (void **)(v37 + 64);
        if ( !sub_990D60(v37 + 64, "-cc1") )
          goto LABEL_54;
        v15 = v37 + 96;
        a2 = "-cc1";
        v7 = (void **)(v37 + 96);
        if ( !sub_990D60(v37 + 96, "-cc1") )
          goto LABEL_54;
        v15 = v37 + 128;
      }
      while ( v37 + 128 != v36 );
    }
    v38 = (v18 - v15) >> 5;
    if ( v38 != 2 )
    {
      if ( v38 != 3 )
      {
        if ( v38 != 1 )
          goto LABEL_24;
LABEL_69:
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( sub_990D60(v15, "-cc1") )
          goto LABEL_24;
        goto LABEL_54;
      }
      a2 = "-cc1";
      v7 = (void **)v15;
      if ( !sub_990D60(v15, "-cc1") )
      {
LABEL_54:
        if ( v15 == v18 )
          goto LABEL_24;
        goto LABEL_23;
      }
      v15 += 32;
    }
    a2 = "-cc1";
    v7 = (void **)v15;
    if ( sub_990D60(v15, "-cc1") )
    {
      v15 += 32;
      goto LABEL_69;
    }
    goto LABEL_54;
  }
}

