void __fastcall sub_3F8E40(void **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  const QT::QRegularExpression *v11; // rbx
  __int64 v12; // r12
  const QT::QRegularExpression *v13; // r13
  QT::QRegularExpression *v14; // rbp
  const QT::QRegularExpression *v15; // rsi
  QT::QRegularExpression *v16; // rdi
  unsigned __int64 v17; // r12
  void *v18; // rbp
  __m128i v19; // xmm2
  QT::QRegularExpression *v20; // rbx
  void *v21; // rax
  QT::QRegularExpression *v22; // r12
  QT::QRegularExpression *v23; // rdi
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *a1;
  v25[1] = __readfsqword(0x28u);
  if ( v6
    && *((_QWORD *)v6 + 1) - ((__int64)((__int64)a1[1] - ((unsigned __int64)(v6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) >= a2 )
  {
    if ( (v6[4] & 1) != 0 )
      return;
    if ( *(_DWORD *)v6 == 1 )
    {
      *((_DWORD *)v6 + 1) |= 1u;
      return;
    }
  }
  v8 = (__int64)a1[2];
  if ( a2 >= v8 )
    v8 = a2;
  v9 = QT::QArrayData::allocate(v25, 8, 16, v8, 1, a6);
  v10 = v25[0];
  v11 = (const QT::QRegularExpression *)a1[1];
  v12 = 8LL * (_QWORD)a1[2];
  v13 = (const QT::QRegularExpression *)((char *)v11 + v12);
  v24 = _mm_unpacklo_epi64((__m128i)v25[0], (__m128i)(unsigned __int64)v9);
  if ( v11 == (const QT::QRegularExpression *)((char *)v11 + v12) || v11 >= v13 )
  {
    v17 = 0;
  }
  else
  {
    v14 = (QT::QRegularExpression *)v9;
    do
    {
      v15 = v11;
      v16 = v14;
      v11 = (const QT::QRegularExpression *)((char *)v11 + 8);
      v14 = (QT::QRegularExpression *)((char *)v14 + 8);
      QT::QRegularExpression::QRegularExpression(v16, v15);
    }
    while ( v11 < v13 );
    v17 = ((unsigned __int64)(v12 - 1) >> 3) + 1;
  }
  if ( v10 )
    *(_DWORD *)(v10 + 4) |= 1u;
  v18 = *a1;
  v19 = _mm_load_si128(&v24);
  v20 = (QT::QRegularExpression *)a1[1];
  v21 = a1[2];
  a1[2] = (void *)v17;
  *(__m128i *)a1 = v19;
  if ( v18 && !_InterlockedSub((volatile signed __int32 *)v18, 1u) )
  {
    v22 = (QT::QRegularExpression *)((char *)v20 + 8 * (_QWORD)v21);
    while ( v22 != v20 )
    {
      v23 = v20;
      v20 = (QT::QRegularExpression *)((char *)v20 + 8);
      QT::QRegularExpression::~QRegularExpression(v23);
    }
    free(v18);
  }
}
