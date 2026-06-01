__int64 __fastcall ClpModel::setRowLower(ClpModel *this, int a2, double a3)
{
  __int64 result; // rax

  if ( a3 < -1.0e27 )
    a3 = -1.797693134862316e308;
  result = *((_QWORD *)this + 18);
  *(double *)(result + 8LL * a2) = a3;
  *((_DWORD *)this + 79) = 0;
  return result;
}

