char __fastcall sub_14D630(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v5; // r12

  result = sub_1587B0();
  if ( !result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a2);
    return v5 != (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a3);
  }
  return result;
}

