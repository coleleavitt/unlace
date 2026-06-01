unsigned __int64 __fastcall sub_341DB0(QT::QWidget *a1, double a2, __m128 a3)
{
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = -1;
  sub_341C30(a1, (int *)&v4, a2, a3);
  return v5 - __readfsqword(0x28u);
}
