time_t __fastcall sub_51A470(__int64 a1)
{
  int v1; // eax
  __int64 v3; // [rsp+8h] [rbp-60h] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-20h]

  v3 = a1;
  v5 = __readfsqword(0x28u);
  memset(&tp, 0, sizeof(tp));
  tp.tm_year = QT::QDate::year((QT::QDate *)&v3) - 1900;
  tp.tm_mon = QT::QDate::month((QT::QDate *)&v3) - 1;
  v1 = QT::QDate::day((QT::QDate *)&v3);
  tp.tm_isdst = -1;
  tp.tm_mday = v1;
  return mktime(&tp);
}
