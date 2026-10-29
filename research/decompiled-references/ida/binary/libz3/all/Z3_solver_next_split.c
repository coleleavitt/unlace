__int64 __fastcall Z3_solver_next_split(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v8; // bp
  __int64 v9; // rax
  __int64 result; // rax

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
    sub_29DF20(a1, (__int64)a2, a3, a4, a5);
  v9 = *a2;
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v9 + 32))(a2, a3, a4, a5);
  if ( v8 )
    byte_1C7EBA0 = 1;
  return result;
}

