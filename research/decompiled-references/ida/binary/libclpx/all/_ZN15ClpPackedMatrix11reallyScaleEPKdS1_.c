__int64 __fastcall ClpPackedMatrix::reallyScale(ClpPackedMatrix *this, const double *a2, const double *a3)
{
  __int64 result; // rax
  int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r11
  __int64 v10; // r13
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // ecx
  double v14; // xmm1_8
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8

  ClpPackedMatrix::clearCopies(this);
  result = *((_QWORD *)this + 11);
  v6 = *(_DWORD *)(result + 64);
  if ( !*(_BYTE *)(result + 8) )
    v6 = *(_DWORD *)(result + 68);
  v7 = *(_QWORD *)(result + 40);
  v8 = *(_QWORD *)(result + 48);
  v9 = *(_QWORD *)(result + 56);
  v10 = *(_QWORD *)(result + 32);
  if ( v6 > 0 )
  {
    v11 = 0;
    v12 = 4LL * (unsigned int)(v6 - 1) + 4;
    do
    {
      result = *(int *)(v8 + v11);
      v13 = *(_DWORD *)(v9 + v11);
      v14 = a3[v11 / 4];
      if ( (int)result < (int)result + v13 )
      {
        v15 = (unsigned int)(v13 - 1);
        v16 = v7 + 4 * result;
        v17 = v10 + 8 * result;
        result = 0;
        v18 = v15 + 1;
        do
        {
          *(double *)(v17 + 8 * result) = a2[*(int *)(v16 + 4 * result)] * v14 * *(double *)(v17 + 8 * result);
          ++result;
        }
        while ( result != v18 );
      }
      v11 += 4LL;
    }
    while ( v12 != v11 );
  }
  return result;
}

