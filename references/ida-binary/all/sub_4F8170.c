__int64 __fastcall sub_4F8170(QT::QAccessibleWidget *this, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx

  if ( (debug & 0x80000) != 0 )
    sub_4F7CB0(
      (QT::QTime *)((char *)&dword_0 + 2),
      (__int64)"%s logAccessible::characterRect(offset=%d)\n",
      (const char *)&unk_5C2F25,
      a2);
  v2 = QT::QAccessibleWidget::widget(this);
  v4 = sub_512DB0(v2, a2);
  if ( (debug & 0x80000) != 0 )
  {
    qsnprintf(byte_8D1EE0, 1024, "%d,%d -> %d,%d", v4, HIDWORD(v4), v3, HIDWORD(v3));
    sub_4F7CB0(
      (QT::QTime *)((char *)&dword_0 + 2),
      (__int64)"%s logAccessible::characterRect() => %s\n",
      (const char *)&unk_5C2F25,
      byte_8D1EE0);
  }
  return (v4 >> 32 << 32) | (unsigned int)v4;
}
