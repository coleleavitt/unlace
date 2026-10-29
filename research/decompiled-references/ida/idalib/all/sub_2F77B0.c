int __fastcall sub_2F77B0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-20h]

  v2 = j__strlen("Disable constant-folding of FP intrinsics and libcalls.");
  qword_2CDC0A0 = (__int64)&unk_2CDC0B0;
  v3 = v2;
  qword_2CDC070 = 0;
  qword_2CDC078 = 0;
  qword_2CDC080 = 0;
  qword_2CDC060 = (__int64)&off_2C758B0;
  qword_2CDC068 = (unsigned int)qword_2CDC068 & 0x80000000;
  qword_2CDC0A8 = 0x100000000LL;
  qword_2CDC088 = 0;
  qword_2CDC090 = 0;
  qword_2CDC098 = 0;
  qword_2CDC0B8 = (__int64)&unk_2CDC0D0;
  qword_2CDC0C0 = 1;
  dword_2CDC0C8 = 0;
  byte_2CDC0CC = 1;
  v4 = sub_2210FF0("Disable constant-folding of FP intrinsics and libcalls.", a2);
  v5 = (unsigned int)qword_2CDC0A8;
  v6 = (unsigned int)qword_2CDC0A8 + 1LL;
  if ( v6 > HIDWORD(qword_2CDC0A8) )
  {
    v8 = v4;
    sub_2237220((char *)&unk_2CDC0B0 - 16, &unk_2CDC0B0, v6, 8);
    v5 = (unsigned int)qword_2CDC0A8;
    v4 = v8;
  }
  *(_QWORD *)(qword_2CDC0A0 + 8 * v5) = v4;
  word_2CDC0E8 = 0;
  xmmword_2CDC108 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDC0A8) = qword_2CDC0A8 + 1;
  qword_2CDC0E0 = (__int64)off_2C714E8;
  byte_2CDC0D8 = 0;
  qword_2CDC060 = (__int64)off_2C75848;
  qword_2CDC0F0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDC060, "disable-fp-call-folding", 23);
  qword_2CDC080 = (__int64)"Disable constant-folding of FP intrinsics and libcalls.";
  qword_2CDC088 = v3;
  word_2CDC0E8 = 256;
  byte_2CDC0D8 = 0;
  BYTE2(qword_2CDC068) = BYTE2(qword_2CDC068) & 0x9F | 0x20;
  sub_2218140(&qword_2CDC060);
  return __cxa_atexit(sub_200E190, &qword_2CDC060, &off_2B25620);
}
