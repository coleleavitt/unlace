void __fastcall ClpModel::setDualTolerance(ClpModel *this, double a2)
{
  if ( a2 > 0.0 && a2 < 1.0e10 )
    *((double *)this + 3) = a2;
}

