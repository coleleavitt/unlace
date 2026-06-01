__int64 __fastcall sub_6BA930(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r13
  unsigned int v4; // eax
  unsigned int v5; // r12d

  v2 = a2 + 1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_64E0C0(a1, v3);
  if ( a2 + 1 >= v4 )
    return 0;
  v5 = v4;
  while ( (unsigned int)sub_64DF40(a1, v3, v2) != v2 || !(unsigned __int8)sub_6BA5D0(a1, v2) )
  {
    if ( ++v2 >= v5 )
      return 0;
  }
  return v2;
}
