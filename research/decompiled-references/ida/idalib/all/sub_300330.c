int __fastcall sub_300330(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CE0810 = 0;
  qword_2CE0818 = 0;
  qword_2CE0820 = 0;
  qword_2CE0800 = (__int64)&off_2C758B0;
  qword_2CE0808 = (unsigned int)qword_2CE0808 & 0x80000000;
  qword_2CE0848 = 0x100000000LL;
  qword_2CE0828 = 0;
  qword_2CE0830 = 0;
  qword_2CE0838 = 0;
  qword_2CE0840 = (__int64)&unk_2CE0850;
  qword_2CE0858 = (__int64)&unk_2CE0870;
  qword_2CE0860 = 1;
  dword_2CE0868 = 0;
  byte_2CE086C = 1;
  v2 = sub_2210FF0(a1, a2);
  v3 = (unsigned int)qword_2CE0848;
  v4 = (unsigned int)qword_2CE0848 + 1LL;
  if ( v4 > HIDWORD(qword_2CE0848) )
  {
    v6 = v2;
    sub_2237220((char *)&unk_2CE0850 - 16, &unk_2CE0850, v4, 8);
    v3 = (unsigned int)qword_2CE0848;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CE0840 + 8 * v3) = v2;
  LODWORD(qword_2CE0848) = qword_2CE0848 + 1;
  xmmword_2CE08A8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  qword_2CE0880 = (__int64)off_2C712D0;
  dword_2CE0878 = 0;
  byte_2CE088C = 0;
  qword_2CE0800 = (__int64)off_2C75710;
  dword_2CE0888 = 0;
  qword_2CE0890 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2CE0800, "object-size-offset-visitor-max-visit-instructions", 49);
  qword_2CE0828 = 69;
  qword_2CE0820 = (__int64)"Maximum number of instructions for ObjectSizeOffsetVisitor to look at";
  dword_2CE0878 = 100;
  byte_2CE088C = 1;
  dword_2CE0888 = 100;
  sub_2218140(&qword_2CE0800);
  return __cxa_atexit(sub_1FED260, &qword_2CE0800, &off_2B25620);
}
