bool __fastcall sub_B98F60(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 520);
  if ( !v1 || (result = 1, !*(_DWORD *)(v1 - 4)) )
  {
    v3 = *(_QWORD *)(a1 + 528);
    result = 0;
    if ( v3 )
      return *(_DWORD *)(v3 - 4) != 0;
  }
  return result;
}

