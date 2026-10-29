int __fastcall sub_339210(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D003B0 = 0;
  qword_2D003B8 = 0;
  qword_2D003C0 = 0;
  qword_2D003A0 = (__int64)&off_2C758B0;
  qword_2D003A8 = (unsigned int)qword_2D003A8 & 0x80000000;
  qword_2D003E8 = 0x100000000LL;
  qword_2D003C8 = 0;
  qword_2D003D0 = 0;
  qword_2D003D8 = 0;
  qword_2D003E0 = (__int64)&unk_2D003F0;
  qword_2D003F8 = (__int64)&unk_2D00410;
  qword_2D00400 = 1;
  dword_2D00408 = 0;
  byte_2D0040C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D003E8;
  v3 = (unsigned int)qword_2D003E8 + 1LL;
  if ( v3 > HIDWORD(qword_2D003E8) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D003F0 - 16, &unk_2D003F0, v3, 8);
    v2 = (unsigned int)qword_2D003E8;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D003E0 + 8 * v2) = v1;
  xmmword_2D00448 = (__int128)_mm_loadh_ps((const double *)off_2C77B30);
  LODWORD(qword_2D003E8) = qword_2D003E8 + 1;
  qword_2D00420 = (__int64)off_2BEAAC8;
  dword_2D00418 = 0;
  byte_2D0042C = 0;
  qword_2D003A0 = (__int64)off_2C72A80;
  dword_2D00428 = 0;
  qword_2D00430 = (__int64)off_2BEAB38;
  sub_2217250(&qword_2D003A0, "remarks-section", 15);
  qword_2D003C8 = 120;
  qword_2D003C0 = (__int64)"Emit a section containing remark diagnostics metadata. By default, this is enabled for the fo"
                           "llowing formats: bitstream.";
  dword_2D00418 = 0;
  byte_2D0042C = 1;
  dword_2D00428 = 0;
  BYTE2(qword_2D003A8) = BYTE2(qword_2D003A8) & 0x9F | 0x20;
  sub_2218140(&qword_2D003A0);
  return __cxa_atexit(sub_20FE1F0, &qword_2D003A0, &off_2B25620);
}
