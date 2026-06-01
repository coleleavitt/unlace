bool __fastcall sub_F725B0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // rdx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 16);
    if ( (unsigned int)*(_QWORD *)v3 == 3 )
    {
      if ( *(_WORD *)(v3 + 16) == 28263 && *(_BYTE *)(v3 + 18) == 117 )
      {
        v4 = 0;
        return v4 == 0;
      }
    }
    else
    {
      if ( (unsigned int)*(_QWORD *)v3 != 7 )
        return result;
      if ( *(_DWORD *)(v3 + 16) == 1852268383 && *(_WORD *)(v3 + 20) == 24437 && *(_BYTE *)(v3 + 22) == 95 )
      {
        v4 = 0;
        return v4 == 0;
      }
    }
    v4 = 1;
    return v4 == 0;
  }
  return result;
}

