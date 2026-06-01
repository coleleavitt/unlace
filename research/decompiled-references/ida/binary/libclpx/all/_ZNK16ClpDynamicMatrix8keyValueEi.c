__int64 __fastcall ClpDynamicMatrix::keyValue(ClpDynamicMatrix *this, int a2)
{
  double v2; // xmm0_8
  __int64 result; // rax
  __int64 v4; // rdx
  double v5; // xmm0_8
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  v2 = 0.0;
  result = *(unsigned int *)(*((_QWORD *)this + 23) + 4LL * a2);
  if ( (int)result >= 0 )
    return result;
  result = *(int *)(*((_QWORD *)this + 39) + 4LL * a2);
  if ( *((_DWORD *)this + 75) <= *(_DWORD *)(*((_QWORD *)this + 22) + 4LL * a2) )
  {
    for ( ; (int)result >= 0; result = *(int *)(*((_QWORD *)this + 40) + 4 * result) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 46) + result) & 7) == 2 )
      {
        v2 = v2 + *(double *)(*((_QWORD *)this + 48) + 8 * result);
      }
      else
      {
        v9 = *((_QWORD *)this + 47);
        if ( v9 )
          v2 = v2 + *(double *)(v9 + 8 * result);
      }
    }
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)this + 29) + a2) & 7) == 3 )
      v4 = *((_QWORD *)this + 27);
    else
      v4 = *((_QWORD *)this + 28);
    v5 = *(double *)(v4 + 8LL * a2);
    if ( (int)result >= 0 )
    {
      v6 = *((_QWORD *)this + 46);
      v7 = *((_QWORD *)this + 40);
      do
      {
        while ( (*(_BYTE *)(v6 + result) & 7) == 0 )
        {
LABEL_10:
          result = *(int *)(v7 + 4 * result);
          if ( (int)result < 0 )
            return result;
        }
        if ( (*(_BYTE *)(v6 + result) & 7) != 2 )
        {
          v8 = *((_QWORD *)this + 47);
          if ( v8 )
            v5 = v5 - *(double *)(v8 + 8 * result);
          goto LABEL_10;
        }
        v5 = v5 - *(double *)(*((_QWORD *)this + 48) + 8 * result);
        result = *(int *)(v7 + 4 * result);
      }
      while ( (int)result >= 0 );
    }
  }
  return result;
}

