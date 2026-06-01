int __fastcall sub_168860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx

  dword_8D23E0 = (int)&unk_610041;
  v5 = QT::QColor::fromRgb((QT::QColor *)&qword_C8, 91, 91, 255, a5);
  qword_8D23EC = v6;
  qword_8D23E4 = v5;
  dword_8D23F4 = (int)&unk_770057;
  v8 = QT::QColor::fromRgb((QT::QColor *)((char *)&qword_A0 + 2), 162, 107, 255, v7);
  qword_8D2400 = v9;
  qword_8D23F8 = v8;
  dword_8D2408 = (int)&unk_780052;
  v11 = QT::QColor::fromRgb(nullptr, 162, 200, 255, v10);
  qword_8D2414 = v12;
  qword_8D240C = v11;
  dword_8D241C = (int)&unk_7A0046;
  v14 = QT::QColor::fromRgb((QT::QColor *)((char *)&qword_58 + 3), 200, 91, 255, v13);
  qword_8D23B0 = 0;
  qword_8D2428 = v15;
  qword_8D2420 = v14;
  xmmword_8D23B8 = 0;
  return __cxa_atexit(sub_1AE190, &qword_8D23B0, &off_85BC80);
}
