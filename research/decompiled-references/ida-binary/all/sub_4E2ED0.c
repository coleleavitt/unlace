unsigned __int64 __fastcall vault_files_dirtree_widget_t__::vfunc_19(_DWORD *a1, unsigned __int8 a2)
{
  int v2; // eax
  int v4; // edx
  void **v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  QT::QPersistentModelIndex *v10; // rbx
  QT::QPersistentModelIndex *v11; // r15
  QT::QPersistentModelIndex *v12; // rdi
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-78h] BYREF
  __int128 v16; // [rsp+8h] [rbp-70h]
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = a1[420];
  if ( ((v2 & 0x1000) != 0) != a2 )
  {
    v4 = a1[420];
    BYTE1(v2) &= ~0x10u;
    BYTE1(v4) |= 0x10u;
    v16 = 0;
    if ( a2 )
      v2 = v4;
    v15 = 0;
    v6 = (void **)&v15;
    a1[420] = v2;
    (*(void (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 128LL))(a1, &v15);
    v7 = v16;
    if ( (_QWORD)v16 )
    {
      v8 = 0;
      do
      {
        v9 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(v15 + 8 * v8));
        v6 = ptr;
        *(_OWORD *)ptr = 0;
        v18 = 0;
        QT::QAbstractItemModel::layoutChanged(v9, ptr, 0);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        {
          v10 = (QT::QPersistentModelIndex *)ptr[1];
          v11 = (QT::QPersistentModelIndex *)((char *)ptr[1] + 8 * v18);
          if ( ptr[1] != v11 )
          {
            do
            {
              v12 = v10;
              v10 = (QT::QPersistentModelIndex *)((char *)v10 + 8);
              QT::QPersistentModelIndex::~QPersistentModelIndex(v12);
            }
            while ( v11 != v10 );
          }
          free(ptr[0]);
        }
        ++v8;
      }
      while ( v8 != v7 );
    }
    v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 144LL))(a1);
    if ( v13 )
    {
      v6 = (void **)a2;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, a2);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 376LL))(a1);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15, (const char *)v6);
    }
  }
  return v19 - __readfsqword(0x28u);
}
