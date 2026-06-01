char __fastcall Z3_optimize_pop(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rdi
  char result; // al

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A0610(a1, a2);
  v4 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 96LL))(v4, 1);
  if ( v3 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

