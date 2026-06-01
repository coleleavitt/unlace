ClpDualRowSteepest *__fastcall ClpDualRowSteepest::clone(ClpDualRowSteepest *this, char a2)
{
  ClpDualRowSteepest *v2; // rbx

  v2 = (ClpDualRowSteepest *)operator new(0x48u);
  if ( a2 )
    ClpDualRowSteepest::ClpDualRowSteepest(v2, this);
  else
    ClpDualRowSteepest::ClpDualRowSteepest(v2, 3);
  return v2;
}

