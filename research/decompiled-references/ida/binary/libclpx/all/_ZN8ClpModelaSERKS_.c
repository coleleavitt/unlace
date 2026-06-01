ClpModel *__fastcall ClpModel::operator=(ClpModel *this, ClpModel *a2)
{
  if ( this != a2 )
  {
    ClpModel::gutsOfDelete(this, 1);
    *(_QWORD *)this = *(_QWORD *)a2;
    *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
    *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
    ClpModel::gutsOfCopy(this, a2, -1);
  }
  return this;
}

