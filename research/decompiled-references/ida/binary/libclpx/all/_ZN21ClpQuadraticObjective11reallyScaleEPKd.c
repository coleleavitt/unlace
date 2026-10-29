__int64 __fastcall ClpQuadraticObjective::reallyScale(ClpQuadraticObjective *this, const double *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r12
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int64 v10; // rbp
  double v11; // xmm1_8
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdi

  v2 = *((_QWORD **)this + 3);
  v3 = v2[5];
  v4 = v2[6];
  v5 = v2[7];
  v6 = v2[4];
  result = *((unsigned int *)this + 12);
  if ( (int)result > 0 )
  {
    v8 = *((_QWORD *)this + 4);
    v9 = 0;
    v10 = 4LL * (unsigned int)(result - 1) + 4;
    do
    {
      result = *(int *)(v4 + v9);
      v11 = a2[v9 / 4];
      v12 = *(_DWORD *)(v5 + v9);
      *(double *)(v8 + 2 * v9) = *(double *)(v8 + 2 * v9) * v11;
      if ( (int)result < (int)result + v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        v14 = v3 + 4 * result;
        v15 = v6 + 8 * result;
        result = 0;
        v16 = v13 + 1;
        do
        {
          *(double *)(v15 + 8 * result) = a2[*(int *)(v14 + 4 * result)] * v11 * *(double *)(v15 + 8 * result);
          ++result;
        }
        while ( result != v16 );
      }
      v9 += 4LL;
    }
    while ( v10 != v9 );
  }
  return result;
}

