__int64 __fastcall Z3_solver_congruence_next(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bl
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29DBF0(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( !v6 )
  {
    sub_2A74C0(a1, a2);
    v6 = *(_QWORD *)(a2 + 32);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 304LL))(v6, a3);
  if ( v5 )
  {
    v8 = result;
    sub_2BB620(result);
    byte_1C7EBA0 = 1;
    return v8;
  }
  return result;
}

