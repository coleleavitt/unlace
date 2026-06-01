int __fastcall sub_336050(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128i si128; // xmm0
  unsigned __int64 v7; // rdx
  __int128 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10[3]; // [rsp+10h] [rbp-38h] BYREF

  qword_2CD6610 = 0;
  qword_2CD6618 = 0;
  qword_2CD6620 = 0;
  qword_2CD6600 = (__int64)&off_2C4B8B0;
  qword_2CD6608 = (unsigned int)qword_2CD6608 & 0x80000000;
  qword_2CD6648 = 0x100000000LL;
  qword_2CD6628 = 0;
  qword_2CD6630 = 0;
  qword_2CD6638 = 0;
  qword_2CD6640 = (__int64)&unk_2CD6650;
  qword_2CD6658 = (__int64)&unk_2CD6670;
  qword_2CD6660 = 1;
  dword_2CD6668 = 0;
  byte_2CD666C = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD6648;
  v3 = (unsigned int)qword_2CD6648 + 1LL;
  if ( v3 > HIDWORD(qword_2CD6648) )
  {
    *(_QWORD *)&v9 = v1;
    sub_22134E0((char *)&unk_2CD6650 - 16, &unk_2CD6650, v3, 8);
    v2 = (unsigned int)qword_2CD6648;
    v1 = v9;
  }
  *(_QWORD *)(qword_2CD6640 + 8 * v2) = v1;
  qword_2CD6680 = (__int64)off_2C474E8;
  qword_2CD6600 = (__int64)off_2C4B848;
  word_2CD6688 = 0;
  xmmword_2CD66A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  v9 = xmmword_2CD66A8;
  LODWORD(qword_2CD6648) = qword_2CD6648 + 1;
  qword_2CD6690 = (__int64)off_2BC0B68;
  byte_2CD6678 = 0;
  sub_21F3510(&qword_2CD6600, "adce-remove-control-flow", 24);
  word_2CD6688 = 257;
  byte_2CD6678 = 1;
  BYTE2(qword_2CD6608) = BYTE2(qword_2CD6608) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD6600);
  __cxa_atexit(sub_1FEA450, &qword_2CD6600, &off_2AFC540);
  qword_2CD6550 = 0;
  qword_2CD6540 = (__int64)&off_2C4B8B0;
  qword_2CD6548 = (unsigned int)qword_2CD6548 & 0x80000000;
  qword_2CD6588 = 0x100000000LL;
  qword_2CD6558 = 0;
  qword_2CD6560 = 0;
  qword_2CD6568 = 0;
  qword_2CD6570 = 0;
  qword_2CD6578 = 0;
  qword_2CD6580 = (__int64)&unk_2CD6590;
  qword_2CD6598 = (__int64)&unk_2CD65B0;
  qword_2CD65A0 = 1;
  dword_2CD65A8 = 0;
  byte_2CD65AC = 1;
  v4 = sub_21ED2B0((const char *)sub_1FEA450);
  v5 = (unsigned int)qword_2CD6588;
  si128 = _mm_load_si128((const __m128i *)&v9);
  v7 = (unsigned int)qword_2CD6588 + 1LL;
  if ( v7 > HIDWORD(qword_2CD6588) )
  {
    *(_QWORD *)&v9 = v4;
    v10[0] = si128;
    sub_22134E0((char *)&unk_2CD6590 - 16, &unk_2CD6590, v7, 8);
    v5 = (unsigned int)qword_2CD6588;
    si128 = _mm_load_si128(v10);
    v4 = v9;
  }
  *(_QWORD *)(qword_2CD6580 + 8 * v5) = v4;
  word_2CD65C8 = 0;
  qword_2CD65C0 = (__int64)off_2C474E8;
  qword_2CD6540 = (__int64)off_2C4B848;
  qword_2CD65D0 = (__int64)off_2BC0B68;
  xmmword_2CD65E8 = (__int128)si128;
  LODWORD(qword_2CD6588) = qword_2CD6588 + 1;
  byte_2CD65B8 = 0;
  sub_21F3510(&qword_2CD6540, "adce-remove-loops", 17);
  word_2CD65C8 = 256;
  byte_2CD65B8 = 0;
  BYTE2(qword_2CD6548) = BYTE2(qword_2CD6548) & 0x9F | 0x20;
  sub_21F4400(&qword_2CD6540);
  return __cxa_atexit(sub_1FEA450, &qword_2CD6540, &off_2AFC540);
}

