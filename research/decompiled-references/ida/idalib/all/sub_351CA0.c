int __fastcall sub_351CA0(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D0D630 = 0;
  qword_2D0D638 = 0;
  qword_2D0D640 = 0;
  qword_2D0D620 = (__int64)&off_2C758B0;
  qword_2D0D628 = (unsigned int)qword_2D0D628 & 0x80000000;
  qword_2D0D668 = 0x100000000LL;
  qword_2D0D648 = 0;
  qword_2D0D650 = 0;
  qword_2D0D658 = 0;
  qword_2D0D660 = (__int64)&unk_2D0D670;
  qword_2D0D678 = (__int64)&unk_2D0D690;
  qword_2D0D680 = 1;
  dword_2D0D688 = 0;
  byte_2D0D68C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D0D668;
  v3 = (unsigned int)qword_2D0D668 + 1LL;
  if ( v3 > HIDWORD(qword_2D0D668) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D0D670 - 16, &unk_2D0D670, v3, 8);
    v2 = (unsigned int)qword_2D0D668;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D0D660 + 8 * v2) = v1;
  word_2D0D6A8 = 0;
  xmmword_2D0D6C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0D668) = qword_2D0D668 + 1;
  qword_2D0D6A0 = (__int64)off_2C714E8;
  byte_2D0D698 = 0;
  qword_2D0D620 = (__int64)off_2C75848;
  qword_2D0D6B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0D620, "ignore-redundant-instrumentation", 32);
  qword_2D0D640 = (__int64)"Ignore redundant instrumentation";
  word_2D0D6A8 = 256;
  byte_2D0D698 = 0;
  qword_2D0D648 = 32;
  BYTE2(qword_2D0D628) = BYTE2(qword_2D0D628) & 0x9F | 0x20;
  sub_2218140(&qword_2D0D620);
  return __cxa_atexit(sub_200E190, &qword_2D0D620, &off_2B25620);
}
