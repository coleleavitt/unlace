int __fastcall sub_2F32D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB1710 = 0;
  qword_2CB1718 = 0;
  qword_2CB1720 = 0;
  qword_2CB1700 = (__int64)&off_2C4B8B0;
  qword_2CB1708 = (unsigned int)qword_2CB1708 & 0x80000000;
  qword_2CB1748 = 0x100000000LL;
  qword_2CB1728 = 0;
  qword_2CB1730 = 0;
  qword_2CB1738 = 0;
  qword_2CB1740 = (__int64)&unk_2CB1750;
  qword_2CB1758 = (__int64)&unk_2CB1770;
  qword_2CB1760 = 1;
  dword_2CB1768 = 0;
  byte_2CB176C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB1748;
  v4 = (unsigned int)qword_2CB1748 + 1LL;
  if ( v4 > HIDWORD(qword_2CB1748) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB1750 - 16, &unk_2CB1750, v4, 8);
    v3 = (unsigned int)qword_2CB1748;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB1740 + 8 * v3) = v2;
  word_2CB1788 = 0;
  LODWORD(qword_2CB1748) = qword_2CB1748 + 1;
  xmmword_2CB17A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  qword_2CB1780 = (__int64)off_2C474E8;
  byte_2CB1778 = 0;
  qword_2CB1700 = (__int64)off_2C4B848;
  qword_2CB1790 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB1700, "abort-on-max-devirt-iterations-reached", 38);
  qword_2CB1728 = 79;
  qword_2CB1720 = (__int64)"Abort when the max iterations for devirtualization CGSCC repeat pass is reached";
  sub_21F4400(&qword_2CB1700);
  return __cxa_atexit(sub_1FEA450, &qword_2CB1700, &off_2AFC540);
}

