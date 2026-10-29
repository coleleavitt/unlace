QT::QObject **__fastcall sub_504020(__int64 a1, unsigned int *a2, char a3)
{
  QT::QObject **v4; // rbp
  QT::QAbstractButton *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __int128 v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v4 = (QT::QObject **)operator new(0x38u);
  sub_4AF8E0((QT::QWidget *)v4, 0, a3);
  v5 = v4[5];
  if ( *a2 == -1 )
  {
    LODWORD(v15) = 0;
    *(_QWORD *)((char *)&v15 + 4) = 0xFFFF;
    WORD6(v15) = 0;
  }
  else
  {
    *(_QWORD *)&v15 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(*a2), 8), 0);
    *((_QWORD *)&v15 + 1) = v13;
  }
  sub_4AF280(v5, (int *)&v15);
  QT::QSignalMapper::setMapping(*(QT::QSignalMapper **)(a1 + 400), v4[5], *(_DWORD *)(a1 + 48));
  QT::QObject::connect(&v14, v4[5], "2colorChanged(const QColor &)", *(_QWORD *)(a1 + 400), "1map()", 0);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), &v14, v6, v7, v8);
  v11 = *(int **)(a1 + 344);
  if ( !v11 || *v11 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v9, v10);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v14);
  return v4;
}
