unsigned __int64 __fastcall sub_6A0BD0(__int64 a1, char *a2, const char *a3, __int64 a4, char a5, double a6, double a7)
{
  bool v8; // zf
  char v10; // al
  unsigned __int64 v11; // rbx
  unsigned __int64 i; // rbx
  size_t v13; // r13
  __int64 v14; // rdx
  __m128i v15; // xmm0
  char v16; // al
  __m128i v17; // xmm0
  const char *v18; // rax
  size_t v19; // rax
  const char *v20; // r8
  size_t v21; // r9
  unsigned __int64 v22; // rbp
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
  const char *src; // [rsp+8h] [rbp-150h]
  _BYTE *srcb; // [rsp+8h] [rbp-150h]
  void *srca; // [rsp+8h] [rbp-150h]
  _BYTE *srcc; // [rsp+8h] [rbp-150h]
  char *v45; // [rsp+18h] [rbp-140h]
  const char *v46; // [rsp+20h] [rbp-138h]
  size_t v47; // [rsp+20h] [rbp-138h]
  size_t v48; // [rsp+28h] [rbp-130h]
  size_t v49; // [rsp+28h] [rbp-130h]
  __int64 v50; // [rsp+30h] [rbp-128h] BYREF
  int v51; // [rsp+38h] [rbp-120h] BYREF
  void *v52; // [rsp+40h] [rbp-118h]
  int *v53; // [rsp+48h] [rbp-110h]
  int *v54; // [rsp+50h] [rbp-108h]
  __int64 v55; // [rsp+58h] [rbp-100h]
  __int64 v56; // [rsp+60h] [rbp-F8h] BYREF
  void *v57; // [rsp+68h] [rbp-F0h]
  __int128 v58; // [rsp+70h] [rbp-E8h]
  __int128 v59; // [rsp+80h] [rbp-D8h]
  __m128i v60; // [rsp+90h] [rbp-C8h] BYREF
  void *dest; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+A8h] [rbp-B0h]
  void *ptr; // [rsp+B8h] [rbp-A0h]
  __int128 v64; // [rsp+C0h] [rbp-98h]
  __int64 v65; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v66; // [rsp+D8h] [rbp-80h]
  __m128i v67; // [rsp+E8h] [rbp-70h]
  __int64 v68; // [rsp+F8h] [rbp-60h]
  __int64 v69; // [rsp+100h] [rbp-58h]
  char v70; // [rsp+108h] [rbp-50h]
  unsigned int v71; // [rsp+10Ch] [rbp-4Ch]
  unsigned __int64 v72; // [rsp+118h] [rbp-40h]

  v8 = *(_BYTE *)(a4 + 51) == 0;
  v45 = a2;
  v72 = __readfsqword(0x28u);
  v10 = 29;
  if ( v8 )
    v10 = 13;
  sub_699000(a1, a2, v10, a3, a5);
  if ( !(unsigned __int8)sub_5501A0((__int64 *)a4, a6, a7) )
    *(_BYTE *)(a1 + 29) |= 1u;
  v51 = 0;
  v11 = *(_QWORD *)(a4 + 8);
  v52 = nullptr;
  v53 = &v51;
  v54 = &v51;
  v55 = 0;
  v56 = a4;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  if ( *(_QWORD *)(a1 + 48) < v11 )
  {
    a2 = *(char **)(a1 + 32);
    *(_QWORD *)(a1 + 32) = qvector_reserve(a1 + 32, a2, v11, 32);
  }
  if ( (*(_BYTE *)(a1 + 28) & 0x3F) == 0x2D )
  {
    if ( *(_QWORD *)(a1 + 128) < v11 )
    {
      a2 = *(char **)(a1 + 112);
      *(_QWORD *)(a1 + 112) = qvector_reserve(a1 + 112, a2, v11, 8);
    }
  }
  else if ( *(_QWORD *)(a1 + 152) < v11 )
  {
    a2 = *(char **)(a1 + 136);
    *(_QWORD *)(a1 + 136) = qvector_reserve(a1 + 136, a2, v11, 128);
  }
  for ( i = 0; i < *(_QWORD *)(a4 + 8); ++i )
  {
    v22 = *(_QWORD *)a4 + (i << 7);
    v23 = _mm_loadu_si128((const __m128i *)v22);
    v62 = 0;
    v24 = *(_QWORD *)(v22 + 24);
    dest = nullptr;
    v60 = v23;
    if ( v24 )
    {
      dest = (void *)qalloc_or_throw(v24, a2);
      *((_QWORD *)&v62 + 1) = v24;
      a2 = *(char **)(v22 + 16);
      memcpy(dest, a2, v24);
      *(_QWORD *)&v62 = v24;
    }
    ptr = nullptr;
    v64 = 0;
    v13 = *(_QWORD *)(v22 + 48);
    if ( v13 )
    {
      ptr = (void *)qalloc_or_throw(*(_QWORD *)(v22 + 48), a2);
      *((_QWORD *)&v64 + 1) = v13;
      memcpy(ptr, *(const void **)(v22 + 40), v13);
      *(_QWORD *)&v64 = v13;
    }
    v65 = 0;
    copy_tinfo_t(&v65);
    v14 = *(_QWORD *)(v22 + 112);
    v15 = _mm_loadu_si128((const __m128i *)(v22 + 72));
    v68 = *(_QWORD *)(v22 + 104);
    v16 = *(_BYTE *)(v22 + 120);
    v66 = v15;
    v17 = _mm_loadu_si128((const __m128i *)(v22 + 88));
    v69 = v14;
    v70 = v16;
    v71 = 0;
    v67 = v17;
    v71 = sub_51C290(&v56, i, 0);
    v18 = sub_51F500((__int64)&v56, v71, i);
    if ( v18 && (src = v18, v19 = strlen(v18), v20 = src, (v21 = v19) != 0) )
    {
      v25 = dest;
      v26 = (void *)(v19 + 1);
      if ( *((_QWORD *)&v62 + 1) < v19 + 1 )
      {
        v48 = v19;
        v46 = src;
        srca = (void *)(v19 + 1);
        dest = (void *)qvector_reserve(&dest, dest, v26, 1);
        v21 = v48;
        v25 = dest;
        v20 = v46;
        v26 = srca;
      }
      *(_QWORD *)&v62 = v26;
      srcb = (_BYTE *)v21;
      memmove(v25, v20, v21);
      srcb[(_QWORD)dest] = 0;
    }
    else
    {
      *(_QWORD *)&v62 = 0;
    }
    if ( !v71 && (*(_BYTE *)(a4 + 45) & 1) != 0 )
    {
      sub_41D570(&v50, (const char *)&dest);
      if ( !v27 )
      {
        v71 = 6;
        v28 = sub_51F500((__int64)&v56, 6, i);
        v29 = v28;
        if ( v28 && (v30 = strlen(v28), (v31 = v30) != 0) )
        {
          v38 = dest;
          v39 = v30 + 1;
          if ( *((_QWORD *)&v62 + 1) < v30 + 1 )
          {
            v49 = v30;
            v47 = v30 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v39, 1);
            v31 = v49;
            v38 = dest;
            v39 = v47;
          }
          *(_QWORD *)&v62 = v39;
          srcc = (_BYTE *)v31;
          memmove(v38, v29, v31);
          srcc[(_QWORD)dest] = 0;
        }
        else
        {
          *(_QWORD *)&v62 = 0;
        }
      }
    }
    a2 = v45;
    sub_69C460(a1, v45, (__int64)&v60, a5);
    clear_tinfo_t(&v65);
    if ( ptr )
    {
      *(_QWORD *)&v64 = 0;
      qfree(ptr);
    }
    if ( dest )
    {
      *(_QWORD *)&v62 = 0;
      qfree(dest);
    }
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    v32 = *(_QWORD *)(a1 + 144);
    if ( v32 )
    {
      v37 = (_QWORD *)(*(_QWORD *)(a1 + 136) + (v32 << 7) - 128);
      if ( *(_QWORD *)(a4 + 24) < (unsigned __int64)(unsigned int)((unsigned __int64)(*v37 + v37[1] + 7LL) >> 3) )
      {
        if ( !under_debugger )
          interr(1831);
        BUG();
      }
    }
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  v33 = v52;
  if ( v52 )
  {
    do
    {
      v34 = v33;
      sub_697A10((_QWORD *)v33[3]);
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

