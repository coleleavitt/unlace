void __fastcall ClpModel::setColumnScale(ClpModel *this, double *a2)
{
  void *v3; // rdi

  if ( *((_QWORD *)this + 85) )
  {
    *((_QWORD *)this + 29) = 0;
  }
  else
  {
    v3 = *((void **)this + 29);
    if ( v3 )
      operator delete[](v3);
    *((_QWORD *)this + 29) = a2;
  }
}

