__int64 __fastcall ClpNetworkMatrix::countBasis(ClpNetworkMatrix *this, const int *a2, int *a3)
{
  int v3; // edx
  __int64 result; // rax
  __int64 v5; // rcx
  const int *v6; // rdi

  v3 = *a3;
  result = (unsigned int)(2 * v3);
  if ( !*((_BYTE *)this + 120) )
  {
    if ( v3 <= 0 )
    {
      return 0;
    }
    else
    {
      v5 = *((_QWORD *)this + 13);
      v6 = &a2[v3 - 1 + 1];
      LODWORD(result) = 0;
      do
      {
        result = (*(_DWORD *)(v5 + 8LL * *a2 + 4) < 0x80000000)
               + (*(_DWORD *)(v5 + 8LL * *a2) < 0x80000000)
               + (unsigned int)result;
        ++a2;
      }
      while ( a2 != v6 );
    }
  }
  return result;
}

