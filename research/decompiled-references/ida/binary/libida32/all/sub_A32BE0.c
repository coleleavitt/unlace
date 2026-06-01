bool __fastcall sub_A32BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  return v2 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
}

