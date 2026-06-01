char *__fastcall sub_653670(__int64 a1, __int64 a2, __int64 *a3, char *a4, char *a5, char *a6, _BYTE *a7, __int64 **a8)
{
  char v8; // r13
  int v9; // r12d
  __int64 v10; // rax
  char *v11; // rbx
  char v12; // dl
  __int64 *v13; // r14
  char *v14; // rdi
  __int64 v15; // r13
  __int64 i; // r12
  char *v17; // rax
  void *v18; // rdi
  char *v19; // r15
  void *v20; // rdi
  char *v21; // rdi
  __int64 v22; // r13
  __int64 j; // r12
  char *v24; // r15
  void *v25; // rdi
  void *v26; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm0
  int v30; // eax
  char v31; // al
  char *v32; // rdi
  char v33; // r14
  __int64 v34; // r13
  __int64 v35; // r15
  char *v36; // r12
  void *v37; // rdi
  void *v38; // rdi
  __int64 v39; // r14
  char *v40; // rax
  char *v41; // r12
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __m128i v46; // xmm0
  char *v47; // r12
  __int64 v48; // r13
  __m128i v49; // xmm0
  void *v50; // rax
  void *v51; // rax
  size_t na; // [rsp+10h] [rbp-B0h]
  size_t n; // [rsp+10h] [rbp-B0h]
  __int64 v55; // [rsp+18h] [rbp-A8h]
  char *v56; // [rsp+28h] [rbp-98h] BYREF
  char *v57; // [rsp+30h] [rbp-90h] BYREF
  int v58[2]; // [rsp+38h] [rbp-88h] BYREF
  int v59; // [rsp+4Ch] [rbp-74h] BYREF
  void *ptr; // [rsp+50h] [rbp-70h] BYREF
  __int128 v61; // [rsp+58h] [rbp-68h]
  __m128i v62; // [rsp+68h] [rbp-58h]
  __int64 v63; // [rsp+78h] [rbp-48h]
  int v64; // [rsp+80h] [rbp-40h]
  unsigned __int64 v65; // [rsp+88h] [rbp-38h]

  v57 = a5;
  v56 = a6;
  v65 = __readfsqword(0x28u);
  *(_QWORD *)v58 = a4 + 1;
  v8 = *a4;
  v9 = sub_6B38E0(v58, &ptr);
  if ( v9 )
  {
    if ( a7 )
      *a7 = 0;
    if ( a8 )
      *a8 = nullptr;
    if ( v9 < 0 )
      return nullptr;
  }
  else
  {
    if ( !(_BYTE)ptr )
    {
      if ( a7 )
        *a7 = 1;
      return nullptr;
    }
    if ( !a7 )
    {
      if ( !a8 )
        goto LABEL_6;
      goto LABEL_5;
    }
    *a7 = 0;
    if ( a8 )
LABEL_5:
      *a8 = nullptr;
  }
LABEL_6:
  v59 = 0;
  if ( (**(_BYTE **)v58 & 0xCF ^ 0xC0u) <= 1 && !(unsigned __int8)sub_5383A0((unsigned __int8 **)v58, &v59, a8) )
    return nullptr;
  v10 = qalloc_or_throw(56);
  *(_BYTE *)(v10 + 51) = (v8 & 0x3F) == 29;
  v11 = (char *)v10;
  *(_QWORD *)v10 = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_BYTE *)(v10 + 48) = 1;
  *(_BYTE *)(v10 + 50) = 0;
  *(_OWORD *)(v10 + 8) = 0;
  *(_OWORD *)(v10 + 24) = 0;
  v12 = v59;
  *(_DWORD *)(v10 + 44) = v59 & 0xFFFFFFF0;
  *(_BYTE *)(v10 + 49) = v12 & 0xF;
  if ( !(unsigned __int8)sub_567AF0(a1, v10, a3, a2, v9, (unsigned __int8 **)v58, &v57, &v56, 1) )
    goto LABEL_9;
  ptr = nullptr;
  v61 = 0;
  v28 = *((_QWORD *)v11 + 1);
  v55 = v28;
  if ( v28 )
  {
    v39 = *((_QWORD *)v11 + 1);
    v40 = (char *)qalloc_or_throw(144 * v28);
    *((_QWORD *)&v61 + 1) = v39;
    v41 = v40;
    v42 = 0;
    for ( ptr = v40; ; v41 = (char *)ptr )
    {
      v47 = &v41[144 * v42];
      v48 = *(_QWORD *)v11 + 144 * v42;
      v49 = _mm_loadu_si128((const __m128i *)v48);
      *(_OWORD *)(v47 + 24) = 0;
      *((_QWORD *)v47 + 2) = 0;
      *(__m128i *)v47 = v49;
      if ( *(_QWORD *)(v48 + 24) )
      {
        na = *(_QWORD *)(v48 + 24);
        v50 = (void *)qalloc_or_throw(na);
        *((_QWORD *)v47 + 2) = v50;
        *((_QWORD *)v47 + 4) = na;
        memcpy(v50, *(const void **)(v48 + 16), na);
        *((_QWORD *)v47 + 3) = na;
      }
      *((_QWORD *)v47 + 5) = 0;
      *((_OWORD *)v47 + 3) = 0;
      if ( *(_QWORD *)(v48 + 48) )
      {
        n = *(_QWORD *)(v48 + 48);
        v51 = (void *)qalloc_or_throw(n);
        *((_QWORD *)v47 + 5) = v51;
        *((_QWORD *)v47 + 7) = n;
        memcpy(v51, *(const void **)(v48 + 40), n);
        *((_QWORD *)v47 + 6) = n;
      }
      *((_QWORD *)v47 + 8) = 0;
      copy_tinfo_t(v47 + 64);
      v43 = *(_QWORD *)(v48 + 120);
      ++v42;
      v44 = *(_QWORD *)(v48 + 128);
      *(__m128i *)(v47 + 72) = _mm_loadu_si128((const __m128i *)(v48 + 72));
      v45 = _mm_loadu_si128((const __m128i *)(v48 + 88));
      *((_QWORD *)v47 + 15) = v43;
      LOBYTE(v43) = *(_BYTE *)(v48 + 136);
      *(__m128i *)(v47 + 88) = v45;
      v46 = _mm_loadu_si128((const __m128i *)(v48 + 104));
      *((_QWORD *)v47 + 16) = v44;
      v47[136] = v43;
      *(__m128i *)(v47 + 104) = v46;
      if ( v55 == v42 )
        break;
    }
    *(_QWORD *)&v61 = v55;
  }
  v29 = _mm_loadu_si128((const __m128i *)(v11 + 24));
  v63 = *((_QWORD *)v11 + 5);
  v30 = *((_DWORD *)v11 + 12);
  v62 = v29;
  v64 = v30;
  v31 = sub_53E370((__int64)&ptr, 1);
  v32 = (char *)ptr;
  v33 = v31;
  if ( ptr )
  {
    v34 = v61;
    if ( (_QWORD)v61 )
    {
      v35 = 0;
      do
      {
        v36 = &v32[144 * v35];
        clear_tinfo_t(v36 + 64);
        v37 = *((void **)v36 + 5);
        if ( v37 )
        {
          *((_QWORD *)v36 + 6) = 0;
          qfree(v37);
        }
        v38 = *((void **)v36 + 2);
        if ( v38 )
        {
          *((_QWORD *)v36 + 3) = 0;
          qfree(v38);
        }
        ++v35;
        v32 = (char *)ptr;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v61 = 0;
    qfree(v32);
  }
  if ( !v33 )
  {
LABEL_9:
    if ( a8 )
    {
      v13 = *a8;
      if ( *a8 )
      {
        v14 = (char *)*v13;
        if ( *v13 )
        {
          v15 = v13[1];
          if ( v15 )
          {
            for ( i = 0; i != v15; ++i )
            {
              v17 = &v14[48 * i];
              v18 = *((void **)v17 + 3);
              v19 = v17;
              if ( v18 )
              {
                *((_QWORD *)v17 + 4) = 0;
                qfree(v18);
              }
              v20 = *(void **)v19;
              if ( *(_QWORD *)v19 )
              {
                *((_QWORD *)v19 + 1) = 0;
                qfree(v20);
              }
              v14 = (char *)*v13;
            }
          }
          v13[1] = 0;
          qfree(v14);
        }
        qfree(v13);
      }
    }
    if ( v11 )
    {
      v21 = *(char **)v11;
      if ( *(_QWORD *)v11 )
      {
        v22 = *((_QWORD *)v11 + 1);
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = &v21[144 * j];
            clear_tinfo_t(v24 + 64);
            v25 = *((void **)v24 + 5);
            if ( v25 )
            {
              *((_QWORD *)v24 + 6) = 0;
              qfree(v25);
            }
            v26 = *((void **)v24 + 2);
            if ( v26 )
            {
              *((_QWORD *)v24 + 3) = 0;
              qfree(v26);
            }
            v21 = *(char **)v11;
          }
        }
        *((_QWORD *)v11 + 1) = 0;
        qfree(v21);
      }
      qfree(v11);
    }
    return nullptr;
  }
  return v11;
}
