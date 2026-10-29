int __fastcall sub_2FEB90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB7650 = 0;
  qword_2CB7658 = 0;
  qword_2CB7660 = 0;
  qword_2CB7640 = (__int64)&off_2C4B8B0;
  qword_2CB7648 = (unsigned int)qword_2CB7648 & 0x80000000;
  qword_2CB7688 = 0x100000000LL;
  qword_2CB7668 = 0;
  qword_2CB7670 = 0;
  qword_2CB7678 = 0;
  qword_2CB7680 = (__int64)&unk_2CB7690;
  qword_2CB7698 = (__int64)&unk_2CB76B0;
  qword_2CB76A0 = 1;
  dword_2CB76A8 = 0;
  byte_2CB76AC = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB7688;
  v4 = (unsigned int)qword_2CB7688 + 1LL;
  if ( v4 > HIDWORD(qword_2CB7688) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB7690 - 16, &unk_2CB7690, v4, 8);
    v3 = (unsigned int)qword_2CB7688;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB7680 + 8 * v3) = v2;
  word_2CB76C8 = 0;
  xmmword_2CB76E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB7688) = qword_2CB7688 + 1;
  qword_2CB76C0 = (__int64)off_2C474E8;
  byte_2CB76B8 = 0;
  qword_2CB7640 = (__int64)off_2C4B848;
  qword_2CB76D0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB7640, "gvn-add-phi-translation", 23);
  word_2CB76C8 = 256;
  byte_2CB76B8 = 0;
  qword_2CB7668 = 42;
  BYTE2(qword_2CB7648) = BYTE2(qword_2CB7648) & 0x9F | 0x20;
  qword_2CB7660 = (__int64)"Enable phi-translation of add instructions";
  sub_21F4400(&qword_2CB7640);
  return __cxa_atexit(sub_1FEA450, &qword_2CB7640, &off_2AFC540);
}

