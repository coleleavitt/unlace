__int64 __fastcall ClpMatrixBase::getVectorLength(ClpMatrixBase *this, int a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 64LL);
  if ( (char *)v2 == (char *)ClpPackedMatrix::getVectorLengths )
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 56LL) + 4LL * a2);
  else
    return *(unsigned int *)(v2() + 4LL * a2);
}

