__int64 __fastcall ClpPackedMatrix::correctSequence(ClpPackedMatrix *this, const ClpSimplex *a2, int *a3, int *a4)
{
  ClpPackedMatrix3 *v5; // rdi
  __int64 result; // rax

  v5 = *((ClpPackedMatrix3 **)this + 14);
  if ( v5 )
  {
    if ( *a3 == -999 )
    {
      return ClpPackedMatrix3::sortBlocks(v5, a2);
    }
    else
    {
      result = ClpPackedMatrix3::swapOne(v5, a2, this, *a3);
      if ( *a3 != *a4 )
        return ClpPackedMatrix3::swapOne(*((ClpPackedMatrix3 **)this + 14), a2, this, *a4);
    }
  }
  return result;
}

