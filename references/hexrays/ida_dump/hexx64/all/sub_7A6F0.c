__int64 __fastcall sub_7A6F0(std::exception *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = off_4DBCD0;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0;
    qfree(v2);
  }
  std::exception::~exception(this);
  return j__qfree(this);
}
