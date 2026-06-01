__int64 __fastcall sub_521800(
        QT::QAbstractItemView *a1,
        _QWORD *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int8 a12)
{
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned __int128 v22; // rax
  _QWORD v23[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int128 v24; // [rsp+10h] [rbp-48h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v14 = QT::QAbstractItemView::model(a1);
  if ( v14
    && (v15 = (_QWORD *)v14,
        v23[0] = sub_48B5B0(v14, a11),
        v23[1] = v16,
        LOBYTE(v19) = sub_48CB10(v15, v23, a3, a4, a5, a6, v17, v18, a9),
        v20 = v19,
        (_BYTE)v19) )
  {
    *(_QWORD *)&v22 = sub_524FA0((char *)a1 + 240, a12 + 2165563906LL, 0);
    *a2 = v22;
    v24 = v22;
    *(_QWORD *)((char *)a2 + 6) = v22 >> 48;
  }
  else
  {
    return 0;
  }
  return v20;
}
