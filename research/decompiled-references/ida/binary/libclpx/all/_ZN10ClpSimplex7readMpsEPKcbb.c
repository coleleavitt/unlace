__int64 __fastcall ClpSimplex::readMps(ClpSimplex *this, const char *a2, bool a3, bool a4)
{
  unsigned int Mps; // ebp

  Mps = ClpModel::readMps(this, a2, a3, a4);
  ClpSimplex::createStatus(this);
  return Mps;
}

