__int64 __fastcall ClpSimplexProgress::fillFromModel(ClpSimplexProgress *this, ClpSimplex *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 30) = a2;
  result = ClpSimplexProgress::reset(this);
  *((_QWORD *)this + 15) = 0;
  return result;
}

