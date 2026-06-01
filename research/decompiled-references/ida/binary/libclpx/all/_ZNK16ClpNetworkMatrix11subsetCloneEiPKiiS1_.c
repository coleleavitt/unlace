ClpNetworkMatrix *__fastcall ClpNetworkMatrix::subsetClone(
        ClpNetworkMatrix *this,
        int a2,
        const int *a3,
        int a4,
        const int *a5)
{
  ClpNetworkMatrix *v8; // rbx

  v8 = (ClpNetworkMatrix *)operator new(0x80u);
  ClpNetworkMatrix::ClpNetworkMatrix(v8, this, a2, a3, a4, a5);
  return v8;
}

