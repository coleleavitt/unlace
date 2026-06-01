bool __fastcall Z3_is_as_array(__int64 a1, __int64 a2)
{
  char v2; // al
  _DWORD *v3; // rax
  bool result; // al
  int v5; // ecx
  _DWORD *v6; // rdx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29B780();
    *(_DWORD *)(a1 + 1520) = 0;
    result = 0;
    if ( a2 )
    {
      v5 = *(unsigned __int16 *)(a2 + 4);
      if ( (unsigned int)(v5 - 3) > 1 && !(_WORD)v5 )
      {
        v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
        if ( v6 )
        {
          if ( *v6 == *(_DWORD *)(a1 + 1440) )
            result = v6[1] == 13;
        }
      }
    }
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return a2
        && !*(_WORD *)(a2 + 4)
        && (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
        && *(_DWORD *)(a1 + 1440) == *v3
        && v3[1] == 13;
  }
  return result;
}

