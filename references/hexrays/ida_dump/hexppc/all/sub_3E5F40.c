bool __fastcall sub_3E5F40(_DWORD *a1, int a2)
{
  bool result; // al
  int v3; // edx

  if ( a1[16] > a2 || (result = 1, a1[128] <= a2) )
  {
    v3 = a1[117];
    result = 0;
    if ( v3 <= a2 )
      return v3 + 4 > a2;
  }
  return result;
}
