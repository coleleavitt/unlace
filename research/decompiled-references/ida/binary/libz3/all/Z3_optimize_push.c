char __fastcall Z3_optimize_push(__int64 a1, __int64 a2)
{
  char v2; // bl
  char result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2A05D0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 88LL))(*(_QWORD *)(a2 + 24));
  if ( v2 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

