__int64 __fastcall ClpPackedMatrix::getNumCols(ClpPackedMatrix *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 11);
  result = *(unsigned int *)(v1 + 64);
  if ( !*(_BYTE *)(v1 + 8) )
    return *(unsigned int *)(v1 + 68);
  return result;
}

