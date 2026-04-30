unsigned __int64 __fastcall sub_1F6870(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _QWORD); // rax
  unsigned __int64 result; // rax

  v2 = *(void (__fastcall **)(__int64, _QWORD))(a1 + 312);
  if ( v2 )
    v2(a1, *(_QWORD *)(a1 + 376));
  result = sub_459BE0(a1);
  if ( a2 )
    return sub_1F4990(5u, a1);
  return result;
}
