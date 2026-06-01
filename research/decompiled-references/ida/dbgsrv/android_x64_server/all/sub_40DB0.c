/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DB0
// Address: 0x0000000000040DB0

//----- (0000000000040DB0) ----------------------------------------------------
unsigned __int64 __fastcall sub_40DB0(__int64 a1, const char *a2, void *a3, const char *a4, const char *a5, double a6)
{
  int v10; // ecx
  size_t v11; // rax
  size_t v12; // rbp
  void *v13; // r15
  void *v14; // rax
  const char *v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rbp
  char **v26; // rbp
  char **v27; // rbx
  unsigned __int64 v28; // rcx
  char *v29; // rcx
  char *v30; // rax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  char *v33; // rcx
  __m128i v34; // xmm1
  __int64 v35; // rdx
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  __int64 v38; // rcx
  __int64 **v39; // rbx
  __int64 **v40; // rbp
  __int64 *v41; // rcx
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rcx
  void *ptr[3]; // [rsp+8h] [rbp-1C0h] BYREF
  void *v48; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v49; // [rsp+28h] [rbp-1A0h] BYREF
  __m256i v50; // [rsp+38h] [rbp-190h]
  __int128 v51; // [rsp+58h] [rbp-170h]
  __int128 *v52; // [rsp+68h] [rbp-160h] BYREF
  __int128 v53; // [rsp+70h] [rbp-158h] BYREF
  __m256i v54; // [rsp+80h] [rbp-148h]
  __m128i v55; // [rsp+A0h] [rbp-128h] BYREF
  int v56; // [rsp+B0h] [rbp-118h]
  _QWORD v57[18]; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v58; // [rsp+148h] [rbp-80h] BYREF
  __int64 v59; // [rsp+150h] [rbp-78h]
  char v60; // [rsp+158h] [rbp-70h]
  void *dest[13]; // [rsp+15Ch] [rbp-6Ch] BYREF

  *(void **)((char *)&dest[6] + 4) = (void *)__readfsqword(0x28u);
  sub_9FDA0(a1, "%a: new dll %s (soname=%s)\n", a6, a2, a4);
  v58 = 0xFFFFFFFFLL;
  v59 = -1;
  v60 = 0;
  memset(dest, 0, 52);
  set_debug_event_code((__int64)&v58, 8);
  if ( (unsigned __int64)((__int64)dest[0] & 0xFFFFFFF) > 0xB
    || (v10 = 2306, !_bittest(&v10, (__int64)dest[0] & 0xFFFFFFF)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
LABEL_67:
    BUG();
  }
  LODWORD(v58) = *(_DWORD *)(a1 + 1140);
  HIDWORD(v58) = v58;
  v59 = (__int64)a2;
  v60 = 1;
  if ( a4 && (v11 = strlen(a4)) != 0 )
  {
    v12 = v11;
    v13 = (void *)(v11 + 1);
    v14 = *(void **)((char *)dest + 4);
    if ( *(void **)((char *)&dest[2] + 4) < v13 )
    {
      v14 = qvector_reserve((__int64)dest + 4, *(char **)((char *)dest + 4), (unsigned __int64)v13, 1u);
      *(void **)((char *)dest + 4) = v14;
    }
    *(void **)((char *)&dest[1] + 4) = v13;
    memmove(v14, a4, v12);
    (*(_BYTE **)((char *)dest + 4))[v12] = 0;
  }
  else
  {
    *(void **)((char *)&dest[1] + 4) = nullptr;
  }
  *(void **)((char *)&dest[3] + 4) = (void *)a2;
  *(void **)((char *)&dest[4] + 4) = a3;
  *(void **)((char *)&dest[5] + 4) = (void *)-1LL;
  if ( *(_BYTE *)(a1 + 733) )
  {
    v15 = *(_QWORD *)(a1 + 488) ? *(const char **)(a1 + 480) : s1;
    if ( !strcmp(v15, a4) )
      *(void **)((char *)&dest[5] + 4) = (void *)a2;
  }
  v16 = (int)dest[0];
  if ( ((__int64)dest[0] & 0xFFFFFFF) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 152);
    if ( !v17 )
    {
      sub_48AB0(a1 + 120);
      v17 = *(_QWORD *)(a1 + 152);
    }
    v18 = v17 / 0x38;
    v19 = *(_QWORD *)(a1 + 128);
    v20 = 0;
    v21 = *(_QWORD *)(v19 + 8 * (v17 / 0x38));
    v22 = v21 + 72 * (v17 % 0x38);
    if ( *(_QWORD *)(a1 + 136) != v19 )
      v20 = v22;
    if ( v20 == v21 )
      v20 = *(_QWORD *)(v19 + 8 * v18 - 8) + 4032LL;
    *(_QWORD *)(v20 - 72) = 0xFFFFFFFFLL;
    *(_QWORD *)(v20 - 64) = -1;
    *(_BYTE *)(v20 - 56) = 0;
    *(_DWORD *)(v20 - 52) = 0;
    copy_debug_event(v20 - 72, (__int64)&v58);
    *(__m128i *)(a1 + 152) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_FE0B0);
    *(_BYTE *)(a1 + 1228) = 0;
    v16 = (int)dest[0];
  }
  v23 = v16 & 0xFFFFFFF;
  if ( v23 > 0xB || (v24 = 2306, !_bittest(&v24, v23)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
    goto LABEL_67;
  }
  v25 = *(__int64 *)((char *)&dest[4] + 4);
  sub_37F60((__int64)&v48, a4);
  sub_37F60((__int64)ptr, a5);
  sub_414E0((__int64)v57, (__int64)a2, v25, (__int64)&v48, (__int64)ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
    v48 = nullptr;
    *((_QWORD *)&v49 + 1) = 0;
  }
  v48 = (void *)v57[0];
  sub_49F10((__int64)&v49, (__int64)v57);
  v26 = *(char ***)(a1 + 1016);
  if ( v26 )
  {
    v27 = (char **)(a1 + 1016);
    while ( 1 )
    {
      v28 = (unsigned __int64)v26[4];
      if ( (unsigned __int64)v48 >= v28 )
      {
        if ( v28 >= (unsigned __int64)v48 || (v27 = v26 + 1, (v29 = v26[1]) == nullptr) )
        {
          if ( !*v27 )
            goto LABEL_41;
          goto LABEL_47;
        }
      }
      else
      {
        v29 = *v26;
        v27 = v26;
        if ( !*v26 )
          goto LABEL_40;
      }
      v26 = (char **)v29;
    }
  }
  v26 = (char **)(a1 + 1016);
LABEL_40:
  v27 = v26;
  if ( !*v26 )
  {
LABEL_41:
    v30 = (char *)operator new(0xB8u);
    *((_QWORD *)v30 + 4) = v48;
    *(_OWORD *)(v30 + 40) = v49;
    v31 = *(_OWORD *)v50.m256i_i8;
    v50.m256i_i64[0] = 0;
    *(_OWORD *)(v30 + 56) = v31;
    v32 = *(_OWORD *)&v50.m256i_u64[2];
    *(_OWORD *)&v50.m256i_u64[1] = 0;
    *(_OWORD *)(v30 + 72) = v32;
    v50.m256i_i64[3] = 0;
    *(_OWORD *)(v30 + 88) = v51;
    v51 = 0;
    v33 = v30 + 112;
    v34 = _mm_loadu_si128((const __m128i *)&v52);
    *(__m128i *)(v30 + 104) = v34;
    v35 = *((_QWORD *)&v53 + 1);
    *((_QWORD *)v30 + 15) = *((_QWORD *)&v53 + 1);
    if ( v35 )
    {
      *(_QWORD *)(_mm_extract_epi64(v34, 1) + 16) = v33;
      v52 = &v53;
      v53 = 0;
    }
    else
    {
      *((_QWORD *)v30 + 13) = v33;
    }
    v36 = *(_OWORD *)v54.m256i_i8;
    v54.m256i_i64[0] = 0;
    *((_OWORD *)v30 + 8) = v36;
    v37 = *(_OWORD *)&v54.m256i_u64[2];
    *(_OWORD *)&v54.m256i_u64[1] = 0;
    *((_OWORD *)v30 + 9) = v37;
    v54.m256i_i64[3] = 0;
    *((__m128i *)v30 + 10) = _mm_loadu_si128(&v55);
    v55 = 0;
    *((_DWORD *)v30 + 44) = v56;
    *(_OWORD *)v30 = 0;
    *((_QWORD *)v30 + 2) = v26;
    *v27 = v30;
    v38 = **(_QWORD **)(a1 + 1008);
    if ( v38 )
    {
      *(_QWORD *)(a1 + 1008) = v38;
      v30 = *v27;
    }
    sub_4A450(*(__int64 **)(a1 + 1016), (__int64 *)v30);
    ++*(_QWORD *)(a1 + 1024);
  }
LABEL_47:
  sub_415E0((__int64)&v49);
  v39 = *(__int64 ***)(a1 + 992);
  if ( v39 )
  {
    v40 = (__int64 **)(a1 + 992);
    while ( 1 )
    {
      v41 = v39[4];
      if ( v57[0] >= (unsigned __int64)v41 )
      {
        if ( (unsigned __int64)v41 >= v57[0] || (v40 = v39 + 1, (v42 = v39[1]) == nullptr) )
        {
          if ( !*v40 )
            goto LABEL_59;
          goto LABEL_62;
        }
      }
      else
      {
        v42 = *v39;
        v40 = v39;
        if ( !*v39 )
          goto LABEL_58;
      }
      v39 = (__int64 **)v42;
    }
  }
  v39 = (__int64 **)(a1 + 992);
LABEL_58:
  v40 = v39;
  if ( !*v39 )
  {
LABEL_59:
    v43 = (__int64 *)operator new(0x28u);
    v43[4] = v57[0];
    *(_OWORD *)v43 = 0;
    v43[2] = (__int64)v39;
    *v40 = v43;
    v44 = **(_QWORD **)(a1 + 984);
    if ( v44 )
    {
      *(_QWORD *)(a1 + 984) = v44;
      v43 = *v40;
    }
    sub_4A450(*(__int64 **)(a1 + 992), v43);
    ++*(_QWORD *)(a1 + 1000);
  }
LABEL_62:
  sub_415E0((__int64)v57);
  free_debug_event((__int64)&v58);
  return __readfsqword(0x28u);
}
// FE0B0: using guessed type __int128 xmmword_FE0B0;
// 158B40: using guessed type __int64 under_debugger;
