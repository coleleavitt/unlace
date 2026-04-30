char __fastcall sub_3A3BA0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v5; // r12

  result = sub_1E6930(a1, a2, a3);
  if ( !result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 712LL))(a1, a2);
    return v5 != (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 712LL))(a1, a3);
  }
  return result;
}
