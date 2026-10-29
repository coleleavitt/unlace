__int64 __fastcall ClpPrimalColumnDantzig::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
    ClpPrimalColumnPivot::operator=();
  return a1;
}

