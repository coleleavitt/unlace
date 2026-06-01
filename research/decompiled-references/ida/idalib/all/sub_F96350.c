bool __fastcall sub_F96350(__int64 a1)
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
    if ( (unsigned int)*(_QWORD *)v3 == 5 )
    {
      if ( *(_DWORD *)(v3 + 16) == 1851878499 && *(_BYTE *)(v3 + 20) == 103 )
      {
        v4 = 0;
        return v4 == 0;
      }
    }
    else
    {
      if ( (unsigned int)*(_QWORD *)v3 != 6 )
        return result;
      if ( *(_DWORD *)(v3 + 16) == 1634485087 && *(_WORD *)(v3 + 20) == 26478 )
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
