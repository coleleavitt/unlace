void __fastcall sub_10FDF50(__int64 a1, char *a2, size_t a3)
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
  __int64 v23; // r14
  size_t v24; // rax
  __int64 v25; // r12
  __m128i *v26; // rsi
  size_t v27; // r13
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbp
  void *v31; // rdx
  __int64 v32; // rax
  _BYTE *v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // rax
  __int64 v37; // rcx
  __m128i v38; // xmm5
  __int64 v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rbp
  __int64 v42; // r14
  unsigned __int64 v43; // rax
  __m128i *v44; // r12
  __m128i *v45; // rdi
  size_t v46; // rax
  __m128i v47; // xmm3
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  __m128i v51; // xmm4
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // r15
  size_t v56; // r14
  _BYTE *v57; // r12
  __int64 v58; // rax
  _BYTE *v59; // rdx
  _BYTE *v60; // rsi
  __int64 v61; // rdx
  bool v62; // [rsp+0h] [rbp-E8h]
  size_t n; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+8h] [rbp-E0h]
  __int64 s2; // [rsp+10h] [rbp-D8h]
  char *s2a; // [rsp+10h] [rbp-D8h]
  __m128i v67; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v68; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+40h] [rbp-A8h]
  __int128 v70; // [rsp+50h] [rbp-98h] BYREF
  __int64 v71; // [rsp+60h] [rbp-88h]
  __int128 v72; // [rsp+70h] [rbp-78h] BYREF
  __int64 v73; // [rsp+80h] [rbp-68h]
  void *v74[2]; // [rsp+90h] [rbp-58h] BYREF
  __m128i v75[4]; // [rsp+A0h] [rbp-48h] BYREF

  v3 = a2;
  if ( a3 != j__strlen(&byte_22F0C30) || a3 && (a2 = (char *)&byte_22F0C30, memcmp(v3, &byte_22F0C30, a3)) )
  {
    v5 = *(_DWORD *)(a1 + 16) == 4;
    v6 = 1;
    v7 = (void **)",";
    v68 = 0;
    if ( v5 )
      v6 = 16;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v8 = j__strlen(",");
    v62 = 0;
    if ( a3 >= v8 )
    {
      v62 = 1;
      if ( v8 )
      {
        a2 = ",";
        v7 = (void **)&v3[a3 - v8];
        v62 = memcmp(v7, ",", v8) == 0;
      }
    }
    v67.m128i_i64[0] = (__int64)v3;
    v67.m128i_i64[1] = a3;
    if ( !a3 )
      goto LABEL_24;
    do
    {
      sub_105F1C0(v74, v67.m128i_i64, (__int64)",", 1);
      v13 = v74[0];
      v7 = v74;
      si128 = _mm_load_si128(v75);
      v74[0] = v75;
      v67 = si128;
      sub_10D8DB0(v74, v13, (__int64)&v13[(unsigned __int64)v74[1]]);
      a2 = *((char **)&v70 + 1);
      if ( *((_QWORD *)&v70 + 1) == v71 )
      {
        sub_A82970((void ***)&v70, *((const __m128i **)&v70 + 1), (__m128i *)v74);
        v7 = (void **)v74[0];
        if ( v74[0] != v75 )
          operator delete(v74[0]);
      }
      else
      {
        **((_QWORD **)&v70 + 1) = *((_QWORD *)&v70 + 1) + 16LL;
        if ( v74[0] == v75 )
        {
          *((__m128i *)a2 + 1) = _mm_load_si128(v75);
        }
        else
        {
          *(void **)a2 = v74[0];
          *((_QWORD *)a2 + 2) = v75[0].m128i_i64[0];
        }
        *((void **)a2 + 1) = v74[1];
        *((_QWORD *)&v70 + 1) += 32LL;
      }
    }
    while ( v67.m128i_i64[1] );
    n = *((_QWORD *)&v70 + 1);
    v15 = v70;
    v16 = (__int64)(*((_QWORD *)&v70 + 1) - v70) >> 7;
    v17 = (__int64)(*((_QWORD *)&v70 + 1) - v70) >> 5;
    s2 = v16;
    if ( v16 > 0 )
    {
      v18 = v70;
      v19 = v70 + (v16 << 7);
      while ( 1 )
      {
        a2 = "-Xclang";
        v7 = (void **)v18;
        if ( !sub_9B4AA0(v18, "-Xclang") )
          break;
        v20 = v18;
        v18 += 32;
        a2 = "-Xclang";
        v7 = (void **)v18;
        if ( !sub_9B4AA0(v18, "-Xclang") )
          break;
        v18 = v20 + 64;
        a2 = "-Xclang";
        v7 = (void **)(v20 + 64);
        if ( !sub_9B4AA0(v20 + 64, "-Xclang") )
          break;
        v18 = v20 + 96;
        a2 = "-Xclang";
        v7 = (void **)(v20 + 96);
        if ( !sub_9B4AA0(v20 + 96, "-Xclang") )
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
    v18 = v70;
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
      if ( !sub_9B4AA0(v18, "-Xclang") )
        goto LABEL_71;
      v18 += 32;
    }
    a2 = "-Xclang";
    v7 = (void **)v18;
    if ( !sub_9B4AA0(v18, "-Xclang") )
      goto LABEL_71;
    v18 += 32;
LABEL_60:
    a2 = "-Xclang";
    v7 = (void **)v18;
    if ( sub_9B4AA0(v18, "-Xclang") )
      goto LABEL_61;
LABEL_71:
    if ( n != v18 )
    {
LABEL_23:
      v6 = 4;
LABEL_24:
      v21 = sub_1105E80(v7, a2, v9, v10, v11, v12);
      v22 = (__int64)(*((_QWORD *)&v70 + 1) - v70) >> 5;
      if ( !v22 )
        std::__throw_out_of_range_fmt(
          "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
          0xFFFFFFFFFFFFFFFFLL,
          0);
      v37 = 32 * (v22 - 1);
      s2a = *(char **)(v70 + v37);
      na = *(_QWORD *)(v70 + v37 + 8);
      if ( v22 != 1 )
      {
        sub_21BEF00(&v72, v21, *(_QWORD *)(v70 + v37 - 32), *(_QWORD *)(v70 + v37 - 32 + 8), s2a, na);
        v38 = _mm_load_si128(&v68);
        v75[0].m128i_i64[0] = v69;
        *(__m128i *)v74 = v38;
        v39 = *((_QWORD *)&v72 + 1);
        v68.m128i_i64[0] = v72;
        v72 = 0;
        v68.m128i_i64[1] = v39;
        v40 = v73;
        v73 = 0;
        v69 = v40;
        sub_9B4A30((void ***)v74);
        sub_9B4A30((void ***)&v72);
      }
      v41 = (__m128i *)v68.m128i_i64[1];
      v42 = v68.m128i_i64[0];
      if ( v68.m128i_i64[1] != v68.m128i_i64[0] )
        goto LABEL_78;
      v46 = j__strlen(&byte_22F0C30);
      sub_21BEF00(&v72, v21, s2a, na, &byte_22F0C30, v46);
      v47 = _mm_load_si128(&v68);
      v75[0].m128i_i64[0] = v69;
      *(__m128i *)v74 = v47;
      v48 = *((_QWORD *)&v72 + 1);
      v68.m128i_i64[0] = v72;
      v72 = 0;
      v68.m128i_i64[1] = v48;
      v49 = v73;
      v73 = 0;
      v69 = v49;
      sub_9B4A30((void ***)v74);
      sub_9B4A30((void ***)&v72);
      v41 = (__m128i *)v68.m128i_i64[1];
      v42 = v68.m128i_i64[0];
      if ( v68.m128i_i64[1] != v68.m128i_i64[0] )
        goto LABEL_78;
      if ( v62 && *((_QWORD *)&v70 + 1) != (_QWORD)v70 )
      {
        v58 = sub_227D600();
        v59 = *(_BYTE **)(v58 + 32);
        if ( (unsigned __int64)v59 >= *(_QWORD *)(v58 + 24) )
        {
          sub_227BA10(v58, 10);
        }
        else
        {
          *(_QWORD *)(v58 + 32) = v59 + 1;
          *v59 = 10;
        }
LABEL_38:
        sub_9B4A30((void ***)&v70);
        sub_9B4A30((void ***)&v68);
        return;
      }
      v50 = j__strlen("=");
      if ( na < v50 || v50 && memcmp(&s2a[na - v50], "=", v50) )
      {
        sub_21BCFE0(&v72, v21, s2a, na, v6, 640);
        v51 = _mm_load_si128(&v68);
        v75[0].m128i_i64[0] = v69;
        *(__m128i *)v74 = v51;
        v52 = *((_QWORD *)&v72 + 1);
        v68.m128i_i64[0] = v72;
        v72 = 0;
        v68.m128i_i64[1] = v52;
        v53 = v73;
        v73 = 0;
        v69 = v53;
        sub_9B4A30((void ***)v74);
        sub_9B4A30((void ***)&v72);
        sub_FD60E0((__int64)&v72);
        v54 = *((_QWORD *)&v72 + 1);
        v55 = v72;
        if ( *((_QWORD *)&v72 + 1) != (_QWORD)v72 )
        {
          if ( na )
          {
            do
            {
              v56 = *(_QWORD *)(v55 + 8);
              if ( na <= v56 )
              {
                v57 = *(_BYTE **)v55;
                if ( !memcmp(*(const void **)v55, s2a, na) )
                {
                  v74[0] = v75;
                  sub_10D8DB0(v74, v57, (__int64)&v57[v56]);
                  sub_A82C60((__int64)&v68, (__m128i *)v74);
                  if ( v74[0] != v75 )
                    operator delete(v74[0]);
                }
              }
              v55 += 32;
            }
            while ( v54 != v55 );
          }
          else
          {
            do
            {
              v60 = *(_BYTE **)v55;
              v61 = *(_QWORD *)(v55 + 8);
              v74[0] = v75;
              sub_10D8DB0(v74, v60, (__int64)&v60[v61]);
              sub_A82C60((__int64)&v68, (__m128i *)v74);
              if ( v74[0] != v75 )
                operator delete(v74[0]);
              v55 += 32;
            }
            while ( v54 != v55 );
          }
        }
        sub_9B4A30((void ***)&v72);
        v41 = (__m128i *)v68.m128i_i64[1];
        v42 = v68.m128i_i64[0];
      }
      if ( v41 != (__m128i *)v42 )
      {
LABEL_78:
        _BitScanReverse64(&v43, ((__int64)v41->m128i_i64 - v42) >> 5);
        sub_10FD6B0(v42, v41, 2LL * (int)(63 - (v43 ^ 0x3F)));
        if ( (__int64)v41->m128i_i64 - v42 <= 512 )
        {
          sub_10D9730(v42, (__int64)v41);
        }
        else
        {
          v44 = (__m128i *)(v42 + 512);
          sub_10D9730(v42, v42 + 512);
          if ( (__m128i *)(v42 + 512) != v41 )
          {
            do
            {
              v45 = v44;
              v44 += 2;
              sub_10D9450(v45);
            }
            while ( v41 != v44 );
          }
        }
      }
      v23 = sub_227D600();
      v24 = j__strlen("\n");
      v25 = v68.m128i_i64[1];
      v26 = v75;
      v27 = v24;
      v74[0] = v75;
      v74[1] = nullptr;
      v75[0].m128i_i8[0] = 0;
      if ( v68.m128i_i64[1] == v68.m128i_i64[0] )
      {
        v31 = nullptr;
      }
      else
      {
        v28 = v24 * (((v68.m128i_i64[1] - v68.m128i_i64[0]) >> 5) - 1);
        v29 = v68.m128i_i64[0];
        do
        {
          v28 += *(_QWORD *)(v29 + 8);
          v29 += 32;
        }
        while ( v68.m128i_i64[1] != v29 );
        v30 = v68.m128i_i64[0] + 32;
        sub_995C30((__int64)v74, v28);
        sub_9EE560(v74, *(_BYTE **)(v30 - 32), *(_QWORD *)(v30 - 24));
        while ( v25 != v30 )
        {
          if ( v27 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v74[1] )
            std::__throw_length_error("basic_string::append");
          v30 += 32;
          sub_9EE560(v74, "\n", v27);
          sub_9EE560(v74, *(_BYTE **)(v30 - 32), *(_QWORD *)(v30 - 24));
        }
        v31 = v74[1];
        v26 = (__m128i *)v74[0];
      }
      v32 = sub_227BF10(v23, v26, v31);
      v33 = *(_BYTE **)(v32 + 32);
      if ( (unsigned __int64)v33 >= *(_QWORD *)(v32 + 24) )
      {
        sub_227BA10(v32, 10);
      }
      else
      {
        *(_QWORD *)(v32 + 32) = v33 + 1;
        *v33 = 10;
      }
      if ( v74[0] != v75 )
        operator delete(v74[0]);
      goto LABEL_38;
    }
LABEL_62:
    if ( s2 > 0 )
    {
LABEL_48:
      v34 = v15 + (s2 << 7);
      do
      {
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( !sub_9B4AA0(v15, "-cc1") )
          goto LABEL_54;
        v35 = v15;
        v15 += 32;
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( !sub_9B4AA0(v15, "-cc1") )
          goto LABEL_54;
        v15 = v35 + 64;
        a2 = "-cc1";
        v7 = (void **)(v35 + 64);
        if ( !sub_9B4AA0(v35 + 64, "-cc1") )
          goto LABEL_54;
        v15 = v35 + 96;
        a2 = "-cc1";
        v7 = (void **)(v35 + 96);
        if ( !sub_9B4AA0(v35 + 96, "-cc1") )
          goto LABEL_54;
        v15 = v35 + 128;
      }
      while ( v35 + 128 != v34 );
    }
    v36 = (v18 - v15) >> 5;
    if ( v36 != 2 )
    {
      if ( v36 != 3 )
      {
        if ( v36 != 1 )
          goto LABEL_24;
LABEL_69:
        a2 = "-cc1";
        v7 = (void **)v15;
        if ( sub_9B4AA0(v15, "-cc1") )
          goto LABEL_24;
        goto LABEL_54;
      }
      a2 = "-cc1";
      v7 = (void **)v15;
      if ( !sub_9B4AA0(v15, "-cc1") )
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
    if ( sub_9B4AA0(v15, "-cc1") )
    {
      v15 += 32;
      goto LABEL_69;
    }
    goto LABEL_54;
  }
}
