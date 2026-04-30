unsigned __int64 __fastcall sub_4CC7A0(__int64 a1)
{
  _BYTE v2[8]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v3; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v2, (QT::QPaintDevice *)(a1 + 16));
  v3 = 0;
  QT::QPainter::drawImage(v2, &v3, a1 + 48);
  QT::QPainter::~QPainter((QT::QPainter *)v2);
  return v4 - __readfsqword(0x28u);
}
