__int64 __fastcall CoinPackedMatrix::orderMatrix(CoinPackedMatrix *this)
{
  __int64 result; // rax
  int v2; // r12d
  __int64 v3; // rbp
  __int64 v5; // rdi
  int v6; // eax

  result = *((unsigned int *)this + 16);
  if ( (int)result > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v2;
      v5 = *(int *)(*((_QWORD *)this + 6) + v3);
      v6 = *(_DWORD *)(*((_QWORD *)this + 7) + v3) + *(_DWORD *)(*((_QWORD *)this + 6) + v3);
      v3 += 4;
      result = CoinSort_2<int,double>(
                 *((_QWORD *)this + 5) + 4 * v5,
                 *((_QWORD *)this + 5) + 4LL * v6,
                 *((_QWORD *)this + 4) + 8 * v5);
    }
    while ( *((_DWORD *)this + 16) > v2 );
  }
  return result;
}

