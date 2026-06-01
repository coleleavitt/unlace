ClpCholeskyDense *__fastcall ClpCholeskyDense::clone(ClpCholeskyDense *this)
{
  ClpCholeskyDense *v1; // rbx

  v1 = (ClpCholeskyDense *)operator new(0x3D8u);
  ClpCholeskyDense::ClpCholeskyDense(v1, this);
  return v1;
}

