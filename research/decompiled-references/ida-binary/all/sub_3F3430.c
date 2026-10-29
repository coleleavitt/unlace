__int64 __fastcall sub_3F3430(_QWORD *a1)
{
  __int64 result; // rax
  const QT::QPersistentModelIndex *v2; // rbx
  const QT::QPersistentModelIndex *v3; // rbp
  unsigned __int8 v4; // al
  unsigned __int8 v5; // [rsp+Fh] [rbp-29h]
  _BYTE v6[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  result = 0;
  if ( a1[44] && a1[47] )
  {
    QT::QPersistentModelIndex::QPersistentModelIndex(v6);
    v2 = (const QT::QPersistentModelIndex *)a1[46];
    v3 = (const QT::QPersistentModelIndex *)((char *)v2 + 8 * a1[47]);
    if ( v2 == v3 )
    {
LABEL_9:
      v4 = 0;
    }
    else
    {
      while ( 1 )
      {
        v4 = QT::comparesEqual(v2, (const QT::QPersistentModelIndex *)v6);
        if ( v4 )
          break;
        v2 = (const QT::QPersistentModelIndex *)((char *)v2 + 8);
        if ( v3 == v2 )
          goto LABEL_9;
      }
    }
    v5 = v4;
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)v6);
    return v5;
  }
  return result;
}
