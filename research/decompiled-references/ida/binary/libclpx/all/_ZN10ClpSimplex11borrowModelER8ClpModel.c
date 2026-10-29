__int64 __fastcall ClpSimplex::borrowModel(ClpSimplex *this, ClpModel *a2)
{
  ClpModel::borrowModel(this, a2);
  return ClpSimplex::createStatus(this);
}

