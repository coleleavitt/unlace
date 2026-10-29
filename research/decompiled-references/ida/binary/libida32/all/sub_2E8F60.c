int __fastcall sub_2E8F60(__int64 a1, __int64 a2)
{
  void **v2; // rax

  v2 = (void **)&unk_2CA1770;
  *(_OWORD *)&xmmword_2CA1760 = 0;
  do
  {
    *v2 = nullptr;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( &qword_2CA17B8 != v2 );
  qword_2CA17B8 = nullptr;
  qword_2CA17D0 = nullptr;
  qword_2CA17E8 = nullptr;
  qword_2CA1800 = nullptr;
  qword_2CA1818 = nullptr;
  qword_2CA1830 = nullptr;
  dword_2CA1860 = 0;
  qword_2CA1868 = nullptr;
  qword_2CA1870 = (__int64)&dword_2CA1860;
  qword_2CA1878 = (__int64)&dword_2CA1860;
  qword_2CA1880 = 0;
  qword_2CA1888 = 0;
  word_2CA1890 = 1539;
  qword_2CA1892 = 0;
  qword_2CA18A0 = nullptr;
  xmmword_2CA17C0 = 0;
  xmmword_2CA17D8 = 0;
  xmmword_2CA17F0 = 0;
  xmmword_2CA1808 = 0;
  xmmword_2CA1820 = 0;
  xmmword_2CA1838 = 0;
  xmmword_2CA1848 = 0;
  xmmword_2CA18A8 = 0;
  sub_445380(algn_2CA18B8, a2, &qword_2CA17B8);
  qword_2CA1900 = 0;
  qword_2CA1918 = -1;
  qword_2CA1920 = 0;
  dword_2CA1928 = 0;
  qword_2CA192C = 0x3A00000000LL;
  xmmword_2CA1908 = 0;
  return __cxa_atexit(sub_443B70, &xmmword_2CA1760, &off_2AFC540);
}

