char __fastcall sub_14CE80(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  int v5; // r12d

  result = sub_157F80();
  if ( !result )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a2);
    return v5 != (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 408LL))(a1, a3);
  }
  return result;
}

