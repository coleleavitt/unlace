char __fastcall Z3_solver_propagate_register(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  __int64 v5; // rax
  char result; // al

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29E000(a1, a2, a3);
  v5 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 72) + 56LL))(v5 + 72, a3);
  if ( v4 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

