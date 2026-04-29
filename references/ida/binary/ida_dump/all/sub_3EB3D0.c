bool __fastcall sub_3EB3D0(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool result; // al
  int v4; // ecx

  result = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) )
  {
    v4 = a3[2];
    if ( *a3 == 4 )
    {
      result = 1;
      if ( (unsigned __int16)v4 != *(_DWORD *)(a1 + 388) )
        return result;
    }
    else
    {
      result = 1;
      if ( v4 != *(_DWORD *)(a1 + 388) )
        return result;
    }
    result = 0;
    if ( *(_DWORD *)(a1 + 84) == 8 )
      return *(_QWORD *)(a2 + 928) != 0;
  }
  return result;
}
