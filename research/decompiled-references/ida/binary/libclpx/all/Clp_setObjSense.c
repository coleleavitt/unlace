__int64 __fastcall Clp_setObjSense(ClpModel **a1, double a2)
{
  return ClpModel::setOptimizationDirection(*a1, a2);
}

