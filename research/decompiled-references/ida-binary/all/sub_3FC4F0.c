__int64 __fastcall sub_3FC4F0(__int64 a1)
{
  QT::QAbstractItemView *v1; // rbp
  _DWORD v3[4]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = *(QT::QAbstractItemView **)(a1 + 104);
  if ( v1 && (QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v3), (v3[1] | v3[0]) >= 0) && v4 )
    return sub_3FC2F0(a1, v1);
  else
    return 0;
}
