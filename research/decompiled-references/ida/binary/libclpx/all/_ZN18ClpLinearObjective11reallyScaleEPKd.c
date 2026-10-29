void __fastcall ClpLinearObjective::reallyScale(ClpLinearObjective *this, double *a2)
{
  int v2; // r11d
  double *v3; // r8
  int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  double *v9; // rdi
  const double *v10; // rcx
  signed int v11; // r9d
  __int64 v12; // rdx
  int v13; // r9d
  unsigned __int64 v14; // rax

  v2 = *((_DWORD *)this + 8);
  if ( v2 > 0 )
  {
    v3 = *((double **)this + 3);
    if ( (a2 >= v3 + 2 || v3 >= a2 + 2) && (unsigned int)v2 > 9 )
    {
      v4 = 0;
      if ( (((unsigned __int64)v3 >> 3) & 1) != 0 )
      {
        v4 = 1;
        *v3 = *v3 * *a2;
      }
      v5 = 0;
      v6 = 0;
      v7 = v2 - (((unsigned __int64)v3 >> 3) & 1);
      v8 = ((unsigned __int64)v3 >> 3) & 1;
      v9 = &v3[v8];
      v10 = &a2[v8];
      do
      {
        ++v6;
        *(__m128d *)&v9[v5] = _mm_mul_pd(*(__m128d *)&v10[v5], *(__m128d *)&v9[v5]);
        v5 += 2;
      }
      while ( v7 >> 1 > v6 );
      v11 = (v7 & 0xFFFFFFFE) + v4;
      if ( v7 != (v7 & 0xFFFFFFFE) )
      {
        v12 = v11;
        v13 = v11 + 1;
        v3[v12] = v3[v12] * a2[v12];
        if ( v13 < v2 )
          v3[v13] = v3[v13] * a2[v13];
      }
    }
    else
    {
      v14 = 0;
      do
      {
        v3[v14 / 8] = v3[v14 / 8] * a2[v14 / 8];
        v14 += 8LL;
      }
      while ( v14 != 8LL * (unsigned int)(v2 - 1) + 8 );
    }
  }
}

