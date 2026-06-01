__int64 __fastcall ClpPlusMinusOneMatrix::countBasis(ClpPlusMinusOneMatrix *this, const int *a2, int *a3)
{
  __int64 v3; // rcx
  const int *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx

  if ( *a3 <= 0 )
    return 0;
  v3 = *((_QWORD *)this + 13);
  v4 = &a2[*a3 - 1 + 1];
  LODWORD(result) = 0;
  do
  {
    v6 = *a2++;
    result = (unsigned int)(*(_DWORD *)(v3 + 4 * v6 + 4) + result - *(_DWORD *)(v3 + 4 * v6));
  }
  while ( v4 != a2 );
  return result;
}

