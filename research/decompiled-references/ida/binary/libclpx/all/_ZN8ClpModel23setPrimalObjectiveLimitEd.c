void __fastcall ClpModel::setPrimalObjectiveLimit(ClpModel *this, double a2)
{
  *((double *)this + 2) = a2;
}

