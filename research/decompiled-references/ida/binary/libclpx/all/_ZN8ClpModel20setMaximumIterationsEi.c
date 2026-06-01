void __fastcall ClpModel::setMaximumIterations(ClpModel *this, int a2)
{
  if ( a2 >= 0 )
    *((_DWORD *)this + 74) = a2;
}

