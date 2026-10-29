volatile signed __int32 *__fastcall sub_1A5167(volatile signed __int32 *a1, unsigned int a2)
{
  _InterlockedAdd(a1, a2);
  return a1;
}

