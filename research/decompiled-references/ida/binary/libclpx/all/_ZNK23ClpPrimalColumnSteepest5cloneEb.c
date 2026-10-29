ClpPrimalColumnSteepest *__fastcall ClpPrimalColumnSteepest::clone(ClpPrimalColumnSteepest *this, char a2)
{
  ClpPrimalColumnSteepest *v2; // rbx

  v2 = (ClpPrimalColumnSteepest *)operator new(0x70u);
  if ( a2 )
    ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v2, this);
  else
    ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v2, 3);
  return v2;
}

