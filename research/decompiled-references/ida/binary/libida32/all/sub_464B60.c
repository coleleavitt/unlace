char __fastcall sub_464B60(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = sub_443A40();
  if ( !result )
    return sub_462A00(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), a3, 0);
  return result;
}

