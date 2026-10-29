int sub_338EC0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  __int64 v7; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Profile uses flow sensitive discriminators");
  qword_2D00060 = (__int64)&unk_2D00070;
  v1 = v0;
  qword_2D00030 = 0;
  qword_2D00038 = 0;
  qword_2D00040 = 0;
  qword_2D00020 = (__int64)&off_2C758B0;
  qword_2D00028 = (unsigned int)qword_2D00028 & 0x80000000;
  qword_2D00068 = 0x100000000LL;
  qword_2D00048 = 0;
  qword_2D00050 = 0;
  qword_2D00058 = 0;
  qword_2D00078 = (__int64)&unk_2D00090;
  qword_2D00080 = 1;
  dword_2D00088 = 0;
  byte_2D0008C = 1;
  v2 = sub_2210FF0("Profile uses flow sensitive discriminators");
  v3 = (unsigned int)qword_2D00068;
  v4 = (unsigned int)qword_2D00068 + 1LL;
  if ( v4 > HIDWORD(qword_2D00068) )
  {
    v7 = v2;
    sub_2237220((char *)&unk_2D00070 - 16, &unk_2D00070, v4, 8);
    v3 = (unsigned int)qword_2D00068;
    v2 = v7;
  }
  *(_QWORD *)(qword_2D00060 + 8 * v3) = v2;
  word_2D000A8 = 0;
  xmmword_2D000C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D00068) = qword_2D00068 + 1;
  qword_2D000A0 = (__int64)off_2C714E8;
  byte_2D00098 = 0;
  qword_2D00020 = (__int64)off_2C75848;
  qword_2D000B0 = (__int64)off_2BEAB08;
  v5 = j__strlen("profile-isfs");
  sub_2217250(&qword_2D00020, "profile-isfs", v5);
  word_2D000A8 = 256;
  qword_2D00048 = v1;
  byte_2D00098 = 0;
  BYTE2(qword_2D00028) = BYTE2(qword_2D00028) & 0x9F | 0x20;
  qword_2D00040 = (__int64)"Profile uses flow sensitive discriminators";
  sub_2218140(&qword_2D00020);
  return __cxa_atexit(sub_200E190, &qword_2D00020, &off_2B25620);
}
