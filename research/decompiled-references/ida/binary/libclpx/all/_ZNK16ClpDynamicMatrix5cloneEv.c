ClpDynamicMatrix *__fastcall ClpDynamicMatrix::clone(ClpDynamicMatrix *this)
{
  ClpDynamicMatrix *v1; // rbx

  v1 = (ClpDynamicMatrix *)operator new(0x188u);
  ClpDynamicMatrix::ClpDynamicMatrix(v1, this);
  return v1;
}

