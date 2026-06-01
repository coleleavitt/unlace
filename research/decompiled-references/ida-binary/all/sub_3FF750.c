unsigned __int64 __fastcall sub_3FF750(QT::QStandardItem *this)
{
  QT::QStandardItem *v1; // rbx
  double v2; // xmm0_8
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  QT::QStandardItem *v10; // [rsp+0h] [rbp-70h] BYREF
  void *ptr[2]; // [rsp+8h] [rbp-68h] BYREF
  int *v12; // [rsp+18h] [rbp-58h]
  void *v13[3]; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v12 = nullptr;
  v1 = (QT::QStandardItem *)operator new(0x10u);
  v2 = QT::QString::fromUtf8(v13, 10, "Loading...");
  QT::QStandardItem::QStandardItem(v1, (const QT::QString *)v13);
  v10 = v1;
  sub_3D32B0((int **)ptr, v12, (__int64 *)&v10, v3, v4, v5);
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
    sub_3D2ED0((__int64)ptr, 0, 0, 0, v6, v7);
  if ( v13[0] && !_InterlockedSub((volatile signed __int32 *)v13[0], 1u) )
    free(v13[0]);
  v8 = QT::QStandardItem::rowCount(this);
  QT::QStandardItem::insertRow(this, v8, ptr, v2);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v14 - __readfsqword(0x28u);
}
