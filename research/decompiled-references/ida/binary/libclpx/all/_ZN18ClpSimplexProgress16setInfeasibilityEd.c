void __fastcall ClpSimplexProgress::setInfeasibility(ClpSimplexProgress *this, double a2)
{
  __int128 v2; // xmm1

  v2 = *(_OWORD *)((char *)this + 104);
  *((_OWORD *)this + 5) = *(_OWORD *)((char *)this + 88);
  *((_OWORD *)this + 6) = v2;
  *((double *)this + 14) = a2;
}

