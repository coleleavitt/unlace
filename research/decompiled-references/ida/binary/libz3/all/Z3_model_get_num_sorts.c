__int64 __fastcall Z3_model_get_num_sorts(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29B680();
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 24LL))(*(_QWORD *)(a2 + 24));
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

