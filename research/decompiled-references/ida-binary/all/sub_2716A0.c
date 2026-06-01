__int64 __fastcall sub_2716A0(
        __int64 a1,
        QT::QPainter *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned int v6; // r13d
  __int64 v8; // rdi
  int v10; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  _BYTE v19[8]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v20[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v8 = *(unsigned int *)(a4 + 64);
  v23 = __readfsqword(0x28u);
  if ( (_DWORD)v8 )
    v8 = *(unsigned int *)(a5 + 64);
  v10 = sub_277CE0(v8, a3);
  LOBYTE(v6) = v10 != -1;
  if ( v10 != -1 )
  {
    v12 = a1 + 40;
    v13 = 3LL * a6 + v10;
    v18 = dword_5E50C0[2 * v13 + 1];
    v14 = sub_524FA0(v12, dword_5E50C0[2 * v13], 0);
    v22 = v15;
    v21 = v14;
    QT::QBrush::QBrush(v20, &v21, 1);
    QT::QPen::QPen(v19, v20, 1, 16, 64, 1.0);
    QT::QBrush::~QBrush((QT::QBrush *)v20);
    QT::QPainter::setPen(a2, (const QT::QPen *)v19);
    v16 = sub_524FA0(v12, v18, 0);
    v22 = v17;
    v21 = v16;
    QT::QBrush::QBrush(v20, &v21, 1);
    QT::QPainter::setBrush(a2, (const QT::QBrush *)v20);
    QT::QBrush::~QBrush((QT::QBrush *)v20);
    QT::QPen::~QPen((QT::QPen *)v19);
  }
  return v6;
}
