bool __fastcall Z3_is_char_sort(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  bool result; // al
  __int64 v5; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_297AC0();
    v5 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 1520) = 0;
    result = *(_QWORD *)(v5 + 64) == a2;
    byte_1C7EBA0 = 1;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 1520) = 0;
    return *(_QWORD *)(v3 + 64) == a2;
  }
  return result;
}

