__int64 __fastcall BitVector128::set(BitVector128 *this, unsigned int *a2)
{
  __int64 result; // rax

  *(_DWORD *)this = *a2;
  *((_DWORD *)this + 1) = a2[1];
  *((_DWORD *)this + 2) = a2[2];
  result = a2[3];
  *((_DWORD *)this + 3) = result;
  return result;
}

