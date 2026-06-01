__m128i *__fastcall sub_22A4240(__m128i *a1, __m128i *a2)
{
  __int64 v4; // rax
  size_t v5; // rax
  size_t v6; // r8
  _BYTE *v7; // rcx
  size_t v8; // rsi
  __int64 v9; // rdi
  __m128i *v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  _BYTE *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v16; // rax
  char *v17; // rax
  __m128i si128; // xmm0
  int v19; // r14d
  __m128i *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __m128i *v24; // r14
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE *v29; // rcx
  size_t v30; // r8
  size_t v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  _BYTE *v35; // rdi
  size_t v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rdx
  size_t v39; // rax
  _BYTE *v40; // rdx
  size_t v41; // r14
  unsigned __int64 v42; // rcx
  _BYTE *v43; // rdx
  size_t v44; // r14
  _BYTE *v45; // rax
  size_t v46; // r15
  unsigned __int64 v47; // rdx
  size_t v48; // rax
  _BYTE *v49; // rdx
  size_t v50; // r14
  unsigned __int64 v51; // rcx
  _BYTE *v52; // rdx
  size_t v53; // r13
  unsigned __int64 v54; // rdx
  _BYTE *v55; // rsi
  size_t v56; // rdx
  void *v57; // [rsp+0h] [rbp-228h] BYREF
  size_t v58; // [rsp+8h] [rbp-220h]
  _QWORD v59[2]; // [rsp+10h] [rbp-218h] BYREF
  void *src; // [rsp+20h] [rbp-208h] BYREF
  size_t n; // [rsp+28h] [rbp-200h]
  _QWORD v62[3]; // [rsp+30h] [rbp-1F8h] BYREF
  int v63; // [rsp+4Ch] [rbp-1DCh]
  struct utsname name; // [rsp+60h] [rbp-1C8h] BYREF

  v4 = sub_9983C0(a2->m128i_i64, "-darwin", 0, 7u);
  if ( v4 != -1 )
  {
    sub_C05030(a2, v4 + 7, 0);
    if ( uname(&name) )
    {
      v7 = v62;
      LOBYTE(v62[0]) = 0;
      v6 = 0;
      src = v62;
      n = 0;
    }
    else
    {
      src = v62;
      v5 = strlen(name.release);
      sub_22A32F0(&src, name.release, (__int64)&name.release[v5]);
      v6 = n;
      v7 = src;
    }
    v8 = a2->m128i_u64[1];
    v9 = a2->m128i_i64[0];
    v10 = a2 + 1;
    v11 = v8 + v6;
    if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
      v12 = 15;
    else
      v12 = a2[1].m128i_u64[0];
    if ( v11 > v12 )
    {
      sub_998B30((__int64)a2, v8, 0, v7, v6);
      v9 = a2->m128i_i64[0];
    }
    else if ( v6 )
    {
      v13 = (_BYTE *)(v8 + v9);
      if ( v6 == 1 )
        *v13 = *v7;
      else
        memcpy(v13, v7, v6);
      v9 = a2->m128i_i64[0];
    }
    a2->m128i_i64[1] = v11;
    *(_BYTE *)(v9 + v11) = 0;
    if ( src != v62 )
      operator delete(src);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)a2->m128i_i64[0] == v10 )
    {
      a1[1] = _mm_load_si128(a2 + 1);
    }
    else
    {
      a1->m128i_i64[0] = a2->m128i_i64[0];
      a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
    }
    v14 = a2->m128i_i64[1];
    a2->m128i_i64[0] = (__int64)v10;
    a2->m128i_i64[1] = 0;
    a1->m128i_i64[1] = v14;
    a2[1].m128i_i8[0] = 0;
    return a1;
  }
  v16 = sub_9983C0(a2->m128i_i64, "-macos", 0, 6u);
  if ( v16 != -1 )
  {
    sub_C05030(a2, v16, 0);
    v23 = a2->m128i_i64[1];
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v23) <= 6 )
      goto LABEL_100;
    v24 = a2 + 1;
    v25 = v23 + 7;
    if ( (__m128i *)a2->m128i_i64[0] == &a2[1] )
      v26 = 15;
    else
      v26 = a2[1].m128i_u64[0];
    if ( v25 > v26 )
    {
      sub_998B30((__int64)a2, a2->m128i_u64[1], 0, "-darwin", 7u);
    }
    else
    {
      v27 = v23 + a2->m128i_i64[0];
      *(_DWORD *)v27 = 1918985261;
      *(_WORD *)(v27 + 4) = 26999;
      *(_BYTE *)(v27 + 6) = 110;
    }
    v28 = a2->m128i_i64[0];
    a2->m128i_i64[1] = v25;
    *(_BYTE *)(v28 + v23 + 7) = 0;
    if ( uname(&name) )
    {
      v29 = v62;
      LOBYTE(v62[0]) = 0;
      v30 = 0;
      src = v62;
      n = 0;
    }
    else
    {
      src = v62;
      v36 = strlen(name.release);
      sub_22A32F0(&src, name.release, (__int64)&name.release[v36]);
      v30 = n;
      v29 = src;
    }
    v31 = a2->m128i_u64[1];
    v32 = a2->m128i_i64[0];
    v33 = v31 + v30;
    if ( (__m128i *)a2->m128i_i64[0] == v24 )
      v34 = 15;
    else
      v34 = a2[1].m128i_u64[0];
    if ( v33 > v34 )
    {
      sub_998B30((__int64)a2, v31, 0, v29, v30);
      v32 = a2->m128i_i64[0];
    }
    else if ( v30 )
    {
      v35 = (_BYTE *)(v31 + v32);
      if ( v30 == 1 )
        *v35 = *v29;
      else
        memcpy(v35, v29, v30);
      v32 = a2->m128i_i64[0];
    }
    a2->m128i_i64[1] = v33;
    *(_BYTE *)(v32 + v33) = 0;
    if ( src != v62 )
      operator delete(src);
  }
  src = v62;
  v17 = (char *)operator new(0x19u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9BB0);
  strcpy(v17 + 16, "inux-gnu");
  *(__m128i *)v17 = si128;
  src = v17;
  v62[0] = 24;
  n = 24;
  sub_22B9ED0(&name, &src);
  if ( src != v62 )
    operator delete(src);
  v19 = *(_DWORD *)&name.sysname[44];
  if ( *(struct utsname **)name.sysname != (struct utsname *)&name.sysname[16] )
    operator delete(*(void **)name.sysname);
  v20 = (__m128i *)a2->m128i_i64[0];
  v21 = a2->m128i_i64[1];
  if ( v19 != 20 )
    goto LABEL_24;
  *(_QWORD *)name.sysname = &name.sysname[16];
  sub_22A3230(&name, v20, (__int64)v20->m128i_i64 + v21);
  sub_22B9ED0(&src, &name);
  if ( *(struct utsname **)name.sysname != (struct utsname *)&name.sysname[16] )
    operator delete(*(void **)name.sysname);
  if ( v63 != 20 || (unsigned int)sub_22B7B00(&src) || uname(&name) == -1 )
  {
    if ( src != v62 )
      operator delete(src);
    v20 = (__m128i *)a2->m128i_i64[0];
    v21 = a2->m128i_i64[1];
LABEL_24:
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( &a2[1] == v20 )
    {
      a1[1] = _mm_load_si128(a2 + 1);
    }
    else
    {
      v22 = a2[1].m128i_i64[0];
      a1->m128i_i64[0] = (__int64)v20;
      a1[1].m128i_i64[0] = v22;
    }
    a1->m128i_i64[1] = v21;
    a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
    a2->m128i_i64[1] = 0;
    a2[1].m128i_i8[0] = 0;
    return a1;
  }
  v37 = (_BYTE *)sub_22B6740(20);
  v57 = v59;
  sub_22A32F0(&v57, v37, (__int64)&v37[v38]);
  v39 = strlen(name.version);
  if ( 0x7FFFFFFFFFFFFFFFLL - v58 < v39 )
    goto LABEL_100;
  v40 = v57;
  v41 = v58 + v39;
  v42 = v57 == v59 ? 15LL : v59[0];
  if ( v41 > v42 )
  {
    sub_998B30((__int64)&v57, v58, 0, name.version, v39);
    v40 = v57;
  }
  else if ( v39 )
  {
    v43 = (char *)v57 + v58;
    if ( v39 == 1 )
      *v43 = name.version[0];
    else
      qmemcpy(v43, name.version, (unsigned int)v39);
    v40 = v57;
  }
  v58 = v41;
  v40[v41] = 0;
  v44 = v58;
  v45 = v57;
  v46 = v58 + 1;
  if ( v57 == v59 )
    v47 = 15;
  else
    v47 = v59[0];
  if ( v46 > v47 )
  {
    sub_998B30((__int64)&v57, v58, 0, nullptr, 1u);
    v45 = v57;
  }
  v45[v44] = 46;
  v58 = v46;
  *((_BYTE *)v57 + v44 + 1) = 0;
  v48 = strlen(name.release);
  if ( 0x7FFFFFFFFFFFFFFFLL - v58 < v48 )
    goto LABEL_100;
  v49 = v57;
  v50 = v58 + v48;
  v51 = v57 == v59 ? 15LL : v59[0];
  if ( v50 > v51 )
  {
    sub_998B30((__int64)&v57, v58, 0, name.release, v48);
    v49 = v57;
  }
  else if ( v48 )
  {
    v52 = (char *)v57 + v58;
    if ( v48 == 1 )
      *v52 = name.release[0];
    else
      qmemcpy(v52, name.release, (unsigned int)v48);
    v49 = v57;
  }
  v58 = v50;
  v49[v50] = 0;
  v53 = v58;
  if ( 0x7FFFFFFFFFFFFFFFLL - v58 <= 3 )
LABEL_100:
    std::__throw_length_error("basic_string::append");
  if ( v57 == v59 )
    v54 = 15;
  else
    v54 = v59[0];
  if ( v58 + 4 > v54 )
    sub_998B30((__int64)&v57, v58, 0, ".0.0", 4u);
  else
    *(_DWORD *)((char *)v57 + v58) = 808333358;
  v58 = v53 + 4;
  *((_BYTE *)v57 + v53 + 4) = 0;
  sub_22BA720(&src, v57, v58);
  v55 = src;
  v56 = n;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  sub_22A3230(a1, v55, (__int64)&v55[v56]);
  if ( v57 != v59 )
    operator delete(v57);
  if ( src != v62 )
    operator delete(src);
  return a1;
}
