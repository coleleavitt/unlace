unsigned __int64 __fastcall sub_443290(QT::QTreeView *a1, char a2)
{
  char v2; // al
  __int64 v3; // rax
  char v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = a2;
  v6 = __readfsqword(0x28u);
  *((_BYTE *)a1 + 2532) = a2;
  if ( a2 )
  {
    QT::QTreeView::collapseAll(a1);
    v2 = *((_BYTE *)a1 + 2532);
  }
  v5 = v2;
  v3 = sub_5313F0(unk_8CAB08);
  if ( v3 )
    sub_537630(v3, 7, &v5);
  return v6 - __readfsqword(0x28u);
}
