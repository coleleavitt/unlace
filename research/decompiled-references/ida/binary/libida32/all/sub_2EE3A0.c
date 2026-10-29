_QWORD *sub_2EE3A0()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  v0 = j__strlen("Runs FrontendActions on a set of files provided via positional arguments.");
  v1 = j__strlen("standalone");
  qword_2CAF5B8 = v0;
  qword_2CAF5A8 = v1;
  qword_2CAF5B0 = (__int64)"Runs FrontendActions on a set of files provided via positional arguments.";
  qword_2CAF5C0 = (__int64)sub_1FE3510;
  qword_2CAF5D0 = (__int64)&qword_2CAF5A0;
  result = &qword_2CAF530;
  qword_2CAF5A0 = (__int64)"standalone";
  qword_2CAF5C8 = 0;
  v3 = (_QWORD *)qword_2CAF530;
  if ( !qword_2CAF530 )
    v3 = &unk_2CAF538;
  *v3 = &qword_2CAF5C8;
  qword_2CAF530 = &qword_2CAF5C8;
  return result;
}

