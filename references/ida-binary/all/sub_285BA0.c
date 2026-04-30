__int64 __fastcall sub_285BA0(__int64 a1)
{
  QT::QCursor *v1; // rax
  _QWORD v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16));
  v3[0] = sub_1C7B10(v1);
  sub_2857B0(a1, (int *)v3, (int *)v3 + 1, 1u);
  return LODWORD(v3[0]);
}
