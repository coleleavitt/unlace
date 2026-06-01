__int64 __fastcall ClpSimplex::readGMPL(ClpSimplex *this, const char *a2, const char *a3, bool a4)
{
  unsigned int GMPL; // ebp

  GMPL = ClpModel::readGMPL(this, a2, a3, a4);
  ClpSimplex::createStatus(this);
  return GMPL;
}

