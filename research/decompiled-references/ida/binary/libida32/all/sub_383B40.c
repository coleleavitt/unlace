void sub_383B40()
{
  if ( qword_2CA15B8 )
  {
    qunlink(qword_2CA15B8);
    qfree(qword_2CA15B8);
    qword_2CA15B8 = nullptr;
  }
}

