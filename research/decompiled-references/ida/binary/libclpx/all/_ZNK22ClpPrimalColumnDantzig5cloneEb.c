ClpPrimalColumnDantzig *__fastcall ClpPrimalColumnDantzig::clone(ClpPrimalColumnDantzig *this, char a2)
{
  ClpPrimalColumnDantzig *v2; // rbx

  v2 = (ClpPrimalColumnDantzig *)operator new(0x18u);
  if ( a2 )
    ClpPrimalColumnDantzig::ClpPrimalColumnDantzig(v2, this);
  else
    ClpPrimalColumnDantzig::ClpPrimalColumnDantzig(v2);
  return v2;
}

