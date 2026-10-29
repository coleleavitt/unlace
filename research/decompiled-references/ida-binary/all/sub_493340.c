__int64 __fastcall sub_493340(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rdi
  const char **v7; // rsi
  QT::QPersistentModelIndex *v9; // rbx
  QT::QPersistentModelIndex *v10; // rbp
  QT::QPersistentModelIndex *v11; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !a3[1] )
    return 0;
  v5 = (__int64 *)(a1 + 136);
  v7 = *(const char ***)(a1 + 216);
  if ( !v7 )
    v7 = *(const char ***)(a1 + 208);
  sub_48A1D0(v5, v7, (__int64)a3);
  sub_491150(a2, a3, 0xD8u);
  *(_OWORD *)ptr = 0;
  v13 = 0;
  QT::QAbstractItemModel::layoutChanged(a1, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v9 = (QT::QPersistentModelIndex *)ptr[1];
    v10 = (QT::QPersistentModelIndex *)((char *)ptr[1] + 8 * v13);
    if ( ptr[1] != v10 )
    {
      do
      {
        v11 = v9;
        v9 = (QT::QPersistentModelIndex *)((char *)v9 + 8);
        QT::QPersistentModelIndex::~QPersistentModelIndex(v11);
      }
      while ( v10 != v9 );
    }
    free(ptr[0]);
  }
  return 1;
}
