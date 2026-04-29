__int64 __fastcall sub_75C70(std::exception *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = off_4AF6B0;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0;
    qfree(v2);
  }
  std::exception::~exception(this);
  return j__qfree(this);
}
