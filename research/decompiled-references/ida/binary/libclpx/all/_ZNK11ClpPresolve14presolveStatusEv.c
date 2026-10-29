__int64 __fastcall ClpPresolve::presolveStatus(ClpPresolve *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 18);
  result = 0;
  if ( v1 < 0 )
  {
    result = (unsigned int)-v1;
    if ( v1 <= -3 )
      return 1;
  }
  return result;
}

