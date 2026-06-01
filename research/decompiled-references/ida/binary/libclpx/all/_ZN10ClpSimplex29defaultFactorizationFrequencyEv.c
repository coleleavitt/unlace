__int64 __fastcall ClpSimplex::defaultFactorizationFrequency(ClpSimplex *this)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // esi

  result = ClpSimplex::factorizationFrequency(this);
  if ( (_DWORD)result == 200 )
  {
    v2 = *((_DWORD *)this + 26);
    if ( v2 <= 9999 )
    {
      return ClpSimplex::setFactorizationFrequency(this, v2 / 50 + 75);
    }
    else
    {
      if ( v2 > 99999 )
      {
        v3 = (v2 - (int)&stru_186A0) / 0x190u + 725;
        if ( v3 > 1000 )
          v3 = 1000;
      }
      else
      {
        v3 = (v2 - 10000) / 0xC8u + 275;
      }
      return ClpSimplex::setFactorizationFrequency(this, v3);
    }
  }
  return result;
}

