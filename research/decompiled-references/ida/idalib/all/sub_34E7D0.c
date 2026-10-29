int __fastcall sub_34E7D0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0B9B0 = 0;
  qword_2D0B9B8 = 0;
  qword_2D0B9C0 = 0;
  qword_2D0B9A0 = (__int64)&off_2C758B0;
  qword_2D0B9A8 = (unsigned int)qword_2D0B9A8 & 0x80000000;
  qword_2D0B9E8 = 0x100000000LL;
  qword_2D0B9C8 = 0;
  qword_2D0B9D0 = 0;
  qword_2D0B9D8 = 0;
  qword_2D0B9E0 = (__int64)&unk_2D0B9F0;
  qword_2D0B9F8 = (__int64)&unk_2D0BA10;
  qword_2D0BA00 = 1;
  dword_2D0BA08 = 0;
  byte_2D0BA0C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0B9E8;
  v3 = (unsigned int)qword_2D0B9E8 + 1LL;
  if ( v3 > HIDWORD(qword_2D0B9E8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0B9F0 - 16, &unk_2D0B9F0, v3, 8);
    v2 = (unsigned int)qword_2D0B9E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0B9E0 + 8 * v2) = v1;
  word_2D0BA28 = 0;
  LODWORD(qword_2D0B9E8) = qword_2D0B9E8 + 1;
  xmmword_2D0BA48 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  qword_2D0BA20 = (__int64)off_2C714E8;
  byte_2D0BA18 = 0;
  qword_2D0B9A0 = (__int64)off_2C75848;
  qword_2D0BA30 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0B9A0, "no-discriminators", 17);
  word_2D0BA28 = 256;
  byte_2D0BA18 = 0;
  qword_2D0B9C0 = (__int64)"Disable generation of discriminator information.";
  qword_2D0B9C8 = 48;
  sub_2218140(&qword_2D0B9A0);
  return __cxa_atexit(sub_200E190, &qword_2D0B9A0, &off_2B25620);
}
