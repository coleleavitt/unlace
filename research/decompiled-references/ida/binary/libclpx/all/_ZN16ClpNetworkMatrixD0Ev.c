void __fastcall ClpNetworkMatrix::~ClpNetworkMatrix(ClpNetworkMatrix *this)
{
  ClpNetworkMatrix::~ClpNetworkMatrix(this);
  operator delete(this);
}

