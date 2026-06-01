__int64 __fastcall Z3_solver_get_num_scopes(__int64 a1, __int64 a2)
{
  char v3; // bl
  __int64 v4; // rdi
  __int64 result; // rax

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D8E0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( !v4 )
  {
    sub_2A74C0(a1, a2);
    v4 = *(_QWORD *)(a2 + 32);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
  if ( v3 )
    byte_1C7EBA0 = 1;
  return result;
}

