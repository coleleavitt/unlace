bool __fastcall sub_E88850(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // r11
  _DWORD *v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r11
  char v8; // bl

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(_DWORD **)(v3 + 24);
    if ( !v4 || *v4 == -1 )
    {
      v5 = sub_E883A0(*(_QWORD **)(a1 + 40), *(_DWORD *)(a1 + 48), v3);
      result = 0;
      if ( !v5 )
      {
        v8 = *(_BYTE *)(v6 + 8);
        return (sub_E883A0(*(_QWORD **)(v6 + 16), *(_DWORD *)(v6 + 24), v7) != nullptr) == v8;
      }
    }
  }
  return result;
}

