__int64 __fastcall sub_3E2190(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int8 v6; // al
  _QWORD *v7; // rdx
  _DWORD *v8; // rdi
  unsigned __int8 v9; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v10; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v11; // [rsp+Fh] [rbp-49h]
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a4 != 2 )
    return 0;
  QT::QVariant::toString((QT::QVariant *)ptr);
  if ( !v13 )
  {
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      return 0;
    }
    return 0;
  }
  v5 = *(_QWORD **)(a2 + 8);
  if ( !v5 )
  {
    if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
      v5 = nullptr;
    else
      v5 = *(_QWORD **)(a1 + 32);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64, void **))(*v5 + 24LL))(v5, a2, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v11 = v6;
    free(ptr[0]);
    v6 = v11;
  }
  v9 = v6;
  if ( !v6 )
    return 0;
  *(_OWORD *)ptr = 0;
  v13 = 0;
  QT::QAbstractItemModel::dataChanged(a1, a2, a2, ptr);
  result = v9;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    result = v9;
  }
  if ( v5 )
  {
    v7 = *(_QWORD **)(a1 + 32);
    if ( v5 != v7 )
    {
      do
      {
        v8 = v5;
        v5 = (_QWORD *)v5[5];
      }
      while ( v7 != v5 );
      if ( v8 )
      {
        if ( (unsigned int)(v8[14] - 1) <= 1 )
        {
          v10 = result;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 40LL))(v8);
          return v10;
        }
      }
    }
  }
  return result;
}
