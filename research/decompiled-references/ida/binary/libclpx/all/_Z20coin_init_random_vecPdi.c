__int64 __fastcall coin_init_random_vec(double *a1, int a2)
{
  __int128 v2; // xmm0
  double *v3; // rdx
  __int128 v4; // xmm1
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v2 = 0x41678C29C0000000uLL;
    v3 = &a1[(unsigned int)(a2 - 1) + 1];
    do
    {
      *((_QWORD *)&v4 + 1) = *((_QWORD *)&v2 + 1);
      ++a1;
      result = (unsigned int)(int)(*(double *)&v2 * 16807.0 / 2147483647.0);
      *(double *)&v4 = *(double *)&v2 * 16807.0 - (double)(int)result * 2147483647.0;
      v2 = v4;
      *(a1 - 1) = *(double *)&v4 / 2147483647.0;
    }
    while ( v3 != a1 );
  }
  return result;
}

