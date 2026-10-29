unsigned __int64 __fastcall sub_47DB70(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  void *v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  const char *v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rax
  size_t v13; // r15
  size_t v14; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __m128i v18; // xmm0
  void *v19; // rdx
  unsigned __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  QT::QFont *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v27; // [rsp+0h] [rbp-118h]
  __int64 v28; // [rsp+10h] [rbp-108h] BYREF
  int v29; // [rsp+18h] [rbp-100h]
  unsigned __int64 v30; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-F0h]
  _BYTE v32[16]; // [rsp+40h] [rbp-D8h] BYREF
  void *v33; // [rsp+50h] [rbp-C8h]
  __m128i v34; // [rsp+58h] [rbp-C0h] BYREF
  void *v35; // [rsp+68h] [rbp-B0h]
  __m128i v36; // [rsp+70h] [rbp-A8h] BYREF
  int v37; // [rsp+80h] [rbp-98h]
  __int64 v38; // [rsp+90h] [rbp-88h] BYREF
  int v39; // [rsp+98h] [rbp-80h]
  void *v40; // [rsp+A0h] [rbp-78h]
  __m128i v41; // [rsp+A8h] [rbp-70h] BYREF
  void *v42; // [rsp+B8h] [rbp-60h]
  __m128i v43; // [rsp+C0h] [rbp-58h] BYREF
  int v44; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v1 = a1[19];
  v2 = a1[18];
  v45 = __readfsqword(0x28u);
  v30 = 0;
  v31 = 0;
  v27 = v2 + 56 * v1;
  while ( v27 != v2 )
  {
    QT::QFont::QFont((QT::QFont *)&v28);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 216LL))(a1, &v28, v2) )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(*a1 + 208LL))(&v38, a1, v2);
      v12 = v28;
      v28 = v38;
      v38 = v12;
      LODWORD(v12) = v29;
      v29 = v39;
      v39 = v12;
      QT::QFont::~QFont((QT::QFont *)&v38);
    }
    QT::QFont::QFont((QT::QFont *)v32, (const QT::QFont *)&v28);
    v33 = nullptr;
    v34 = 0;
    v13 = *(_QWORD *)(v2 + 8);
    if ( v13 )
    {
      v33 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 8));
      v34.m128i_i64[1] = v13;
      memcpy(v33, *(const void **)v2, v13);
      v34.m128i_i64[0] = v13;
    }
    v35 = nullptr;
    v36 = 0;
    v14 = *(_QWORD *)(v2 + 32);
    if ( v14 )
    {
      v35 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 32));
      v36.m128i_i64[1] = v14;
      memcpy(v35, *(const void **)(v2 + 24), v14);
      v36.m128i_i64[0] = v14;
    }
    v15 = v30;
    v37 = *(_DWORD *)(v2 + 48);
    if ( (unsigned __int64)v32 < v30 || (unsigned __int64)v32 >= v30 + 72LL * *((_QWORD *)&v31 + 1) )
    {
      v16 = v31;
      if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
      {
        v30 = qvector_reserve(&v30, v30, v31 + 1, 72);
        v15 = v30;
        v16 = v31;
      }
      v17 = v15 + 72 * v16;
      v9 = v32;
      QT::QFont::QFont((QT::QFont *)v17, (const QT::QFont *)v32);
      v18 = _mm_loadu_si128(&v34);
      v19 = v33;
      v33 = nullptr;
      *(_QWORD *)&v31 = v31 + 1;
      *(__m128i *)(v17 + 24) = v18;
      *(_QWORD *)(v17 + 16) = v19;
      v34 = 0;
      v11 = _mm_load_si128(&v36);
      *(_QWORD *)(v17 + 40) = v35;
      *(__m128i *)(v17 + 48) = v11;
      *(_DWORD *)(v17 + 64) = v37;
    }
    else
    {
      QT::QFont::QFont((QT::QFont *)&v38, (const QT::QFont *)v32);
      v3 = v33;
      v4 = _mm_loadu_si128(&v34);
      v33 = nullptr;
      v5 = _mm_load_si128(&v36);
      v6 = v31;
      v40 = v3;
      v41 = v4;
      v7 = v30;
      v42 = v35;
      v35 = nullptr;
      v44 = v37;
      v34 = 0;
      v43 = v5;
      v36 = 0;
      if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
      {
        v30 = qvector_reserve(&v30, v30, v31 + 1, 72);
        v6 = v31;
        v7 = v30;
      }
      v8 = v7 + 72 * v6;
      v9 = (const char *)&v38;
      QT::QFont::QFont((QT::QFont *)v8, (const QT::QFont *)&v38);
      v10 = _mm_loadu_si128(&v41);
      *(_QWORD *)(v8 + 16) = v40;
      *(__m128i *)(v8 + 24) = v10;
      v11 = _mm_load_si128(&v43);
      *(_QWORD *)(v8 + 40) = v42;
      *(__m128i *)(v8 + 48) = v11;
      *(_DWORD *)(v8 + 64) = v44;
      QT::QFont::~QFont((QT::QFont *)&v38);
      *(_QWORD *)&v31 = v31 + 1;
      if ( v35 )
      {
        v36.m128i_i64[0] = 0;
        *(double *)v11.m128i_i64 = qfree(v35, (const char *)&v38);
      }
    }
    if ( v33 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v33, v9, *(double *)v11.m128i_i64);
    }
    v2 += 56;
    QT::QFont::~QFont((QT::QFont *)v32);
    QT::QFont::~QFont((QT::QFont *)&v28);
  }
  (*(void (__fastcall **)(_QWORD *, unsigned __int64 *))(*a1 + 200LL))(a1, &v30);
  v20 = v30;
  if ( v30 )
  {
    v21 = v31;
    if ( (_QWORD)v31 )
    {
      v22 = 0;
      do
      {
        v23 = (QT::QFont *)(v20 + 72 * v22);
        v24 = *((_QWORD *)v23 + 5);
        if ( v24 )
        {
          *((_QWORD *)v23 + 6) = 0;
          qfree(v24, (const char *)&v30);
        }
        v25 = *((_QWORD *)v23 + 2);
        if ( v25 )
        {
          *((_QWORD *)v23 + 3) = 0;
          qfree(v25, (const char *)&v30);
        }
        ++v22;
        QT::QFont::~QFont(v23);
        v20 = v30;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v20, (const char *)&v30);
  }
  return v45 - __readfsqword(0x28u);
}
