/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42ED20
// Address: 0x0042ED20

//----- (0042ED20) --------------------------------------------------------
unsigned int __thiscall sub_42ED20(int this, unsigned int a2)
{
  unsigned int result; // eax
  __int128 v4; // [esp+8h] [ebp-20h] BYREF
  __int128 v5; // [esp+18h] [ebp-10h] BYREF

  result = *(_DWORD *)(this + 4);
  if ( a2 <= result )
  {
    if ( a2 == result )
      return result;
  }
  else
  {
    if ( a2 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, a2, 0x10u);
    sub_464890((__m128i *)(*(_DWORD *)this + 16 * *(_DWORD *)(this + 4)), 0, 16 * (a2 - *(_DWORD *)(this + 4)));
    *(_DWORD *)(this + 4) = a2;
    result = a2;
  }
  v4 = 0;
  if ( a2 >= result )
  {
    if ( a2 > result )
    {
      if ( (unsigned int)&v4 < *(_DWORD *)this || (unsigned int)&v4 >= *(_DWORD *)this + 16 * *(_DWORD *)(this + 8) )
      {
        return sub_42EEB0(this, a2, &v4);
      }
      else
      {
        v5 = 0;
        return sub_42EEB0(this, a2, &v5);
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 4) = a2;
  }
  return result;
}
