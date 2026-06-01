__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_23(
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
  unsigned int v12; // ebp
  __int64 v15; // rax
  _QWORD *v16; // rbp
  __int64 v17; // rdx
  double v18; // xmm4_8
  double v19; // xmm5_8
  unsigned int v20; // eax
  unsigned __int128 v21; // rax
  _QWORD v23[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int128 v24; // [rsp+20h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a3 == *(QT::QAbstractItemView **)(a1 + 2280)
    && (v15 = QT::QAbstractItemView::model(a3), (v16 = (_QWORD *)v15) != nullptr)
    && (v23[0] = sub_48B5B0(v15, a4),
        v23[1] = v17,
        LOBYTE(v20) = sub_48CB10(v16, v23, a6, a7, a8, a9, v18, v19, a12),
        v12 = v20,
        (_BYTE)v20) )
  {
    *(_QWORD *)&v21 = sub_524FA0(a1 - 64, a5 + 2165563906LL, 0);
    *a2 = v21;
    v24 = v21;
    *(_QWORD *)((char *)a2 + 6) = v21 >> 48;
  }
  else
  {
    return 0;
  }
  return v12;
}
