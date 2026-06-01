__int64 __fastcall sub_77D1A0(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 39 <= 1 )
    return *(_BYTE *)(a1 + 140) & 7;
  v2 = (__int64 *)sub_77D020(a1);
  result = 0;
  if ( v2 )
    return ((unsigned int)(*v2 >> 1) & 3) + 1;
  return result;
}

