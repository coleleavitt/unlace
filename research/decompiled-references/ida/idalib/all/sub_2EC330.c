int __fastcall sub_2EC330(__int64 a1, __int64 a2)
{
  void **v2; // rax

  v2 = (void **)&unk_2CCB670;
  *(_OWORD *)&xmmword_2CCB660 = 0;
  do
  {
    *v2 = nullptr;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( &qword_2CCB6B8 != v2 );
  qword_2CCB6B8 = nullptr;
  qword_2CCB6D0 = nullptr;
  qword_2CCB6E8 = nullptr;
  qword_2CCB700 = nullptr;
  qword_2CCB718 = nullptr;
  qword_2CCB730 = nullptr;
  dword_2CCB760 = 0;
  qword_2CCB768 = nullptr;
  qword_2CCB770 = (__int64)&dword_2CCB760;
  qword_2CCB778 = (__int64)&dword_2CCB760;
  qword_2CCB780 = 0;
  qword_2CCB788 = 0;
  word_2CCB790 = 1539;
  qword_2CCB792 = 0;
  qword_2CCB7A0 = nullptr;
  xmmword_2CCB6C0 = 0;
  xmmword_2CCB6D8 = 0;
  xmmword_2CCB6F0 = 0;
  xmmword_2CCB708 = 0;
  xmmword_2CCB720 = 0;
  xmmword_2CCB738 = 0;
  xmmword_2CCB748 = 0;
  xmmword_2CCB7A8 = 0;
  sub_4591C0(algn_2CCB7B8, a2, &qword_2CCB6B8);
  qword_2CCB800 = 0;
  qword_2CCB830 = 0x3A00000000LL;
  qword_2CCB818 = -1;
  xmmword_2CCB808 = 0;
  xmmword_2CCB820 = 0;
  return __cxa_atexit(sub_457960, &xmmword_2CCB660, &off_2B25620);
}
