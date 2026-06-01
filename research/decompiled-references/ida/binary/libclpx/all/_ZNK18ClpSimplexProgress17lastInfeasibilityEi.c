double __fastcall ClpSimplexProgress::lastInfeasibility(ClpSimplexProgress *this, int a2)
{
  return *((double *)this + 4 - a2 + 10);
}

