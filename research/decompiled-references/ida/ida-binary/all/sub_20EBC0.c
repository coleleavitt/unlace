bool sub_20EBC0()
{
  _QWORD *v0; // rax

  v0 = &unk_8CB760;
  if ( qword_8CB7C0 == qword_8CB7A0 )
    v0 = &unk_8CBAA0;
  return (qword_8CB928 | v0[5]) != 0;
}
