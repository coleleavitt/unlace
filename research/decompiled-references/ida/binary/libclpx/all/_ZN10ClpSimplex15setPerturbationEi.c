__int64 __fastcall ClpSimplex::setPerturbation(ClpSimplex *this, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + 1000);
  if ( (unsigned int)result <= 0x44E )
    *((_DWORD *)this + 327) = a2;
  return result;
}

