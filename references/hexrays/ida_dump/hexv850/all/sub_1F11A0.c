__int64 __fastcall sub_1F11A0(__int64 a1, __int64 a2, char a3)
{
  _QWORD *exception; // rdi
  __int64 v4; // r12
  __int64 v6; // rax
  size_t v7; // rbp
  size_t v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  void *v12; // rax
  __m128i v13; // xmm0
  void *v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rbp
  unsigned __int64 *v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v21; // rbp
  __int64 v22; // rsi
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm1
  unsigned __int64 v30; // r12
  const char *v31; // rbx
  _BYTE *v32; // rax
  char v33; // dl
  bool s1; // [rsp+0h] [rbp-B8h]
  char *s1a; // [rsp+0h] [rbp-B8h]
  unsigned int v36; // [rsp+8h] [rbp-B0h]
  char v37; // [rsp+Fh] [rbp-A9h]
  __int64 v38[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+20h] [rbp-98h]
  int v40; // [rsp+28h] [rbp-90h]
  void *v41; // [rsp+30h] [rbp-88h]
  __m128i v42; // [rsp+38h] [rbp-80h] BYREF
  void *v43; // [rsp+48h] [rbp-70h]
  __m128i v44; // [rsp+50h] [rbp-68h] BYREF
  __int64 v45; // [rsp+60h] [rbp-58h] BYREF
  __int64 v46; // [rsp+68h] [rbp-50h]
  __int64 v47; // [rsp+70h] [rbp-48h]
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 440);
  v48 = __readfsqword(0x28u);
  v36 = v4;
  if ( a3
    && (*(_BYTE *)a1 & 1) != 0
    && !(unsigned __int8)sub_1E96A0((unsigned __int8 *)a1)
    && (*(_BYTE *)(a1 + 5) & 1) != 0
    && (int)v4 > 0 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = v21 + *(_QWORD *)(a1 + 432);
      if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(v22 + 16) )
      {
        s1 = sub_1C0460(a2, v22);
        if ( s1 )
          break;
      }
      v21 += 104;
      if ( 104 * ((unsigned int)(v4 - 1) + 1LL) == v21 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    s1 = 0;
  }
  LODWORD(v38[0]) = 0;
  copy_argloc(v38, a2);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 40);
  v41 = nullptr;
  v39 = v6;
  LODWORD(v6) = *(_DWORD *)(a2 + 24);
  v42 = 0;
  v40 = v6;
  if ( v7 )
  {
    v23 = (void *)qalloc_or_throw(v7);
    v24 = *(const void **)(a2 + 32);
    v41 = v23;
    v42.m128i_i64[1] = v7;
    memcpy(v23, v24, v7);
    v42.m128i_i64[0] = v7;
  }
  v8 = *(_QWORD *)(a2 + 64);
  v43 = nullptr;
  v44 = 0;
  if ( v8 )
  {
    v25 = (void *)qalloc_or_throw(v8);
    v26 = *(const void **)(a2 + 56);
    v43 = v25;
    v44.m128i_i64[1] = v8;
    memcpy(v25, v26, v8);
    v44.m128i_i64[0] = v8;
  }
  v45 = 0;
  copy_tinfo_t(&v45, a2 + 80);
  v9 = *(_QWORD *)(a1 + 440);
  v10 = *(_QWORD *)(a1 + 432);
  v46 = *(_QWORD *)(a2 + 88);
  v47 = *(_QWORD *)(a2 + 96);
  if ( *(_QWORD *)(a1 + 448) < (unsigned __int64)(v9 + 1) )
  {
    v27 = qvector_reserve(a1 + 432, v10, v9 + 1, 104);
    *(_QWORD *)(a1 + 432) = v27;
    v9 = *(_QWORD *)(a1 + 440);
    v10 = v27;
  }
  v11 = v10 + 104 * v9;
  *(_DWORD *)v11 = 0;
  copy_argloc(v11, v38);
  *(_QWORD *)(v11 + 16) = v39;
  *(_DWORD *)(v11 + 24) = v40;
  v12 = v41;
  v41 = nullptr;
  v13 = _mm_loadu_si128(&v42);
  *(_QWORD *)(v11 + 32) = v12;
  *(__m128i *)(v11 + 40) = v13;
  v14 = v43;
  v15 = _mm_load_si128(&v44);
  v42 = 0;
  v43 = nullptr;
  v44 = 0;
  *(_QWORD *)(v11 + 56) = v14;
  *(_QWORD *)(v11 + 80) = 0;
  *(__m128i *)(v11 + 64) = v15;
  copy_tinfo_t(v11 + 80, &v45);
  *(_QWORD *)(v11 + 88) = v46;
  *(_QWORD *)(v11 + 96) = v47;
  ++*(_QWORD *)(a1 + 440);
  clear_tinfo_t(&v45);
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41);
  }
  cleanup_argloc(v38);
  v16 = *(_QWORD *)(a1 + 432) + 104LL * (int)v4;
  if ( s1 )
    *(_QWORD *)(v16 + 16) = sub_32CF30(a1, *(_QWORD *)(v16 + 16));
  if ( *(_QWORD *)(a2 + 40) <= 1u )
  {
    sub_20F1C0(a1, (unsigned int)v4);
    goto LABEL_20;
  }
  v17 = *(unsigned __int64 **)(a1 + 872);
  v38[0] = a2 + 32;
  if ( !v17 )
  {
    v28 = qalloc(48);
    v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
    if ( !v28 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v28 + 16) = 0;
    *(_OWORD *)(v28 + 32) = 0;
    *(__m128i *)(v28 + 8) = v29;
    *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 872) = v28;
    *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 872) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 872));
    **(_QWORD **)(a1 + 872) &= ~1uLL;
    **(_QWORD **)(a1 + 872) |= 2uLL;
    v17 = *(unsigned __int64 **)(a1 + 872);
    goto LABEL_19;
  }
  if ( !*(_QWORD *)(a1 + 880) )
  {
LABEL_19:
    sub_1F0FD0((__m128i *)(a1 + 872), v17, 1, v38);
    goto LABEL_20;
  }
  v30 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v30 & 2) != 0 )
  {
    v33 = 1;
LABEL_49:
    sub_1F0FD0((__m128i *)(a1 + 872), v17, v33, v38);
    goto LABEL_20;
  }
  v37 = 1;
  s1a = *(char **)(a2 + 32);
  while ( 1 )
  {
    v31 = ::s1;
    if ( *(_QWORD *)(v30 + 32) )
      v31 = *(const char **)(v30 + 24);
    if ( strcmp(s1a, v31) >= 0 )
      break;
    v37 = 1;
    v32 = *(_BYTE **)(v30 + 8);
LABEL_46:
    if ( (*v32 & 2) != 0 )
      goto LABEL_47;
    v30 = (unsigned __int64)v32;
  }
  if ( strcmp(v31, s1a) < 0 )
  {
    v37 = 0;
    v32 = *(_BYTE **)(v30 + 16);
    goto LABEL_46;
  }
  if ( !v30 )
  {
LABEL_47:
    v33 = v37;
    v17 = (unsigned __int64 *)v30;
    goto LABEL_49;
  }
LABEL_20:
  v18 = *(_QWORD *)(a1 + 1256);
  if ( 96LL * *(_QWORD *)(a1 + 1264) )
  {
    while ( (unsigned int)sub_32AC50(v18, v16) )
    {
      v18 += 96;
      if ( v18 == *(_QWORD *)(a1 + 1256) + 96LL * *(_QWORD *)(a1 + 1264) )
        goto LABEL_35;
    }
  }
  else
  {
LABEL_35:
    v18 = 0;
  }
  sub_1EB440(a1, v16, v18, 0);
  if ( *(_BYTE *)(a1 + 320) )
  {
    v19 = *(_DWORD *)(v16 + 24);
    BYTE1(v19) &= 0x7Eu;
    *(_DWORD *)(v16 + 24) = v19 | 0x100000;
  }
  return v36;
}
