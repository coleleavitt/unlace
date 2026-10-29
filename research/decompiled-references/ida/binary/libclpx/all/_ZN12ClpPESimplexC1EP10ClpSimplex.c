// Alternative name is '_ZN12ClpPESimplexC2EP10ClpSimplex'
void __fastcall ClpPESimplex::ClpPESimplex(ClpPESimplex *this, ClpSimplex *a2)
{
  int v3; // r14d
  size_t v4; // r12
  int v5; // r13d
  char *v6; // rax
  char *v7; // rax
  double *v8; // rax
  int v9; // ecx
  __int64 v10; // rsi
  double v11; // xmm0_8
  int v12; // eax

  *((_QWORD *)this + 12) = a2;
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 13) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 23) = 0x7FEFFFFFFFFFFFFFLL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 14) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 192) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 27) = 0;
  *((_QWORD *)this + 28) = 0;
  v3 = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 31) = v3;
  v4 = *((int *)a2 + 26);
  *((_DWORD *)this + 30) = v4;
  v5 = v4;
  *((_QWORD *)this + 1) = malloc(4 * v4);
  *((_QWORD *)this + 2) = malloc((int)v4 + v3);
  *((_QWORD *)this + 4) = malloc(4LL * v3);
  *((_QWORD *)this + 5) = malloc((int)v4 + v3);
  *((_QWORD *)this + 7) = malloc(8LL * ((int)v4 + v3));
  v6 = (char *)malloc((int)v4 + v3);
  *((_QWORD *)this + 8) = v6;
  if ( v6 != &v6[v4 + v3] )
    memset(v6, 0, v4 + v3);
  *((_QWORD *)this + 10) = malloc(8 * v4);
  v7 = (char *)malloc(v4);
  *((_QWORD *)this + 11) = v7;
  if ( v7 != &v7[v4] )
    memset(v7, 0, v4);
  if ( (int)v4 < v3 )
    v5 = v3;
  v8 = (double *)malloc(8LL * v5);
  *((_QWORD *)this + 16) = v8;
  v9 = *((_DWORD *)a2 + 89);
  if ( v5 > 0 )
  {
    v10 = (__int64)&v8[(unsigned int)(v5 - 1) + 1];
    do
    {
      do
      {
        v9 = 1664525 * v9 + 1013904223;
        v11 = (double)(int)((double)v9 * 2.328306436538696e-10 * 1000000.0) - 500000.0;
      }
      while ( v11 == 0.0 );
      *v8++ = v11;
    }
    while ( v8 != (double *)v10 );
  }
  v12 = *(_DWORD *)(*((_QWORD *)a2 + 43) + 104LL);
  if ( v12 > 2 )
    *((_DWORD *)this + 44) = v12;
}

