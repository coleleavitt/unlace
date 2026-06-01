void __fastcall ClpModel::setDualObjectiveLimit(ClpModel *this, double a2)
{
  *((double *)this + 1) = a2;
}

