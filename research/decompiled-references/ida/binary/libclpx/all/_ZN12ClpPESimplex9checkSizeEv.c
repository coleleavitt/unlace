bool __fastcall ClpPESimplex::checkSize(ClpPESimplex *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 12);
  result = 0;
  if ( *((_DWORD *)this + 30) == *(_DWORD *)(v1 + 104) )
    return *((_DWORD *)this + 31) == *(_DWORD *)(v1 + 108);
  return result;
}

