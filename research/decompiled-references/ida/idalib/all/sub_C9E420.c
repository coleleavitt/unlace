__m128i *__fastcall sub_C9E420(__m128i *a1, __int64 a2, __int64 *a3)
{
  char *v5; // r15
  size_t v6; // rax
  char v7; // di
  size_t v8; // r8
  char *v9; // rcx
  size_t v10; // r14
  unsigned __int64 v11; // rdx
  char *v12; // rsi
  size_t v13; // r14
  __int8 *v14; // rcx
  __int64 v15; // r9
  __m128i *v16; // r15
  __m128i *v17; // rdx
  size_t v18; // rsi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r15
  __m128i *v22; // rdi
  size_t v23; // rsi
  unsigned __int64 v24; // rax
  size_t v25; // r8
  unsigned __int64 v26; // r9
  __int8 *v27; // rcx
  __m128i *v28; // rcx
  size_t v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  __int64 v33; // rax
  __m128i *v34; // rdi
  __m128i *v35; // rdi
  size_t v37; // r9
  size_t v38; // r10
  __m128i *v39; // r15
  __m128i *v40; // rdx
  unsigned __int64 v41; // rax
  size_t v42; // rsi
  unsigned __int64 v43; // r15
  int v44; // eax
  __int8 *v45; // rdi
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  __m128i v49; // xmm3
  __int8 *v50; // [rsp+0h] [rbp-148h]
  size_t v51; // [rsp+0h] [rbp-148h]
  unsigned __int64 v52; // [rsp+0h] [rbp-148h]
  size_t v53; // [rsp+0h] [rbp-148h]
  unsigned __int64 v54; // [rsp+0h] [rbp-148h]
  size_t v55; // [rsp+8h] [rbp-140h]
  size_t v56; // [rsp+8h] [rbp-140h]
  unsigned __int64 v57; // [rsp+8h] [rbp-140h]
  void *s1; // [rsp+10h] [rbp-138h] BYREF
  size_t v59; // [rsp+18h] [rbp-130h]
  __int64 v60; // [rsp+20h] [rbp-128h] BYREF
  void *s2; // [rsp+30h] [rbp-118h] BYREF
  size_t n; // [rsp+38h] [rbp-110h]
  _QWORD v63[2]; // [rsp+40h] [rbp-108h] BYREF
  void *v64; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-F0h]
  __m128i v66; // [rsp+60h] [rbp-E8h] BYREF
  void *v67; // [rsp+70h] [rbp-D8h] BYREF
  size_t v68; // [rsp+78h] [rbp-D0h]
  __m128i v69; // [rsp+80h] [rbp-C8h] BYREF
  void *v70; // [rsp+90h] [rbp-B8h] BYREF
  size_t v71; // [rsp+98h] [rbp-B0h]
  __m128i v72; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i *v73; // [rsp+B0h] [rbp-98h] BYREF
  size_t v74; // [rsp+B8h] [rbp-90h]
  __m128i v75; // [rsp+C0h] [rbp-88h] BYREF
  __m128i *v76; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-70h]
  __m128i v78; // [rsp+E0h] [rbp-68h] BYREF
  __m128i *v79; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-50h]
  __m128i v81[4]; // [rsp+100h] [rbp-48h] BYREF

  v79 = (__m128i *)sub_C9D8A0(a2, a3);
  sub_F785A0(&s1, &v79, a3 + 2183);
  v5 = *(char **)(a2 + 16);
  n = 0;
  s2 = v63;
  LOBYTE(v63[0]) = 0;
  if ( v5 )
  {
    v6 = strlen(v5);
    sub_99BDC0(&s2, 0, 0, v5, v6);
    if ( *(_BYTE *)(a2 + 24) )
    {
      v7 = *((char *)s2 + n - 1);
      if ( v7 == 42 )
      {
        v8 = 1;
        v9 = (char *)"*";
      }
      else
      {
        v8 = 2;
        v7 = 32;
        v9 = (char *)" *";
      }
      if ( 0x7FFFFFFFFFFFFFFFLL - n < v8 )
        goto LABEL_90;
      v10 = n + v8;
      if ( s2 == v63 )
        v11 = 15;
      else
        v11 = v63[0];
      if ( v10 > v11 )
      {
        sub_998B30((__int64)&s2, n, 0, v9, v8);
      }
      else
      {
        v12 = (char *)s2 + n;
        if ( v8 == 1 )
          *v12 = v7;
        else
          *(_WORD *)v12 = *(_WORD *)v9;
      }
      n = v10;
      *((_BYTE *)s2 + v10) = 0;
    }
    v13 = n;
    if ( n == v59 )
    {
      v14 = (__int8 *)s2;
      if ( n )
      {
        v50 = (__int8 *)s2;
        v44 = memcmp(s1, s2, n);
        v14 = v50;
        if ( v44 )
          goto LABEL_14;
      }
      n = 0;
      *v14 = 0;
      v13 = n;
    }
    v14 = (__int8 *)s2;
    if ( v13 )
    {
LABEL_14:
      v15 = v13 + 1;
      v65 = 1;
      v66.m128i_i16[0] = 39;
      v64 = &v66;
      if ( v13 + 1 > 0xF )
      {
        sub_998B30((__int64)&v64, 1u, 0, v14, v13);
        v16 = (__m128i *)v64;
        v15 = v13 + 1;
      }
      else
      {
        v16 = &v66;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            v66.m128i_i8[1] = *v14;
          }
          else
          {
            memcpy(&v66.m128i_i8[1], v14, v13);
            v15 = v13 + 1;
          }
        }
      }
      v65 = v15;
      v16->m128i_i8[v13 + 1] = 0;
      v17 = (__m128i *)v64;
      v67 = &v69;
      if ( v64 == &v66 )
      {
        v18 = v65;
        v47 = _mm_load_si128(&v66);
        v65 = 0;
        v66.m128i_i8[0] = 0;
        v69 = v47;
        v68 = v18;
        if ( 0x7FFFFFFFFFFFFFFFLL - v18 <= 7 )
          goto LABEL_90;
        v21 = v18 + 8;
        v17 = &v69;
        v19 = 15;
      }
      else
      {
        v18 = v65;
        v19 = v66.m128i_i64[0];
        v64 = &v66;
        v67 = v17;
        v20 = 0x7FFFFFFFFFFFFFFFLL - v65;
        v68 = v65;
        v69.m128i_i64[0] = v66.m128i_i64[0];
        v65 = 0;
        v66.m128i_i8[0] = 0;
        if ( v20 <= 7 )
          goto LABEL_90;
        v21 = v18 + 8;
        if ( v17 == &v69 )
          v19 = 15;
      }
      if ( v19 < v21 )
        sub_998B30((__int64)&v67, v18, 0, "' (aka '", 8u);
      else
        *(__int64 *)((char *)v17->m128i_i64 + v18) = 0x2720616B61282027LL;
      v68 = v21;
      *((_BYTE *)v67 + v21) = 0;
      v22 = (__m128i *)v67;
      v70 = &v72;
      if ( v67 == &v69 )
      {
        v23 = v68;
        v25 = v59;
        v22 = &v72;
        v68 = 0;
        v48 = _mm_load_si128(&v69);
        v27 = (__int8 *)s1;
        v69.m128i_i8[0] = 0;
        v24 = 15;
        v71 = v23;
        v26 = v59 + v23;
        v72 = v48;
      }
      else
      {
        v23 = v68;
        v24 = v69.m128i_i64[0];
        v70 = v67;
        v25 = v59;
        v68 = 0;
        v71 = v23;
        v69.m128i_i8[0] = 0;
        v26 = v59 + v23;
        v72.m128i_i64[0] = v24;
        if ( v67 == &v72 )
          v24 = 15;
        v67 = &v69;
        v27 = (__int8 *)s1;
      }
      if ( v24 < v26 )
      {
        v54 = v26;
        sub_998B30((__int64)&v70, v23, 0, v27, v25);
        v22 = (__m128i *)v70;
        v26 = v54;
      }
      else if ( v25 )
      {
        v45 = &v22->m128i_i8[v23];
        if ( v25 == 1 )
        {
          *v45 = *v27;
          v22 = (__m128i *)v70;
        }
        else
        {
          v52 = v26;
          memcpy(v45, v27, v25);
          v22 = (__m128i *)v70;
          v26 = v52;
        }
      }
      v71 = v26;
      v22->m128i_i8[v26] = 0;
      v28 = (__m128i *)v70;
      v73 = &v75;
      if ( v70 == &v72 )
      {
        v29 = v71;
        v49 = _mm_load_si128(&v72);
        v71 = 0;
        v72.m128i_i8[0] = 0;
        v75 = v49;
        v74 = v29;
        if ( v29 != 0x7FFFFFFFFFFFFFFFLL && v29 != 9223372036854775806LL )
        {
          v32 = v29 + 2;
          v28 = &v75;
          v30 = 15;
          goto LABEL_32;
        }
      }
      else
      {
        v29 = v71;
        v30 = v72.m128i_i64[0];
        v70 = &v72;
        v73 = v28;
        v31 = 0x7FFFFFFFFFFFFFFFLL - v71;
        v75.m128i_i64[0] = v72.m128i_i64[0];
        v74 = v71;
        v71 = 0;
        v72.m128i_i8[0] = 0;
        if ( v31 > 1 )
        {
          v32 = v29 + 2;
          if ( v28 == &v75 )
            v30 = 15;
LABEL_32:
          if ( v30 < v32 )
          {
            v57 = v32;
            sub_998B30((__int64)&v73, v29, 0, "')", 2u);
            v32 = v57;
          }
          else
          {
            *(__int16 *)((char *)v28->m128i_i16 + v29) = 10535;
          }
          v74 = v32;
          v73->m128i_i8[v32] = 0;
          a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
          if ( v73 == &v75 )
          {
            a1[1] = _mm_load_si128(&v75);
          }
          else
          {
            v33 = v75.m128i_i64[0];
            a1->m128i_i64[0] = (__int64)v73;
            a1[1].m128i_i64[0] = v33;
          }
          v34 = (__m128i *)v70;
          a1->m128i_i64[1] = v74;
          if ( v34 != &v72 )
            operator delete(v34);
          if ( v67 != &v69 )
            operator delete(v67);
          v35 = (__m128i *)v64;
          if ( v64 != &v66 )
            goto LABEL_41;
          goto LABEL_42;
        }
      }
