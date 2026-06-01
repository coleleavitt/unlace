__int64 __fastcall ClpModel::chgRowLower(ClpModel *this, const double *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  double v4; // xmm0_8
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = *((unsigned int *)this + 26);
  *((_DWORD *)this + 79) = 0;
  if ( a2 )
  {
    if ( (int)result > 0 )
    {
      v3 = 8LL * (unsigned int)(result - 1) + 8;
      result = 0;
      do
      {
        while ( 1 )
        {
          v4 = *(const double *)((char *)a2 + result);
          v5 = *((_QWORD *)this + 18);
          if ( v4 < -1.0e20 )
            break;
          *(double *)(v5 + result) = v4;
          result += 8;
          if ( v3 == result )
            return result;
        }
        *(_QWORD *)(v5 + result) = 0xFFEFFFFFFFFFFFFFLL;
        result += 8;
      }
      while ( v3 != result );
    }
  }
  else if ( (int)result > 0 )
  {
    v6 = 8LL * (unsigned int)(result - 1) + 8;
    result = 0;
    do
    {
      *(_QWORD *)(*((_QWORD *)this + 18) + result) = 0xFFEFFFFFFFFFFFFFLL;
      result += 8;
    }
    while ( result != v6 );
  }
  return result;
}

