__int64 __fastcall BitVector128::clearBit(BitVector128 *this, int a2)
{
  __int64 result; // rax

  result = (unsigned int)~(1 << a2);
  *((_DWORD *)this + (a2 >> 5)) &= result;
  return result;
}

