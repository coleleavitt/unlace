char *__fastcall ClpPESimplex::updatePrimalDegenerates(ClpPESimplex *this)
{
  char *result; // rax
  __int64 v3; // rdx
  char *v4; // r8
  int v5; // ebp
  char *v6; // rdx
  _QWORD *v7; // rsi
  int *v8; // rcx
  int v9; // edx
  double v10; // xmm9_8
  double v11; // xmm0_8
  double v12; // xmm9_8
  double v13; // xmm0_8
  __int64 v14; // rdi
  __int64 v15; // r9
  double v16; // xmm1_8
  double v17; // xmm0_8
  double v18; // xmm0_8
  double v19; // xmm1_8
  double v20; // xmm0_8
  double v21; // xmm1_8
  double v22; // xmm0_8

  result = (char *)*((int *)this + 30);
  v3 = *((int *)this + 31);
  v4 = *((char **)this + 2);
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 13) = 0x3F1A36E2EB1C432DLL;
  v5 = (int)result;
  v6 = &result[v3 + (_QWORD)v4];
  if ( v4 != v6 )
  {
    result = (char *)memset(v4, 0, v6 - v4);
    v4 = result;
  }
  v7 = *((_QWORD **)this + 12);
  v8 = (int *)v7[157];
  if ( v5 > 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      result = (char *)*v8;
      v16 = *(double *)(v7[150] + 8LL * (_QWORD)result);
      v17 = *(double *)(v7[123] + 8LL * (_QWORD)result);
      if ( v17 > -1.797693134862316e308 )
      {
        v10 = v16 - v17;
        v11 = fabs(v17);
        v12 = fabs(v10);
        v13 = v11 <= 1.0 ? 0.0001 : v11 * 0.0001;
        if ( v13 >= v12 )
          goto LABEL_8;
      }
      v18 = *(double *)(v7[126] + 8LL * (_QWORD)result);
      if ( v18 >= 1.797693134862316e308 )
        goto LABEL_9;
      v19 = v16 - v18;
      v20 = fabs(v18);
      v21 = fabs(v19);
      v22 = v20 <= 1.0 ? 0.0001 : v20 * 0.0001;
      if ( v22 >= v21 )
      {
LABEL_8:
        v14 = *(int *)this;
        v15 = *((_QWORD *)this + 1);
        *(_DWORD *)this = v14 + 1;
        *(_DWORD *)(v15 + 4 * v14) = v9;
        v5 = *((_DWORD *)this + 30);
        result[(_QWORD)v4] = 1;
LABEL_9:
        ++v9;
        ++v8;
        if ( v9 >= v5 )
          break;
      }
      else
      {
        ++v9;
        ++v8;
        if ( v9 >= v5 )
          break;
      }
    }
  }
  ++*((_DWORD *)this + 38);
  return result;
}

