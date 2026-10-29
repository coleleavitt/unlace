unsigned __int64 __fastcall sub_26ED60(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v3; // r8
  _QWORD *v4; // r9
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *(__fastcall *v9)(__int64, __int64, int, int, __int64); // r10
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  _QWORD *v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( sub_279D70((char *)this + 40) )
  {
    v4 = (_QWORD *)QT::QAbstractItemView::model(this);
    v5 = v4[3];
    v6 = **(_QWORD **)(a2 + 8);
    if ( v5 )
    {
      v7 = 0;
      while ( v6 != *(_QWORD *)(v4[2] + (v7 << 6)) )
      {
        if ( ++v7 == v5 )
          return v17 - __readfsqword(0x28u);
      }
      v12 = 0;
      v8 = -1;
      v13 = 0;
      v11 = -1;
      v9 = *(_QWORD *(__fastcall **)(__int64, __int64, int, int, __int64))(*v4 + 96LL);
      if ( v9 == sub_26E570 )
      {
        if ( (int)v7 < v5 )
        {
          v14 = (unsigned int)v7;
          v15 = (int)v7;
          v16 = v4;
        }
        else
        {
          v14 = -1;
          v15 = 0;
          v16 = nullptr;
        }
      }
      else
      {
        v9((__int64)&v14, (__int64)v4, v7, 0, (__int64)&v11);
      }
      if ( (unsigned __int8)QT::QTreeView::isExpanded(this, &v14, v8, v5, v3, v4, v11, v12, v13) != *(_BYTE *)(*(_QWORD *)(a2 + 8) + 8LL) )
        QT::QTreeView::setExpanded(this, &v14);
    }
  }
  return v17 - __readfsqword(0x28u);
}
