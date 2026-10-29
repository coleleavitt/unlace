__int64 __fastcall ClpNonLinearCost::setOne(ClpNonLinearCost *this, int a2, double a3, double a4, double a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r11
  double v10; // xmm4_8
  __int64 v11; // r8
  __int64 v12; // rax
  double *v13; // r10
  __int64 v14; // rbx

  result = *((unsigned int *)this + 36);
  if ( (result & 1) != 0 )
  {
    v7 = *((_QWORD *)this + 12);
    v8 = *((_QWORD *)this + 11);
    v9 = *((_QWORD *)this + 10);
    v10 = *(double *)(v7 + 904);
    v11 = *(int *)(*((_QWORD *)this + 7) + 4LL * a2);
    v12 = 8 * v11;
    v13 = (double *)(v8 + 8 * v11);
    v14 = 8 * v11 + 8;
    *v13 = a6 - v10;
    *(double *)(v9 + v12 + 8) = a4;
    *(double *)(v8 + v12 + 8) = a6;
    *(double *)(v9 + v12 + 16) = a5;
    v13[2] = v10 + a6;
    if ( a3 - a4 >= -*(double *)(v7 + 880) )
    {
      if ( *(double *)(v7 + 880) < a3 - a5 )
      {
        LODWORD(v11) = v11 + 2;
        v13 += 2;
      }
      else
      {
        LODWORD(v11) = v11 + 1;
        v13 = (double *)(v8 + v14);
      }
    }
    *(double *)(*(_QWORD *)(v7 + 1032) + 8LL * a2) = *v13;
    *(_DWORD *)(*((_QWORD *)this + 8) + 4LL * a2) = v11;
    result = *((unsigned int *)this + 36);
  }
  if ( (result & 2) != 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * a2) = 0;
    *(double *)(*((_QWORD *)this + 17) + 8LL * a2) = a6;
    result = *((_QWORD *)this + 15);
    *(_BYTE *)(result + a2) = 65;
  }
  return result;
}

