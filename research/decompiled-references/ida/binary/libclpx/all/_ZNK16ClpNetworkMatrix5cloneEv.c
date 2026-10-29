ClpNetworkMatrix *__fastcall ClpNetworkMatrix::clone(ClpNetworkMatrix *this)
{
  ClpNetworkMatrix *v1; // rbx

  v1 = (ClpNetworkMatrix *)operator new(0x80u);
  ClpNetworkMatrix::ClpNetworkMatrix(v1, this);
  return v1;
}

