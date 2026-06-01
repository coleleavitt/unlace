_QWORD *sub_2F16C0()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  v0 = j__strlen("Reads JSON formatted compilation databases");
  v1 = j__strlen("json-compilation-database");
  qword_2CD9498 = v0;
  qword_2CD9488 = v1;
  qword_2CD9490 = (__int64)"Reads JSON formatted compilation databases";
  qword_2CD94A0 = (__int64)sub_2003550;
  qword_2CD94B0 = (__int64)&qword_2CD9480;
  result = &qword_2CD9340;
  qword_2CD9480 = (__int64)"json-compilation-database";
  qword_2CD94A8 = 0;
  v3 = (_QWORD *)qword_2CD9340;
  if ( !qword_2CD9340 )
    v3 = &unk_2CD9348;
  *v3 = &qword_2CD94A8;
  qword_2CD9340 = &qword_2CD94A8;
  return result;
}
