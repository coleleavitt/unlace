__int64 __fastcall ClpCholeskyDense::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    ClpCholeskyBase::operator=();
    *(_BYTE *)(a1 + 980) = *(_BYTE *)(a2 + 980);
  }
  return a1;
}

