__int64 __fastcall sub_443480(__int64 a1, __int64 a2)
{
  QT::QAbstractItemView *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  QT::QAbstractItemView *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(QT::QAbstractItemView **)(a1 + 48);
  v10[3] = __readfsqword(0x28u);
  v4 = QT::QAbstractItemView::model(v3);
  v5 = sub_48B5B0(v4, a2);
  v6 = *(QT::QAbstractItemView **)(a1 + 48);
  v10[0] = v5;
  v10[1] = v7;
  v8 = sub_443320(v6, (__int64)v10);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(v8 + 84);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1);
  }
  return 1;
}
