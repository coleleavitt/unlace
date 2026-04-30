unsigned __int64 __fastcall sub_3FE8B0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v6; // r12
  bool v7; // zf
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  int *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  int *v25; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  void *v34; // r13
  __m128i v35; // xmm1
  QT::QRegularExpression *v36; // rbp
  __int64 v37; // rax
  QT::QRegularExpression *v38; // r14
  QT::QRegularExpression *v39; // rdi
  __int64 v40; // rax
  QT::QRegularExpression *v41; // rbp
  QT::QRegularExpression *v42; // r13
  QT::QRegularExpression *v43; // rdi
  __int64 *v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+18h] [rbp-50h] BYREF
  __m128i v46[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = (void **)&a1[2].m128i_i64[1];
  v7 = a1[3].m128i_i64[1] == 0;
  v46[0].m128i_i64[1] = __readfsqword(0x28u);
  if ( v7 )
    goto LABEL_2;
  v31 = (unsigned int *)a1[2].m128i_i64[1];
  a4 = 0;
  if ( !v31 )
    goto LABEL_35;
  a3 = *v31;
  if ( (int)a3 > 1 )
  {
    a4 = *((_QWORD *)v31 + 1);
LABEL_35:
    v32 = QT::QArrayData::allocate(v46, 8, 16, a4, 1, a6);
    v33 = _mm_loadl_epi64(v46);
    v34 = (void *)a1[2].m128i_i64[1];
    v35 = (__m128i)(unsigned __int64)v32;
    v36 = (QT::QRegularExpression *)a1[3].m128i_i64[0];
    v37 = a1[3].m128i_i64[1];
    a1[3].m128i_i64[1] = 0;
    *(__m128i *)((char *)a1 + 40) = _mm_unpacklo_epi64(v33, v35);
    if ( v34 && !_InterlockedSub((volatile signed __int32 *)v34, 1u) )
    {
      v38 = (QT::QRegularExpression *)((char *)v36 + 8 * v37);
      while ( v38 != v36 )
      {
        v39 = v36;
        v36 = (QT::QRegularExpression *)((char *)v36 + 8);
        QT::QRegularExpression::~QRegularExpression(v39);
      }
      free(v34);
    }
    goto LABEL_2;
  }
  v41 = (QT::QRegularExpression *)a1[3].m128i_i64[0];
  v42 = (QT::QRegularExpression *)((char *)v41 + 8 * a1[3].m128i_i64[1]);
  while ( v42 != v41 )
  {
    v43 = v41;
    v41 = (QT::QRegularExpression *)((char *)v41 + 8);
    QT::QRegularExpression::~QRegularExpression(v43);
  }
  a1[3].m128i_i64[1] = 0;
LABEL_2:
  sub_3F8E40(v6, a1[2].m128i_i64[0], a3, a4, a5, a6);
  v11 = (int *)a1[1].m128i_i64[0];
  if ( !v11 || *v11 > 1 )
  {
    sub_3FAE80(a1 + 1, 0, 0, 0, v9, v10);
    v11 = (int *)a1[1].m128i_i64[0];
  }
  v12 = a1[1].m128i_i64[1];
  v13 = v12;
  if ( !v11 || *v11 > 1 )
  {
    sub_3FAE80(a1 + 1, 0, 0, 0, v9, v10);
    v12 = a1[1].m128i_i64[1];
  }
  v14 = 32 * a1[2].m128i_i64[0] + v12;
  if ( v13 != v14 )
  {
    while ( 1 )
    {
      while ( *(_BYTE *)(v13 + 25) && *(_BYTE *)(v13 + 24) )
      {
        QT::QRegularExpression::QRegularExpression(v46, v13, 0);
        QT::QRegularExpression::setPatternOptions(v46, *(_DWORD *)(v13 + 28) == 0);
        sub_3FE6D0((__m128i *)v6, a1[3].m128i_i64[1], (const QT::QRegularExpression *)v46);
        v25 = (int *)a1[2].m128i_i64[1];
        if ( !v25 || *v25 > 1 )
          sub_3FD800((__m128i *)v6, 0, 0, 0, v23, v24);
        v13 += 32;
        QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v46);
        if ( v13 == v14 )
          return v46[0].m128i_i64[1] - __readfsqword(0x28u);
      }
      QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)&v45);
      v17 = a1[2].m128i_i64[1];
      v18 = a1[3].m128i_i64[1];
      if ( !v17 )
        break;
      v19 = v45;
      if ( *(int *)v17 > 1 )
        break;
      v27 = a1[3].m128i_i64[0];
      v28 = (v17 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(v17 + 8) - ((__int64)(v27 - v28) >> 3) == v18 )
      {
        if ( v18 )
        {
          v45 = 0;
LABEL_31:
          v46[0].m128i_i64[0] = v19;
LABEL_13:
          sub_3FE570((__m128i *)v6, 0, 1, nullptr, nullptr, v16);
          v44 = (__int64 *)(a1[3].m128i_i64[0] + 8 * v18);
          memmove(v44 + 1, v44, 8 * (a1[3].m128i_i64[1] - v18));
          v21 = v46[0].m128i_i64[0];
          v46[0].m128i_i64[0] = 0;
          *v44 = v21;
          ++a1[3].m128i_i64[1];
          QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)v46);
          goto LABEL_14;
        }
        v45 = 0;
        if ( v28 == v27 )
          goto LABEL_31;
        *(_QWORD *)(v27 - 8) = v19;
        v29 = a1[3].m128i_i64[1];
        a1[3].m128i_i64[0] -= 8;
        v30 = v29 + 1;
      }
      else
      {
        *(_QWORD *)(v27 + 8 * v18) = v45;
        v40 = a1[3].m128i_i64[1];
        v45 = 0;
        v30 = v40 + 1;
      }
      a1[3].m128i_i64[1] = v30;
LABEL_14:
      v22 = (int *)a1[2].m128i_i64[1];
      if ( !v22 || *v22 > 1 )
        sub_3FD800((__m128i *)v6, 0, 0, 0, v15, v16);
      v13 += 32;
      QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)&v45);
      if ( v13 == v14 )
        return v46[0].m128i_i64[1] - __readfsqword(0x28u);
    }
    v20 = v45;
    v45 = 0;
    v46[0].m128i_i64[0] = v20;
    goto LABEL_13;
  }
  return v46[0].m128i_i64[1] - __readfsqword(0x28u);
}
