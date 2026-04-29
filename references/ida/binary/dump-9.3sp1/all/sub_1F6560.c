__int64 __fastcall sub_1F6560(__int64 a1, __int64 a2, char a3)
{
  _QWORD *exception; // rdi
  __int64 v4; // r12
  const void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rbp
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  int v22; // eax
  __int64 v24; // rbp
  __int64 v25; // rsi
  void *v26; // rax
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm1
  unsigned __int64 v32; // r12
  const char *v33; // rbx
  _BYTE *v34; // rax
  char v35; // dl
  bool s1; // [rsp+0h] [rbp-B8h]
  char *s1a; // [rsp+0h] [rbp-B8h]
  unsigned int v38; // [rsp+8h] [rbp-B0h]
  char v39; // [rsp+Fh] [rbp-A9h]
  __int64 v40[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+20h] [rbp-98h]
  int v42; // [rsp+28h] [rbp-90h]
  __int64 v43; // [rsp+30h] [rbp-88h]
  __m128i v44; // [rsp+38h] [rbp-80h] BYREF
  __int64 v45; // [rsp+48h] [rbp-70h]
  __m128i v46; // [rsp+50h] [rbp-68h] BYREF
  __int64 v47; // [rsp+60h] [rbp-58h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  __int64 v49; // [rsp+70h] [rbp-48h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 440);
  v50 = __readfsqword(0x28u);
  v38 = v4;
  if ( a3
    && (*(_BYTE *)a1 & 1) != 0
    && !(unsigned __int8)sub_1EEA60((unsigned __int8 *)a1)
    && (*(_BYTE *)(a1 + 5) & 1) != 0
    && (int)v4 > 0 )
  {
    v24 = 0;
    while ( 1 )
    {
      v25 = v24 + *(_QWORD *)(a1 + 432);
      if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(v25 + 16) )
      {
        s1 = sub_1C51E0(a2, v25);
        if ( s1 )
          break;
      }
      v24 += 104;
      if ( 104 * ((unsigned int)(v4 - 1) + 1LL) == v24 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    s1 = 0;
  }
  v6 = (const void *)a2;
  LODWORD(v40[0]) = 0;
  copy_argloc();
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 40);
  v43 = 0;
  v41 = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 24);
  v44 = 0;
  v42 = v9;
  if ( v10 )
  {
    v26 = (void *)qalloc_or_throw(v10, a2, v7, v8);
    v6 = *(const void **)(a2 + 32);
    v43 = (__int64)v26;
    v44.m128i_i64[1] = v10;
    memcpy(v26, v6, v10);
    v44.m128i_i64[0] = v10;
  }
  v11 = *(_QWORD *)(a2 + 64);
  v45 = 0;
  v46 = 0;
  if ( v11 )
  {
    v27 = (void *)qalloc_or_throw(v11, (__int64)v6, v7, v8);
    v28 = *(const void **)(a2 + 56);
    v45 = (__int64)v27;
    v46.m128i_i64[1] = v11;
    memcpy(v27, v28, v11);
    v46.m128i_i64[0] = v11;
  }
  v47 = 0;
  copy_tinfo_t();
  v12 = *(_QWORD *)(a1 + 440);
  v13 = *(_QWORD *)(a1 + 432);
  v48 = *(_QWORD *)(a2 + 88);
  v49 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 448) < (unsigned __int64)(v12 + 1) )
  {
    v29 = qvector_reserve(a1 + 432, v13, v12 + 1, 104);
    *(_QWORD *)(a1 + 432) = v29;
    v12 = *(_QWORD *)(a1 + 440);
    v13 = v29;
  }
  v14 = v13 + 104 * v12;
  *(_DWORD *)v14 = 0;
  copy_argloc();
  *(_QWORD *)(v14 + 16) = v41;
  *(_DWORD *)(v14 + 24) = v42;
  v15 = v43;
  v43 = 0;
  v16 = _mm_loadu_si128(&v44);
  *(_QWORD *)(v14 + 32) = v15;
  *(__m128i *)(v14 + 40) = v16;
  v17 = v45;
  v18 = _mm_load_si128(&v46);
  v44 = 0;
  v45 = 0;
  v46 = 0;
  *(_QWORD *)(v14 + 56) = v17;
  *(_QWORD *)(v14 + 80) = 0;
  *(__m128i *)(v14 + 64) = v18;
  copy_tinfo_t();
  *(_QWORD *)(v14 + 88) = v48;
  *(_QWORD *)(v14 + 96) = v49;
  ++*(_QWORD *)(a1 + 440);
  clear_tinfo_t();
  if ( v45 )
  {
    v46.m128i_i64[0] = 0;
    qfree(v45);
  }
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v43);
  }
  cleanup_argloc();
  v19 = *(_QWORD *)(a1 + 432) + 104LL * (int)v4;
  if ( s1 )
    *(_QWORD *)(v19 + 16) = sub_332AB0(a1, *(_QWORD *)(v19 + 16));
  if ( *(_QWORD *)(a2 + 40) <= 1u )
  {
    sub_214580(a1, (unsigned int)v4);
    goto LABEL_20;
  }
  v20 = *(_QWORD **)(a1 + 872);
  v40[0] = a2 + 32;
  if ( !v20 )
  {
    v30 = qalloc();
    v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
    if ( !v30 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v30 + 16) = 0;
    *(_OWORD *)(v30 + 32) = 0;
    *(__m128i *)(v30 + 8) = v31;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 872) = v30;
    *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 872) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872));
    **(_QWORD **)(a1 + 872) &= ~1uLL;
    **(_QWORD **)(a1 + 872) |= 2uLL;
    v20 = *(_QWORD **)(a1 + 872);
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a1 + 880) )
  {
LABEL_19:
    sub_1F6390((__m128i *)(a1 + 872), (__int64)v20, 1, v40);
    goto LABEL_20;
  }
  v32 = *v20 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v32 & 2) != 0 )
  {
    v35 = 1;
LABEL_49:
    sub_1F6390((__m128i *)(a1 + 872), (__int64)v20, v35, v40);
    goto LABEL_20;
  }
  v39 = 1;
  s1a = *(char **)(a2 + 32);
  while ( 1 )
  {
    v33 = ::s1;
    if ( *(_QWORD *)(v32 + 32) )
      v33 = *(const char **)(v32 + 24);
    if ( strcmp(s1a, v33) >= 0 )
      break;
    v39 = 1;
    v34 = *(_BYTE **)(v32 + 8);
LABEL_46:
    if ( (*v34 & 2) != 0 )
      goto LABEL_47;
    v32 = (unsigned __int64)v34;
  }
  if ( strcmp(v33, s1a) < 0 )
  {
    v39 = 0;
    v34 = *(_BYTE **)(v32 + 16);
    goto LABEL_46;
  }
  if ( !v32 )
  {
LABEL_47:
    v35 = v39;
    v20 = (_QWORD *)v32;
    goto LABEL_49;
  }
LABEL_20:
  v21 = *(_QWORD *)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_3307E0(v21, v19) )
    {
      v21 += 96;
      if ( v21 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
        goto LABEL_35;
    }
  }
  else
  {
LABEL_35:
    v21 = 0;
  }
  sub_1F0800(a1, v19, v21, 0);
  if ( *(_BYTE *)(a1 + 320) )
  {
    v22 = *(_DWORD *)(v19 + 24);
    BYTE1(v22) &= 0x7Eu;
    *(_DWORD *)(v19 + 24) = v22 | 0x100000;
  }
  return v38;
}
