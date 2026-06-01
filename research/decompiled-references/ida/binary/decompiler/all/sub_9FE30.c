void __fastcall sub_9FE30(std::exception *a1)
{
  *(_QWORD *)a1 = off_4DB660;
  if ( *((_QWORD *)a1 + 3) )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree();
  }
  std::exception::~exception(a1);
}
