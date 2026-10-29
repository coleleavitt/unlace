void __fastcall ClpDynamicMatrix::~ClpDynamicMatrix(ClpDynamicMatrix *this)
{
  ClpDynamicMatrix::~ClpDynamicMatrix(this);
  operator delete(this);
}

