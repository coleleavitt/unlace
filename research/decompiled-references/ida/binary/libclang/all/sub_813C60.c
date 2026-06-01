__int64 __fastcall sub_813C60(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rax

  if ( !a2 )
    return 0;
  v2 = 0;
  v3 = 0;
  while ( (**(_DWORD **)(a1 + 8 * v3) & 0x10000) == 0 )
  {
    v3 = ++v2;
    if ( v2 >= a2 )
      return 0;
  }
  return 1;
}

