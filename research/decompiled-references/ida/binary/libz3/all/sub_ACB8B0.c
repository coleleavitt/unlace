bool __fastcall sub_ACB8B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdx
  bool result; // al

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  result = 0;
  if ( v2 == v3 && *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16) )
    return *(_QWORD *)(a1 + 24) == *(_QWORD *)(a2 + 24);
  return result;
}

