unsigned __int64 __fastcall sub_3E8780(__int64 a1)
{
  void *v1; // rdx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  void *v4; // [rsp+8h] [rbp-30h]
  __int64 v5; // [rsp+10h] [rbp-28h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QWidget::saveGeometry((QT::QWidget *)&ptr);
  v1 = v4;
  if ( !v4 )
    v1 = &QT::QByteArray::_empty;
  reg_bin_op("TWelcomeForm", 1, v1, v5, "Geometry", 0);
  QT::QWidget::hideEvent(a1);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v6 - __readfsqword(0x28u);
}
