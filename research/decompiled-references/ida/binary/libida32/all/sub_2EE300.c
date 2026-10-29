_QWORD *sub_2EE300()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  v0 = j__strlen("Reads JSON formatted compilation databases");
  v1 = j__strlen("json-compilation-database");
  qword_2CAF578 = v0;
  qword_2CAF568 = v1;
  qword_2CAF570 = (__int64)"Reads JSON formatted compilation databases";
  qword_2CAF580 = (__int64)sub_1FDF810;
  qword_2CAF590 = (__int64)&qword_2CAF560;
  result = &qword_2CAF420;
  qword_2CAF560 = (__int64)"json-compilation-database";
  qword_2CAF588 = 0;
  v3 = (_QWORD *)qword_2CAF420;
  if ( !qword_2CAF420 )
    v3 = &unk_2CAF428;
  *v3 = &qword_2CAF588;
  qword_2CAF420 = &qword_2CAF588;
  return result;
}

