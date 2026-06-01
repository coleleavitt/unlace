// Alternative name is '_ZN18ClpSimplexProgressC2EP10ClpSimplex'
void __fastcall ClpSimplexProgress::ClpSimplexProgress(ClpSimplexProgress *this, ClpSimplex *a2)
{
  *((_QWORD *)this + 30) = a2;
  ClpSimplexProgress::reset(this);
  *((_QWORD *)this + 15) = 0;
}

