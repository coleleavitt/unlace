ClpPlusMinusOneMatrix *__fastcall ClpPlusMinusOneMatrix::subsetClone(
        ClpPlusMinusOneMatrix *this,
        int a2,
        const int *a3,
        int a4,
        const int *a5)
{
  ClpPlusMinusOneMatrix *v8; // rbx

  v8 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
  ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v8, this, a2, a3, a4, a5);
  return v8;
}

