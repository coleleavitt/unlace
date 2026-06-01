bool __fastcall hexplace_t__ending(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  bool result; // al

  v3 = *(_QWORD *)(a1 + 24);
  v4 = v3 + (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, v3) - 1;
  result = 1;
  if ( v4 >= *(_QWORD *)(a1 + 24) )
    return next_addr(v4) == -1;
  return result;
}
