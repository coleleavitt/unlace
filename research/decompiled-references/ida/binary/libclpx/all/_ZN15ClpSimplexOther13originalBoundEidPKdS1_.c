__int64 __fastcall ClpSimplexOther::originalBound(
        ClpSimplexOther *this,
        int a2,
        double a3,
        const double *a4,
        const double *a5)
{
  __int64 result; // rax
  _BYTE *v6; // r8
  __int64 v7; // r8
  int v8; // r9d
  double *v9; // rdx
  double *v10; // rcx
  int v11; // esi
  double *v12; // r8
  double v13; // xmm0_8
  __int64 v14; // rdx
  double *v15; // rsi
  double *v16; // r8
  double v17; // xmm0_8
  double v18; // xmm1_8
  double v19; // xmm1_8
  double v20; // xmm1_8

  result = a2;
  v6 = (_BYTE *)(a2 + *((_QWORD *)this + 33));
  if ( (*v6 & 0x18) != 0 )
  {
    --*((_DWORD *)this + 334);
    *v6 &= 0xE7u;
    v7 = a2;
    v8 = *((_DWORD *)this + 27);
    v9 = (double *)&a4[v7];
    v10 = (double *)&a5[v7];
    if ( v8 > a2 )
    {
      v15 = (double *)(v7 * 8 + *((_QWORD *)this + 125));
      *v15 = *v9 * a3 + *(double *)(*((_QWORD *)this + 22) + 8 * result);
      v16 = (double *)(*((_QWORD *)this + 128) + v7 * 8);
      v17 = a3 * *v10 + *(double *)(*((_QWORD *)this + 23) + 8 * result);
      *v16 = v17;
      if ( *((_QWORD *)this + 28) )
      {
        v19 = *(double *)(*((_QWORD *)this + 31) + 8 * result);
        if ( *v15 > -1.0e50 )
        {
          *v15 = *v15 * (*((double *)this + 12) * v19);
          v17 = *v16;
        }
        if ( v17 < 1.0e50 )
          *v16 = v17 * (v19 * *((double *)this + 12));
      }
      else
      {
        v18 = *((double *)this + 12);
        if ( v18 != 1.0 )
        {
          if ( *v15 > -1.0e50 )
          {
            *v15 = *v15 * v18;
            v17 = *v16;
          }
          if ( v17 < 1.0e50 )
            *v16 = v17 * v18;
        }
      }
    }
    else
    {
      v11 = a2 - v8;
      v12 = (double *)(8LL * v11 + *((_QWORD *)this + 124));
      *v12 = *v9 * a3 + *(double *)(*((_QWORD *)this + 18) + 8LL * v11);
      result = *((_QWORD *)this + 127) + 8LL * v11;
      v13 = a3 * *v10 + *(double *)(*((_QWORD *)this + 19) + 8LL * v11);
      *(double *)result = v13;
      v14 = *((_QWORD *)this + 28);
      if ( v14 )
      {
        if ( *v12 > -1.0e50 )
        {
          *v12 = *(double *)(v14 + 8LL * v11) * *((double *)this + 12) * *v12;
          v13 = *(double *)result;
        }
        if ( v13 < 1.0e50 )
          *(double *)result = v13 * (*(double *)(v14 + 8LL * v11) * *((double *)this + 12));
      }
      else
      {
        v20 = *((double *)this + 12);
        if ( v20 != 1.0 )
        {
          if ( *v12 > -1.0e50 )
          {
            *v12 = *v12 * v20;
            v13 = *(double *)result;
          }
          if ( v13 < 1.0e50 )
            *(double *)result = v13 * v20;
        }
      }
    }
  }
  return result;
}

