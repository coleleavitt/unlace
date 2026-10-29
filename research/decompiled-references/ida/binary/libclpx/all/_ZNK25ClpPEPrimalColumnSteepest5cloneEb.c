ClpPEPrimalColumnSteepest *__fastcall ClpPEPrimalColumnSteepest::clone(ClpPEPrimalColumnSteepest *this, char a2)
{
  ClpPEPrimalColumnSteepest *v2; // rbx

  v2 = (ClpPEPrimalColumnSteepest *)operator new(0x98u);
  if ( a2 )
    ClpPEPrimalColumnSteepest::ClpPEPrimalColumnSteepest(v2, this);
  else
    ClpPEPrimalColumnSteepest::ClpPEPrimalColumnSteepest(v2, *((double *)this + 15), 3);
  return v2;
}

