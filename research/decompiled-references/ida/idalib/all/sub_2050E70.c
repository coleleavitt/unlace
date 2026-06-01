char __fastcall sub_2050E70(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  char result; // al

  v2 = *(_DWORD *)(a1 + 8);
  result = 0;
  if ( v2 == *(_DWORD *)(a2 + 8) )
  {
    if ( v2 <= 0x40 )
      return *(_QWORD *)a1 == *(_QWORD *)a2;
    else
      return sub_2205D70(a1, a2);
  }
  return result;
}
