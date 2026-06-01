unsigned __int64 __fastcall sub_6C1860(
        __int64 a1,
        _QWORD *a2,
        const char *a3,
        __int64 a4,
        char a5,
        double a6,
        double a7)
{
  bool v8; // zf
  char v10; // al
  unsigned __int64 v11; // rbx
  unsigned __int64 i; // rbx
  size_t v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  const char *v18; // rax
  size_t v19; // rax
  const char *v20; // r8
  size_t v21; // r9
  __int64 v22; // rbp
  __m128i v23; // xmm0
  size_t v24; // r13
  void *v25; // rdi
  void *v26; // rdx
  char v27; // dl
  const char *v28; // rax
  const char *v29; // r13
  size_t v30; // rax
  size_t v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rbx
  _QWORD *v34; // rbp
  void *v35; // rdi
  _QWORD *v37; // rdx
  void *v38; // rdi
  size_t v39; // rdx
  const char *src; // [rsp+8h] [rbp-160h]
  _BYTE *srcb; // [rsp+8h] [rbp-160h]
  void *srca; // [rsp+8h] [rbp-160h]
  _BYTE *srcc; // [rsp+8h] [rbp-160h]
  const char *v45; // [rsp+20h] [rbp-148h]
  size_t v46; // [rsp+20h] [rbp-148h]
  size_t v47; // [rsp+28h] [rbp-140h]
  size_t v48; // [rsp+28h] [rbp-140h]
  __int64 v49; // [rsp+30h] [rbp-138h] BYREF
  int v50; // [rsp+38h] [rbp-130h] BYREF
  void *v51; // [rsp+40h] [rbp-128h]
  int *v52; // [rsp+48h] [rbp-120h]
  int *v53; // [rsp+50h] [rbp-118h]
  __int64 v54; // [rsp+58h] [rbp-110h]
  __int64 *v55; // [rsp+60h] [rbp-108h] BYREF
  void *v56; // [rsp+68h] [rbp-100h]
  __int128 v57; // [rsp+70h] [rbp-F8h]
  __int128 v58; // [rsp+80h] [rbp-E8h]
  __m128i v59; // [rsp+90h] [rbp-D8h] BYREF
  void *dest; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v61; // [rsp+A8h] [rbp-C0h]
  void *ptr; // [rsp+B8h] [rbp-B0h]
  __int128 v63; // [rsp+C0h] [rbp-A8h]
  __int64 v64; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v65; // [rsp+D8h] [rbp-90h]
  __m128i v66; // [rsp+E8h] [rbp-80h]
  __m128i v67; // [rsp+F8h] [rbp-70h]
  __int64 v68; // [rsp+108h] [rbp-60h]
  __int64 v69; // [rsp+110h] [rbp-58h]
  char v70; // [rsp+118h] [rbp-50h]
  unsigned int v71; // [rsp+11Ch] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+128h] [rbp-40h]

  v8 = *(_BYTE *)(a4 + 51) == 0;
  v72 = __readfsqword(0x28u);
  v10 = 29;
  if ( v8 )
    v10 = 13;
  sub_6B9940(a1, a2, v10, a3, a5);
  if ( !(unsigned __int8)sub_569960((__int64 *)a4, a6, a7) )
    *(_BYTE *)(a1 + 33) |= 1u;
  v50 = 0;
  v11 = *(_QWORD *)(a4 + 8);
  v51 = nullptr;
  v52 = &v50;
  v53 = &v50;
  v54 = 0;
  v55 = (__int64 *)a4;
  v56 = nullptr;
  v57 = 0;
  v58 = 0;
  if ( *(_QWORD *)(a1 + 56) < v11 )
    *(_QWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v11, 32);
  if ( (*(_BYTE *)(a1 + 32) & 0x3F) == 0x2D )
  {
    if ( *(_QWORD *)(a1 + 136) < v11 )
      *(_QWORD *)(a1 + 120) = qvector_reserve(a1 + 120, *(_QWORD *)(a1 + 120), v11, 8);
  }
  else if ( *(_QWORD *)(a1 + 160) < v11 )
  {
    *(_QWORD *)(a1 + 144) = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), v11, 144);
  }
  for ( i = 0; i < *(_QWORD *)(a4 + 8); ++i )
  {
    v22 = *(_QWORD *)a4 + 144 * i;
    v23 = _mm_loadu_si128((const __m128i *)v22);
    v61 = 0;
    v24 = *(_QWORD *)(v22 + 24);
    dest = nullptr;
    v59 = v23;
    if ( v24 )
    {
      dest = (void *)qalloc_or_throw(v24);
      *((_QWORD *)&v61 + 1) = v24;
      memcpy(dest, *(const void **)(v22 + 16), v24);
      *(_QWORD *)&v61 = v24;
    }
    ptr = nullptr;
    v63 = 0;
    v13 = *(_QWORD *)(v22 + 48);
    if ( v13 )
    {
      ptr = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 48));
      *((_QWORD *)&v63 + 1) = v13;
      memcpy(ptr, *(const void **)(v22 + 40), v13);
      *(_QWORD *)&v63 = v13;
    }
    v64 = 0;
    copy_tinfo_t(&v64);
    v14 = *(_QWORD *)(v22 + 120);
    v15 = *(_QWORD *)(v22 + 128);
    v65 = _mm_loadu_si128((const __m128i *)(v22 + 72));
    v16 = _mm_loadu_si128((const __m128i *)(v22 + 88));
    v68 = v14;
    LOBYTE(v14) = *(_BYTE *)(v22 + 136);
    v66 = v16;
    v17 = _mm_loadu_si128((const __m128i *)(v22 + 104));
    v69 = v15;
    v70 = v14;
    v71 = 0;
    v67 = v17;
    v71 = sub_534DB0(&v55, i, 0);
    v18 = sub_538040((__int64)&v55, v71, i);
    if ( v18 && (src = v18, v19 = strlen(v18), v20 = src, (v21 = v19) != 0) )
    {
      v25 = dest;
      v26 = (void *)(v19 + 1);
      if ( *((_QWORD *)&v61 + 1) < v19 + 1 )
      {
        v47 = v19;
        v45 = src;
        srca = (void *)(v19 + 1);
        dest = (void *)qvector_reserve(&dest, dest, v26, 1);
        v21 = v47;
        v25 = dest;
        v20 = v45;
        v26 = srca;
      }
      *(_QWORD *)&v61 = v26;
      srcb = (_BYTE *)v21;
      memmove(v25, v20, v21);
      srcb[(_QWORD)dest] = 0;
    }
    else
    {
      *(_QWORD *)&v61 = 0;
    }
    if ( !v71 && (*(_BYTE *)(a4 + 45) & 1) != 0 )
    {
      sub_4313A0(&v49, (__int64)&dest);
      if ( !v27 )
      {
        v71 = 6;
        v28 = sub_538040((__int64)&v55, 6, i);
        v29 = v28;
        if ( v28 && (v30 = strlen(v28), (v31 = v30) != 0) )
        {
          v38 = dest;
          v39 = v30 + 1;
          if ( *((_QWORD *)&v61 + 1) < v30 + 1 )
          {
            v48 = v30;
            v46 = v30 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v39, 1);
            v31 = v48;
            v38 = dest;
            v39 = v46;
          }
          *(_QWORD *)&v61 = v39;
          srcc = (_BYTE *)v31;
          memmove(v38, v29, v31);
          srcc[(_QWORD)dest] = 0;
        }
        else
        {
          *(_QWORD *)&v61 = 0;
        }
      }
    }
    sub_6BCEB0(a1, a2, (__int64)&v59, a5);
    clear_tinfo_t(&v64);
    if ( ptr )
    {
      *(_QWORD *)&v63 = 0;
      qfree(ptr);
    }
    if ( dest )
    {
      *(_QWORD *)&v61 = 0;
      qfree(dest);
    }
  }
  if ( (*(_BYTE *)(a1 + 33) & 1) == 0 )
  {
    v32 = *(_QWORD *)(a1 + 152);
    if ( v32 )
    {
      v37 = (_QWORD *)(*(_QWORD *)(a1 + 144) + 144 * v32 - 144);
      if ( *(_QWORD *)(a4 + 24) < (unsigned __int64)(*v37 + v37[1] + 7LL) >> 3 )
      {
        if ( !under_debugger )
          interr(1831);
        BUG();
      }
    }
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  v33 = v51;
  if ( v51 )
  {
    do
    {
      v34 = v33;
      sub_6B8300((_QWORD *)v33[3]);
      v35 = (void *)v33[4];
      v33 = (_QWORD *)v33[2];
      if ( v35 )
      {
        v34[5] = 0;
        qfree(v35);
      }
      operator delete(v34, 0x38u);
    }
    while ( v33 );
  }
  return v72 - __readfsqword(0x28u);
}
