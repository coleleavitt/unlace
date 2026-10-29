__int64 __fastcall sub_757CA0(__int64 a1, __int64 a2, int *a3)
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
    if ( *(_QWORD *)a1 == 0x5F6C6C756E6E6F6ELL && *(_QWORD *)(a1 + 5) == 0x726F7272655F6C6CLL )
    {
      v3 = 1;
    }
    else
    {
      if ( *(_QWORD *)a1 != 0x6772615F6F72657ALL || *(_QWORD *)(a1 + 5) != 0x746E656D75677261LL )
        return 0;
      v3 = 2;
    }
  }
  else
  {
    if ( a2 != 16 || *(_QWORD *)(a1 + 8) ^ 0x746E656D75677261LL | *(_QWORD *)a1 ^ 0x5F6F72657A6E6F6ELL )
      return 0;
    v3 = 3;
  }
  *a3 = v3;
  return 1;
}

