__int64 __fastcall sub_B19800(__int64 a1, __int64 a2, int *a3)
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
    if ( *(_QWORD *)a1 != 0x5F6C6C756E6E6F6ELL
      || *(_DWORD *)(a1 + 8) != 1869771365
      || (v3 = 1, *(_BYTE *)(a1 + 12) != 114) )
    {
      if ( *(_QWORD *)a1 != 0x6772615F6F72657ALL )
        return 0;
      if ( *(_DWORD *)(a1 + 8) != 1852140917 )
        return 0;
      v3 = 2;
      if ( *(_BYTE *)(a1 + 12) != 116 )
        return 0;
    }
  }
  else
  {
    if ( a2 != 16 || *(_QWORD *)a1 ^ 0x5F6F72657A6E6F6ELL | *(_QWORD *)(a1 + 8) ^ 0x746E656D75677261LL )
      return 0;
    v3 = 3;
  }
  *a3 = v3;
  return 1;
}
