ClpPackedMatrix *__fastcall ClpPackedMatrix::subsetClone(
        ClpPackedMatrix *this,
        int a2,
        const int *a3,
        int a4,
        const int *a5)
{
  ClpPackedMatrix *v8; // rbx

  v8 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v8, this, a2, a3, a4, a5);
  return v8;
}

