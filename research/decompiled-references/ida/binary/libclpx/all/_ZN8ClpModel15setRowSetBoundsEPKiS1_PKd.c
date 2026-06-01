void __fastcall ClpModel::setRowSetBounds(ClpModel *this, const int *a2, const int *a3, const double *a4)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  double *v7; // rdi
  double *v8; // rax
  double v9; // xmm0_8

  v4 = *((_QWORD *)this + 18);
  v5 = *((_QWORD *)this + 19);
  for ( *((_DWORD *)this + 79) = 0; a2 != a3; *v8 = 1.797693134862316e308 )
  {
    while ( 1 )
    {
      ++a2;
      a4 += 2;
      v6 = 8LL * *(a2 - 1);
      v7 = (double *)(v4 + v6);
      v8 = (double *)(v5 + v6);
      *v7 = *(a4 - 2);
      *v8 = *(a4 - 1);
      v9 = *v7;
      if ( *v7 < -1.0e27 )
        v9 = -1.797693134862316e308;
      *v7 = v9;
      if ( *v8 > 1.0e27 )
        break;
      if ( a2 == a3 )
        return;
    }
  }
}

