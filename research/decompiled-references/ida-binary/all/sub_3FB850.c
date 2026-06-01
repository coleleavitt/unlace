unsigned __int64 __fastcall sub_3FB850(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _BYTE *v3; // r13
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  const QT::QPersistentModelIndex *v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_3F2890(v10, a1, a2);
  if ( (HIDWORD(v10[0]) | LODWORD(v10[0])) >= 0 && v10[2] )
  {
    QT::QPersistentModelIndex::QPersistentModelIndex(&v8);
    v2 = *(_QWORD **)(a1 + 416);
    v3 = (_BYTE *)(a1 + 408);
    if ( !v2 )
      goto LABEL_12;
    do
    {
      while ( 1 )
      {
        v4 = QT::compareThreeWay((const QT::QPersistentModelIndex *)(v2 + 4), (const QT::QPersistentModelIndex *)&v8);
        v5 = v2[2];
        v6 = v2[3];
        if ( v4 < 0 )
          break;
        v3 = v2;
        v2 = (_QWORD *)v2[2];
        if ( !v5 )
          goto LABEL_8;
      }
      v2 = (_QWORD *)v2[3];
    }
    while ( v6 );
LABEL_8:
    if ( (_BYTE *)(a1 + 408) == v3
      || (QT::compareThreeWay((const QT::QPersistentModelIndex *)&v8, (const QT::QPersistentModelIndex *)(v3 + 32))
        & 0x80u) != 0LL )
    {
LABEL_12:
      v9 = (const QT::QPersistentModelIndex *)&v8;
      v3 = sub_3FB4D0((_QWORD *)(a1 + 400), v3, &v9);
    }
    v3[40] = 0;
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)&v8);
  }
  return v11 - __readfsqword(0x28u);
}
