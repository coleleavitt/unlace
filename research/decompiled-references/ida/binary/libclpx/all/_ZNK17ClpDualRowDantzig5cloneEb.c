ClpDualRowDantzig *__fastcall ClpDualRowDantzig::clone(ClpDualRowDantzig *this, char a2)
{
  ClpDualRowDantzig *v2; // rbx

  v2 = (ClpDualRowDantzig *)operator new(0x18u);
  if ( a2 )
    ClpDualRowDantzig::ClpDualRowDantzig(v2, this);
  else
    ClpDualRowDantzig::ClpDualRowDantzig(v2);
  return v2;
}

