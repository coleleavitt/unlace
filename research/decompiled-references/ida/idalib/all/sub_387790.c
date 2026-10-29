void sub_387790()
{
  if ( qword_2CCB4B8 )
  {
    qunlink(qword_2CCB4B8);
    qfree(qword_2CCB4B8);
    qword_2CCB4B8 = nullptr;
  }
}
