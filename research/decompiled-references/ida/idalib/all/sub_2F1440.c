__int64 sub_2F1440()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *v2; // rcx

  v0 = j__strlen("Reads plain-text flags file");
  v1 = j__strlen("fixed-compilation-database");
  qword_2CD9318 = v0;
  qword_2CD9308 = v1;
  qword_2CD9310 = (__int64)"Reads plain-text flags file";
  qword_2CD9320 = (__int64)sub_1FF2E90;
  qword_2CD9330 = (__int64)&qword_2CD9300;
  qword_2CD9300 = (__int64)"fixed-compilation-database";
  qword_2CD9328 = 0;
  v2 = (_QWORD *)unk_2CD9340;
  if ( !unk_2CD9340 )
    v2 = &unk_2CD9348;
  *v2 = &qword_2CD9328;
  unk_2CD9340 = &qword_2CD9328;
  return unk_2CD9460;
}
