__int64 __fastcall sub_51A410(time_t a1)
{
  struct tm *v1; // rax
  time_t timer; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  timer = a1;
  v4[1] = __readfsqword(0x28u);
  v1 = localtime(&timer);
  QT::QDate::QDate((QT::QDate *)v4, v1->tm_year + 1900, v1->tm_mon + 1, v1->tm_mday);
  return v4[0];
}
