__int64 __fastcall ClpPrimalColumnSteepest::redoInfeasibilities(ClpPrimalColumnSteepest *this)
{
  __int64 result; // rax
  __int64 *v2; // rbp
  int v3; // edx
  __int64 v4; // r11
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r10
  double v8; // xmm1_8
  int v9; // esi
  __int64 v10; // r9
  int v11; // r8d
  double v12; // xmm0_8
  char v13; // cl
  double v14; // xmm0_8
  __int64 v15; // rdx

  result = *((_QWORD *)this + 1);
  v2 = *((__int64 **)this + 5);
  v3 = *(_DWORD *)(result + 104) + *(_DWORD *)(result + 108);
  v4 = v2[1];
  v5 = *v2;
  v6 = *(_QWORD *)(result + 1176);
  v7 = *(_QWORD *)(result + 264);
  v8 = fmin(0.01, *(double *)(result + 768)) + *(double *)(result + 872);
  if ( v3 <= 0 )
  {
    *((_DWORD *)v2 + 4) = 0;
  }
  else
  {
    result = 0;
    v9 = 0;
    v10 = (unsigned int)(v3 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v11 = result;
        v12 = *(double *)(v6 + 8 * result);
        v13 = *(_BYTE *)(v7 + result) & 7;
        if ( v13 != 3 )
        {
          if ( (*(_BYTE *)(v7 + result) & 1) != 0 )
          {
            v12 = 0.0;
          }
          else if ( v13 == 2 )
          {
            v12 = -v12;
          }
          else
          {
            v14 = fabs(v12);
            if ( v14 <= v8 * 100.0 )
              v12 = 0.0;
            else
              v12 = -v14 * 10.0;
          }
        }
        if ( -v8 > v12 )
          break;
        *(_QWORD *)(v4 + 8 * result++) = 0;
        if ( v10 == result )
          goto LABEL_11;
      }
      v15 = v9++;
      *(double *)(v4 + 8 * result++) = v12 * v12;
      *(_DWORD *)(v5 + 4 * v15) = v11;
    }
    while ( v10 != result );
LABEL_11:
    *((_DWORD *)v2 + 4) = v9;
    if ( v9 )
    {
      *((_DWORD *)this + 20) = 0;
      return result;
    }
  }
  *((_BYTE *)v2 + 28) = 0;
  *((_DWORD *)this + 20) = 0;
  return result;
}

