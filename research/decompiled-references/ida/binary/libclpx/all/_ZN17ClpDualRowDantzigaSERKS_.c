__int64 __fastcall ClpDualRowDantzig::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
    ClpDualRowPivot::operator=();
  return a1;
}

