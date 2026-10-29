void __fastcall ClpModel::setObjectiveOffset(ClpModel *this, double a2)
{
  *((double *)this + 5) = a2;
}

