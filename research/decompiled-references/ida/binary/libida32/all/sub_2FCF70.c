int __fastcall sub_2FCF70(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB68F0 = 0;
  qword_2CB68F8 = 0;
  qword_2CB6900 = 0;
  qword_2CB68E0 = (__int64)&off_2C4B8B0;
  qword_2CB68E8 = (unsigned int)qword_2CB68E8 & 0x80000000;
  qword_2CB6928 = 0x100000000LL;
  qword_2CB6908 = 0;
  qword_2CB6910 = 0;
  qword_2CB6918 = 0;
  qword_2CB6920 = (__int64)&unk_2CB6930;
  qword_2CB6938 = (__int64)&unk_2CB6950;
  qword_2CB6940 = 1;
  dword_2CB6948 = 0;
  byte_2CB694C = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB6928;
  v4 = (unsigned int)qword_2CB6928 + 1LL;
  if ( v4 > HIDWORD(qword_2CB6928) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB6930 - 16, &unk_2CB6930, v4, 8);
    v3 = (unsigned int)qword_2CB6928;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB6920 + 8 * v3) = v2;
  LODWORD(qword_2CB6928) = qword_2CB6928 + 1;
  xmmword_2CB6988 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CB6960 = (__int64)off_2C472D0;
  dword_2CB6958 = 0;
  byte_2CB696C = 0;
  qword_2CB68E0 = (__int64)off_2C4B710;
  dword_2CB6968 = 0;
  qword_2CB6970 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CB68E0, "object-size-offset-visitor-max-visit-instructions", 49);
  qword_2CB6908 = 69;
  qword_2CB6900 = (__int64)"Maximum number of instructions for ObjectSizeOffsetVisitor to look at";
  dword_2CB6958 = 100;
  byte_2CB696C = 1;
  dword_2CB6968 = 100;
  sub_21F4400(&qword_2CB68E0);
  return __cxa_atexit(sub_1FC9520, &qword_2CB68E0, &off_2AFC540);
}

