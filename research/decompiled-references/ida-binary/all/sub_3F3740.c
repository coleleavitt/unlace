unsigned __int64 __fastcall sub_3F3740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // edi
  int v8; // r14d
  unsigned int i; // ebp
  _QWORD *v10; // r15
  _QWORD *v13; // [rsp+18h] [rbp-A0h]
  _BYTE v14[8]; // [rsp+38h] [rbp-80h] BYREF
  _DWORD v15[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v16; // [rsp+50h] [rbp-68h]
  _DWORD v17[4]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h]
  unsigned __int64 v19; // [rsp+78h] [rbp-40h]

  v5 = *(_DWORD *)a2;
  v19 = __readfsqword(0x28u);
  if ( v5 >= 0 && *(int *)(a2 + 4) >= 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 120LL))(a4);
          if ( v8 > 0 )
          {
            for ( i = 0; i != v8; ++i )
            {
              (*(void (__fastcall **)(_DWORD *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 96LL))(
                v15,
                a4,
                i,
                0,
                a2);
              if ( (v15[1] | v15[0]) >= 0 )
              {
                if ( v16 )
                {
                  (*(void (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)a4 + 400LL))(v17, a4, v15);
                  if ( (v17[1] | v17[0]) >= 0 )
                  {
                    if ( v18 )
                    {
                      QT::QPersistentModelIndex::QPersistentModelIndex(v14);
                      v10 = *(_QWORD **)(a5 + 16);
                      if ( v10 )
                      {
                        v13 = (_QWORD *)(a5 + 8);
                        do
                        {
                          if ( (QT::compareThreeWay(
                                  (const QT::QPersistentModelIndex *)(v10 + 4),
                                  (const QT::QPersistentModelIndex *)v14)
                              & 0x80u) == 0LL )
                          {
                            v13 = v10;
                            v10 = (_QWORD *)v10[2];
                          }
                          else
                          {
                            v10 = (_QWORD *)v10[3];
                          }
                        }
                        while ( v10 );
                        if ( (_QWORD *)(a5 + 8) != v13
                          && (QT::compareThreeWay(
                                (const QT::QPersistentModelIndex *)v14,
                                (const QT::QPersistentModelIndex *)(v13 + 4))
                            & 0x80u) == 0LL
                          && *((_BYTE *)v13 + 40) )
                        {
                          QT::QTreeView::setExpanded(a3, v15);
                        }
                      }
                      QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)v14);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v19 - __readfsqword(0x28u);
}
