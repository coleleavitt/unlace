__int64 __fastcall sub_7576A0(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 4 )
  {
    v3 = 0;
    if ( *(_DWORD *)a1 != 1701736302 )
      return 0;
  }
  else if ( a2 == 13 )
  {
    if ( *(_QWORD *)a1 != 0x72705F7466697773LL || *(_QWORD *)(a1 + 5) != 0x657461766972705FLL )
      return 0;
    v3 = 1;
  }
  else
  {
    if ( a2 != 17
      || *(_QWORD *)(a1 + 8) ^ 0x7461766972705F74LL | *(_QWORD *)a1 ^ 0x666977735F746F6ELL
      || *(_BYTE *)(a1 + 16) != 101 )
    {
      return 0;
    }
    v3 = 2;
  }
  *a3 = v3;
  return 1;
}

