__int64 __fastcall sub_16C5740(int a1, int a2, unsigned int a3, char a4, __int64 a5)
{
  int v6; // ecx

  if ( !a2 )
  {
    *(_DWORD *)a5 = a1 - 1;
    *(_QWORD *)(a5 + 4) = 0x200000000LL;
    if ( (_BYTE)a3 )
    {
      if ( a1 != 1 )
      {
        *(_DWORD *)a5 = a1 - 2;
        return a3;
      }
      return 0;
    }
    return 1;
  }
  if ( a4 )
  {
    v6 = a1 - 1;
    *(_DWORD *)(a5 + 8) = 1;
  }
  else
  {
    v6 = a1 - 1;
    *(_DWORD *)(a5 + 8) = 0;
  }
  *(_DWORD *)a5 = v6;
  *(_DWORD *)(a5 + 4) = a2 - 1;
  if ( !(_BYTE)a3 )
    return 1;
  if ( v6 )
  {
    *(_DWORD *)a5 = a1 - 2;
    if ( a2 != 1 )
    {
      *(_DWORD *)(a5 + 4) = a2 - 2;
      return a3;
    }
    return 1;
  }
  return 0;
}
