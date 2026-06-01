unsigned __int8 __fastcall Z3_solver_push(__int64 a1, __int64 a2)
{
  char v3; // bp
  __int64 v4; // rdi
  unsigned __int8 result; // al
  __int64 v6; // rdi

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D820(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( !v4 )
  {
    sub_2A74C0(a1, a2);
    v4 = *(_QWORD *)(a2 + 32);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4);
  v6 = *(_QWORD *)(a2 + 64);
  if ( v6 )
    result = (unsigned __int8)sub_2AA430(v6);
  if ( v3 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

