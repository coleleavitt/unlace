void __fastcall ClpModel::deleteIntegerInformation(ClpModel *this)
{
  void *v2; // rdi

  v2 = *((void **)this + 34);
  if ( v2 )
    operator delete[](v2);
  *((_QWORD *)this + 34) = 0;
}

