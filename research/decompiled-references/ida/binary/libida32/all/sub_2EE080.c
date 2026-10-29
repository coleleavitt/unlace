__int64 sub_2EE080()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *v2; // rcx

  v0 = j__strlen("Reads plain-text flags file");
  v1 = j__strlen("fixed-compilation-database");
  qword_2CAF3F8 = v0;
  qword_2CAF3E8 = v1;
  qword_2CAF3F0 = (__int64)"Reads plain-text flags file";
  qword_2CAF400 = (__int64)sub_1FCF150;
  qword_2CAF410 = (__int64)&qword_2CAF3E0;
  qword_2CAF3E0 = (__int64)"fixed-compilation-database";
  qword_2CAF408 = 0;
  v2 = (_QWORD *)unk_2CAF420;
  if ( !unk_2CAF420 )
    v2 = &unk_2CAF428;
  *v2 = &qword_2CAF408;
  unk_2CAF420 = &qword_2CAF408;
  return unk_2CAF540;
}

