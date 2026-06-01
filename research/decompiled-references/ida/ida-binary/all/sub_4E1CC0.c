unsigned __int64 __fastcall sub_4E1CC0(
        QT::QAbstractItemModel *this,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, __int64); // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  char *v22; // rbx
  char *v23; // r15
  QT::QPersistentModelIndex *v24; // rdi
  void (__fastcall *v25)(__int64 *, void **, __m128i *, _QWORD, _QWORD, __int64, __int64, __int64); // [rsp+8h] [rbp-88h]
  void *ptr[2]; // [rsp+20h] [rbp-70h] BYREF
  __int64 v29; // [rsp+30h] [rbp-60h]
  __m128i v30; // [rsp+40h] [rbp-50h] BYREF
  __int64 v31; // [rsp+50h] [rbp-40h]
  unsigned __int64 v32; // [rsp+58h] [rbp-38h]

  v9 = *((_QWORD **)this + 2);
  v10 = a4[1];
  v32 = __readfsqword(0x28u);
  v12 = sub_4E07A0(v9, v10);
  v29 = 0;
  v30 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v31 = 0;
  *(_OWORD *)ptr = 0;
  if ( v12 )
  {
    v13 = v12;
    v14 = *v12;
    v15 = *(__int64 (__fastcall **)(__int64 *, __int64))(v14 + 64);
    if ( (char *)v15 == (char *)folder_data_t__::vfunc_8 )
      v16 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 24))(v13);
    else
      v16 = v15(v13, a6);
    v19 = a4[2];
    if ( v19 < v16 )
    {
      QT::QAbstractItemModel::beginInsertRows(this, a3, v19, (unsigned int)(v16 - 1), v17, v18);
      QT::QAbstractItemModel::endInsertRows(this);
    }
    else if ( v16 < v19 )
    {
      QT::QAbstractItemModel::beginRemoveRows(this, a3, (unsigned int)v16, (unsigned int)v19);
      QT::QAbstractItemModel::endRemoveRows(this);
    }
    v25 = *(void (__fastcall **)(__int64 *, void **, __m128i *, _QWORD, _QWORD, __int64, __int64, __int64))(*v13 + 72);
    v20 = (*(__int64 (__fastcall **)(QT::QAbstractItemModel *))(*(_QWORD *)this + 392LL))(this);
    v25(v13, ptr, &v30, *a4, *a5, a6, a3, v20);
    sub_4DE220(a2, a6, (__int64)ptr, &v30);
  }
  else
  {
    sub_4DE220(a2, a6, (__int64)ptr, &v30);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v22 = (char *)ptr[1];
    v23 = (char *)ptr[1] + 16 * v29;
    if ( ptr[1] != v23 )
    {
      do
      {
        QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v22 + 8));
        v24 = (QT::QPersistentModelIndex *)v22;
        v22 += 16;
        QT::QPersistentModelIndex::~QPersistentModelIndex(v24);
      }
      while ( v23 != v22 );
    }
    free(ptr[0]);
  }
  return v32 - __readfsqword(0x28u);
}
