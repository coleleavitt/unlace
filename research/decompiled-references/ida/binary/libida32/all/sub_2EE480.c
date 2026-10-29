int sub_2EE480()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h]

  qword_2CAF610 = 0;
  qword_2CAF618 = 0;
  qword_2CAF620 = 0;
  qword_2CAF600 = (__int64)&off_2C4B8B0;
  qword_2CAF608 = (unsigned int)qword_2CAF608 & 0x80000000;
  qword_2CAF648 = 0x100000000LL;
  qword_2CAF628 = 0;
  qword_2CAF630 = 0;
  qword_2CAF638 = 0;
  qword_2CAF640 = (__int64)&unk_2CAF650;
  qword_2CAF658 = (__int64)&unk_2CAF670;
  qword_2CAF660 = 1;
  dword_2CAF668 = 0;
  byte_2CAF66C = 1;
  v0 = sub_21ED2B0();
  v1 = (unsigned int)qword_2CAF648;
  v2 = (unsigned int)qword_2CAF648 + 1LL;
  if ( v2 > HIDWORD(qword_2CAF648) )
  {
    v4 = v0;
    sub_22134E0((char *)&unk_2CAF650 - 16, &unk_2CAF650, v2, 8);
    v1 = (unsigned int)qword_2CAF648;
    v0 = v4;
  }
  *(_QWORD *)(qword_2CAF640 + 8 * v1) = v0;
  word_2CAF688 = 0;
  xmmword_2CAF6A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CAF648) = qword_2CAF648 + 1;
  qword_2CAF680 = (__int64)off_2C474E8;
  byte_2CAF678 = 0;
  qword_2CAF600 = (__int64)off_2C4B848;
  qword_2CAF690 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CAF600, "disable-basic-aa", 16);
  word_2CAF688 = 256;
  byte_2CAF678 = 0;
  BYTE2(qword_2CAF608) = BYTE2(qword_2CAF608) & 0x9F | 0x20;
  sub_21F4400(&qword_2CAF600);
  return __cxa_atexit(sub_1FEA450, &qword_2CAF600, &off_2AFC540);
}

