bool sub_9FED0()
{
  _QWORD *v0; // rax

  v0 = &unk_250B60;
  if ( qword_250BC0 == qword_250BA0 )
    v0 = &unk_250E60;
  return (qword_250D08 | v0[5]) != 0;
}

