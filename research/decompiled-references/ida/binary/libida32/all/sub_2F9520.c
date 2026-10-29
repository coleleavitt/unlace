int __fastcall sub_2F9520(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB5610 = 0;
  qword_2CB5618 = 0;
  qword_2CB5620 = 0;
  qword_2CB5600 = (__int64)&off_2C4B8B0;
  qword_2CB5608 = (unsigned int)qword_2CB5608 & 0x80000000;
  qword_2CB5648 = 0x100000000LL;
  qword_2CB5628 = 0;
  qword_2CB5630 = 0;
  qword_2CB5638 = 0;
  qword_2CB5640 = (__int64)&unk_2CB5650;
  qword_2CB5658 = (__int64)&unk_2CB5670;
  qword_2CB5660 = 1;
  dword_2CB5668 = 0;
  byte_2CB566C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB5648;
  v4 = (unsigned int)qword_2CB5648 + 1LL;
  if ( v4 > HIDWORD(qword_2CB5648) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB5650 - 16, &unk_2CB5650, v4, 8);
    v3 = (unsigned int)qword_2CB5648;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB5640 + 8 * v3) = v2;
  word_2CB5688 = 0;
  xmmword_2CB56A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB5648) = qword_2CB5648 + 1;
  qword_2CB5680 = (__int64)off_2C474E8;
  byte_2CB5678 = 0;
  qword_2CB5600 = (__int64)off_2C4B848;
  qword_2CB5690 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB5600, "disable-last-run-tracking", 25);
  word_2CB5688 = 256;
  byte_2CB5678 = 0;
  qword_2CB5628 = 25;
  BYTE2(qword_2CB5608) = BYTE2(qword_2CB5608) & 0x9F | 0x20;
  qword_2CB5620 = (__int64)"Disable last run tracking";
  sub_21F4400(&qword_2CB5600);
  return __cxa_atexit(sub_1FEA450, &qword_2CB5600, &off_2AFC540);
}

