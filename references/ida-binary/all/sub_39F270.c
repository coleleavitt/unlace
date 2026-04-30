unsigned __int64 __fastcall sub_39F270(
        __int64 a1,
        QT::QPainter *a2,
        signed int a3,
        signed int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  unsigned int v8; // r14d
  int v11; // ebx
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v18[2]; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v19[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v20[7]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]

  v8 = a4;
  v11 = a3;
  v21 = __readfsqword(0x28u);
  if ( a3 <= a4 )
  {
    v8 = a3;
    v11 = a4;
  }
  sub_39B5A0(
    a1,
    a2,
    v8 + ((a8 >> 1) & 2 | a8 & 1),
    a5 + 1 - (a8 & 1) - ((a8 >> 1) & 2),
    v11,
    (a8 & 1) + a5 + ((a8 >> 1) & 2),
    a7);
  v12 = *(_QWORD *)(a1 + 672);
  if ( v12 )
  {
    v13 = sub_1737D0(v12, 1u);
    v14 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v13), 8), 1u);
    v20[1] = v15;
    v20[0] = v14;
    QT::QBrush::QBrush(v19, v20, 1);
    QT::QPainter::setBrush(a2, (const QT::QBrush *)v19);
    QT::QBrush::~QBrush((QT::QBrush *)v19);
    v19[0] = v11;
    v19[1] = a5;
    v18[0] = v8;
    v18[1] = a5;
    sub_39F050(a1, a2, v18, v19, a6, a8);
  }
  return v21 - __readfsqword(0x28u);
}
