__int64 __fastcall sub_A3B0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 8);
  result = 2;
  if ( v2 != 27 )
    return 4 * (unsigned int)(v2 != 46) + 2;
  return result;
}
