bool __fastcall sub_6762C0(__int64 a1, __int64 a2)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
      return *v3 == 0;
  }
  return result;
}

