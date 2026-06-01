char *__fastcall sub_636060(__int64 a1, __int64 a2, __int64 *a3, char *a4, char *a5, char *a6, _BYTE *a7, __int64 **a8)
{
  const char *p_ptr; // rsi
  char v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  char *v12; // rbx
  const char *m128i_i8; // rsi
  char v14; // dl
  __int64 *v15; // r14
  char *v16; // rdi
  __int64 v17; // r13
  __int64 i; // r12
  char *v19; // rax
  void *v20; // rdi
  char *v21; // r15
  void *v22; // rdi
  char *v23; // rdi
  __int64 v24; // r13
  __int64 j; // r12
  char *v26; // r15
  void *v27; // rdi
  void *v28; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // eax
  char v33; // al
  char *v34; // rdi
  char v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  char *v38; // r12
  void *v39; // rdi
  void *v40; // rdi
  __int64 v41; // r14
  char *v42; // r12
  __int64 v43; // r13
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int8 v46; // al
  __m128i v47; // xmm0
  char *v48; // r12
  const __m128i *v49; // rcx
  __m128i v50; // xmm0
  const __m128i *v51; // r14
  void *v52; // rax
  void *v53; // rax
  size_t nb; // [rsp+10h] [rbp-B0h]
  size_t na; // [rsp+10h] [rbp-B0h]
  __int64 v58; // [rsp+18h] [rbp-A8h]
  char *v59; // [rsp+28h] [rbp-98h] BYREF
  char *v60; // [rsp+30h] [rbp-90h] BYREF
  int v61[2]; // [rsp+38h] [rbp-88h] BYREF
  int v62; // [rsp+4Ch] [rbp-74h] BYREF
  void *ptr; // [rsp+50h] [rbp-70h] BYREF
  __int128 v64; // [rsp+58h] [rbp-68h]
  __m128i v65; // [rsp+68h] [rbp-58h]
  __int64 v66; // [rsp+78h] [rbp-48h]
  int v67; // [rsp+80h] [rbp-40h]
  unsigned __int64 v68; // [rsp+88h] [rbp-38h]

  p_ptr = (const char *)&ptr;
  v60 = a5;
  v59 = a6;
  v68 = __readfsqword(0x28u);
  *(_QWORD *)v61 = a4 + 1;
  v9 = *a4;
  v10 = sub_693160(v61, &ptr);
  if ( v10 )
  {
    if ( a7 )
      *a7 = 0;
    if ( a8 )
      *a8 = nullptr;
    if ( v10 < 0 )
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
  v62 = 0;
  if ( (**(_BYTE **)v61 & 0xCF ^ 0xC0u) <= 1 )
  {
    p_ptr = (const char *)&v62;
    if ( !(unsigned __int8)sub_51F860((const char **)v61, &v62, a8) )
      return nullptr;
  }
  v11 = qalloc_or_throw(56, p_ptr);
  *(_BYTE *)(v11 + 51) = (v9 & 0x3F) == 29;
  v12 = (char *)v11;
  *(_QWORD *)v11 = 0;
  m128i_i8 = (const char *)v11;
  *(_DWORD *)(v11 + 40) = 0;
  *(_BYTE *)(v11 + 48) = 1;
  *(_BYTE *)(v11 + 50) = 0;
  *(_OWORD *)(v11 + 8) = 0;
  *(_OWORD *)(v11 + 24) = 0;
  v14 = v62;
  *(_DWORD *)(v11 + 44) = v62 & 0xFFFFFFF0;
  *(_BYTE *)(v11 + 49) = v14 & 0xF;
  if ( !(unsigned __int8)sub_54E3B0(a1, v11, a3, a2, v10, (const char **)v61, &v60, &v59, 1) )
    goto LABEL_9;
  ptr = nullptr;
  v64 = 0;
  v30 = *((_QWORD *)v12 + 1);
  v58 = v30;
  if ( v30 )
  {
    v41 = *((_QWORD *)v12 + 1);
    ptr = (void *)qalloc_or_throw(v30 << 7, m128i_i8);
    v42 = (char *)ptr;
    v43 = 0;
    *((_QWORD *)&v64 + 1) = v41;
    while ( 1 )
    {
      v48 = &v42[128 * v43];
      v49 = (const __m128i *)(*(_QWORD *)v12 + (v43 << 7));
      v50 = _mm_loadu_si128(v49);
      *(_OWORD *)(v48 + 24) = 0;
      v51 = v49;
      *((_QWORD *)v48 + 2) = 0;
      *(__m128i *)v48 = v50;
      if ( v49[1].m128i_i64[1] )
      {
        nb = v49[1].m128i_u64[1];
        v52 = (void *)qalloc_or_throw(nb, m128i_i8);
        *((_QWORD *)v48 + 2) = v52;
        *((_QWORD *)v48 + 4) = nb;
        m128i_i8 = (const char *)v51[1].m128i_i64[0];
        memcpy(v52, m128i_i8, nb);
        *((_QWORD *)v48 + 3) = nb;
      }
      *((_QWORD *)v48 + 5) = 0;
      *((_OWORD *)v48 + 3) = 0;
      if ( v51[3].m128i_i64[0] )
      {
        na = v51[3].m128i_u64[0];
        v53 = (void *)qalloc_or_throw(na, m128i_i8);
        *((_QWORD *)v48 + 5) = v53;
        *((_QWORD *)v48 + 7) = na;
        memcpy(v53, (const void *)v51[2].m128i_i64[1], na);
        *((_QWORD *)v48 + 6) = na;
      }
      *((_QWORD *)v48 + 8) = 0;
      m128i_i8 = v51[4].m128i_i8;
      copy_tinfo_t(v48 + 64);
      v44 = _mm_loadu_si128((const __m128i *)((char *)v51 + 72));
      ++v43;
      v45 = v51[7].m128i_i64[0];
      *((_QWORD *)v48 + 13) = v51[6].m128i_i64[1];
      v46 = v51[7].m128i_i8[8];
      *(__m128i *)(v48 + 72) = v44;
      v47 = _mm_loadu_si128((const __m128i *)((char *)v51 + 88));
      *((_QWORD *)v48 + 14) = v45;
      v48[120] = v46;
      *(__m128i *)(v48 + 88) = v47;
      if ( v58 == v43 )
        break;
      v42 = (char *)ptr;
    }
    *(_QWORD *)&v64 = v58;
  }
  v31 = _mm_loadu_si128((const __m128i *)(v12 + 24));
  v66 = *((_QWORD *)v12 + 5);
  v32 = *((_DWORD *)v12 + 12);
  v65 = v31;
  v67 = v32;
  v33 = sub_525690((__int64)&ptr, 1);
  v34 = (char *)ptr;
  v35 = v33;
  if ( ptr )
  {
    v36 = v64;
    if ( (_QWORD)v64 )
    {
      v37 = 0;
      do
      {
        v38 = &v34[128 * v37];
        clear_tinfo_t(v38 + 64);
        v39 = *((void **)v38 + 5);
        if ( v39 )
        {
          *((_QWORD *)v38 + 6) = 0;
          qfree(v39);
        }
        v40 = *((void **)v38 + 2);
        if ( v40 )
        {
          *((_QWORD *)v38 + 3) = 0;
          qfree(v40);
        }
        ++v37;
        v34 = (char *)ptr;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v64 = 0;
    qfree(v34);
  }
  if ( !v35 )
  {
LABEL_9:
    if ( a8 )
    {
      v15 = *a8;
      if ( *a8 )
      {
        v16 = (char *)*v15;
        if ( *v15 )
        {
          v17 = v15[1];
          if ( v17 )
          {
            for ( i = 0; i != v17; ++i )
            {
              v19 = &v16[48 * i];
              v20 = *((void **)v19 + 3);
              v21 = v19;
              if ( v20 )
              {
                *((_QWORD *)v19 + 4) = 0;
                qfree(v20);
              }
              v22 = *(void **)v21;
              if ( *(_QWORD *)v21 )
              {
                *((_QWORD *)v21 + 1) = 0;
                qfree(v22);
              }
              v16 = (char *)*v15;
            }
          }
          v15[1] = 0;
          qfree(v16);
        }
        qfree(v15);
      }
    }
    if ( v12 )
    {
      v23 = *(char **)v12;
      if ( *(_QWORD *)v12 )
      {
        v24 = *((_QWORD *)v12 + 1);
        if ( v24 )
        {
          for ( j = 0; j != v24; ++j )
          {
            v26 = &v23[128 * j];
            clear_tinfo_t(v26 + 64);
            v27 = *((void **)v26 + 5);
            if ( v27 )
            {
              *((_QWORD *)v26 + 6) = 0;
              qfree(v27);
            }
            v28 = *((void **)v26 + 2);
            if ( v28 )
            {
              *((_QWORD *)v26 + 3) = 0;
              qfree(v28);
            }
            v23 = *(char **)v12;
          }
        }
        *((_QWORD *)v12 + 1) = 0;
        qfree(v23);
      }
      qfree(v12);
    }
    return nullptr;
  }
  return v12;
}

