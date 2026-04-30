__int64 __fastcall sub_285C10(__int64 a1)
{
  QT::QCursor *v1; // rax
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = (QT::QCursor *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16));
  v3 = (unsigned __int64)sub_1C7B10(v1) >> 32;
  sub_2857B0(a1, nullptr, (int *)&v3, 1u);
  return v3;
}
