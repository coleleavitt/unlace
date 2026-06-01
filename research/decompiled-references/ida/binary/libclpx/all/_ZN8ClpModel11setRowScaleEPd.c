void __fastcall ClpModel::setRowScale(ClpModel *this, double *a2)
{
  void *v3; // rdi

  if ( *((_QWORD *)this + 84) )
  {
    *((_QWORD *)this + 28) = 0;
  }
  else
  {
    v3 = *((void **)this + 28);
    if ( v3 )
      operator delete[](v3);
    *((_QWORD *)this + 28) = a2;
  }
}

