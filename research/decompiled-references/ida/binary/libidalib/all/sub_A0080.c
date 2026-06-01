bool sub_A0080()
{
  _QWORD *v0; // rax

  v0 = &unk_251BE0;
  if ( qword_251C40 == qword_251C20 )
    v0 = &unk_251F20;
  return (qword_251DA8 | v0[5]) != 0;
}

