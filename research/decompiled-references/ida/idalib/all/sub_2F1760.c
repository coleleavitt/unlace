_QWORD *sub_2F1760()
{
  size_t v0; // rbx
  size_t v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  v0 = j__strlen("Runs FrontendActions on a set of files provided via positional arguments.");
  v1 = j__strlen("standalone");
  qword_2CD94D8 = v0;
  qword_2CD94C8 = v1;
  qword_2CD94D0 = (__int64)"Runs FrontendActions on a set of files provided via positional arguments.";
  qword_2CD94E0 = (__int64)sub_2007250;
  qword_2CD94F0 = (__int64)&qword_2CD94C0;
  result = &qword_2CD9450;
  qword_2CD94C0 = (__int64)"standalone";
  qword_2CD94E8 = 0;
  v3 = (_QWORD *)qword_2CD9450;
  if ( !qword_2CD9450 )
    v3 = &unk_2CD9458;
  *v3 = &qword_2CD94E8;
  qword_2CD9450 = &qword_2CD94E8;
  return result;
}
