double __fastcall ClpInterior::quadraticDjs(ClpInterior *this, double *a2, const double *a3, double a4)
{
  const void *v4; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // r13
  int v13; // edx
  double result; // xmm0_8
  unsigned __int64 v15; // r8
  __int64 v16; // r11
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdi
  double v20; // xmm2_8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  double v26; // xmm3_8

  v4 = *((const void **)this + 20);
  if ( !v4 )
    return 0.0;
  v7 = __dynamic_cast(
         v4,
         (const struct __class_type_info *)&`typeinfo for'ClpObjective,
         (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
         0);
  if ( !v7 )
    return 0.0;
  v8 = v7[3];
  v9 = *(_QWORD *)(v8 + 40);
  v10 = *(_QWORD *)(v8 + 48);
  v11 = *(_QWORD *)(v8 + 56);
  v12 = *(_QWORD *)(v8 + 32);
  v13 = *(_DWORD *)(v8 + 64);
  if ( *(_BYTE *)(v8 + 8) )
  {
    if ( v13 > 0 )
      goto LABEL_5;
    return 0.0;
  }
  v13 = *(_DWORD *)(v8 + 68);
  if ( v13 <= 0 )
    return 0.0;
LABEL_5:
  result = 0.0;
  v15 = 0;
  v16 = 4LL * (unsigned int)(v13 - 1) + 4;
  do
  {
    v17 = *(int *)(v10 + v15);
    v18 = *(_DWORD *)(v11 + v15);
    if ( (int)v17 >= (int)v17 + v18 )
    {
      v20 = 0.0;
    }
    else
    {
      v19 = (unsigned int)(v18 - 1);
      v20 = 0.0;
      v21 = v9 + 4 * v17;
      v22 = v12 + 8 * v17;
      v23 = v19 + 1;
      v24 = 0;
      do
      {
        v25 = *(int *)(v21 + 4 * v24);
        v26 = *(double *)(v22 + 8 * v24++);
        v20 = v20 + a3[v25] * v26;
        result = result + a3[v25] * a3[v15 / 4] * v26;
      }
      while ( v23 != v24 );
    }
    a2[v15 / 4] = v20 * a4 + a2[v15 / 4];
    v15 += 4LL;
  }
  while ( v16 != v15 );
  return result;
}

