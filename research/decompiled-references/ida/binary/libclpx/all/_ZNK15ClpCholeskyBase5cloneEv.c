ClpCholeskyBase *__fastcall ClpCholeskyBase::clone(ClpCholeskyBase *this)
{
  ClpCholeskyBase *v1; // rbx

  v1 = (ClpCholeskyBase *)operator new(0x3D8u);
  ClpCholeskyBase::ClpCholeskyBase(v1, this);
  return v1;
}

