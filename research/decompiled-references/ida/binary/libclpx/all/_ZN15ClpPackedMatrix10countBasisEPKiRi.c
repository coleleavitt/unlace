__int64 __fastcall ClpPackedMatrix::countBasis(ClpPackedMatrix *this, const int *a2, int *a3)
{
  __int64 v3; // rcx
  const int *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 56LL);
  if ( *a3 <= 0 )
    return 0;
  v4 = &a2[*a3 - 1 + 1];
  LODWORD(result) = 0;
  do
  {
    v6 = *a2++;
    result = (unsigned int)(*(_DWORD *)(v3 + 4 * v6) + result);
  }
  while ( v4 != a2 );
  return result;
}

