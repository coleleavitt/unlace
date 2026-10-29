unsigned __int64 __fastcall sub_494CF0(QT::QAbstractItemView *this)
{
  __int64 v1; // rax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v4 = 0;
  sub_48FB10(this, (char *)ptr, nullptr, 48, 0);
  v1 = QT::QTreeView::header(this);
  sub_4EAA40(this, v1, ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v5 - __readfsqword(0x28u);
}
