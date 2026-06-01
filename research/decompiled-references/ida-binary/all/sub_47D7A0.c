unsigned __int64 __fastcall sub_47D7A0(__int64 a1, const QT::QFont *a2, __int64 a3)
{
  size_t v4; // r13
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  const char *v9; // rsi
  __m128i v10; // xmm0
  void *v11; // rax
  __m128i v12; // xmm0
  unsigned __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbx
  QT::QFont *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  void *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbx
  __m128i v26; // xmm0
  void *v27; // rax
  const void *v28; // rsi
  void *v29; // rax
  const void *v30; // rsi
  unsigned __int64 v31; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+8h] [rbp-E0h]
  _BYTE v33[16]; // [rsp+20h] [rbp-C8h] BYREF
  void *v34; // [rsp+30h] [rbp-B8h]
  __m128i v35; // [rsp+38h] [rbp-B0h] BYREF
  void *v36; // [rsp+48h] [rbp-A0h]
  __m128i v37; // [rsp+50h] [rbp-98h] BYREF
  int v38; // [rsp+60h] [rbp-88h]
  char v39[16]; // [rsp+70h] [rbp-78h] BYREF
  void *v40; // [rsp+80h] [rbp-68h]
  __m128i v41; // [rsp+88h] [rbp-60h] BYREF
  void *v42; // [rsp+98h] [rbp-50h]
  __m128i v43; // [rsp+A0h] [rbp-48h] BYREF
  int v44; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  v32 = 0;
  v31 = 0;
  QT::QFont::QFont((QT::QFont *)v33, a2);
  v4 = *(_QWORD *)(a3 + 8);
  v34 = nullptr;
  v35 = 0;
  if ( v4 )
  {
    v29 = (void *)qalloc_or_throw(v4);
    v30 = *(const void **)a3;
    v34 = v29;
    v35.m128i_i64[1] = v4;
    memcpy(v29, v30, v4);
    v35.m128i_i64[0] = v4;
  }
  v5 = *(_QWORD *)(a3 + 32);
  v36 = nullptr;
  v37 = 0;
  if ( v5 )
  {
    v27 = (void *)qalloc_or_throw(v5);
    v28 = *(const void **)(a3 + 24);
    v36 = v27;
    v37.m128i_i64[1] = v5;
    memcpy(v27, v28, v5);
    v37.m128i_i64[0] = v5;
  }
  v6 = v31;
  v38 = *(_DWORD *)(a3 + 48);
  if ( (unsigned __int64)v33 >= v31 && (unsigned __int64)v33 < v31 + 72LL * *((_QWORD *)&v32 + 1) )
  {
    QT::QFont::QFont((QT::QFont *)v39, (const QT::QFont *)v33);
    v20 = v34;
    v21 = _mm_loadu_si128(&v35);
    v34 = nullptr;
    v22 = _mm_load_si128(&v37);
    v23 = v32;
    v40 = v20;
    v41 = v21;
    v24 = v31;
    v42 = v36;
    v36 = nullptr;
    v44 = v38;
    v35 = 0;
    v43 = v22;
    v37 = 0;
    if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v31 = qvector_reserve(&v31, v31, v32 + 1, 72);
      v23 = v32;
      v24 = v31;
    }
    v25 = v24 + 72 * v23;
    v9 = v39;
    QT::QFont::QFont((QT::QFont *)v25, (const QT::QFont *)v39);
    v26 = _mm_loadu_si128(&v41);
    *(_QWORD *)(v25 + 16) = v40;
    *(__m128i *)(v25 + 24) = v26;
    v12 = _mm_load_si128(&v43);
    *(_QWORD *)(v25 + 40) = v42;
    *(__m128i *)(v25 + 48) = v12;
    *(_DWORD *)(v25 + 64) = v44;
    QT::QFont::~QFont((QT::QFont *)v39);
    *(_QWORD *)&v32 = v32 + 1;
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      *(double *)v12.m128i_i64 = qfree(v36, v39);
    }
  }
  else
  {
    v7 = v32;
    if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v31 = qvector_reserve(&v31, v31, v32 + 1, 72);
      v6 = v31;
      v7 = v32;
    }
    v8 = v6 + 72 * v7;
    v9 = v33;
    QT::QFont::QFont((QT::QFont *)v8, (const QT::QFont *)v33);
    v10 = _mm_loadu_si128(&v35);
    v11 = v34;
    v34 = nullptr;
    *(_QWORD *)&v32 = v32 + 1;
    *(__m128i *)(v8 + 24) = v10;
    *(_QWORD *)(v8 + 16) = v11;
    v35 = 0;
    v12 = _mm_load_si128(&v37);
    *(_QWORD *)(v8 + 40) = v36;
    *(__m128i *)(v8 + 48) = v12;
    *(_DWORD *)(v8 + 64) = v38;
  }
  if ( v34 )
  {
    v35.m128i_i64[0] = 0;
    *(double *)v12.m128i_i64 = qfree(v34, v9);
  }
  QT::QFont::~QFont((QT::QFont *)v33);
  (*(void (__fastcall **)(__int64, unsigned __int64 *, double))(*(_QWORD *)a1 + 200LL))(
    a1,
    &v31,
    *(double *)v12.m128i_i64);
  v13 = v31;
  if ( v31 )
  {
    v14 = v32;
    if ( (_QWORD)v32 )
    {
      v15 = 0;
      do
      {
        v16 = (QT::QFont *)(v13 + 72 * v15);
        v17 = *((_QWORD *)v16 + 5);
        if ( v17 )
        {
          *((_QWORD *)v16 + 6) = 0;
          *(double *)v12.m128i_i64 = qfree(v17, (const char *)&v31);
        }
        v18 = *((_QWORD *)v16 + 2);
        if ( v18 )
        {
          *((_QWORD *)v16 + 3) = 0;
          *(double *)v12.m128i_i64 = qfree(v18, (const char *)&v31, *(double *)v12.m128i_i64);
        }
        ++v15;
        QT::QFont::~QFont(v16);
        v13 = v31;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v13, (const char *)&v31);
  }
  return v45 - __readfsqword(0x28u);
}
