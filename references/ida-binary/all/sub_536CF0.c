unsigned __int64 __fastcall sub_536CF0(__m128i *a1, __int64 a2, const QT::QKeySequence *a3)
{
  __int64 v5; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  char v15[8]; // [rsp+8h] [rbp-60h] BYREF
  __m128i *v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  size_t v20; // [rsp+30h] [rbp-38h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v5 = a1->m128i_i64[0];
  v21 = __readfsqword(0x28u);
  if ( !v5 || *(int *)v5 > 1 )
  {
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)v15, a3);
    if ( !a1[1].m128i_i64[0] || a2 )
      goto LABEL_5;
LABEL_13:
    sub_536B90(a1, 1u, 1, nullptr, nullptr, v7);
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)(a1->m128i_i64[1] - 8), (const QT::QKeySequence *)v15);
    a1->m128i_i64[1] -= 8;
    ++a1[1].m128i_i64[0];
    goto LABEL_6;
  }
  if ( a1[1].m128i_i64[0] != a2 )
  {
    if ( !a2 )
    {
      v12 = a1->m128i_i64[1];
      v13 = (v5 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_11;
    }
LABEL_16:
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)v15, a3);
    goto LABEL_5;
  }
  v12 = a1->m128i_i64[1];
  v13 = (v5 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a2 != *(_QWORD *)(v5 + 8) - ((__int64)(v12 - v13) >> 3) )
  {
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)(v12 + 8 * a2), a3);
    v14 = a1[1].m128i_i64[0] + 1;
    goto LABEL_18;
  }
  if ( a2 )
    goto LABEL_16;
LABEL_11:
  if ( v13 != v12 )
  {
    QT::QKeySequence::QKeySequence((QT::QKeySequence *)(v12 - 8), a3);
    a1->m128i_i64[1] -= 8;
    v14 = a1[1].m128i_i64[0] + 1;
LABEL_18:
    a1[1].m128i_i64[0] = v14;
    return v21 - __readfsqword(0x28u);
  }
  QT::QKeySequence::QKeySequence((QT::QKeySequence *)v15, a3);
  if ( a1[1].m128i_i64[0] )
    goto LABEL_13;
LABEL_5:
  sub_536B90(a1, 0, 1, nullptr, nullptr, v7);
  v8 = a1->m128i_i64[1];
  v9 = a1[1].m128i_i64[0];
  v16 = a1;
  v19 = 1;
  v10 = v8 + 8 * a2;
  v17 = v10;
  v18 = v10 + 8;
  v20 = 8 * (v9 - a2);
  memmove((void *)(v10 + 8), (const void *)v10, v20);
  QT::QKeySequence::QKeySequence((QT::QKeySequence *)v10, (const QT::QKeySequence *)v15);
  ++a1[1].m128i_i64[0];
LABEL_6:
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v15);
  return v21 - __readfsqword(0x28u);
}
