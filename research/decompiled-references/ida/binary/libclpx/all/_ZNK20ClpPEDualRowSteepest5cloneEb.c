ClpPEDualRowSteepest *__fastcall ClpPEDualRowSteepest::clone(ClpPEDualRowSteepest *this, char a2)
{
  ClpPEDualRowSteepest *v2; // rbx

  v2 = (ClpPEDualRowSteepest *)operator new(0x70u);
  if ( a2 )
    ClpPEDualRowSteepest::ClpPEDualRowSteepest(v2, this);
  else
    ClpPEDualRowSteepest::ClpPEDualRowSteepest(v2, *((double *)this + 10), 3);
  return v2;
}

