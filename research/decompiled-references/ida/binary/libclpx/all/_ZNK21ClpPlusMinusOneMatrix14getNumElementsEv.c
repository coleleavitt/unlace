__int64 __fastcall ClpPlusMinusOneMatrix::getNumElements(ClpPlusMinusOneMatrix *this)
{
  __int64 v1; // rcx
  int v2; // edx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 13);
  v2 = *((_DWORD *)this + 33);
  if ( !*((_BYTE *)this + 136) )
    v2 = *((_DWORD *)this + 32);
  result = 0;
  if ( v1 )
    return *(unsigned int *)(v1 + 4LL * v2);
  return result;
}

