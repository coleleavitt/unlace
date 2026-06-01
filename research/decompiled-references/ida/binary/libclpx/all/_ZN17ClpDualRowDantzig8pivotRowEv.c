__int64 __fastcall ClpDualRowDantzig::pivotRow(ClpDualRowDantzig *this)
{
  __int64 v1; // rdi
  double v2; // xmm0_8
  double v3; // xmm2_8
  int v4; // edx
  __int64 result; // rax
  double v6; // xmm3_8
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  double v10; // xmm0_8
  double v11; // xmm0_8

  v1 = *((_QWORD *)this + 1);
  v2 = *(double *)(v1 + 760);
  v3 = *(double *)(v1 + 880);
  if ( v2 > 0.00000001 )
    v3 = v3 * (v2 / 0.00000001);
  v4 = *(_DWORD *)(v1 + 104);
  result = 0xFFFFFFFFLL;
  if ( v4 > 0 )
  {
    v6 = 0.0;
    v7 = (unsigned int)(v4 - 1) + 1LL;
    v8 = 0;
    do
    {
      v9 = *(int *)(*(_QWORD *)(v1 + 1256) + 4 * v8);
      v10 = *(double *)(*(_QWORD *)(v1 + 1200) + 8 * v9);
      v11 = fmax(v10 - *(double *)(*(_QWORD *)(v1 + 1008) + 8 * v9), *(double *)(*(_QWORD *)(v1 + 984) + 8 * v9) - v10);
      if ( v11 > v3 )
      {
        if ( (int)v9 < *(_DWORD *)(v1 + 108) )
          v11 = v11 * 1.01;
        if ( v11 > v6 && (*(_BYTE *)(*(_QWORD *)(v1 + 264) + v9) & 0x40) == 0 )
        {
          v6 = v11;
          result = (unsigned int)v8;
        }
      }
      ++v8;
    }
    while ( v7 != v8 );
  }
  return result;
}

