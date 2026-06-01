unsigned __int64 __fastcall sub_4F7BB0(_QWORD *a1, __int64 a2)
{
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v4 = 0;
  QT::QAccessibleWidget::QAccessibleWidget(a1, a2, 10, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  *a1 = logAccessible___vtable;
  a1[2] = logAccessible___vtable_at__16;
  a1[4] = logAccessible___vtable_at__32;
  return v5 - __readfsqword(0x28u);
}
