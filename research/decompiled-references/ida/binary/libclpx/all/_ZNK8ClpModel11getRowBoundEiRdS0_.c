__int64 __fastcall ClpModel::getRowBound(ClpModel *this, int a2, double *a3, double *a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  *a3 = -1.797693134862316e308;
  *a4 = 1.797693134862316e308;
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
    *a4 = *(double *)(v4 + 8LL * a2);
  result = *((_QWORD *)this + 18);
  if ( result )
    *a3 = *(double *)(result + 8LL * a2);
  return result;
}

