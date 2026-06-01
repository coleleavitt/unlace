unsigned __int64 __fastcall sub_3E23A0(__int64 a1, __int64 a2)
{
  QT::QPersistentModelIndex *v4; // r12
  QT::QPersistentModelIndex *v5; // r14
  QT::QPersistentModelIndex *v6; // rdi
  __int64 *v7; // rax
  QT::QPersistentModelIndex *v8; // rbx
  QT::QPersistentModelIndex *v9; // rbp
  QT::QPersistentModelIndex *v10; // rdi
  __int64 *v11; // rdx
  __int64 *v12; // rbp
  __int64 v13; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( sub_3DF240(a1, a2) )
  {
    v15 = 0;
    *(_OWORD *)ptr = 0;
    QT::QAbstractItemModel::layoutAboutToBeChanged(a1, ptr, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v4 = (QT::QPersistentModelIndex *)ptr[1];
      v5 = (QT::QPersistentModelIndex *)((char *)ptr[1] + 8 * v15);
      if ( ptr[1] != v5 )
      {
        do
        {
          v6 = v4;
          v4 = (QT::QPersistentModelIndex *)((char *)v4 + 8);
          QT::QPersistentModelIndex::~QPersistentModelIndex(v6);
        }
        while ( v5 != v4 );
      }
      free(ptr[0]);
    }
    v7 = *(__int64 **)(a2 + 8);
    if ( v7 )
    {
      v11 = *(__int64 **)(a1 + 32);
      if ( v11 != v7 )
      {
        do
        {
          v12 = v7;
          v7 = (__int64 *)v7[5];
        }
        while ( v11 != v7 );
        if ( v12 && (unsigned int)(*((_DWORD *)v12 + 14) - 1) <= 1 )
        {
          v13 = *v12;
          *((_BYTE *)v12 + 372) = 1;
          (*(void (__fastcall **)(__int64 *))(v13 + 40))(v12);
          *((_BYTE *)v12 + 372) = 0;
        }
      }
    }
    v15 = 0;
    *(_OWORD *)ptr = 0;
    QT::QAbstractItemModel::layoutChanged(a1, ptr, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      v8 = (QT::QPersistentModelIndex *)ptr[1];
      v9 = (QT::QPersistentModelIndex *)((char *)ptr[1] + 8 * v15);
      if ( ptr[1] != v9 )
      {
        do
        {
          v10 = v8;
          v8 = (QT::QPersistentModelIndex *)((char *)v8 + 8);
          QT::QPersistentModelIndex::~QPersistentModelIndex(v10);
        }
        while ( v9 != v8 );
      }
      free(ptr[0]);
    }
  }
  return v16 - __readfsqword(0x28u);
}
