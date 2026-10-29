void __fastcall CoinMpsIO::setMpsData(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        double *a7,
        double *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v12; // r8d
  double *v13; // rbp
  double *v14; // rax
  __int64 v15; // rdx
  double v16; // xmm1_8
  double v17; // xmm1_8
  double v18; // xmm2_8
  double *v19; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  int v23; // [rsp+3Ch] [rbp-4Ch]

  v12 = *(_DWORD *)(a2 + 64);
  if ( *(_BYTE *)(a2 + 8) )
    v12 = *(_DWORD *)(a2 + 68);
  if ( v12 )
  {
    v23 = v12;
    if ( (unsigned __int64)v12 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v22 = 8LL * v12;
    v13 = (double *)operator new[](v22);
    v14 = (double *)operator new[](v22);
    if ( v23 > 0 )
    {
      v15 = 0;
      do
      {
        v16 = a8[v15];
        switch ( *((_BYTE *)a7 + v15) )
        {
          case 'E':
            v14[v15] = v16;
            v13[v15] = v16;
            break;
          case 'G':
            v13[v15] = v16;
            v14[v15] = *(double *)(a1 + 208);
            break;
          case 'L':
            v18 = *(double *)(a1 + 208);
            v14[v15] = v16;
            v13[v15] = -v18;
            break;
          case 'N':
            v17 = *(double *)(a1 + 208);
            v14[v15] = v17;
            v13[v15] = -v17;
            break;
          case 'R':
            v14[v15] = v16;
            v13[v15] = v16 - *(double *)(a9 + 8 * v15);
            break;
          default:
            break;
        }
        ++v15;
      }
      while ( (unsigned int)(v23 - 1) + 1LL != v15 );
    }
    v19 = v14;
    CoinMpsIO::setMpsData(a1, a2, a3, a4, a5, a6, v13, v14, a10, a11);
    operator delete[](v13);
    operator delete[](v19);
  }
  else
  {
    CoinMpsIO::setMpsData(a1, a2, a3, a4, a5, a6, nullptr, nullptr, a10, a11);
  }
}

