unsigned __int64 __fastcall sub_407CC0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // r13d
  unsigned int i; // ebx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  int *v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD v20[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-98h]
  void *ptr[4]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp-40h]

  v3 = *a1;
  v24 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 120) + 120LL))(*(_QWORD *)(v3 + 120));
  if ( v5 > 0 )
  {
    v6 = v5;
    for ( i = 0; i != v6; ++i )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 96LL))(
        v20,
        *(_QWORD *)(*a1 + 120LL),
        i,
        0,
        a2);
      if ( (v20[1] | v20[0]) >= 0 && v21 )
      {
        v8 = *(_QWORD *)(*a1 + 120LL);
        v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 144LL);
        if ( v9 == sub_407C10 )
          QT::QSortFilterProxyModel::data(v23, v8, v20, 18790);
        else
          v9((__int64)v23, v8, (__int64)v20, 18790);
        QT::QVariant::toString((QT::QVariant *)ptr);
        QT::QVariant::~QVariant((QT::QVariant *)v23);
        if ( QT::QString::indexOf(ptr, *a1 + 336LL, 0, 0, a3) != -1 )
        {
          v10 = *a1;
          QT::QPersistentModelIndex::QPersistentModelIndex(&v19);
          sub_3FF410((__m128i *)(v10 + 360), *(_QWORD *)(v10 + 376), &v19, v11, v12, v13);
          v16 = *(int **)(v10 + 360);
          if ( !v16 || *v16 > 1 )
            sub_3FED00((__m128i *)(v10 + 360), 0, 0, 0, v14, v15);
          QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)&v19);
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(*a1 + 120LL) + 136LL))(
               *(_QWORD *)(*a1 + 120LL),
               v20) )
        {
          v17 = a1[1];
          if ( !*(_QWORD *)(v17 + 16) )
            std::__throw_bad_function_call();
          (*(void (__fastcall **)(_QWORD, _DWORD *))(v17 + 24))(a1[1], v20);
        }
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
