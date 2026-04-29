__int64 __fastcall sub_1A43E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  __int64 *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // eax
  int v12; // edx
  int v13; // eax
  int v14; // eax
  char v15; // cl
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rax
  int v20; // eax
  int v21; // r14d
  unsigned __int64 v22; // rax
  char v23; // dl
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // r9
  _QWORD *v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char v32; // dl
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __m128i v35; // xmm0
  unsigned __int64 v36; // rdi
  char v37; // si
  _BYTE *v38; // rax
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v43; // [rsp+18h] [rbp-90h] BYREF
  __int64 v44; // [rsp+20h] [rbp-88h] BYREF
  __m128i si128; // [rsp+28h] [rbp-80h] BYREF
  __int128 v46; // [rsp+38h] [rbp-70h] BYREF
  __int128 v47; // [rsp+48h] [rbp-60h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  char v49; // [rsp+60h] [rbp-48h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v6 = *(__int64 **)(a1 + 48);
  v50 = __readfsqword(0x28u);
  v49 = 0;
  v8 = *v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  v44 = 0;
  v48 = -1;
  v46 = -1;
  v47 = -1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 24))(v6);
  v10 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 4 )
  {
    v12 = *(_DWORD *)(a3 + 68);
    if ( v12 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 80LL) )
      goto LABEL_5;
    if ( *(_BYTE *)(a3 + 32) != 10 )
      goto LABEL_5;
    v25 = *(_QWORD *)(a3 + 40);
    if ( *(_BYTE *)v25 != 5 || *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8LL) < *(_QWORD *)(*(_QWORD *)(a2 + 64) + 144LL) )
      goto LABEL_5;
    v26 = *(_QWORD *)(a1 + 96);
    v27 = *(_QWORD **)(a1 + 88);
    v28 = &v27[2 * v26];
    if ( v27 != v28 )
    {
      v29 = *(_QWORD **)(a1 + 88);
      while ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(*v29 + 72LL) || v29[1] != a3 )
      {
        v29 += 2;
        if ( v28 == v29 )
          goto LABEL_38;
      }
      if ( v28 != v29 )
        goto LABEL_5;
    }
LABEL_38:
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v26 + 1) )
    {
      v40 = qvector_reserve(a1 + 88, v27, v26 + 1, 16);
      *(_QWORD *)(a1 + 88) = v40;
      v28 = (_QWORD *)(16LL * *(_QWORD *)(a1 + 96) + v40);
    }
    *v28 = a2;
    v28[1] = a3;
    ++*(_QWORD *)(a1 + 96);
    v10 = *(_DWORD *)a3;
  }
  if ( (v10 & 0xFFFFFFEF) != 4 )
    return 1;
  v12 = *(_DWORD *)(a3 + 68);
LABEL_5:
  v13 = *(char *)(v9 + 10);
  if ( v13 != v12 && 2 * v13 != v12 )
  {
    v14 = *(char *)(v9 + 11);
    if ( v14 != v12 && 2 * v14 != v12 )
      return 1;
  }
  if ( !(unsigned __int8)sub_329F60(a3 + 64, &v41) )
    return 1;
  v15 = sub_195640(a1, (__int64)&v44, a3);
  if ( !v15 )
    return 1;
  v16 = *(_QWORD **)(a1 + 24);
  v17 = &v16[*(_QWORD *)(a1 + 32)];
  if ( v16 != v17 )
  {
    while ( *v16 != a3 )
    {
      if ( v17 == ++v16 )
        goto LABEL_16;
    }
    if ( v16 != v17 )
      return 1;
  }
