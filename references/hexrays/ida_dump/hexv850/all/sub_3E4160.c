__int64 __fastcall sub_3E4160(_DWORD *a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edx

  result = (unsigned int)a2;
  if ( a2 >= a1[88] )
  {
    v3 = a1[20];
    v4 = v3 + a1[119] - 1;
    v5 = a2 & -v3;
    if ( a2 <= v4 )
      return v5;
  }
  return result;
}
