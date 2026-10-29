__int64 __fastcall ClpSimplexPrimal::unflag(ClpSimplexPrimal *this)
{
  int v2; // ebp
  int v3; // edi
  double v4; // xmm0_8
  double v5; // xmm1_8
  int i; // edx
  _BYTE *v7; // rcx
  unsigned int v8; // ebp
  int v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v10[0] = 0;
  v4 = 10.0 * *((double *)this + 96);
  v5 = fmin(0.01, v4) + *((double *)this + 109);
  if ( v3 > 0 )
  {
    for ( i = 0; i < v3; v10[0] = i )
    {
      v7 = (_BYTE *)(*((_QWORD *)this + 33) + i);
      if ( (*v7 & 0x40) != 0 )
      {
        *v7 &= ~0x40u;
        i = v10[0];
        v4 = fabs(*(double *)(*((_QWORD *)this + 147) + 8LL * v10[0]));
        v2 += v4 > v5;
      }
      ++i;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, int *, double, double))(**((_QWORD **)this + 24)
                                                                                             + 320LL))(
         *((_QWORD *)this + 24),
         this,
         8,
         v10,
         v4,
         v5)
     + v2;
  if ( *(int *)(*((_QWORD *)this + 43) + 104LL) <= 2 || !v8 || *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 )
    return v8;
  printf("%d unflagged\n", v8);
  return v8;
}

