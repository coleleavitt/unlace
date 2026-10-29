__int64 __fastcall sub_3F2700(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  __int64 v6; // rax
  _DWORD v8[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  _DWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v8);
  v5 = 0;
  if ( (v8[0] | v8[1]) >= 0 && v9 )
  {
    if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, __int64, __int64, __int64))QT::QTreeView::isExpanded)(
                            a2,
                            v8,
                            0,
                            v2,
                            v3,
                            v4) )
    {
      QT::QTreeView::collapse(a2, v8);
    }
    else if ( v9 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)v9 + 104LL))(v10, v9, v8);
      if ( (v10[1] | v10[0]) >= 0 )
      {
        if ( v11 )
        {
          v6 = *(_QWORD *)(a1 + 304);
          if ( v6 != *(_QWORD *)(a1 + 312) )
            *(_QWORD *)(a1 + 312) = v6;
          *(_DWORD *)(a1 + 328) = -1;
          QT::QAbstractItemView::setCurrentIndex(a2, v10);
        }
      }
    }
    return 1;
  }
  return v5;
}