LABEL_16:
  v18 = *(unsigned __int64 **)(a1 + 8);
  if ( !v18 )
  {
    v20 = *(_DWORD *)(a3 + 68);
    v21 = *(char *)(v9 + 10);
    if ( v21 >= v20 )
    {
      v44 = a3;
      v21 = v20;
      si128.m128i_i64[0] = v20;
      v43 = &v41;
      goto LABEL_50;
    }
LABEL_20:
    if ( !v49 )
      return 1;
    if ( 2 * v21 != v20 )
    {
      if ( !under_debugger )
        sub_37DDE0(51608);
      BUG();
    }
    v44 = a3;
    si128.m128i_i64[0] = v21;
    v43 = &v41;
    if ( v18 )
      goto LABEL_23;
LABEL_50:
    v34 = qalloc(104);
    v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
    if ( !v34 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v34, 0, 0x68u);
    *(__m128i *)(v34 + 8) = v35;
    *(_QWORD *)v34 = v34 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 8) = v34;
    *(_QWORD *)v34 = v34 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v34 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                (__m128i)*(unsigned __int64 *)(a1 + 8));
    **(_QWORD **)(a1 + 8) &= ~1uLL;
    **(_QWORD **)(a1 + 8) |= 2uLL;
    v18 = *(unsigned __int64 **)(a1 + 8);
    goto LABEL_24;
  }
  v19 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v19 )
    return 2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_19;
      if ( v41 >= *(_QWORD *)(v19 + 24) )
        break;
      v19 = *(_QWORD *)(v19 + 8);
    }
    if ( v41 <= *(_QWORD *)(v19 + 24) )
      break;
    v19 = *(_QWORD *)(v19 + 16);
  }
  if ( v18 != (unsigned __int64 *)v19 )
    return 2;
LABEL_19:
  v20 = *(_DWORD *)(a3 + 68);
  v21 = *(char *)(v9 + 10);
  if ( v21 < v20 )
    goto LABEL_20;
  v44 = a3;
  v21 = v20;
  si128.m128i_i64[0] = v20;
  v43 = &v41;
LABEL_23:
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_24:
    v22 = sub_1A3F90((__m128i *)(a1 + 8), v18, 1, &v43) + 24;
    goto LABEL_25;
  }
  v36 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v36 & 2) != 0 )
  {
    v39 = 1;
LABEL_58:
    v22 = sub_1A3F90((__m128i *)(a1 + 8), v18, v39, &v43) + 24;
    goto LABEL_25;
  }
  v37 = v15;
  while ( 1 )
  {
    v22 = v36 + 24;
    if ( v41 < *(_QWORD *)(v36 + 24) )
    {
      v38 = *(_BYTE **)(v36 + 8);
      v37 = v15;
      goto LABEL_56;
    }
    if ( v41 <= *(_QWORD *)(v36 + 24) )
      break;
    v38 = *(_BYTE **)(v36 + 16);
    v37 = 0;
LABEL_56:
    if ( (*v38 & 2) != 0 )
      goto LABEL_57;
    v36 = (unsigned __int64)v38;
  }
  if ( !v36 )
  {
LABEL_57:
    v39 = v37;
    v18 = (unsigned __int64 *)v36;
    goto LABEL_58;
  }
LABEL_25:
  v23 = v49;
  *(__m128i *)(v22 + 8) = _mm_load_si128((const __m128i *)&v44);
  v24 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
  *(_BYTE *)(v22 + 72) = v23;
  *(__m128i *)(v22 + 24) = v24;
  *(__m128i *)(v22 + 40) = _mm_load_si128((const __m128i *)((char *)&v46 + 8));
  *(__m128i *)(v22 + 56) = _mm_load_si128((const __m128i *)((char *)&v47 + 8));
  if ( *(_DWORD *)(a3 + 68) > v21 )
  {
    v30 = *(char *)(v9 + 10);
    si128.m128i_i64[1] += v30;
    v43 = &v42;
    v42 = v41 + v30;
    v31 = sub_1A4270((__m128i *)(a1 + 8), &v42, &v43);
    v32 = v49;
    *(__m128i *)(v31 + 32) = _mm_load_si128((const __m128i *)&v44);
    v33 = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
    *(_BYTE *)(v31 + 96) = v32;
    *(__m128i *)(v31 + 48) = v33;
    *(__m128i *)(v31 + 64) = _mm_load_si128((const __m128i *)((char *)&v46 + 8));
    *(__m128i *)(v31 + 80) = _mm_load_si128((const __m128i *)((char *)&v47 + 8));
  }
  return 0;
}
