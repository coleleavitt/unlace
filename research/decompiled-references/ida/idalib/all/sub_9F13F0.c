__int64 __fastcall sub_9F13F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  void (__fastcall *v5)(void **); // rax
  char *v6; // rax
  _BYTE *v7; // rdi
  __int64 v9; // r13
  char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rbp
  size_t v17; // rax
  __m128i *v18; // rax
  size_t v19; // rcx
  __m128i *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  __m128i *v24; // rax
  unsigned __int64 v25; // rax
  __m128i *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbp
  unsigned int v29; // eax
  int v30; // ebp
  int v31; // eax
  __m128i *v32; // rbp
  unsigned int v33; // r13d
  unsigned int v34; // eax
  size_t v35; // rbp
  int v36; // eax
  __int64 v37; // [rsp+8h] [rbp-250h]
  __int64 v38; // [rsp+10h] [rbp-248h]
  __int64 v39; // [rsp+10h] [rbp-248h]
  int v40; // [rsp+20h] [rbp-238h]
  int v41; // [rsp+24h] [rbp-234h]
  void *ptr; // [rsp+30h] [rbp-228h] BYREF
  __int64 v43; // [rsp+38h] [rbp-220h]
  _BYTE v44[16]; // [rsp+40h] [rbp-218h] BYREF
  void *v45; // [rsp+50h] [rbp-208h] BYREF
  __int64 v46; // [rsp+58h] [rbp-200h]
  __m128i v47; // [rsp+60h] [rbp-1F8h] BYREF
  void *v48; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v49; // [rsp+78h] [rbp-1E0h]
  _BYTE v50[16]; // [rsp+80h] [rbp-1D8h] BYREF
  void *v51; // [rsp+90h] [rbp-1C8h] BYREF
  size_t v52; // [rsp+98h] [rbp-1C0h]
  __m128i v53; // [rsp+A0h] [rbp-1B8h] BYREF
  void *v54; // [rsp+B0h] [rbp-1A8h] BYREF
  size_t v55; // [rsp+B8h] [rbp-1A0h]
  _QWORD v56[2]; // [rsp+C0h] [rbp-198h] BYREF
  void *v57; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v58; // [rsp+D8h] [rbp-180h]
  void *v59[2]; // [rsp+E0h] [rbp-178h] BYREF
  _BYTE v60[24]; // [rsp+F8h] [rbp-160h] BYREF
  char *v61; // [rsp+110h] [rbp-148h] BYREF
  __int64 v62; // [rsp+118h] [rbp-140h] BYREF
  char v63; // [rsp+120h] [rbp-138h] BYREF

  v5 = *(void (__fastcall **)(void **))(*a2 + 16LL);
  if ( (char *)v5 == (char *)sub_9EBB70 )
  {
    v6 = *(char **)(a2[2] + 16LL);
    if ( (*(_WORD *)v6 & 0x1FF) != 0x47 )
      v6 = nullptr;
    v61 = v6;
    ptr = v44;
    v43 = 0x100000000LL;
    sub_9EF3C0((__int64)&ptr, &v61, &v62);
  }
  else
  {
    v5(&ptr);
  }
  v7 = ptr;
  if ( (_DWORD)v43 != 1 )
    goto LABEL_6;
  v9 = *(_QWORD *)(*(_QWORD *)ptr + 16LL);
  if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 40 > 6 )
    goto LABEL_6;
  if ( (unsigned int)sub_9EF070(a3, *(_QWORD *)(*(_QWORD *)ptr + 16LL)) != 1 )
  {
    v7 = ptr;
LABEL_6:
    *(_BYTE *)(a1 + 272) = 0;
    goto LABEL_7;
  }
  v61 = &v63;
  v62 = 0x400000000LL;
  v37 = a2[2];
  v10 = (char *)sub_995750(v9);
  v12 = v11;
  v13 = sub_B8C330(v9);
  if ( (unsigned __int8)sub_9ED020(a2[3], v13) )
  {
    v38 = a2[3];
    v41 = sub_EEB7E0(v38);
    v14 = sub_BFB9F0(v38);
    v40 = sub_EEB7E0(v14);
    if ( v10 )
    {
      v15 = (__int64)&v10[v12];
      v54 = v56;
      sub_9EB4F0(&v54, v10, v15);
      v48 = v50;
      sub_9EB4F0(&v48, v10, v15);
      v16 = 0x7FFFFFFFFFFFFFFFLL - v49;
    }
    else
    {
      v55 = 0;
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      v54 = v56;
      LOBYTE(v56[0]) = 0;
      v48 = v50;
      v49 = 0;
      v50[0] = 0;
    }
    v17 = j__strlen(" = ");
    if ( v17 > v16
      || (((v18 = (__m128i *)sub_9EE560(&v48, " = ", v17), v51 = &v53, (__m128i *)v18->m128i_i64[0] == &v18[1])
         ? (__int64)(v53 = _mm_loadu_si128(v18 + 1))
         : (v51 = (void *)v18->m128i_i64[0], v53.m128i_i64[0] = v18[1].m128i_i64[0]),
           (v19 = v18->m128i_u64[1],
            v18[1].m128i_i8[0] = 0,
            v52 = v19,
            v18->m128i_i64[0] = (__int64)v18[1].m128i_i64,
            v20 = (__m128i *)v51,
            v18->m128i_i64[1] = 0,
            v21 = v52 + v55,
            v20 == &v53)
         ? (v22 = 15)
         : (v22 = v53.m128i_i64[0]),
           v21 > v22 && (v54 == v56 ? (v23 = 15) : (v23 = v56[0]), v21 <= v23))
        ? (v24 = (__m128i *)sub_99BDC0(&v54, 0, 0, v20, v52))
        : (v24 = (__m128i *)sub_9EE560(&v51, v54, v55)),
          (v57 = v59, (__m128i *)v24->m128i_i64[0] == &v24[1])
        ? (void *)(*(__m128i *)v59 = _mm_loadu_si128(v24 + 1))
        : (v57 = (void *)v24->m128i_i64[0], v59[0] = (void *)v24[1].m128i_i64[0]),
          v58 = v24->m128i_i64[1],
          v24->m128i_i64[0] = (__int64)v24[1].m128i_i64,
          v24->m128i_i64[1] = 0,
          v24[1].m128i_i8[0] = 0,
          v25 = j__strlen(".subspan"),
          v25 > 0x7FFFFFFFFFFFFFFFLL - v58) )
    {
      std::__throw_length_error("basic_string::append");
    }
    v26 = (__m128i *)sub_9EE560(&v57, ".subspan", v25);
    v45 = &v47;
    if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
    {
      v47 = _mm_loadu_si128(v26 + 1);
    }
    else
    {
      v45 = (void *)v26->m128i_i64[0];
      v47.m128i_i64[0] = v26[1].m128i_i64[0];
    }
    v27 = v26->m128i_i64[1];
    v26[1].m128i_i8[0] = 0;
    v46 = v27;
    v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
    v26->m128i_i64[1] = 0;
    if ( v57 != v59 )
      operator delete(v57);
    if ( v51 != &v53 )
      operator delete(v51);
    if ( v48 != v50 )
      operator delete(v48);
    if ( v54 != v56 )
      operator delete(v54);
    if ( v40 == v41 )
      sub_9EE7C0(&v45, "(");
    v28 = *(_QWORD *)(v13 + 2312);
    v39 = *(_QWORD *)(v13 + 2320);
    v29 = sub_EEC140(v37);
    v30 = sub_13DC0F0(v29, v28, v39);
    if ( v30 )
    {
      v31 = v30 + sub_EEC140(v37) - 1;
      v32 = (__m128i *)v45;
      if ( v31 )
      {
        v33 = *(_DWORD *)(a2[2] + 4LL);
        v34 = sub_EEB7E0(v37);
        v54 = (void *)__PAIR64__(v33, v34);
        LOBYTE(v55) = 1;
        sub_9EC0C0((__int64)&v57, __SPAIR64__(v33, v34), 1, v32, v46);
        sub_9EEAF0((__int64)&v61, (unsigned __int64)&v57);
        if ( v59[1] != v60 )
          operator delete(v59[1]);
        if ( v40 == v41 )
        {
          v35 = j__strlen(")");
          v36 = sub_EEC140(a2[3]);
          sub_9EC740((__int64)&v57, v36 + 1, ")", v35, 0);
          sub_9EEAF0((__int64)&v61, (unsigned __int64)&v57);
          if ( v59[1] != v60 )
            operator delete(v59[1]);
        }
        *(_QWORD *)a1 = a1 + 16;
        *(_QWORD *)(a1 + 8) = 0x400000000LL;
        if ( (_DWORD)v62 )
          sub_9F0880(a1, (__int64)&v61);
        *(_BYTE *)(a1 + 272) = 1;
        v32 = (__m128i *)v45;
        goto LABEL_52;
      }
    }
    else
    {
      v32 = (__m128i *)v45;
    }
    *(_BYTE *)(a1 + 272) = 0;
LABEL_52:
    if ( v32 != &v47 )
      operator delete(v32);
    goto LABEL_16;
  }
  *(_BYTE *)(a1 + 272) = 0;
LABEL_16:
  sub_9ED140((__int64)&v61);
  v7 = ptr;
LABEL_7:
  if ( v7 != v44 )
    free(v7);
  return a1;
}
