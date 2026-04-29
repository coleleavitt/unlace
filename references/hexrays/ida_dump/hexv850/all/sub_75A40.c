void __fastcall sub_75A40(std::exception *a1)
{
  __int64 v2; // rdi

  *(_QWORD *)a1 = off_4AF6B0;
  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree(v2);
  }
  std::exception::~exception(a1);
}
