__int64 __fastcall sub_36B7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 func; // rax

  v2 = *(_QWORD *)(a1 + 40);
  func = get_func(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a2 + 8) = (unsigned __int8)remove_func_tail(func, v2);
  return 0;
}
