__int64 __fastcall BitVector128::setBit(BitVector128 *this, int a2)
{
  __int64 result; // rax

  result = a2 >> 5;
  *((_DWORD *)this + result) |= 1 << a2;
  return result;
}

