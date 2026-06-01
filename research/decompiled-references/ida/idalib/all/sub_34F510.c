int sub_34F510()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-20h]

  v0 = j__strlen("Aggregate arguments to code-extracted functions");
  qword_2D0BCE0 = (__int64)&unk_2D0BCF0;
  v1 = v0;
  qword_2D0BCB0 = 0;
  qword_2D0BCB8 = 0;
  qword_2D0BCC0 = 0;
  qword_2D0BCA0 = (__int64)&off_2C758B0;
  qword_2D0BCA8 = (unsigned int)qword_2D0BCA8 & 0x80000000;
  qword_2D0BCE8 = 0x100000000LL;
  qword_2D0BCC8 = 0;
  qword_2D0BCD0 = 0;
  qword_2D0BCD8 = 0;
  qword_2D0BCF8 = (__int64)&unk_2D0BD10;
  qword_2D0BD00 = 1;
  dword_2D0BD08 = 0;
  byte_2D0BD0C = 1;
  v2 = sub_2210FF0("Aggregate arguments to code-extracted functions");
  v3 = (unsigned int)qword_2D0BCE8;
  v4 = (unsigned int)qword_2D0BCE8 + 1LL;
  if ( v4 > HIDWORD(qword_2D0BCE8) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2D0BCF0 - 16, &unk_2D0BCF0, v4, 8);
    v3 = (unsigned int)qword_2D0BCE8;
    v2 = v6;
  }
  *(_QWORD *)(qword_2D0BCE0 + 8 * v3) = v2;
  word_2D0BD28 = 0;
  xmmword_2D0BD48 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2D0BCE8) = qword_2D0BCE8 + 1;
  qword_2D0BD20 = (__int64)off_2C714E8;
  byte_2D0BD18 = 0;
  qword_2D0BCA0 = (__int64)off_2C75848;
  qword_2D0BD30 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2D0BCA0, "aggregate-extracted-args", 24);
  qword_2D0BCC8 = v1;
  BYTE2(qword_2D0BCA8) = BYTE2(qword_2D0BCA8) & 0x9F | 0x20;
  qword_2D0BCC0 = (__int64)"Aggregate arguments to code-extracted functions";
  sub_2218140(&qword_2D0BCA0);
  return __cxa_atexit(sub_200E190, &qword_2D0BCA0, &off_2B25620);
}
