double *__fastcall ClpNonLinearCost::refresh(ClpNonLinearCost *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  double v4; // xmm0_8
  __int64 v5; // r10
  double v6; // xmm3_8
  _QWORD *v7; // r9
  double *v8; // rcx
  double *result; // rax
  double v10; // xmm2_8
  _BYTE *v11; // rdx
  double v12; // xmm4_8

  v2 = *((_QWORD *)this + 12);
  v3 = *(_QWORD *)(v2 + 1008);
  v4 = *(double *)(v2 + 880);
  v5 = *(_QWORD *)(v2 + 1200);
  v6 = *(double *)(v2 + 904);
  v7 = (_QWORD *)(8LL * a2 + *(_QWORD *)(v2 + 1032));
  v8 = (double *)(8LL * a2 + *(_QWORD *)(v2 + 984));
  *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * a2) = *v7;
  result = (double *)(v3 + 8LL * a2);
  v10 = *result;
  v11 = (_BYTE *)(a2 + *((_QWORD *)this + 15));
  v12 = *v8;
  if ( v4 < *(double *)(v5 + 8LL * a2) - *result )
  {
    *(double *)v7 = v6 + *(double *)v7;
    *v11 = 66;
    *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v12;
    *v8 = v10;
    *result = 1.797693134862316e308;
  }
  else if ( *(double *)(v5 + 8LL * a2) - v12 < -v4 )
  {
    *(double *)v7 = *(double *)v7 - v6;
    *v11 = 64;
    *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v10;
    *result = v12;
    *v8 = -1.797693134862316e308;
    return (double *)0xFFEFFFFFFFFFFFFFLL;
  }
  else
  {
    *v11 = 65;
    result = *((double **)this + 16);
    result[a2] = 0.0;
  }
  return result;
}

