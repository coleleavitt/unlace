void __fastcall ClpDynamicMatrix::modifyOffset(ClpDynamicMatrix *this, int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  double v12; // xmm1_8

  if ( a3 != 0.0 )
  {
    v3 = *((_QWORD *)this + 41);
    v4 = *(int *)(v3 + 4LL * a2);
    v5 = *(_DWORD *)(v3 + 4LL * a2 + 4);
    if ( (int)v4 < v5 )
    {
      v6 = *((_QWORD *)this + 1);
      v7 = (unsigned int)(v5 - v4 - 1) + 1LL;
      v8 = *((_QWORD *)this + 42) + 4 * v4;
      v9 = *((_QWORD *)this + 43) + 8 * v4;
      v10 = 0;
      do
      {
        v11 = *(int *)(v8 + 4 * v10);
        v12 = *(double *)(v9 + 8 * v10++);
        *(double *)(v6 + 8 * v11) = v12 * a3 + *(double *)(v6 + 8 * v11);
      }
      while ( v7 != v10 );
    }
  }
}

