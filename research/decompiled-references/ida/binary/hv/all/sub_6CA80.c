unsigned __int64 __fastcall sub_6CA80(unsigned __int64 a1, unsigned int a2)
{
  return ((HIDWORD(a1) + ((unsigned int)a1 + 1000 * (unsigned __int64)a2) / 0xF4240) << 32)
       | ((unsigned __int64)((unsigned int)a1 + 1000LL * a2 + 1000000 * HIDWORD(a1)) % 0xF4240);
}

