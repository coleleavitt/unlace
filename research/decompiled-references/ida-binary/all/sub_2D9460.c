unsigned __int64 __fastcall sub_2D9460(_QWORD *a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v6 = 0;
  QT::QAccessibleWidget::QAccessibleWidget(a1, a2, 10, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  *a1 = &IDAMemoAccessible___vtable;
  a1[2] = IDAMemoAccessible___vtable_at__16;
  a1[4] = IDAMemoAccessible___vtable_at__32;
  if ( (debug & 0x80000) != 0 && (a6[0] & 8) != 0 )
    sub_4F7CB0(
      8,
      (unsigned int)"%s IDAMemoAccessible::IDAMemoAccessible(w=%p)\n",
      (unsigned int)&unk_5C2F25,
      a2,
      v2,
      v3);
  return v7 - __readfsqword(0x28u);
}
