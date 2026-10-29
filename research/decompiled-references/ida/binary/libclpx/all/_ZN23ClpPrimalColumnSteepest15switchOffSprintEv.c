void __fastcall ClpPrimalColumnSteepest::switchOffSprint(ClpPrimalColumnSteepest *this)
{
  *((_DWORD *)this + 22) = 10;
}

