__int64 __fastcall sub_49F5A0(
        __int64 a1,
        _QWORD *a2,
        QT::QAbstractItemView *a3,
        __int64 a4,
        unsigned __int8 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  QT::QAbstractItemView *v13; // rdi
  unsigned int v14; // ebp
  __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 v19; // rdx
  double v20; // xmm4_8
  double v21; // xmm5_8
  unsigned int v22; // eax
  unsigned __int128 v23; // rax
  _QWORD v25[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int128 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v13 = *(QT::QAbstractItemView **)(a1 + 2384);
  if ( v13 == a3
    && (v17 = QT::QAbstractItemView::model(v13), (v18 = (_QWORD *)v17) != nullptr)
    && (v25[0] = sub_48B5B0(v17, a4),
        v25[1] = v19,
        LOBYTE(v22) = sub_48CB10(v18, v25, a6, a7, a8, a9, v20, v21, a12),
        v14 = v22,
        (_BYTE)v22) )
  {
    *(_QWORD *)&v23 = sub_524FA0(a1 + 40, a5 + 2165563906LL, 0);
    *a2 = v23;
    v26 = v23;
    *(_QWORD *)((char *)a2 + 6) = v23 >> 48;
  }
  else
  {
    return 0;
  }
  return v14;
}
