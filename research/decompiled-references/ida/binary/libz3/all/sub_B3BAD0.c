__int64 *__fastcall sub_B3BAD0(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax
  int v3; // edx
  unsigned int v4; // esi

  result = *(__int64 **)(a1 + 72);
  if ( result )
    v3 = *((_DWORD *)result - 1);
  else
    v3 = 0;
  if ( (int)a2 < v3 )
  {
    v4 = *((_DWORD *)result + a2);
    if ( v4 )
      return sub_B3B670((__int64 **)(a1 + 48), v4);
  }
  return result;
}

