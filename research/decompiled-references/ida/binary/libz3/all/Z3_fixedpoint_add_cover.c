char __fastcall Z3_fixedpoint_add_cover(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  char v9; // al
  char result; // al
  __int64 v11; // rdi

  v9 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v9 )
  {
    sub_2A0030();
    v11 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1520) = 0;
    sub_6543F0(v11 + 48, a3, a4, a5);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_6543F0(*(_QWORD *)(a2 + 24) + 48LL, a3, a4, a5);
  }
  return result;
}

