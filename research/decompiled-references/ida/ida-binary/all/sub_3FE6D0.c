unsigned __int64 __fastcall sub_3FE6D0(__m128i *a1, __int64 a2, const QT::QRegularExpression *a3)
{
  __int64 v5; // rax
  __int64 v7; // r9
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-30h]

  v5 = a1->m128i_i64[0];
  v17 = __readfsqword(0x28u);
  if ( !v5 || *(int *)v5 > 1 )
  {
    QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)&v16, a3);
    if ( !a1[1].m128i_i64[0] || a2 )
      goto LABEL_5;
LABEL_13:
    sub_3FE570(a1, 1, 1, nullptr, nullptr, v7);
    v13 = v16;
    v14 = a1->m128i_i64[1];
    v16 = 0;
    *(_QWORD *)(v14 - 8) = v13;
    a1->m128i_i64[1] -= 8;
    ++a1[1].m128i_i64[0];
    goto LABEL_6;
  }
  if ( a1[1].m128i_i64[0] != a2 )
  {
    if ( !a2 )
    {
      v11 = a1->m128i_i64[1];
      v12 = (v5 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_11;
    }
LABEL_16:
    QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)&v16, a3);
    goto LABEL_5;
  }
  v11 = a1->m128i_i64[1];
  v12 = (v5 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 != *(_QWORD *)(v5 + 8) - ((__int64)(v11 - v12) >> 3) )
  {
    QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)(v11 + 8 * a2), a3);
    v15 = a1[1].m128i_i64[0] + 1;
    goto LABEL_18;
  }
  if ( a2 )
    goto LABEL_16;
LABEL_11:
  if ( v11 != v12 )
  {
    QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)(v11 - 8), a3);
    a1->m128i_i64[1] -= 8;
    v15 = a1[1].m128i_i64[0] + 1;
LABEL_18:
    a1[1].m128i_i64[0] = v15;
    return v17 - __readfsqword(0x28u);
  }
  QT::QRegularExpression::QRegularExpression((QT::QRegularExpression *)&v16, a3);
  if ( a1[1].m128i_i64[0] )
    goto LABEL_13;
LABEL_5:
  sub_3FE570(a1, 0, 1, nullptr, nullptr, v7);
  v8 = (_QWORD *)(a1->m128i_i64[1] + 8 * a2);
  memmove(v8 + 1, v8, 8 * (a1[1].m128i_i64[0] - a2));
  v9 = v16;
  v16 = 0;
  *v8 = v9;
  ++a1[1].m128i_i64[0];
LABEL_6:
  QT::QRegularExpression::~QRegularExpression((QT::QRegularExpression *)&v16);
  return v17 - __readfsqword(0x28u);
}
