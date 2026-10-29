__int64 __fastcall ClpDynamicMatrix::times(ClpDynamicMatrix *this, double a2, const double *a3, double *a4)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 result; // rax
  __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // r11d
  __int64 v15; // r8
  __int64 v16; // rcx
  double v17; // xmm2_8
  __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rdi
  double v25; // xmm1_8
  __int64 v26; // [rsp+0h] [rbp-40h]

  v4 = *((_QWORD *)this + 30);
  if ( *(_DWORD *)(v4 + 336) != 16 )
    return ClpPackedMatrix::times(this, a2, a3, a4);
  v5 = *((_QWORD **)this + 11);
  v6 = *(_QWORD *)(v4 + 1256);
  v7 = v5[4];
  v8 = v5[5];
  v9 = v5[6];
  v10 = v5[7];
  result = (unsigned int)(*((_DWORD *)this + 51) + *((_DWORD *)this + 66));
  v26 = v7;
  if ( (int)result > 0 )
  {
    v12 = (unsigned int)(result - 1);
    v13 = *((_QWORD *)this + 1);
    v14 = *((_DWORD *)this + 65);
    result = 0;
    v15 = v12 + 1;
    do
    {
      while ( 1 )
      {
        v16 = *(int *)(v6 + 4 * result);
        a4[result] = a4[result] - *(double *)(v13 + 8 * result) * a2;
        if ( v14 > (int)v16 )
        {
          v17 = a3[v16] * a2;
          if ( v17 != 0.0 )
          {
            v18 = *(int *)(v9 + 4 * v16);
            v19 = *(_DWORD *)(v10 + 4 * v16);
            if ( (int)v18 < (int)v18 + v19 )
              break;
          }
        }
        if ( v15 == ++result )
          return result;
      }
      v20 = v8 + 4 * v18;
      v21 = (unsigned int)(v19 - 1) + 1LL;
      v22 = v26 + 8 * v18;
      v23 = 0;
      do
      {
        v24 = *(int *)(v20 + 4 * v23);
        v25 = *(double *)(v22 + 8 * v23++);
        a4[v24] = v25 * v17 + a4[v24];
      }
      while ( v23 != v21 );
      ++result;
    }
    while ( v15 != result );
  }
  return result;
}

