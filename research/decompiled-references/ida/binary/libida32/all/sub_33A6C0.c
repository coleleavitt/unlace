int __fastcall sub_33A6C0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2CD7A50 = 0;
  qword_2CD7A58 = 0;
  qword_2CD7A60 = 0;
  qword_2CD7A40 = (__int64)&off_2C4B8B0;
  qword_2CD7A48 = (unsigned int)qword_2CD7A48 & 0x80000000;
  qword_2CD7A88 = 0x100000000LL;
  qword_2CD7A68 = 0;
  qword_2CD7A70 = 0;
  qword_2CD7A78 = 0;
  qword_2CD7A80 = (__int64)&unk_2CD7A90;
  qword_2CD7A98 = (__int64)&unk_2CD7AB0;
  qword_2CD7AA0 = 1;
  dword_2CD7AA8 = 0;
  byte_2CD7AAC = 1;
  v1 = sub_21ED2B0(a1);
  v2 = (unsigned int)qword_2CD7A88;
  v3 = (unsigned int)qword_2CD7A88 + 1LL;
  if ( v3 > HIDWORD(qword_2CD7A88) )
  {
    v5 = v1;
    sub_22134E0((char *)&unk_2CD7A90 - 16, &unk_2CD7A90, v3, 8);
    v2 = (unsigned int)qword_2CD7A88;
    v1 = v5;
  }
  *(_QWORD *)(qword_2CD7A80 + 8 * v2) = v1;
  word_2CD7AC8 = 0;
  xmmword_2CD7AE8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CD7A88) = qword_2CD7A88 + 1;
  qword_2CD7AC0 = (__int64)off_2C474E8;
  byte_2CD7AB8 = 0;
  qword_2CD7A40 = (__int64)off_2C4B848;
  qword_2CD7AD0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CD7A40, "guard-widening-widen-branch-guards", 34);
  word_2CD7AC8 = 257;
  byte_2CD7AB8 = 1;
  qword_2CD7A68 = 84;
  BYTE2(qword_2CD7A48) = BYTE2(qword_2CD7A48) & 0x9F | 0x20;
  qword_2CD7A60 = (__int64)"Whether or not we should widen guards  expressed as branches by widenable conditions";
  sub_21F4400(&qword_2CD7A40);
  return __cxa_atexit(sub_1FEA450, &qword_2CD7A40, &off_2AFC540);
}

