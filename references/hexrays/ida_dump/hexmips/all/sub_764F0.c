__int64 __fastcall sub_764F0(std::exception *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = off_4BC450;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0;
    qfree(v2);
  }
  std::exception::~exception(this);
  return j__qfree(this);
}
