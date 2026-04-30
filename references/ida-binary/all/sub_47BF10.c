__int64 __fastcall sub_47BF10(__int64 a1)
{
  QT::QWidget *v1; // rbx
  __int64 result; // rax

  v1 = (QT::QWidget *)operator new(0x50u);
  result = sub_541FE0(v1);
  *(_QWORD *)(a1 + 120) = v1;
  return result;
}