LABEL_90:
      std::__throw_length_error("basic_string::append");
    }
  }
  v37 = v59;
  v77 = 1;
  v78.m128i_i16[0] = 39;
  v38 = v59 + 1;
  v76 = &v78;
  if ( v59 + 1 > 0xF )
  {
    v56 = v59 + 1;
    v53 = v59;
    sub_998B30((__int64)&v76, 1u, 0, s1, v59);
    v38 = v56;
    v37 = v53;
    v39 = v76;
  }
  else
  {
    v39 = &v78;
    if ( v59 )
    {
      if ( v59 == 1 )
      {
        v78.m128i_i8[1] = *(_BYTE *)s1;
      }
      else
      {
        v55 = v59 + 1;
        v51 = v59;
        memcpy(&v78.m128i_i8[1], s1, v59);
        v37 = v51;
        v38 = v55;
      }
    }
  }
  v77 = v38;
  v39->m128i_i8[v37 + 1] = 0;
  v40 = v76;
  v79 = v81;
  if ( v76 == &v78 )
  {
    v46 = _mm_load_si128(&v78);
    v42 = v77;
    v77 = 0;
    v78.m128i_i8[0] = 0;
    v81[0] = v46;
    v80 = v42;
    if ( v42 == 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_90;
    v43 = v42 + 1;
    v40 = v81;
    v41 = 15;
  }
  else
  {
    v41 = v78.m128i_i64[0];
    v42 = v77;
    v76 = &v78;
    v79 = v40;
    v81[0].m128i_i64[0] = v78.m128i_i64[0];
    v80 = v77;
    v77 = 0;
    v78.m128i_i8[0] = 0;
    if ( v80 == 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_90;
    v43 = v42 + 1;
    if ( v40 == v81 )
      v41 = 15;
  }
  if ( v43 > v41 )
    sub_998B30((__int64)&v79, v42, 0, "'", 1u);
  else
    v40->m128i_i8[v42] = 39;
  v80 = v43;
  v79->m128i_i8[v43] = 0;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( v79 == v81 )
  {
    a1[1] = _mm_load_si128(v81);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)v79;
    a1[1].m128i_i64[0] = v81[0].m128i_i64[0];
  }
  v35 = v76;
  a1->m128i_i64[1] = v80;
  if ( v35 != &v78 )
LABEL_41:
    operator delete(v35);
LABEL_42:
  if ( s2 != v63 )
    operator delete(s2);
  if ( s1 != &v60 )
    operator delete(s1);
  return a1;
}
