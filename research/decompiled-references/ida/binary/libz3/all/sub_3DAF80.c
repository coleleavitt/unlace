bool __fastcall sub_3DAF80(__int64 a1, __int64 a2)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *(_DWORD *)(a1 + 8) == *v3 )
        return v3[1] == 4;
    }
  }
  return result;
}

