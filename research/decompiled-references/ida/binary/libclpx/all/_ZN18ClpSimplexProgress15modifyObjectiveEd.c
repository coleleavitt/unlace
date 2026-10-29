void __fastcall ClpSimplexProgress::modifyObjective(ClpSimplexProgress *this, double a2)
{
  *((double *)this + 4) = a2;
}

