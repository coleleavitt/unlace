ClpPlusMinusOneMatrix *__fastcall ClpPlusMinusOneMatrix::clone(ClpPlusMinusOneMatrix *this)
{
  ClpPlusMinusOneMatrix *v1; // rbx

  v1 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
  ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v1, this);
  return v1;
}

