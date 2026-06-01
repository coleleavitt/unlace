__int64 __fastcall ClpPackedMatrix::times(ClpPackedMatrix *this, double a2, const double *a3, double *a4)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  _DWORD *v9; // r10
  const double *v10; // rbp
  double v11; // xmm2_8
  __int64 v12; // rbx
  __int64 v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  double v17; // xmm1_8
  __int64 v18; // r12
  unsigned __int64 v19; // rdi
  __int64 v20; // rbp
  double v21; // xmm1_8
  double v22; // xmm2_8
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // r11
  __int64 v26; // rcx
  double v27; // xmm1_8

  result = *((_QWORD *)this + 11);
  v5 = *((_DWORD *)this + 24);
  v6 = *(_QWORD *)(result + 40);
  v7 = *(_QWORD *)(result + 48);
  v8 = *(_QWORD *)(result + 32);
  if ( (*((_BYTE *)this + 100) & 2) != 0 )
  {
    v18 = *(_QWORD *)(result + 56);
    if ( v5 > 0 )
    {
      result = (unsigned int)(v5 - 1);
      v19 = 0;
      v20 = 4 * result + 4;
      do
      {
        v21 = a3[v19 / 4];
        if ( v21 != 0.0 )
        {
          result = *(int *)(v7 + v19);
          v22 = v21 * a2;
          if ( (int)result < (int)result + *(_DWORD *)(v18 + v19) )
          {
            v23 = v6 + 4 * result;
            v24 = v8 + 8 * result;
            result = 0;
            v25 = (unsigned int)(*(_DWORD *)(v18 + v19) - 1) + 1LL;
            do
            {
              v26 = *(int *)(v23 + 4 * result);
              v27 = *(double *)(v24 + 8 * result++);
              a4[v26] = v27 * v22 + a4[v26];
            }
            while ( v25 != result );
          }
        }
        v19 += 4LL;
      }
      while ( v20 != v19 );
    }
  }
  else if ( v5 > 0 )
  {
    result = (unsigned int)(v5 - 1);
    v9 = (_DWORD *)(v7 + 4);
    v10 = &a3[result + 1];
    do
    {
      while ( 1 )
      {
        if ( *a3 != 0.0 )
        {
          result = (int)*(v9 - 1);
          v11 = *a3 * a2;
          if ( (int)result < *v9 )
            break;
        }
        ++a3;
        ++v9;
        if ( v10 == a3 )
          return result;
      }
      v12 = v6 + 4 * result;
      v13 = v8 + 8 * result;
      v14 = (unsigned int)(*v9 - 1 - result);
      result = 0;
      v15 = v14 + 1;
      do
      {
        v16 = *(int *)(v12 + 4 * result);
        v17 = *(double *)(v13 + 8 * result++);
        a4[v16] = v17 * v11 + a4[v16];
      }
      while ( result != v15 );
      ++a3;
      ++v9;
    }
    while ( v10 != a3 );
  }
  return result;
}

