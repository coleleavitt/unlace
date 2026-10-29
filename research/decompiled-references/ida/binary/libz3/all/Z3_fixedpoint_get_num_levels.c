__int64 __fastcall Z3_fixedpoint_get_num_levels(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rdi

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_29FFA0();
    v7 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1520) = 0;
    result = sub_654330(v7 + 48, a3);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_654330(*(_QWORD *)(a2 + 24) + 48LL, a3);
  }
  return result;
}

