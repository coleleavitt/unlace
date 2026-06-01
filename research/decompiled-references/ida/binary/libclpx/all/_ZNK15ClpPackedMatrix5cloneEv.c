ClpPackedMatrix *__fastcall ClpPackedMatrix::clone(ClpPackedMatrix *this)
{
  ClpPackedMatrix *v1; // rbx

  v1 = (ClpPackedMatrix *)operator new(0x78u);
  ClpPackedMatrix::ClpPackedMatrix(v1, this);
  return v1;
}

