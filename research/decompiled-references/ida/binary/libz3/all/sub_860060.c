bool __fastcall sub_860060(__int64 a1, __int64 a2)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == *(_DWORD *)(a1 + 112) )
      {
        result = 1;
        if ( v3[1] != 5 && v3[1] != 6 && v3[1] != 7 && v3[1] != 8 )
          return v3[1] == 9;
      }
    }
  }
  return result;
}

