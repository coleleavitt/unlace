__int64 __fastcall ClpSimplex::allSlackBasis(ClpSimplex *this, char a2)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rcx
  double v6; // xmm0_8
  double *v7; // rdx
  double v8; // xmm2_8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rdi
  int v14; // edx

  result = ClpSimplex::createStatus(this);
  if ( a2 )
  {
    v4 = *((_DWORD *)this + 27);
    if ( v4 > 0 )
    {
      result = 0;
      while ( 1 )
      {
        v6 = *(double *)(*((_QWORD *)this + 22) + 8 * result);
        v7 = (double *)(*((_QWORD *)this + 15) + 8 * result);
        if ( v6 >= 0.0 )
          break;
        v8 = *(double *)(*((_QWORD *)this + 23) + 8 * result);
        if ( v8 <= 0.0 )
        {
          *v7 = v8;
          v5 = result;
          goto LABEL_12;
        }
        if ( v6 < -1.0e20 && v8 > 1.0e20 )
        {
          *v7 = 0.0;
          *(_BYTE *)(result + *((_QWORD *)this + 33)) &= 0xF8u;
          goto LABEL_6;
        }
        *v7 = 0.0;
        v5 = result;
        if ( fabs(v8) > fabs(v6) )
        {
LABEL_5:
          *(_BYTE *)(*((_QWORD *)this + 33) + v5) = *(_BYTE *)(*((_QWORD *)this + 33) + v5) & 0xF8 | 3;
LABEL_6:
          v4 = *((_DWORD *)this + 27);
          if ( v4 <= (int)++result )
            goto LABEL_13;
        }
        else
        {
LABEL_12:
          *(_BYTE *)(*((_QWORD *)this + 33) + v5) = *(_BYTE *)(*((_QWORD *)this + 33) + v5) & 0xF8 | 2;
          v4 = *((_DWORD *)this + 27);
          if ( v4 <= (int)++result )
            goto LABEL_13;
        }
      }
      *v7 = v6;
      v5 = result;
      goto LABEL_5;
    }
LABEL_13:
    v9 = *((_QWORD *)this + 150);
    if ( v9 )
    {
      v10 = *((_QWORD *)this + 29);
      if ( v10 )
      {
        result = v4;
        v11 = 8LL * v4;
        if ( v4 > 0 )
        {
          result = 0;
          v12 = 0;
          v13 = v11 + v10;
          while ( 1 )
          {
            ++v12;
            *(double *)(v9 + result) = *(double *)(v13 + result)
                                     * *((double *)this + 12)
                                     * *(double *)(*((_QWORD *)this + 15) + result);
            result += 8;
            if ( *((_DWORD *)this + 27) <= v12 )
              break;
            v9 = *((_QWORD *)this + 150);
          }
        }
      }
      else if ( v4 > 0 )
      {
        result = 0;
        v14 = 0;
        while ( 1 )
        {
          ++v14;
          *(_QWORD *)(v9 + result) = *(_QWORD *)(*((_QWORD *)this + 15) + result);
          result += 8;
          if ( *((_DWORD *)this + 27) <= v14 )
            break;
          v9 = *((_QWORD *)this + 150);
        }
      }
    }
  }
  return result;
}

