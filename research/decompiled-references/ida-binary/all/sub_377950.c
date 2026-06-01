bool __fastcall sub_377950(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *func; // rax
  bool result; // al

  v2 = a2;
  sub_2B70C0(a1);
  func = (__int64 *)get_func(a2);
  if ( func )
    v2 = *func;
  result = 0;
  if ( v2 != -1 )
    return v2 == (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 736LL))(a1, 0);
  return result;
}
