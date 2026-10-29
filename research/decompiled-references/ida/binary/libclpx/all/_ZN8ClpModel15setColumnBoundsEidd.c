__int64 __fastcall ClpModel::setColumnBounds(ClpModel *this, int a2, double a3, double a4)
{
  __int64 result; // rax

  if ( a3 < -1.0e27 )
    a3 = -1.797693134862316e308;
  if ( a4 > 1.0e27 )
    a4 = 1.797693134862316e308;
  *(double *)(*((_QWORD *)this + 22) + 8LL * a2) = a3;
  result = *((_QWORD *)this + 23);
  *(double *)(result + 8LL * a2) = a4;
  *((_DWORD *)this + 79) = 0;
  return result;
}

