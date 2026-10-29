// attributes: thunk
__int64 __fastcall ClpInterior::primalDual(ClpInterior *this)
{
  return ClpPredictorCorrector::solve(this);
}

