__int64 __fastcall ClpSolve::setSpecialOption(ClpSolve *this, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = (__int64)this + 4 * a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 40) = a4;
  return result;
}

