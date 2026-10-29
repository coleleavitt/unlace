char __fastcall Z3_fixedpoint_add_invariant(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // al
  char result; // al
  __int64 v9; // rdi

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
  {
    sub_2A1F10();
    v9 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1520) = 0;
    sub_654430(v9 + 48, a3, a4);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_654430(*(_QWORD *)(a2 + 24) + 48LL, a3, a4);
  }
  return result;
}

